/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/


#include <aws/external/gtest.h>
#include <aws/testing/ProxyConfig.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/platform/Platform.h>
#include <aws/core/utils/Outcome.h>
#include <aws/s3/S3Client.h>
#include <aws/core/utils/ratelimiter/DefaultRateLimiter.h>
#include <aws/s3/model/DeleteBucketRequest.h>
#include <aws/s3/model/CreateBucketRequest.h>
#include <aws/s3/model/HeadBucketRequest.h>
#include <aws/s3/model/PutObjectRequest.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UUID.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <aws/s3/model/DeleteObjectRequest.h>
#include <aws/s3/model/HeadObjectRequest.h>
#include <aws/s3/model/CreateMultipartUploadRequest.h>
#include <aws/s3/model/UploadPartRequest.h>
#include <aws/s3/model/CompleteMultipartUploadRequest.h>
#include <aws/s3/model/ListObjectsRequest.h>
#include <aws/s3/model/GetBucketLocationRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/testing/TestingEnvironment.h>

#include <fstream>

#ifdef _WIN32
#pragma warning(disable: 4127)
#endif //_WIN32

#include <aws/core/http/standard/StandardHttpRequest.h>

using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;
using namespace Aws::S3;
using namespace Aws::S3::Model;
using namespace Aws::Utils;

namespace
{

    static std::string BASE_CREATE_BUCKET_TEST_NAME = "createbuckettest";
    static std::string BASE_DNS_UNFRIENDLY_TEST_NAME = "dns.unfriendly";
    static std::string BASE_LOCATION_BUCKET_TEST_NAME = "locbuckettest";
    static std::string BASE_PUT_OBJECTS_BUCKET_NAME = "putobjecttest";
    static std::string BASE_PUT_WEIRD_CHARSETS_OBJECTS_BUCKET_NAME = "charsetstest";
    static std::string BASE_PUT_OBJECTS_PRESIGNED_URLS_BUCKET_NAME = "presignedtest";
    static std::string BASE_PUT_MULTIPART_BUCKET_NAME = "putobjectmultiparttest";
    static std::string BASE_ERRORS_TESTING_BUCKET = "errorstest";
    static std::string BASE_INTERRUPT_TESTING_BUCKET = "interrupttest";
    static const char* ALLOCATION_TAG = "BucketAndObjectOperationTest";
    static const char* TEST_OBJ_KEY = "TestObjectKey";
    static const char* TEST_NOT_MODIFIED_OBJ_KEY = "TestNotModifiedObjectKey";
    static const char* TEST_DNS_UNFRIENDLY_OBJ_KEY = "WhySoHostile";
    //windows won't let you hard code unicode strings in a source file and assign them to a char*. Every other compiler does and I need to test this.
    //to get around this, this string is url encoded version of "TestUnicode中国Key". At test time, we'll convert it to the unicode string
    static const char* URLENCODED_UNICODE_KEY = "TestUnicode%E4%B8%AD%E5%9B%BDKey";
    static const char* URIESCAPE_KEY = "Esc ape+Me$";

    static const int TIMEOUT_MAX = 10;

    void AppendUUID(std::string& bucketName)
    {
        using Aws::Utils::UUID;
        Aws::StringStream s;
        s << bucketName << "-" << static_cast<Aws::String>(UUID::RandomUUID());
        bucketName = Aws::Utils::StringUtils::ToLower(s.str().c_str()).c_str();
    }

    void EnsureUniqueBucketNames()
    {
        AppendUUID(BASE_CREATE_BUCKET_TEST_NAME);
        AppendUUID(BASE_DNS_UNFRIENDLY_TEST_NAME);
        AppendUUID(BASE_LOCATION_BUCKET_TEST_NAME);
        AppendUUID(BASE_PUT_OBJECTS_BUCKET_NAME);
        AppendUUID(BASE_PUT_WEIRD_CHARSETS_OBJECTS_BUCKET_NAME);
        AppendUUID(BASE_PUT_OBJECTS_PRESIGNED_URLS_BUCKET_NAME);
        AppendUUID(BASE_PUT_MULTIPART_BUCKET_NAME);
        AppendUUID(BASE_ERRORS_TESTING_BUCKET);
        AppendUUID(BASE_INTERRUPT_TESTING_BUCKET);
    }

    class BucketAndObjectOperationTest : public ::testing::Test
    {
    public:
        static std::shared_ptr<S3Client> Client;
        static std::shared_ptr<S3Client> oregonClient;
        static std::shared_ptr<HttpClientFactory> ClientFactory;
        static std::shared_ptr<HttpClient> m_HttpClient;
        static std::shared_ptr<Aws::Utils::RateLimits::RateLimiterInterface> Limiter;

    protected:

        static void SetUpTestCase()
        {
            EnsureUniqueBucketNames();

            Limiter = Aws::MakeShared<Aws::Utils::RateLimits::DefaultRateLimiter<>>(ALLOCATION_TAG, 50000000);

            // Create a client
            ClientConfiguration config;
            config.region = Aws::Region::US_EAST_1;
            config.scheme = Scheme::HTTPS;
            config.connectTimeoutMs = 30000;
            config.requestTimeoutMs = 30000;
            config.readRateLimiter = Limiter;
            config.writeRateLimiter = Limiter;
            config.executor = Aws::MakeShared<Aws::Utils::Threading::PooledThreadExecutor>(ALLOCATION_TAG, 4);

            //to use a proxy, uncomment the next two lines.
            if (USE_PROXY_FOR_TESTS)
            {
                config.proxyHost = PROXY_HOST;
                config.proxyPort = PROXY_PORT;
            }

            Client = Aws::MakeShared<S3Client>(ALLOCATION_TAG, 
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG), config, 
                        AWSAuthV4Signer::PayloadSigningPolicy::Never /*signPayloads*/, true /*useVirtualAddressing*/);
            config.region = Aws::Region::US_WEST_2;
            config.useDualStack = true;
            oregonClient = Aws::MakeShared<S3Client>(ALLOCATION_TAG, 
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG), config, 
                        AWSAuthV4Signer::PayloadSigningPolicy::Never /*signPayloads*/, true /*useVirtualAddressing*/);
            m_HttpClient = Aws::Http::CreateHttpClient(config);
        }

        static void TearDownTestCase()
        {
            DeleteBucket(CalculateBucketName(BASE_CREATE_BUCKET_TEST_NAME.c_str()));
            DeleteBucket(CalculateBucketName(BASE_DNS_UNFRIENDLY_TEST_NAME.c_str()));
            DeleteBucket(CalculateBucketName(BASE_LOCATION_BUCKET_TEST_NAME.c_str()));
            DeleteBucket(CalculateBucketName(BASE_PUT_OBJECTS_BUCKET_NAME.c_str()));
            DeleteBucket(CalculateBucketName(BASE_PUT_OBJECTS_PRESIGNED_URLS_BUCKET_NAME.c_str()));
            DeleteBucket(CalculateBucketName(BASE_PUT_MULTIPART_BUCKET_NAME.c_str()));
            DeleteBucket(CalculateBucketName(BASE_ERRORS_TESTING_BUCKET.c_str()));
            DeleteBucket(CalculateBucketName(BASE_INTERRUPT_TESTING_BUCKET.c_str()));
            DeleteBucket(CalculateBucketName(BASE_PUT_WEIRD_CHARSETS_OBJECTS_BUCKET_NAME.c_str()));
            Limiter = nullptr;
            Client = nullptr;
            oregonClient = nullptr;
            m_HttpClient = nullptr;
        }

        static std::shared_ptr<Aws::StringStream> Create5MbStreamForUploadPart(const char* partTag)
        {
            uint32_t fiveMbSize = 5 * 1024 * 1024;

            Aws::StringStream patternStream;
            patternStream << "Multi-Part upload Test Part " << partTag << ":" << std::endl;
            Aws::String pattern = patternStream.str();

            Aws::String scratchString;
            scratchString.reserve(fiveMbSize);

            // 5MB is a hard minimum for multi part uploads; make sure the final string is at least that long
            uint32_t patternCopyCount = static_cast< uint32_t >( fiveMbSize / pattern.size() + 1 );
            for(uint32_t i = 0; i < patternCopyCount; ++i)
            {
                scratchString.append( pattern );
            }

            std::shared_ptr<Aws::StringStream> streamPtr = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG, scratchString);

            streamPtr->seekg(0);
            streamPtr->seekp(0, std::ios_base::end);

            return streamPtr;
        }

        static UploadPartOutcomeCallable MakeUploadPartOutcomeAndGetCallable(unsigned partNumber, const ByteBuffer& md5OfStream,
                                                                             const std::shared_ptr<Aws::IOStream>& partStream,
                                                                             const Aws::String& bucketName, const char* objectName, const Aws::String& uploadId)
        {
            UploadPartRequest uploadPart1Request;
            uploadPart1Request.SetBucket(bucketName);
            uploadPart1Request.SetKey(objectName);
            uploadPart1Request.SetPartNumber(partNumber);
            uploadPart1Request.SetUploadId(uploadId);
            uploadPart1Request.SetBody(partStream);
            uploadPart1Request.SetContentMD5(HashingUtils::Base64Encode(md5OfStream));

            auto startingPoint = partStream->tellg();
            partStream->seekg(0LL, partStream->end);
            uploadPart1Request.SetContentLength(static_cast<long>(partStream->tellg()));
            partStream->seekg(startingPoint);

            return Client->UploadPartCallable(uploadPart1Request);
        }

        static void VerifyUploadPartOutcome(UploadPartOutcome& outcome, const ByteBuffer& md5OfStream)
        {
            ASSERT_TRUE(outcome.IsSuccess());
            Aws::StringStream ss;
            ss << "\"" << HashingUtils::HexEncode(md5OfStream) << "\"";
            ASSERT_EQ(ss.str(), outcome.GetResult().GetETag());
        }

        static bool WaitForBucketToPropagate(const Aws::String& bucketName, const std::shared_ptr<S3Client>& client = Client)
        {
            unsigned timeoutCount = 0;
            while (timeoutCount++ < TIMEOUT_MAX)
            {
                HeadBucketRequest headBucketRequest;
                headBucketRequest.SetBucket(bucketName);
                HeadBucketOutcome headBucketOutcome = client->HeadBucket(headBucketRequest);
                if (headBucketOutcome.IsSuccess())
                {
                    return true;
                }

                std::this_thread::sleep_for(std::chrono::seconds(10));
            }

            return false;
        }

        static bool WaitForObjectToPropagate(const Aws::String& bucketName, const char* objectKey)
        {
            unsigned timeoutCount = 0;
            while (timeoutCount++ < TIMEOUT_MAX)
            {
                HeadObjectRequest headObjectRequest;
                headObjectRequest.SetBucket(bucketName);
                headObjectRequest.SetKey(objectKey);
                HeadObjectOutcome headObjectOutcome = Client->HeadObject(headObjectRequest);
                if (headObjectOutcome.IsSuccess())
                {
                    return true;
                }

                std::this_thread::sleep_for(std::chrono::seconds(1));
            }

            return false;
        }

        static void EmptyBucket(const Aws::String& bucketName)
        {
            ListObjectsRequest listObjectsRequest;
            listObjectsRequest.SetBucket(bucketName);

            ListObjectsOutcome listObjectsOutcome = Client->ListObjects(listObjectsRequest);

            if (!listObjectsOutcome.IsSuccess())
                return;

            for (const auto& object : listObjectsOutcome.GetResult().GetContents())
            {
                DeleteObjectRequest deleteObjectRequest;
                deleteObjectRequest.SetBucket(bucketName);
                deleteObjectRequest.SetKey(object.GetKey());
                Client->DeleteObject(deleteObjectRequest);
            }
        }

        static void WaitForBucketToEmpty(const Aws::String& bucketName)
        {
            ListObjectsRequest listObjectsRequest;
            listObjectsRequest.SetBucket(bucketName);

            unsigned checkForObjectsCount = 0;
            while (checkForObjectsCount++ < TIMEOUT_MAX)
            {
                ListObjectsOutcome listObjectsOutcome = Client->ListObjects(listObjectsRequest);
                ASSERT_TRUE(listObjectsOutcome.IsSuccess());

                if (listObjectsOutcome.GetResult().GetContents().size() > 0)
                {
                    std::this_thread::sleep_for(std::chrono::seconds(1));
                }
                else
                {
                    break;
                }
            }
        }

        static void DeleteBucket(const Aws::String& bucketName)
        {
            HeadBucketRequest headBucketRequest;
            headBucketRequest.SetBucket(bucketName);
            HeadBucketOutcome bucketOutcome = Client->HeadBucket(headBucketRequest);

            if (bucketOutcome.IsSuccess())
            {
                EmptyBucket(bucketName);
                WaitForBucketToEmpty(bucketName);

                DeleteBucketRequest deleteBucketRequest;
                deleteBucketRequest.SetBucket(bucketName);

                DeleteBucketOutcome deleteBucketOutcome = Client->DeleteBucket(deleteBucketRequest);
                ASSERT_TRUE(deleteBucketOutcome.IsSuccess());
            }
        }

        static Aws::String CalculateBucketName(const Aws::String& bucketPrefix)
        {
            return Aws::Testing::GetAwsResourcePrefix() + bucketPrefix;
        }
    };


    std::shared_ptr<S3Client> BucketAndObjectOperationTest::Client(nullptr);
    std::shared_ptr<S3Client> BucketAndObjectOperationTest::oregonClient(nullptr);
    std::shared_ptr<HttpClientFactory> BucketAndObjectOperationTest::ClientFactory(nullptr);
    std::shared_ptr<HttpClient> BucketAndObjectOperationTest::m_HttpClient(nullptr);
    std::shared_ptr<Aws::Utils::RateLimits::RateLimiterInterface> BucketAndObjectOperationTest::Limiter(nullptr);

    TEST_F(BucketAndObjectOperationTest, TestInterrupt)
    {
        Aws::String fullBucketName = CalculateBucketName(BASE_INTERRUPT_TESTING_BUCKET.c_str());

        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);

        CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
        ASSERT_TRUE(createBucketOutcome.IsSuccess());
        const CreateBucketResult& createBucketResult = createBucketOutcome.GetResult();
        ASSERT_TRUE(!createBucketResult.GetLocation().empty());

        WaitForBucketToPropagate(fullBucketName);

        PutObjectRequest putObjectRequest;
        putObjectRequest.SetBucket(fullBucketName);

        std::shared_ptr<Aws::IOStream> bigStream = Create5MbStreamForUploadPart("La");

        putObjectRequest.SetBody(bigStream);
        putObjectRequest.SetContentLength(static_cast<long>(putObjectRequest.GetBody()->tellp()));
        putObjectRequest.SetContentMD5(HashingUtils::Base64Encode(HashingUtils::CalculateMD5(*putObjectRequest.GetBody())));
        putObjectRequest.SetContentType("text/plain");
        putObjectRequest.SetKey(TEST_OBJ_KEY);

        PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
        ASSERT_TRUE(putObjectOutcome.IsSuccess());

        //verify md5 sums between what was sent and what s3 told us they received.
        putObjectRequest.GetBody()->clear();
        Aws::StringStream ss;
        ss << "\"" << HashingUtils::HexEncode(HashingUtils::CalculateMD5(*putObjectRequest.GetBody())) << "\"";
        ASSERT_EQ(ss.str(), putObjectOutcome.GetResult().GetETag());

        WaitForObjectToPropagate(fullBucketName, TEST_OBJ_KEY);

        ListObjectsRequest listObjectsRequest;
        listObjectsRequest.SetBucket(fullBucketName);

        ListObjectsOutcome listObjectsOutcome = Client->ListObjects(listObjectsRequest);
        ASSERT_TRUE(listObjectsOutcome.IsSuccess());
        ASSERT_TRUE(WaitForObjectToPropagate(fullBucketName, TEST_OBJ_KEY));

        GetObjectRequest getObjectRequest;
        getObjectRequest.SetBucket(fullBucketName);
        getObjectRequest.SetKey(TEST_OBJ_KEY);

        // because we use std::launch::async we know this will go to another thread
        auto&& getCallable = Client->GetObjectCallable(getObjectRequest);

        Client->DisableRequestProcessing();

        auto taskStatus = getCallable.wait_for(std::chrono::seconds(10));
        ASSERT_EQ(taskStatus, std::future_status::ready);
        auto&& getOutcome = getCallable.get();
        Client->EnableRequestProcessing();

        ASSERT_FALSE(getOutcome.IsSuccess());        
    }

    TEST_F(BucketAndObjectOperationTest, TestBucketCreationAndListing)
    {
        Aws::String fullBucketName = CalculateBucketName(BASE_CREATE_BUCKET_TEST_NAME.c_str());
        HeadBucketRequest headBucketRequest;
        headBucketRequest.SetBucket(fullBucketName);
        HeadBucketOutcome headBucketOutcome = Client->HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());

        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);

        CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
        ASSERT_TRUE(createBucketOutcome.IsSuccess());
        const CreateBucketResult& createBucketResult = createBucketOutcome.GetResult();
        ASSERT_FALSE(createBucketResult.GetLocation().empty());
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName));

        ListBucketsOutcome listBucketsOutcome = Client->ListBuckets();
        ASSERT_TRUE(listBucketsOutcome.IsSuccess());
        ASSERT_TRUE(listBucketsOutcome.GetResult().GetBuckets().size() >= 1);

        bool foundBucket(false);

        for (const auto& bucket : listBucketsOutcome.GetResult().GetBuckets())
        {
            if (bucket.GetName() == fullBucketName)
            {
                foundBucket = true;
            }
        }

        ASSERT_TRUE(foundBucket);

        DeleteBucketRequest deleteBucketRequest;
        deleteBucketRequest.SetBucket(fullBucketName);
        DeleteBucketOutcome deleteBucketOutcome = Client->DeleteBucket(deleteBucketRequest);
        ASSERT_TRUE(deleteBucketOutcome.IsSuccess());

        headBucketRequest.SetBucket(fullBucketName);
        headBucketOutcome = Client->HeadBucket(headBucketRequest);

        unsigned timeoutCount = 0;
        bool bucketHeadSucceeded(true);
        while (timeoutCount++ < TIMEOUT_MAX)
        {
            headBucketOutcome = Client->HeadBucket(headBucketRequest);
            if (!headBucketOutcome.IsSuccess())
            {
                bucketHeadSucceeded = false;
                break;
            }
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
        ASSERT_FALSE(bucketHeadSucceeded);
    }

    //Create a bucket somewhere other than US Standard and ensure the location is correctly shown later
    TEST_F(BucketAndObjectOperationTest, TestBucketLocation)
    {
        Aws::String fullBucketName = CalculateBucketName(BASE_LOCATION_BUCKET_TEST_NAME.c_str());
        HeadBucketRequest headBucketRequest;
        headBucketRequest.SetBucket(fullBucketName);
        HeadBucketOutcome headBucketOutcome = oregonClient->HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());

        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        CreateBucketConfiguration bucketConfiguration;
        bucketConfiguration.SetLocationConstraint(BucketLocationConstraint::us_west_2);
        createBucketRequest.SetCreateBucketConfiguration(bucketConfiguration);

        CreateBucketOutcome createBucketOutcome = oregonClient->CreateBucket(createBucketRequest);
        ASSERT_TRUE(createBucketOutcome.IsSuccess());
        const CreateBucketResult& createBucketResult = createBucketOutcome.GetResult();
        ASSERT_FALSE(createBucketResult.GetLocation().empty());
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName, oregonClient));

        GetBucketLocationRequest locationRequest;
        locationRequest.SetBucket(fullBucketName);
        auto locationOutcome = oregonClient->GetBucketLocation(locationRequest);
        ASSERT_TRUE(locationOutcome.IsSuccess());
        ASSERT_EQ(locationOutcome.GetResult().GetLocationConstraint(), BucketLocationConstraint::us_west_2);

        DeleteBucketRequest deleteBucketRequest;
        deleteBucketRequest.SetBucket(fullBucketName);
        DeleteBucketOutcome deleteBucketOutcome = oregonClient->DeleteBucket(deleteBucketRequest);
        ASSERT_TRUE(deleteBucketOutcome.IsSuccess());
    }

    TEST_F(BucketAndObjectOperationTest, TestObjectOperations)
    {
        Aws::String fullBucketName = CalculateBucketName(BASE_PUT_OBJECTS_BUCKET_NAME.c_str());

        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);

        CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
        ASSERT_TRUE(createBucketOutcome.IsSuccess());
        const CreateBucketResult& createBucketResult = createBucketOutcome.GetResult();
        ASSERT_TRUE(!createBucketResult.GetLocation().empty());

        WaitForBucketToPropagate(fullBucketName);

        PutObjectRequest putObjectRequest;
        putObjectRequest.SetBucket(fullBucketName);

        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>("BucketAndObjectOperationTest");
        *objectStream << "Test Object";
        objectStream->flush();
        putObjectRequest.SetBody(objectStream);
        putObjectRequest.SetContentLength(static_cast<long>(putObjectRequest.GetBody()->tellp()));
        putObjectRequest.SetContentMD5(HashingUtils::Base64Encode(HashingUtils::CalculateMD5(*putObjectRequest.GetBody())));
        putObjectRequest.SetContentType("text/plain");
        putObjectRequest.SetKey(TEST_OBJ_KEY);

        PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
        ASSERT_TRUE(putObjectOutcome.IsSuccess());

        //verify md5 sums between what was sent and what s3 told us they received.
        putObjectRequest.GetBody()->clear();
        Aws::StringStream ss;
        ss << "\"" << HashingUtils::HexEncode(HashingUtils::CalculateMD5(*putObjectRequest.GetBody())) << "\"";
        ASSERT_EQ(ss.str(), putObjectOutcome.GetResult().GetETag());

        WaitForObjectToPropagate(fullBucketName, TEST_OBJ_KEY);

        ListObjectsRequest listObjectsRequest;
        listObjectsRequest.SetBucket(fullBucketName);

        ListObjectsOutcome listObjectsOutcome = Client->ListObjects(listObjectsRequest);
        ASSERT_TRUE(listObjectsOutcome.IsSuccess());
        ASSERT_TRUE(WaitForObjectToPropagate(fullBucketName, TEST_OBJ_KEY));

        GetObjectRequest getObjectRequest;
        getObjectRequest.SetBucket(fullBucketName);
        getObjectRequest.SetKey(TEST_OBJ_KEY);

        GetObjectOutcome getObjectOutcome = Client->GetObject(getObjectRequest);
        ASSERT_TRUE(getObjectOutcome.IsSuccess());
        ss.str("");
        ss << getObjectOutcome.GetResult().GetBody().rdbuf();
        ASSERT_EQ("Test Object", ss.str());

        HeadObjectRequest headObjectRequest;
        headObjectRequest.SetBucket(fullBucketName);
        headObjectRequest.SetKey(TEST_OBJ_KEY);

        HeadObjectOutcome headObjectOutcome = Client->HeadObject(headObjectRequest);
        ASSERT_TRUE(headObjectOutcome.IsSuccess());

        //verify md5 sums between what was sent and what the file s3 gave us back.
        ss.str("");
        ss << "\"" << HashingUtils::HexEncode(HashingUtils::CalculateMD5(*putObjectRequest.GetBody())) << "\"";
        ASSERT_EQ(ss.str(), getObjectOutcome.GetResult().GetETag());

        DeleteObjectRequest deleteObjectRequest;
        deleteObjectRequest.SetBucket(fullBucketName);
        deleteObjectRequest.SetKey(TEST_OBJ_KEY);
        DeleteObjectOutcome deleteObjectOutcome = Client->DeleteObject(deleteObjectRequest);
        ASSERT_TRUE(deleteObjectOutcome.IsSuccess());

        WaitForBucketToEmpty(fullBucketName);

        headObjectOutcome = Client->HeadObject(headObjectRequest);
        ASSERT_FALSE(headObjectOutcome.IsSuccess());
    }

    TEST_F(BucketAndObjectOperationTest, TestKeysWithCrazyCharacterSets)
    {
        Aws::String fullBucketName = CalculateBucketName(BASE_PUT_WEIRD_CHARSETS_OBJECTS_BUCKET_NAME.c_str());

        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);

        CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
        ASSERT_TRUE(createBucketOutcome.IsSuccess());
        const CreateBucketResult& createBucketResult = createBucketOutcome.GetResult();
        ASSERT_TRUE(!createBucketResult.GetLocation().empty());

        WaitForBucketToPropagate(fullBucketName);

        //test unicode
        {
            //we already have verification that this is a legit unicode string via the StringUtils test.
            Aws::String unicodekey = StringUtils::URLDecode(URLENCODED_UNICODE_KEY);
            PutObjectRequest putObjectRequest;
            putObjectRequest.SetBucket(fullBucketName);

            std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>("TestKeysWithCrazyCharacterSets");
            *objectStream << "Test Object";
            objectStream->flush();
            putObjectRequest.SetBody(objectStream);			
            putObjectRequest.SetKey(unicodekey);

            PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
            ASSERT_TRUE(putObjectOutcome.IsSuccess());

            WaitForObjectToPropagate(fullBucketName, unicodekey.c_str());

            ListObjectsRequest listObjectsRequest;
            listObjectsRequest.SetBucket(fullBucketName);

            ListObjectsOutcome listObjectsOutcome = Client->ListObjects(listObjectsRequest);
            ASSERT_TRUE(listObjectsOutcome.IsSuccess());
            ASSERT_TRUE(WaitForObjectToPropagate(fullBucketName, unicodekey.c_str()));

            HeadObjectRequest headObjectRequest;
            headObjectRequest.SetBucket(fullBucketName);
            headObjectRequest.SetKey(unicodekey);

            HeadObjectOutcome headObjectOutcome = Client->HeadObject(headObjectRequest);
            ASSERT_TRUE(headObjectOutcome.IsSuccess());

            DeleteObjectRequest deleteObjectRequest;
            deleteObjectRequest.SetBucket(fullBucketName);
            deleteObjectRequest.SetKey(unicodekey);
            DeleteObjectOutcome deleteObjectOutcome = Client->DeleteObject(deleteObjectRequest);
            ASSERT_TRUE(deleteObjectOutcome.IsSuccess());
        }

        //test uri encoding edge case.
        {
            PutObjectRequest putObjectRequest;
            putObjectRequest.SetBucket(fullBucketName);

            std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>("TestKeysWithCrazyCharacterSets");
            *objectStream << "Test Object";
            objectStream->flush();
            putObjectRequest.SetBody(objectStream);			
            putObjectRequest.SetKey(URIESCAPE_KEY);

            PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
            ASSERT_TRUE(putObjectOutcome.IsSuccess());

            WaitForObjectToPropagate(fullBucketName, URIESCAPE_KEY);

            ListObjectsRequest listObjectsRequest;
            listObjectsRequest.SetBucket(fullBucketName);

            ListObjectsOutcome listObjectsOutcome = Client->ListObjects(listObjectsRequest);
            ASSERT_TRUE(listObjectsOutcome.IsSuccess());
            ASSERT_TRUE(WaitForObjectToPropagate(fullBucketName, URIESCAPE_KEY));

            HeadObjectRequest headObjectRequest;
            headObjectRequest.SetBucket(fullBucketName);
            headObjectRequest.SetKey(URIESCAPE_KEY);

            HeadObjectOutcome headObjectOutcome = Client->HeadObject(headObjectRequest);
            ASSERT_TRUE(headObjectOutcome.IsSuccess());

            DeleteObjectRequest deleteObjectRequest;
            deleteObjectRequest.SetBucket(fullBucketName);
            deleteObjectRequest.SetKey(URIESCAPE_KEY);
            DeleteObjectOutcome deleteObjectOutcome = Client->DeleteObject(deleteObjectRequest);
            ASSERT_TRUE(deleteObjectOutcome.IsSuccess());
        }

        WaitForBucketToEmpty(fullBucketName);	
    }

    TEST_F(BucketAndObjectOperationTest, TestObjectOperationsWithPresignedUrls)
    {
        Aws::String fullBucketName = CalculateBucketName(BASE_PUT_OBJECTS_PRESIGNED_URLS_BUCKET_NAME.c_str());

        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);

        CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
        ASSERT_TRUE(createBucketOutcome.IsSuccess());
        const CreateBucketResult& createBucketResult = createBucketOutcome.GetResult();
        ASSERT_TRUE(!createBucketResult.GetLocation().empty());

        WaitForBucketToPropagate(fullBucketName);

        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>("BucketAndObjectOperationTest");
        *objectStream << "Test Object";
        objectStream->flush();

        Aws::String presignedUrlPut = Client->GeneratePresignedUrl(fullBucketName, TEST_OBJ_KEY, HttpMethod::HTTP_PUT);
        std::shared_ptr<HttpRequest> putRequest = CreateHttpRequest(presignedUrlPut, HttpMethod::HTTP_PUT, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        putRequest->AddContentBody(objectStream);
        Aws::StringStream intConverter;
        intConverter << objectStream->tellp();
        putRequest->SetContentLength(intConverter.str());
        putRequest->SetContentType("text/plain");
        std::shared_ptr<HttpResponse> putResponse = m_HttpClient->MakeRequest(*putRequest);

        ASSERT_EQ(HttpResponseCode::OK, putResponse->GetResponseCode());

        WaitForObjectToPropagate(fullBucketName, TEST_OBJ_KEY);

        Aws::String presignedUrlGet = Client->GeneratePresignedUrl(fullBucketName, TEST_OBJ_KEY, HttpMethod::HTTP_GET);
        std::shared_ptr<HttpRequest> getRequest = CreateHttpRequest(presignedUrlGet, HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<HttpResponse> getResponse = m_HttpClient->MakeRequest(*getRequest);

        ASSERT_EQ(HttpResponseCode::OK, getResponse->GetResponseCode());
        Aws::StringStream ss;
        ss << getResponse->GetResponseBody().rdbuf();
        ASSERT_EQ("Test Object", ss.str());

        Aws::String presignedUrlDelete = Client->GeneratePresignedUrl(fullBucketName, TEST_OBJ_KEY, HttpMethod::HTTP_DELETE);
        std::shared_ptr<HttpRequest> deleteRequest = CreateHttpRequest(presignedUrlDelete, HttpMethod::HTTP_DELETE, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<HttpResponse> deleteResponse = m_HttpClient->MakeRequest(*deleteRequest);
        ASSERT_EQ(HttpResponseCode::NO_CONTENT, deleteResponse->GetResponseCode());

        WaitForBucketToEmpty(fullBucketName); 
    }

    TEST_F(BucketAndObjectOperationTest, TestMultiPartObjectOperations)
    {
        const char* multipartKeyName = "MultiPartKey";
        Aws::String fullBucketName = CalculateBucketName(BASE_PUT_MULTIPART_BUCKET_NAME.c_str());
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);

        CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
        ASSERT_TRUE(createBucketOutcome.IsSuccess());
        const CreateBucketResult& createBucketResult = createBucketOutcome.GetResult();
        ASSERT_TRUE(!createBucketResult.GetLocation().empty());

        WaitForBucketToPropagate(fullBucketName);

        CreateMultipartUploadRequest createMultipartUploadRequest;
        createMultipartUploadRequest.SetBucket(fullBucketName);
        createMultipartUploadRequest.SetKey(multipartKeyName);
        createMultipartUploadRequest.SetContentType("text/plain");

        CreateMultipartUploadOutcome createMultipartUploadOutcome = Client->CreateMultipartUpload(
                createMultipartUploadRequest);
        ASSERT_TRUE(createMultipartUploadOutcome.IsSuccess());

        std::shared_ptr<Aws::IOStream> part1Stream = Create5MbStreamForUploadPart("1");
        ByteBuffer part1Md5(HashingUtils::CalculateMD5(*part1Stream));
        UploadPartOutcomeCallable uploadPartOutcomeCallable1 =
                MakeUploadPartOutcomeAndGetCallable(1, part1Md5, part1Stream, fullBucketName,
                                                    multipartKeyName, createMultipartUploadOutcome.GetResult().GetUploadId());

        std::shared_ptr<Aws::IOStream> part2Stream = Create5MbStreamForUploadPart("2");
        ByteBuffer part2Md5(HashingUtils::CalculateMD5(*part2Stream));
        UploadPartOutcomeCallable uploadPartOutcomeCallable2 =
                MakeUploadPartOutcomeAndGetCallable(2, part2Md5, part2Stream, fullBucketName,
                                                    multipartKeyName,
                                                    createMultipartUploadOutcome.GetResult().GetUploadId());

        std::shared_ptr<Aws::IOStream> part3Stream = Create5MbStreamForUploadPart("3");
        ByteBuffer part3Md5(HashingUtils::CalculateMD5(*part3Stream));
        UploadPartOutcomeCallable uploadPartOutcomeCallable3 =
                MakeUploadPartOutcomeAndGetCallable(3, part3Md5, part3Stream, fullBucketName,
                                                    multipartKeyName,
                                                    createMultipartUploadOutcome.GetResult().GetUploadId());

        UploadPartOutcome uploadPartOutcome1 = uploadPartOutcomeCallable1.get();
        UploadPartOutcome uploadPartOutcome2 = uploadPartOutcomeCallable2.get();
        UploadPartOutcome uploadPartOutcome3 = uploadPartOutcomeCallable3.get();

        VerifyUploadPartOutcome(uploadPartOutcome1, part1Md5);

        CompletedPart completedPart1;
        completedPart1.SetETag(uploadPartOutcome1.GetResult().GetETag());
        completedPart1.SetPartNumber(1);

        VerifyUploadPartOutcome(uploadPartOutcome2, part2Md5);

        CompletedPart completedPart2;
        completedPart2.SetETag(uploadPartOutcome2.GetResult().GetETag());
        completedPart2.SetPartNumber(2);

        VerifyUploadPartOutcome(uploadPartOutcome3, part3Md5);

        CompletedPart completedPart3;
        completedPart3.SetETag(uploadPartOutcome3.GetResult().GetETag());
        completedPart3.SetPartNumber(3);

        CompleteMultipartUploadRequest completeMultipartUploadRequest;
        completeMultipartUploadRequest.SetBucket(fullBucketName);
        completeMultipartUploadRequest.SetKey(multipartKeyName);
        completeMultipartUploadRequest.SetUploadId(createMultipartUploadOutcome.GetResult().GetUploadId());

        CompletedMultipartUpload completedMultipartUpload;
        completedMultipartUpload.AddParts(completedPart1);
        completedMultipartUpload.AddParts(completedPart2);
        completedMultipartUpload.AddParts(completedPart3);
        completeMultipartUploadRequest.WithMultipartUpload(completedMultipartUpload);

        CompleteMultipartUploadOutcome completeMultipartUploadOutcome = Client->CompleteMultipartUpload(
                completeMultipartUploadRequest);
        ASSERT_TRUE(completeMultipartUploadOutcome.IsSuccess());

        WaitForObjectToPropagate(fullBucketName, multipartKeyName);

        GetObjectRequest getObjectRequest;
        getObjectRequest.SetBucket(fullBucketName);
        getObjectRequest.SetKey(multipartKeyName);

        GetObjectOutcome getObjectOutcome = Client->GetObject(getObjectRequest);
        ASSERT_TRUE(getObjectOutcome.IsSuccess());

        part1Stream->clear();
        part2Stream->clear();
        part3Stream->clear();
        Aws::StringStream expectedStreamValue;
        part1Stream->seekg(0, part1Stream->beg);
        part2Stream->seekg(0, part2Stream->beg);
        part3Stream->seekg(0, part3Stream->beg);
        expectedStreamValue << part1Stream->rdbuf() << part2Stream->rdbuf() << part3Stream->rdbuf();

        Aws::StringStream actualStreamValue;
        getObjectOutcome.GetResult().GetBody().clear();
        actualStreamValue << getObjectOutcome.GetResult().GetBody().rdbuf();
        ASSERT_EQ(expectedStreamValue.str(), actualStreamValue.str());

        // repeat the get, but channel it directly to a file; tests the ability to override the output stream
#ifndef __ANDROID__
        Aws::String TestFileName{ Aws::Testing::GetDefaultWriteFolder() };
        TestFileName += "DownloadTestFile";
#else
    Aws::String TestFileName = Aws::Platform::GetCacheDirectory() + Aws::String("DownloadTestFile");
#endif

        std::remove(TestFileName.c_str());

        GetObjectRequest getObjectRequest2;
        getObjectRequest2.SetBucket(fullBucketName);
        getObjectRequest2.SetKey(multipartKeyName);
        getObjectRequest2.SetResponseStreamFactory(
            [=](){ 
                // NOTE: If using an FStream in order to download a file from S3 to a physical file, then we need to specify
                // the filemode "std::ios_base::out | std::ios_base::in | std::ios_base::trunc" --
                // If the file transfer fails, then the error stream from the httpRequest is written to the file instead of the
                    // actual file contents.
                // If this is the case, then the BuildAWSError function assumes it can 'read' the stream in order to read in the
                // error status and create an AWSError.  If the file is not marked as read/write (or write only), this will fail
                // and the error status will instead be an XML_PARSE_ERROR error because the BuildAWSError function failed
                // The 'truncate' is required to ensure that if the file download IS successful, then it can be written to the
                // FStream (if ::trunc is not specified, then the FStream.write fails for some unknown reason)

                return Aws::New<Aws::FStream>(ALLOCATION_TAG, TestFileName.c_str(), std::ios_base::out | std::ios_base::in | std::ios_base::trunc); 
            }
        );

        {
            // Enclose scope just to make sure the download file is properly closed before we reread it
            GetObjectOutcome getObjectOutcome2 = Client->GetObject(getObjectRequest2);
            ASSERT_TRUE(getObjectOutcome2.IsSuccess());
        }

        // Test the download of a non-existent file, to ensure that the error handling works correctly
        GetObjectRequest getObjectRequest3;
        getObjectRequest3.SetBucket("FAIL");
        getObjectRequest3.SetKey("FAIL");
        getObjectRequest3.SetResponseStreamFactory(
            [=](){
                return Aws::New<Aws::FStream>(ALLOCATION_TAG, TestFileName.c_str(), std::ios_base::out | std::ios_base::in | std::ios_base::trunc);
            }
        );

        {
            // Enclose scope just to make sure the download file is properly closed before we reread it
            GetObjectOutcome getObjectOutcome3 = Client->GetObject(getObjectRequest3);

            std::remove(TestFileName.c_str());

            ASSERT_FALSE(getObjectOutcome3.IsSuccess());
        }

        // Perform the same test again, except with an incorrectly set stream IO trait (this should still pass, but it
        // shouldn't crash anywhere in the log generation)

        GetObjectRequest getObjectRequest4;
        getObjectRequest4.SetBucket("FAIL");
        getObjectRequest4.SetKey("FAIL");
        getObjectRequest4.SetResponseStreamFactory(
            [=](){
                return Aws::New<Aws::FStream>(ALLOCATION_TAG, TestFileName.c_str(), std::ios_base::out);
            }
        );

        {
            // Enclose scope just to make sure the download file is properly closed before we reread it
            GetObjectOutcome getObjectOutcome4 = Client->GetObject(getObjectRequest4);

            std::remove(TestFileName.c_str());

            ASSERT_FALSE(getObjectOutcome4.IsSuccess());
        }

        {
            // Enclose scope just to make sure the download file is properly closed before we reread it
            GetObjectOutcome getObjectOutcome2 = Client->GetObject(getObjectRequest2);
            ASSERT_TRUE(getObjectOutcome2.IsSuccess());
        }

        Aws::String fileContents;
        Aws::IFStream downloadedFile(TestFileName.c_str());
        ASSERT_TRUE(downloadedFile.good());

        if (downloadedFile.good())
        {
            downloadedFile.seekg(0, std::ios::end);
            fileContents.reserve(static_cast<uint32_t>(downloadedFile.tellg()));
            downloadedFile.seekg(0, std::ios::beg);
            fileContents.assign((std::istreambuf_iterator<char>(downloadedFile)), std::istreambuf_iterator<char>());
        }

        std::remove(TestFileName.c_str());

        ASSERT_EQ(expectedStreamValue.str(), fileContents);

        // Remove the file
        DeleteObjectRequest deleteObjectRequest;
        deleteObjectRequest.SetBucket(fullBucketName);
        deleteObjectRequest.SetKey(multipartKeyName);

        DeleteObjectOutcome deleteObjectOutcome = Client->DeleteObject(deleteObjectRequest);
        ASSERT_TRUE(deleteObjectOutcome.IsSuccess());
    }


    TEST_F(BucketAndObjectOperationTest, TestThatErrorsParse)
    {
        Aws::String fullBucketName = CalculateBucketName(BASE_ERRORS_TESTING_BUCKET.c_str());

        ListObjectsRequest listObjectsRequest;
        listObjectsRequest.SetBucket("abcdedoikengi");

        ListObjectsOutcome listObjectsOutcome = Client->ListObjects(listObjectsRequest);
        ASSERT_FALSE(listObjectsOutcome.IsSuccess());
        ASSERT_EQ(S3Errors::NO_SUCH_BUCKET, listObjectsOutcome.GetError().GetErrorType());

        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);

        CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
        ASSERT_TRUE(createBucketOutcome.IsSuccess());
        WaitForBucketToPropagate(fullBucketName);

        GetObjectRequest getObjectRequest;
        getObjectRequest.SetBucket(fullBucketName);
        getObjectRequest.SetKey("non-Existent");
        GetObjectOutcome getObjectOutcome = Client->GetObject(getObjectRequest);
        ASSERT_FALSE(getObjectOutcome.IsSuccess());
        ASSERT_EQ(S3Errors::NO_SUCH_KEY, getObjectOutcome.GetError().GetErrorType());
    }

    TEST_F(BucketAndObjectOperationTest, TestNotModifiedIsSuccess)
    {
        Aws::String fullBucketName = CalculateBucketName(BASE_PUT_OBJECTS_BUCKET_NAME.c_str());
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);
        CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
        ASSERT_TRUE(createBucketOutcome.IsSuccess());

        PutObjectRequest putObjectRequest;
        putObjectRequest.SetBucket(fullBucketName);

        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>("BucketAndObjectOperationTest");
        *objectStream << "Test never modified!";
        objectStream->flush();
        putObjectRequest.SetBody(objectStream);
        putObjectRequest.SetContentLength(static_cast<long>(putObjectRequest.GetBody()->tellp()));
        putObjectRequest.SetContentType("text/plain");
        putObjectRequest.WithKey(TEST_NOT_MODIFIED_OBJ_KEY);

        PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
        ASSERT_TRUE(putObjectOutcome.IsSuccess());

        GetObjectRequest getObjectRequest;
        getObjectRequest.WithBucket(fullBucketName)
            .WithKey(TEST_NOT_MODIFIED_OBJ_KEY)
            .WithIfNoneMatch(putObjectOutcome.GetResult().GetETag());

        GetObjectOutcome getObjectOutcome = Client->GetObject(getObjectRequest);
        ASSERT_FALSE(getObjectOutcome.IsSuccess());
        ASSERT_EQ(Aws::Http::HttpResponseCode::NOT_MODIFIED, getObjectOutcome.GetError().GetResponseCode());
    }

    TEST_F(BucketAndObjectOperationTest, TestVirtualAddressingWithUnfriendlyBucketName)
    {
        Aws::String fullBucketName = CalculateBucketName(BASE_DNS_UNFRIENDLY_TEST_NAME.c_str());
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);
        CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
        ASSERT_TRUE(createBucketOutcome.IsSuccess());

        PutObjectRequest putObjectRequest;
        putObjectRequest.SetBucket(fullBucketName);

        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>("BucketAndObjectOperationTest");
        *objectStream << "'A program that has not been tested does not work'-- Bjarne Stroustrup";
        objectStream->flush();
        putObjectRequest.SetBody(objectStream);
        putObjectRequest.SetContentLength(static_cast<long>(putObjectRequest.GetBody()->tellp()));
        putObjectRequest.SetContentType("text/plain");
        putObjectRequest.WithKey(TEST_DNS_UNFRIENDLY_OBJ_KEY);

        PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
        ASSERT_TRUE(putObjectOutcome.IsSuccess());

        Aws::String presignedUrlPut = Client->GeneratePresignedUrl(fullBucketName, TEST_DNS_UNFRIENDLY_OBJ_KEY, HttpMethod::HTTP_PUT);
        ASSERT_EQ(0ul, presignedUrlPut.find("https://s3.amazonaws.com/" + fullBucketName + "/" + TEST_DNS_UNFRIENDLY_OBJ_KEY));
    }
}


