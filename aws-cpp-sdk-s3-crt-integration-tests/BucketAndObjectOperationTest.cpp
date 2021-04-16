/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/external/gtest.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/utils/crypto/Cipher.h>
#include <aws/core/utils/crypto/Factories.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/ratelimiter/DefaultRateLimiter.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/platform/Platform.h>
#include <aws/s3-crt/S3CrtClient.h>
#include <aws/s3-crt/S3CrtARN.h>
#include <aws/s3-crt/S3CrtEndpoint.h>
#include <aws/s3-crt/model/DeleteBucketRequest.h>
#include <aws/s3-crt/model/CreateBucketRequest.h>
#include <aws/s3-crt/model/HeadBucketRequest.h>
#include <aws/s3-crt/model/PutObjectRequest.h>
#include <aws/s3-crt/model/CopyObjectRequest.h>
#include <aws/s3-crt/model/GetObjectRequest.h>
#include <aws/s3-crt/model/DeleteObjectRequest.h>
#include <aws/s3-crt/model/HeadObjectRequest.h>
#include <aws/s3-crt/model/CreateMultipartUploadRequest.h>
#include <aws/s3-crt/model/UploadPartRequest.h>
#include <aws/s3-crt/model/CompleteMultipartUploadRequest.h>
#include <aws/s3-crt/model/ListObjectsRequest.h>
#include <aws/s3-crt/model/GetBucketLocationRequest.h>
#include <aws/s3-crt/model/SelectObjectContentRequest.h>
#include <aws/s3-crt/ClientConfiguration.h>
#include <aws/testing/ProxyConfig.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/testing/TestingEnvironment.h>
#include <fstream>

#ifdef _WIN32
#pragma warning(disable: 4127)
#endif //_WIN32

#include <aws/core/http/standard/StandardHttpRequest.h>

using namespace Aws;
using namespace Aws::Http::Standard;
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;
using namespace Aws::S3Crt;
using namespace Aws::S3Crt::Model;
using namespace Aws::Utils;

namespace
{
    static std::string BASE_CREATE_BUCKET_TEST_NAME = "createbuckettest";
    static std::string BASE_DNS_UNFRIENDLY_TEST_NAME = "dns.unfriendly";
    static std::string BASE_LOCATION_BUCKET_TEST_NAME = "locbuckettest";
    static std::string BASE_OBJECTS_BUCKET_NAME = "objecttest";
    static std::string BASE_PUT_OBJECTS_BUCKET_NAME = "putobjecttest";
    static std::string BASE_PUT_WEIRD_CHARSETS_OBJECTS_BUCKET_NAME = "charsetstest";
    static std::string BASE_PUT_OBJECTS_PRESIGNED_URLS_BUCKET_NAME = "presignedtest";
    static std::string BASE_PUT_MULTIPART_BUCKET_NAME = "multiparttest";
    static std::string BASE_ERRORS_TESTING_BUCKET = "errorstest";
    static std::string BASE_EVENT_STREAM_TEST_BUCKET_NAME = "eventstream";
    static std::string BASE_EVENT_STREAM_LARGE_FILE_TEST_BUCKET_NAME = "largeeventstream";
    static std::string BASE_EVENT_STREAM_ERRORS_IN_EVENT_TEST_BUCKET_NAME = "errorsinevent";
    static const char* ALLOCATION_TAG = "BucketAndObjectOperationTest";
    static const char* TEST_OBJ_KEY = "TestObjectKey";
    static const char* TEST_NOT_MODIFIED_OBJ_KEY = "TestNotModifiedObjectKey";
    static const char* TEST_DNS_UNFRIENDLY_OBJ_KEY = "WhySoHostile";
    static const char* TEST_EVENT_STREAM_OBJ_KEY = "TestEventStream.csv";
    //windows won't let you hard code unicode strings in a source file and assign them to a char*. Every other compiler does and I need to test this.
    //to get around this, this string is url encoded version of "TestUnicode中国Key". At test time, we'll convert it to the unicode string
    static const char* URLENCODED_UNICODE_KEY = "TestUnicode%E4%B8%AD%E5%9B%BDKey";
    static const char* URIESCAPE_KEY = "Esc ape+Me$";

    static const int TIMEOUT_MAX = 20;

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
        AppendUUID(BASE_OBJECTS_BUCKET_NAME);
        AppendUUID(BASE_PUT_OBJECTS_BUCKET_NAME);
        AppendUUID(BASE_PUT_WEIRD_CHARSETS_OBJECTS_BUCKET_NAME);
        AppendUUID(BASE_PUT_OBJECTS_PRESIGNED_URLS_BUCKET_NAME);
        AppendUUID(BASE_PUT_MULTIPART_BUCKET_NAME);
        AppendUUID(BASE_ERRORS_TESTING_BUCKET);
        AppendUUID(BASE_EVENT_STREAM_TEST_BUCKET_NAME);
        AppendUUID(BASE_EVENT_STREAM_LARGE_FILE_TEST_BUCKET_NAME);
        AppendUUID(BASE_EVENT_STREAM_ERRORS_IN_EVENT_TEST_BUCKET_NAME);
    }

    class RetryFiveTimesRetryStrategy: public Aws::Client::RetryStrategy
    {
    public:
        bool ShouldRetry(const AWSError<CoreErrors>&, long attemptedRetries) const override { return attemptedRetries < 5; }
        long CalculateDelayBeforeNextRetry(const AWSError<CoreErrors>&, long) const override { return 0; }
    };

    class BucketAndObjectOperationTest : public ::testing::Test
    {
    public:
        static std::shared_ptr<S3CrtClient> Client;
        static std::shared_ptr<S3CrtClient> oregonClient;
        static std::shared_ptr<HttpClient> m_HttpClient;

    protected:

        static void SetUpTestCase()
        {
            EnsureUniqueBucketNames();
        }

        static void TearDownTestCase()
        {
            DeleteBucket(CalculateBucketName(BASE_CREATE_BUCKET_TEST_NAME.c_str()));
            DeleteBucket(CalculateBucketName(BASE_DNS_UNFRIENDLY_TEST_NAME.c_str()));
            DeleteBucket(CalculateBucketName(BASE_LOCATION_BUCKET_TEST_NAME.c_str()));
            DeleteBucket(CalculateBucketName(BASE_OBJECTS_BUCKET_NAME.c_str()));
            DeleteBucket(CalculateBucketName(BASE_PUT_OBJECTS_BUCKET_NAME.c_str()));
            DeleteBucket(CalculateBucketName(BASE_PUT_OBJECTS_PRESIGNED_URLS_BUCKET_NAME.c_str()));
            DeleteBucket(CalculateBucketName(BASE_PUT_MULTIPART_BUCKET_NAME.c_str()));
            DeleteBucket(CalculateBucketName(BASE_ERRORS_TESTING_BUCKET.c_str()));
            DeleteBucket(CalculateBucketName(BASE_PUT_WEIRD_CHARSETS_OBJECTS_BUCKET_NAME.c_str()));
            DeleteBucket(CalculateBucketName(BASE_EVENT_STREAM_TEST_BUCKET_NAME.c_str()));
            DeleteBucket(CalculateBucketName(BASE_EVENT_STREAM_LARGE_FILE_TEST_BUCKET_NAME.c_str()));
            DeleteBucket(CalculateBucketName(BASE_EVENT_STREAM_ERRORS_IN_EVENT_TEST_BUCKET_NAME.c_str()));

            Client = nullptr;
            oregonClient = nullptr;
            m_HttpClient = nullptr;
        }

        // Create new S3 CRT Client for each test case, as multiple bucket is not supported yet.
        virtual void SetUp()
        {
            Aws::S3Crt::ClientConfiguration s3ClientConfig;
            s3ClientConfig.region = Aws::Region::US_EAST_1;
            s3ClientConfig.scheme = Scheme::HTTPS;
            s3ClientConfig.executor = Aws::MakeShared<Aws::Utils::Threading::PooledThreadExecutor>(ALLOCATION_TAG, 4);
            s3ClientConfig.throughputTargetGbps = 2.0;
            s3ClientConfig.partSize = 5 * 1024 * 1024;

            Client = Aws::MakeShared<S3CrtClient>(ALLOCATION_TAG,
                Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG), s3ClientConfig,
                AWSAuthV4Signer::PayloadSigningPolicy::Never /*signPayloads*/, true /*useVirtualAddressing*/,
                Aws::S3Crt::US_EAST_1_REGIONAL_ENDPOINT_OPTION::LEGACY);

            s3ClientConfig.region = Aws::Region::US_WEST_2;
            s3ClientConfig.useDualStack = true;
            oregonClient = Aws::MakeShared<S3CrtClient>(ALLOCATION_TAG,
                Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG), s3ClientConfig,
                AWSAuthV4Signer::PayloadSigningPolicy::Never /*signPayloads*/, true /*useVirtualAddressing*/);
            m_HttpClient = Aws::Http::CreateHttpClient(s3ClientConfig);
        }

        static std::shared_ptr<Aws::StringStream> CreateStreamForUploadPart(uint32_t sizeInMb, const char* partTag)
        {
            uint32_t fiveMbSize = sizeInMb * 1024 * 1024;

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
            ASSERT_STREQ(ss.str().c_str(), outcome.GetResult().GetETag().c_str());
        }

        static bool WaitForBucketToPropagate(const Aws::String& bucketName, const std::shared_ptr<S3CrtClient>& client = Client)
        {
            unsigned timeoutCount = 0;
            while (timeoutCount++ < TIMEOUT_MAX)
            {
                ListObjectsRequest listObjectsRequest;
                listObjectsRequest.SetBucket(bucketName);
                ListObjectsOutcome listObjectsOutcome = client->ListObjects(listObjectsRequest);
                if (listObjectsOutcome.IsSuccess())
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
                GetObjectRequest getObjectRequest;
                getObjectRequest.SetBucket(bucketName);
                getObjectRequest.SetKey(objectKey);
                GetObjectOutcome getObjectOutcome = Client->GetObject(getObjectRequest);
                if (getObjectOutcome.IsSuccess())
                {
                   return true;
                }

                std::this_thread::sleep_for(std::chrono::seconds(5));
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
                    std::this_thread::sleep_for(std::chrono::seconds(5));
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

        static Aws::String PreparePresignedUrlTest()
        {
            Aws::String fullBucketName = CalculateBucketName(BASE_PUT_OBJECTS_PRESIGNED_URLS_BUCKET_NAME.c_str());
            CreateBucketRequest createBucketRequest;
            createBucketRequest.SetBucket(fullBucketName);
            createBucketRequest.SetACL(BucketCannedACL::private_);
            CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
            EXPECT_TRUE(createBucketOutcome.IsSuccess());
            const CreateBucketResult& createBucketResult = createBucketOutcome.GetResult();
            EXPECT_TRUE(!createBucketResult.GetLocation().empty());
            EXPECT_TRUE(WaitForBucketToPropagate(fullBucketName));
            return fullBucketName;
        }

        static void DoPresignedUrlTest(const Aws::String& bucketName, std::shared_ptr<HttpRequest>& putRequest)
        {
            std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>("BucketAndObjectOperationTest");
            *objectStream << "Test Object";
            objectStream->flush();

            putRequest->AddContentBody(objectStream);
            Aws::StringStream intConverter;
            intConverter << objectStream->tellp();
            putRequest->SetContentLength(intConverter.str());
            putRequest->SetContentType("text/plain");
            std::shared_ptr<HttpResponse> putResponse = m_HttpClient->MakeRequest(putRequest);

            ASSERT_EQ(HttpResponseCode::OK, putResponse->GetResponseCode());

            ASSERT_TRUE(WaitForObjectToPropagate(bucketName, TEST_OBJ_KEY));

            // GetObject with presigned url
            Aws::String presignedUrlGet = Client->GeneratePresignedUrl(bucketName, TEST_OBJ_KEY, HttpMethod::HTTP_GET);
            std::shared_ptr<HttpRequest> getRequest = CreateHttpRequest(presignedUrlGet, HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
            std::shared_ptr<HttpResponse> getResponse = m_HttpClient->MakeRequest(getRequest);

            ASSERT_EQ(HttpResponseCode::OK, getResponse->GetResponseCode());
            Aws::StringStream ss;
            ss << getResponse->GetResponseBody().rdbuf();
            ASSERT_STREQ("Test Object", ss.str().c_str());

            Aws::S3Crt::Model::GetObjectRequest getObjectRequest;
            getObjectRequest.WithBucket(bucketName).WithKey(TEST_OBJ_KEY);
            auto outcome = Client->GetObject(getObjectRequest);
            ASSERT_TRUE(outcome.IsSuccess());
            if (putRequest->HasHeader(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION))
            {
                ASSERT_STREQ(Aws::S3Crt::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(outcome.GetResult().GetServerSideEncryption()).c_str(), putRequest->GetHeaderValue(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION).c_str());
            }
        }

        static void CleanUpPresignedUrlTest()
        {
            Aws::String fullBucketName = CalculateBucketName(BASE_PUT_OBJECTS_PRESIGNED_URLS_BUCKET_NAME.c_str());
            Aws::String presignedUrlDelete = Client->GeneratePresignedUrl(fullBucketName, TEST_OBJ_KEY, HttpMethod::HTTP_DELETE);
            std::shared_ptr<HttpRequest> deleteRequest = CreateHttpRequest(presignedUrlDelete, HttpMethod::HTTP_DELETE, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
            std::shared_ptr<HttpResponse> deleteResponse = m_HttpClient->MakeRequest(deleteRequest);
            ASSERT_EQ(HttpResponseCode::NO_CONTENT, deleteResponse->GetResponseCode());
            WaitForBucketToEmpty(fullBucketName);
        }

    };

    std::shared_ptr<S3CrtClient> BucketAndObjectOperationTest::Client(nullptr);
    std::shared_ptr<S3CrtClient> BucketAndObjectOperationTest::oregonClient(nullptr);
    std::shared_ptr<HttpClient> BucketAndObjectOperationTest::m_HttpClient(nullptr);

    TEST_F(BucketAndObjectOperationTest, TestBucketOperationsErrorWithMissingRequiredFields)
    {
        Aws::String fullBucketName = CalculateBucketName(BASE_CREATE_BUCKET_TEST_NAME.c_str());
        HeadBucketRequest headBucketRequest;
        HeadBucketOutcome headBucketOutcome = Client->HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        ASSERT_EQ(headBucketOutcome.GetError().GetErrorType(), Aws::S3Crt::S3CrtErrors::MISSING_PARAMETER);

        CreateBucketRequest createBucketRequest;
        CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
        ASSERT_FALSE(createBucketOutcome.IsSuccess());
        ASSERT_EQ(createBucketOutcome.GetError().GetErrorType(), Aws::S3Crt::S3CrtErrors::MISSING_PARAMETER);
    }

    TEST_F(BucketAndObjectOperationTest, TestBucketCreationAndListing)
    {
        Aws::String fullBucketName = CalculateBucketName(BASE_CREATE_BUCKET_TEST_NAME.c_str());

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
        ASSERT_GE(listBucketsOutcome.GetResult().GetBuckets().size(), 1u);

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
    }

    //Create a bucket somewhere other than US Standard and ensure the location is correctly shown later
    TEST_F(BucketAndObjectOperationTest, TestBucketLocation)
    {
        Aws::String fullBucketName = CalculateBucketName(BASE_LOCATION_BUCKET_TEST_NAME.c_str());
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

    // S3 CRT Client could not handle these special characters in key name right now.
    TEST_F(BucketAndObjectOperationTest, TestPutWithSpecialCharactersInKeyName)
    {
        Aws::String fullBucketName = CalculateBucketName(BASE_PUT_OBJECTS_BUCKET_NAME.c_str());

        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);

        CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
        ASSERT_TRUE(createBucketOutcome.IsSuccess());
        const CreateBucketResult& createBucketResult = createBucketOutcome.GetResult();
        ASSERT_TRUE(!createBucketResult.GetLocation().empty());

        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName));

        PutObjectRequest putObjectRequest;
        putObjectRequest.SetBucket(fullBucketName);
        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>("BucketAndObjectOperationTest");
        *objectStream << "Test Object";
        putObjectRequest.SetBody(objectStream);
        putObjectRequest.SetContentType("text/plain");
        putObjectRequest.SetKey("foo;jsessionid=40+2");
        PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
        ASSERT_TRUE(putObjectOutcome.IsSuccess());
    }

    TEST_F(BucketAndObjectOperationTest, TestObjectOperations)
    {
        Aws::String fullBucketName = CalculateBucketName(BASE_OBJECTS_BUCKET_NAME.c_str());

        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);

        CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
        ASSERT_TRUE(createBucketOutcome.IsSuccess());
        const CreateBucketResult& createBucketResult = createBucketOutcome.GetResult();
        ASSERT_TRUE(!createBucketResult.GetLocation().empty());

        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName));

        PutObjectRequest putObjectRequest;
        putObjectRequest.SetBucket(fullBucketName);

        std::shared_ptr<Aws::IOStream> bigStream = CreateStreamForUploadPart(25, "La");
        putObjectRequest.SetBody(bigStream);
        long long contentLength = static_cast<long long>(putObjectRequest.GetBody()->tellp());
        putObjectRequest.SetContentLength(contentLength);
        // putObjectRequest.SetContentMD5(HashingUtils::Base64Encode(HashingUtils::CalculateMD5(*putObjectRequest.GetBody())));
        putObjectRequest.SetContentType("text/plain");
        putObjectRequest.SetKey(TEST_OBJ_KEY);

        PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
        ASSERT_TRUE(putObjectOutcome.IsSuccess());

        ASSERT_TRUE(WaitForObjectToPropagate(fullBucketName, TEST_OBJ_KEY));

        GetObjectRequest getObjectRequest;
        getObjectRequest.SetBucket(fullBucketName);
        getObjectRequest.SetKey(TEST_OBJ_KEY);

        GetObjectOutcome getObjectOutcome = Client->GetObject(getObjectRequest);
        ASSERT_TRUE(getObjectOutcome.IsSuccess());
        ASSERT_EQ(contentLength, getObjectOutcome.GetResult().GetContentLength());

        HeadObjectRequest headObjectRequest;
        headObjectRequest.SetBucket(fullBucketName);
        headObjectRequest.SetKey(TEST_OBJ_KEY);

        HeadObjectOutcome headObjectOutcome = Client->HeadObject(headObjectRequest);
        ASSERT_TRUE(headObjectOutcome.IsSuccess());

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

        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName));

        // S3 CRT Client doesn't support this edge case right now.
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

            ASSERT_TRUE(WaitForObjectToPropagate(fullBucketName, unicodekey.c_str()));

            DeleteObjectRequest deleteObjectRequest;
            deleteObjectRequest.SetBucket(fullBucketName);
            deleteObjectRequest.SetKey(unicodekey);
            DeleteObjectOutcome deleteObjectOutcome = Client->DeleteObject(deleteObjectRequest);
            ASSERT_TRUE(deleteObjectOutcome.IsSuccess());
        }

        // test uri encoding edge case.
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

            ASSERT_TRUE(WaitForObjectToPropagate(fullBucketName, URIESCAPE_KEY));

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
        Aws::String fullBucketName = PreparePresignedUrlTest();
        Aws::String presignedUrlPut = Client->GeneratePresignedUrl(fullBucketName, TEST_OBJ_KEY, HttpMethod::HTTP_PUT);
        std::shared_ptr<HttpRequest> putRequest = CreateHttpRequest(presignedUrlPut, HttpMethod::HTTP_PUT, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        DoPresignedUrlTest(fullBucketName, putRequest);
        CleanUpPresignedUrlTest();
    }

    TEST_F(BucketAndObjectOperationTest, TestObjectOperationsWithPresignedUrlsAndCustomizedHeaders)
    {
        Aws::String fullBucketName = PreparePresignedUrlTest();
        Aws::Http::HeaderValueCollection collections;
        collections.emplace("TestKey1", "TestVal1");
        collections.emplace("TestKey2", "TestVal2");

        Aws::String presignedUrlPut = Client->GeneratePresignedUrl(fullBucketName, TEST_OBJ_KEY, HttpMethod::HTTP_PUT, collections);
        std::shared_ptr<HttpRequest> putRequest = CreateHttpRequest(presignedUrlPut, HttpMethod::HTTP_PUT, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        ASSERT_NE(presignedUrlPut.find("testkey1"), std::string::npos);
        ASSERT_NE(presignedUrlPut.find("testkey2"), std::string::npos);
        putRequest->SetHeaderValue("TestKey1", "TestVal1");
        putRequest->SetHeaderValue("TestKey2", "TestVal2");
        DoPresignedUrlTest(fullBucketName, putRequest);
        CleanUpPresignedUrlTest();
    }

    TEST_F(BucketAndObjectOperationTest, TestObjectOperationsWithPresignedUrlsWithSSES3)
    {
        Aws::String fullBucketName = PreparePresignedUrlTest();
        Aws::String presignedUrlPut = Client->GeneratePresignedUrlWithSSES3(fullBucketName, TEST_OBJ_KEY, HttpMethod::HTTP_PUT);
        std::shared_ptr<HttpRequest> putRequest = CreateHttpRequest(presignedUrlPut, HttpMethod::HTTP_PUT, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        putRequest->SetHeaderValue(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION,
                Aws::S3Crt::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3Crt::Model::ServerSideEncryption::AES256));
        DoPresignedUrlTest(fullBucketName, putRequest);
        CleanUpPresignedUrlTest();
    }

    TEST_F(BucketAndObjectOperationTest, TestObjectOperationsWithPresignedUrlsWithSSES3AndCustomizedHeaders)
    {
        Aws::String fullBucketName = PreparePresignedUrlTest();
        Aws::Http::HeaderValueCollection collections;
        collections.emplace("TestKey1", "TestVal1");
        collections.emplace("TestKey2", "TestVal2");

        Aws::String presignedUrlPut = Client->GeneratePresignedUrlWithSSES3(fullBucketName, TEST_OBJ_KEY, HttpMethod::HTTP_PUT, collections);
        std::shared_ptr<HttpRequest> putRequest = CreateHttpRequest(presignedUrlPut, HttpMethod::HTTP_PUT, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        putRequest->SetHeaderValue(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION,
                Aws::S3Crt::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3Crt::Model::ServerSideEncryption::AES256));
        ASSERT_NE(presignedUrlPut.find("testkey1"), std::string::npos);
        ASSERT_NE(presignedUrlPut.find("testkey2"), std::string::npos);
        putRequest->SetHeaderValue("TestKey1", "TestVal1");
        putRequest->SetHeaderValue("TestKey2", "TestVal2");
        DoPresignedUrlTest(fullBucketName, putRequest);
        CleanUpPresignedUrlTest();
    }

    TEST_F(BucketAndObjectOperationTest, TestObjectOperationsWithPresignedUrlsWithSSEKMS)
    {
        Aws::String fullBucketName = PreparePresignedUrlTest();
        Aws::String presignedUrlPut = Client->GeneratePresignedUrlWithSSEKMS(fullBucketName, TEST_OBJ_KEY, HttpMethod::HTTP_PUT); //Using default KMS key in this AWS account
        std::shared_ptr<HttpRequest> putRequest = CreateHttpRequest(presignedUrlPut, HttpMethod::HTTP_PUT, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        putRequest->SetHeaderValue(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION,
                Aws::S3Crt::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3Crt::Model::ServerSideEncryption::aws_kms));
        DoPresignedUrlTest(fullBucketName, putRequest);
        CleanUpPresignedUrlTest();
    }


    TEST_F(BucketAndObjectOperationTest, TestObjectOperationsWithPresignedUrlsWithSSEKMSAndCustomizedHeaders)
    {
        Aws::String fullBucketName = PreparePresignedUrlTest();
        Aws::Http::HeaderValueCollection collections;
        collections.emplace("TestKey1", "TestVal1");
        collections.emplace("TestKey2", "TestVal2");

        Aws::String presignedUrlPut = Client->GeneratePresignedUrlWithSSEKMS(fullBucketName, TEST_OBJ_KEY, HttpMethod::HTTP_PUT, collections); //Using default KMS key in this AWS account
        std::shared_ptr<HttpRequest> putRequest = CreateHttpRequest(presignedUrlPut, HttpMethod::HTTP_PUT, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        putRequest->SetHeaderValue(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION,
                Aws::S3Crt::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3Crt::Model::ServerSideEncryption::aws_kms));
        ASSERT_NE(presignedUrlPut.find("testkey1"), std::string::npos);
        ASSERT_NE(presignedUrlPut.find("testkey2"), std::string::npos);
        putRequest->SetHeaderValue("TestKey1", "TestVal1");
        putRequest->SetHeaderValue("TestKey2", "TestVal2");
        DoPresignedUrlTest(fullBucketName, putRequest);
        CleanUpPresignedUrlTest();
    }

    TEST_F(BucketAndObjectOperationTest, TestThatErrorsParse)
    {
        Aws::String fullBucketName = CalculateBucketName(BASE_ERRORS_TESTING_BUCKET.c_str());

        ListObjectsRequest listObjectsRequest;
        listObjectsRequest.SetBucket("abcdedoikengi");

        ListObjectsOutcome listObjectsOutcome = Client->ListObjects(listObjectsRequest);
        ASSERT_FALSE(listObjectsOutcome.IsSuccess());
#if ENABLE_CURL_CLIENT
        ASSERT_FALSE(listObjectsOutcome.GetError().GetRemoteHostIpAddress().empty());
#endif
        ASSERT_FALSE(listObjectsOutcome.GetError().GetRequestId().empty());
        ASSERT_EQ(S3CrtErrors::NO_SUCH_BUCKET, listObjectsOutcome.GetError().GetErrorType());

        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);

        CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
        ASSERT_TRUE(createBucketOutcome.IsSuccess());
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName));

        GetObjectRequest getObjectRequest;
        getObjectRequest.SetBucket(fullBucketName);
        getObjectRequest.SetKey("non-Existent");
        GetObjectOutcome getObjectOutcome = Client->GetObject(getObjectRequest);
        ASSERT_FALSE(getObjectOutcome.IsSuccess());
    }

    TEST_F(BucketAndObjectOperationTest, TestNotModifiedIsSuccess)
    {
        Aws::String fullBucketName = CalculateBucketName(BASE_PUT_OBJECTS_BUCKET_NAME.c_str());
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);
        CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
        ASSERT_TRUE(createBucketOutcome.IsSuccess());
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName));

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
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName));

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

    TEST_F(BucketAndObjectOperationTest, TestCopyingFromKeysWithUnicodeCharacters)
    {
        Aws::String fullBucketName = CalculateBucketName(BASE_CREATE_BUCKET_TEST_NAME.c_str());
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);
        CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
        ASSERT_TRUE(createBucketOutcome.IsSuccess());

        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName));

        auto objectStream = Aws::MakeShared<Aws::StringStream>("BucketAndObjectOperationTest");
        *objectStream << "Test Japanese & Chinese Unicode keys";
        objectStream->flush();
        const char encodedKeyName[] = "%E3%83%86%E3%82%B9%E3%83%88%20%E6%B5%8B%E8%AF%95.txt"; // "テスト 测试.txt";
        Aws::String unicodekey = StringUtils::URLDecode(encodedKeyName);
        PutObjectRequest putObjectRequest;
        putObjectRequest.SetBucket(fullBucketName);
        putObjectRequest.SetBody(objectStream);
        putObjectRequest.SetContentLength(static_cast<long>(putObjectRequest.GetBody()->tellp()));
        putObjectRequest.SetContentType("text/plain");
        putObjectRequest.SetKey(unicodekey);
        PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
        ASSERT_TRUE(putObjectOutcome.IsSuccess());

        CopyObjectRequest copyRequest;
        copyRequest.WithBucket(fullBucketName)
            .WithKey("destination/" + unicodekey)
            .WithCopySource(fullBucketName + "/" + unicodekey);

        auto copyOutcome = Client->CopyObject(copyRequest);
        ASSERT_TRUE(copyOutcome.IsSuccess());
    }

    TEST_F(BucketAndObjectOperationTest, TestObjectOperationWithEventStream)
    {
        Aws::String fullBucketName = CalculateBucketName(BASE_EVENT_STREAM_TEST_BUCKET_NAME.c_str());
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);
        CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
        ASSERT_TRUE(createBucketOutcome.IsSuccess());
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName));

        PutObjectRequest putObjectRequest;
        putObjectRequest.SetBucket(fullBucketName);

        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
        *objectStream << "Name,Number\nAlice,1\nBob,2";
        Aws::String firstColumn = "Name\nAlice\nBob\n";
        objectStream->flush();
        putObjectRequest.SetBody(objectStream);
        putObjectRequest.SetKey(TEST_EVENT_STREAM_OBJ_KEY);
        auto objectSize = putObjectRequest.GetBody()->tellp();
        putObjectRequest.SetContentLength(static_cast<long>(objectSize));
        // putObjectRequest.SetContentMD5(HashingUtils::Base64Encode(HashingUtils::CalculateMD5(*putObjectRequest.GetBody())));
        putObjectRequest.SetContentType("text/csv");

        PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
        ASSERT_TRUE(putObjectOutcome.IsSuccess());

        ASSERT_TRUE(WaitForObjectToPropagate(fullBucketName, TEST_EVENT_STREAM_OBJ_KEY));

        SelectObjectContentRequest selectObjectContentRequest;
        selectObjectContentRequest.SetBucket(fullBucketName);
        selectObjectContentRequest.SetKey(TEST_EVENT_STREAM_OBJ_KEY);

        selectObjectContentRequest.SetExpressionType(ExpressionType::SQL);

        selectObjectContentRequest.SetExpression("select s._1 from S3Object s");

        CSVInput csvInput;
        csvInput.SetFileHeaderInfo(FileHeaderInfo::NONE);
        InputSerialization inputSerialization;
        inputSerialization.SetCSV(csvInput);
        selectObjectContentRequest.SetInputSerialization(inputSerialization);

        CSVOutput csvOutput;
        OutputSerialization outputSerialization;
        outputSerialization.SetCSV(csvOutput);
        selectObjectContentRequest.SetOutputSerialization(outputSerialization);

        bool isRecordsEventReceived = false;
        bool isStatsEventReceived = false;

        SelectObjectContentHandler handler;
        handler.SetRecordsEventCallback([&](const RecordsEvent& recordsEvent)
        {
            isRecordsEventReceived = true;
            auto recordsVector = recordsEvent.GetPayload();
            Aws::String records(recordsVector.begin(), recordsVector.end());
            ASSERT_STREQ(firstColumn.c_str(), records.c_str());
        });
        handler.SetStatsEventCallback([&](const StatsEvent& statsEvent)
        {
            isStatsEventReceived = true;
            ASSERT_EQ(static_cast<long long>(objectSize), statsEvent.GetDetails().GetBytesScanned());
            ASSERT_EQ(static_cast<long long>(objectSize), statsEvent.GetDetails().GetBytesProcessed());
            ASSERT_EQ(static_cast<long long>(firstColumn.size()), statsEvent.GetDetails().GetBytesReturned());
        });

        selectObjectContentRequest.SetEventStreamHandler(handler);

        auto selectObjectContentOutcome = Client->SelectObjectContent(selectObjectContentRequest);
        ASSERT_TRUE(selectObjectContentOutcome.IsSuccess());
        ASSERT_TRUE(isRecordsEventReceived);
        ASSERT_TRUE(isStatsEventReceived);
    }

#if 0
    // S3 CRT Client doesn't support custom retry strategy right now.
    // This test is to test failed event stream request will not cause crash during retry.
    TEST_F(BucketAndObjectOperationTest, TestSelectObjectOperationWithEventStreamFailWithRetry)
    {
        Aws::String fullBucketName = CalculateBucketName(BASE_EVENT_STREAM_TEST_BUCKET_NAME.c_str());
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);
        CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
        ASSERT_TRUE(createBucketOutcome.IsSuccess());
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName));

        PutObjectRequest putObjectRequest;
        putObjectRequest.SetBucket(fullBucketName);

        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
        *objectStream << "Name,Number\nAlice,1\nBob,2";
        Aws::String firstColumn = "Name\nAlice\nBob\n";
        objectStream->flush();
        putObjectRequest.SetBody(objectStream);
        putObjectRequest.SetKey(TEST_EVENT_STREAM_OBJ_KEY);
        auto objectSize = putObjectRequest.GetBody()->tellp();
        putObjectRequest.SetContentLength(static_cast<long>(objectSize));
        putObjectRequest.SetContentMD5(HashingUtils::Base64Encode(HashingUtils::CalculateMD5(*putObjectRequest.GetBody())));
        putObjectRequest.SetContentType("text/csv");

        PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
        ASSERT_TRUE(putObjectOutcome.IsSuccess());

        ASSERT_TRUE(WaitForObjectToPropagate(fullBucketName, TEST_EVENT_STREAM_OBJ_KEY));

        SelectObjectContentRequest selectObjectContentRequest;
        selectObjectContentRequest.SetBucket(fullBucketName);
        selectObjectContentRequest.SetKey("ANonExistenceKey");

        selectObjectContentRequest.SetExpressionType(ExpressionType::SQL);

        selectObjectContentRequest.SetExpression("select s._1 from S3Object s");

        CSVInput csvInput;
        csvInput.SetFileHeaderInfo(FileHeaderInfo::NONE);
        InputSerialization inputSerialization;
        inputSerialization.SetCSV(csvInput);
        selectObjectContentRequest.SetInputSerialization(inputSerialization);

        CSVOutput csvOutput;
        OutputSerialization outputSerialization;
        outputSerialization.SetCSV(csvOutput);
        selectObjectContentRequest.SetOutputSerialization(outputSerialization);

        bool isRecordsEventReceived = false;
        bool isStatsEventReceived = false;

        SelectObjectContentHandler handler;
        handler.SetRecordsEventCallback([&](const RecordsEvent& recordsEvent)
        {
            isRecordsEventReceived = true;
            auto recordsVector = recordsEvent.GetPayload();
            Aws::String records(recordsVector.begin(), recordsVector.end());
            ASSERT_STREQ(firstColumn.c_str(), records.c_str());
        });
        handler.SetStatsEventCallback([&](const StatsEvent& statsEvent)
        {
            isStatsEventReceived = true;
            ASSERT_EQ(static_cast<long long>(objectSize), statsEvent.GetDetails().GetBytesScanned());
            ASSERT_EQ(static_cast<long long>(objectSize), statsEvent.GetDetails().GetBytesProcessed());
            ASSERT_EQ(static_cast<long long>(firstColumn.size()), statsEvent.GetDetails().GetBytesReturned());
        });

        selectObjectContentRequest.SetEventStreamHandler(handler);

        auto selectObjectContentOutcome = retryClient->SelectObjectContent(selectObjectContentRequest);
        ASSERT_FALSE(selectObjectContentOutcome.IsSuccess());
    }
#endif

    TEST_F(BucketAndObjectOperationTest, TestEventStreamWithLargeFile)
    {
        Aws::String fullBucketName = CalculateBucketName(BASE_EVENT_STREAM_LARGE_FILE_TEST_BUCKET_NAME.c_str());
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);
        CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
        ASSERT_TRUE(createBucketOutcome.IsSuccess());
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName));

        PutObjectRequest putObjectRequest;
        putObjectRequest.SetBucket(fullBucketName);

        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
        *objectStream << "Name,Number\n";
        for (int i = 0; i < 1000000; i++)
        {
            *objectStream << "foo,0\n";
        }
        objectStream->flush();
        putObjectRequest.SetBody(objectStream);
        putObjectRequest.SetKey(TEST_EVENT_STREAM_OBJ_KEY);
        auto objectSize = putObjectRequest.GetBody()->tellp();
        putObjectRequest.SetContentLength(static_cast<long>(objectSize));
        // putObjectRequest.SetContentMD5(HashingUtils::Base64Encode(HashingUtils::CalculateMD5(*putObjectRequest.GetBody())));
        putObjectRequest.SetContentType("text/csv");

        PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
        ASSERT_TRUE(putObjectOutcome.IsSuccess());

        ASSERT_TRUE(WaitForObjectToPropagate(fullBucketName, TEST_EVENT_STREAM_OBJ_KEY));

        SelectObjectContentRequest selectObjectContentRequest;
        selectObjectContentRequest.SetBucket(fullBucketName);
        selectObjectContentRequest.SetKey(TEST_EVENT_STREAM_OBJ_KEY);

        selectObjectContentRequest.SetExpressionType(ExpressionType::SQL);

        selectObjectContentRequest.SetExpression("select * from S3Object where cast(number as int) < 1");

        CSVInput csvInput;
        csvInput.SetFileHeaderInfo(FileHeaderInfo::USE);
        InputSerialization inputSerialization;
        inputSerialization.SetCSV(csvInput);
        selectObjectContentRequest.SetInputSerialization(inputSerialization);

        CSVOutput csvOutput;
        OutputSerialization outputSerialization;
        outputSerialization.SetCSV(csvOutput);
        selectObjectContentRequest.SetOutputSerialization(outputSerialization);

        size_t recordsTotalLength = 0;
        bool isStatsEventReceived = false;

        SelectObjectContentHandler handler;
        handler.SetRecordsEventCallback([&](const RecordsEvent& recordsEvent)
        {
            recordsTotalLength += recordsEvent.GetPayload().size();
        });
        handler.SetStatsEventCallback([&](const StatsEvent& statsEvent)
        {
            isStatsEventReceived = true;
            ASSERT_EQ(12ll/*length of the 1st row*/ + 6/*length of all the other row*/ * 1000000ll, statsEvent.GetDetails().GetBytesScanned());
            ASSERT_EQ(6000012ll, statsEvent.GetDetails().GetBytesProcessed());
            ASSERT_EQ(6000000ll, statsEvent.GetDetails().GetBytesReturned());
        });

        selectObjectContentRequest.SetEventStreamHandler(handler);

        auto selectObjectContentOutcome = Client->SelectObjectContent(selectObjectContentRequest);
        ASSERT_EQ(6000000u, recordsTotalLength);
        ASSERT_TRUE(isStatsEventReceived);
    }

    TEST_F(BucketAndObjectOperationTest, TestErrorsInXml)
    {
        SelectObjectContentRequest selectObjectContentRequest;
        selectObjectContentRequest.SetBucket("adskflaklfakl");
        selectObjectContentRequest.SetKey(TEST_EVENT_STREAM_OBJ_KEY);

        selectObjectContentRequest.SetExpressionType(ExpressionType::SQL);

        selectObjectContentRequest.SetExpression("select s._1 from S3Object s");

        CSVInput csvInput;
        csvInput.SetFileHeaderInfo(FileHeaderInfo::USE);
        InputSerialization inputSerialization;
        inputSerialization.SetCSV(csvInput);
        selectObjectContentRequest.SetInputSerialization(inputSerialization);

        CSVOutput csvOutput;
        OutputSerialization outputSerialization;
        outputSerialization.SetCSV(csvOutput);
        selectObjectContentRequest.SetOutputSerialization(outputSerialization);

        auto selectObjectContentOutcome = Client->SelectObjectContent(selectObjectContentRequest);
        ASSERT_FALSE(selectObjectContentOutcome.IsSuccess());
#if ENABLE_CURL_CLIENT
        ASSERT_FALSE(selectObjectContentOutcome.GetError().GetRemoteHostIpAddress().empty());
#endif
        ASSERT_FALSE(selectObjectContentOutcome.GetError().GetRequestId().empty());
        ASSERT_EQ(S3CrtErrors::NO_SUCH_BUCKET, selectObjectContentOutcome.GetError().GetErrorType());
    }

    TEST_F(BucketAndObjectOperationTest, TestErrorsInEventStream)
    {
        Aws::String fullBucketName = CalculateBucketName(BASE_EVENT_STREAM_ERRORS_IN_EVENT_TEST_BUCKET_NAME.c_str());
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);
        CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
        ASSERT_TRUE(createBucketOutcome.IsSuccess());
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName));

        PutObjectRequest putObjectRequest;
        putObjectRequest.SetBucket(fullBucketName);

        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
        *objectStream << "Name,Number\n";
        for (int i = 0; i < 1000000; i++)
        {
            *objectStream << "foo,0\n";
        }
        *objectStream << "bar,NAN";
        objectStream->flush();
        putObjectRequest.SetBody(objectStream);
        putObjectRequest.SetKey(TEST_EVENT_STREAM_OBJ_KEY);
        auto objectSize = putObjectRequest.GetBody()->tellp();
        putObjectRequest.SetContentLength(static_cast<long>(objectSize));
        // putObjectRequest.SetContentMD5(HashingUtils::Base64Encode(HashingUtils::CalculateMD5(*putObjectRequest.GetBody())));
        putObjectRequest.SetContentType("text/csv");

        PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
        ASSERT_TRUE(putObjectOutcome.IsSuccess());

        ASSERT_TRUE(WaitForObjectToPropagate(fullBucketName, TEST_EVENT_STREAM_OBJ_KEY));

        SelectObjectContentRequest selectObjectContentRequest;
        selectObjectContentRequest.SetBucket(fullBucketName);
        selectObjectContentRequest.SetKey(TEST_EVENT_STREAM_OBJ_KEY);

        selectObjectContentRequest.SetExpressionType(ExpressionType::SQL);

        selectObjectContentRequest.SetExpression("select * from S3Object where cast(number as int) < 1");

        CSVInput csvInput;
        csvInput.SetFileHeaderInfo(FileHeaderInfo::USE);
        InputSerialization inputSerialization;
        inputSerialization.SetCSV(csvInput);
        selectObjectContentRequest.SetInputSerialization(inputSerialization);

        CSVOutput csvOutput;
        OutputSerialization outputSerialization;
        outputSerialization.SetCSV(csvOutput);
        selectObjectContentRequest.SetOutputSerialization(outputSerialization);

        bool isErrorEventReceived = false;

        SelectObjectContentHandler handler;
        handler.SetOnErrorCallback([&](const AWSError<S3CrtErrors>& s3Error)
        {
            isErrorEventReceived = true;
            ASSERT_EQ(CoreErrors::UNKNOWN, static_cast<CoreErrors>(s3Error.GetErrorType()));
            ASSERT_STREQ("CastFailed", s3Error.GetExceptionName().c_str());
        });

        selectObjectContentRequest.SetEventStreamHandler(handler);

        Client->SelectObjectContent(selectObjectContentRequest);

        ASSERT_TRUE(isErrorEventReceived);
    }

    TEST_F(BucketAndObjectOperationTest, TestS3AccessPointARNValidation)
    {
        // The followings are examples for valid S3Crt ARN:
        ASSERT_TRUE(S3CrtARN("arn:aws:s3:us-east-1:123456789120:accesspoint:endpoint").Validate().IsSuccess());
        ASSERT_TRUE(S3CrtARN("arn:aws:s3:us-east-1:123456789120:accesspoint/endpoint").Validate().IsSuccess());
        // Pseudo region in client configuration
        ASSERT_TRUE(S3CrtARN("arn:aws:s3:us-gov-west-1:123456789120:accesspoint:endpoint").Validate("fips-us-gov-west-1").IsSuccess());
        ASSERT_TRUE(S3CrtARN("arn:aws:s3:us-east-1:123456789120:accesspoint:endpoint").Validate("us-east-1-fips").IsSuccess());

        // The followings are examples for invalid S3Crt ARN:
        // S3CrtARN partition
        // Invalid partition: cn-aws
        ASSERT_FALSE(S3CrtARN("arn:cn-aws:s3:us-east-1:123456789120:accesspoint:endpoint").Validate().IsSuccess());
        // Empty partition name
        ASSERT_FALSE(S3CrtARN("arn::s3:us-east-1:123456789120:accesspoint:endpoint").Validate().IsSuccess());

        // S3CrtARN service
        // Invalid service: EC2
        ASSERT_FALSE(S3CrtARN("arn:aws:ec2:us-east-1:123456789120:accesspoint:endpoint").Validate().IsSuccess());
        // Empty service name
        ASSERT_FALSE(S3CrtARN("arn:aws::us-east-1:123456789120:accesspoint:endpoint").Validate().IsSuccess());
        // Invalid service name with upper case
        ASSERT_FALSE(S3CrtARN("arn:aws:S3Crt:us-east-1:123456789120:accesspoint:endpoint").Validate().IsSuccess());

        // S3CrtARN region
        // Cross region ARN when useArnRegion = false
        ASSERT_FALSE(S3CrtARN("arn:aws:s3:us-west-1:123456789120:accesspoint:endpoint").Validate("us-east-1").IsSuccess());
        // Empty region name
        ASSERT_FALSE(S3CrtARN("arn:aws:s3::123456789120:accesspoint:endpoint").Validate().IsSuccess());

        // S3CrtARN account id
        // Invalid account ID with non RFC 3986 Host label
        ASSERT_FALSE(S3CrtARN("arn:aws:s3:us-east-1:12345.678912:accesspoint:endpoint").Validate().IsSuccess());
        // Empty account ID
        ASSERT_FALSE(S3CrtARN("arn:aws:s3:us-east-1::accesspoint:endpoint").Validate().IsSuccess());

        // S3CrtARN resource type
        // Invalid resource type: bucket_name
        ASSERT_FALSE(S3CrtARN("arn:aws:s3:us-east-1:123456789120:bucket_name:bucket").Validate().IsSuccess());
        // Empty resource ID
        ASSERT_FALSE(S3CrtARN("arn:aws:s3:us-east-1:123456789120:accesspoint:").Validate().IsSuccess());
        // Invalid resource ID with non RFC 3986 Host label
        ASSERT_FALSE(S3CrtARN("arn:aws:s3:us-east-1:123456789120:accesspoint:endpoint.1").Validate().IsSuccess());
        ASSERT_FALSE(S3CrtARN("arn:aws:s3:us-east-1:123456789120:accesspoint:*").Validate().IsSuccess());
        // Invalid resource ID with qualifier, namely, the third part of the resource segments.
        ASSERT_FALSE(S3CrtARN("arn:aws:s3:us-east-1:123456789120:accesspoint:bucket:qualifier").Validate().IsSuccess());
        // Non empty sub resource.
        ASSERT_FALSE(S3CrtARN("arn:aws:s3:us-east-1:123456789120:accesspoint:endpoint:bucket:bucket-name").Validate().IsSuccess());
        ASSERT_FALSE(S3CrtARN("arn:aws:s3:us-east-1:123456789120:accesspoint:endpoint::object-name").Validate().IsSuccess());
    }

    TEST_F(BucketAndObjectOperationTest, TestS3CrtEndpointForAccessPointARN)
    {
        ASSERT_STREQ("endpoint-123456789120.s3-accesspoint.us-east-1.amazonaws.com",
            S3CrtEndpoint::ForAccessPointArn(S3CrtARN("arn:aws:s3:us-east-1:123456789120:accesspoint:endpoint"), "", false).c_str());
        ASSERT_STREQ("endpoint-123456789120.s3-accesspoint.us-east-1.amazonaws.com",
            S3CrtEndpoint::ForAccessPointArn(S3CrtARN("arn:aws:s3:us-east-1:123456789120:accesspoint/endpoint"), "", false).c_str());
        ASSERT_STREQ("endpoint-123456789120.s3-accesspoint.dualstack.us-east-1.amazonaws.com",
            S3CrtEndpoint::ForAccessPointArn(S3CrtARN("arn:aws:s3:us-east-1:123456789120:accesspoint:endpoint"), "", true).c_str());
        ASSERT_STREQ("endpoint-123456789120.s3-accesspoint.cn-north-1.amazonaws.com.cn",
            S3CrtEndpoint::ForAccessPointArn(S3CrtARN("arn:aws-cn:s3:cn-north-1:123456789120:accesspoint:endpoint"), "", false).c_str());
        ASSERT_STREQ("endpoint-123456789120.s3-accesspoint.dualstack.cn-north-1.amazonaws.com.cn",
            S3CrtEndpoint::ForAccessPointArn(S3CrtARN("arn:aws-cn:s3:cn-north-1:123456789120:accesspoint:endpoint"), "", true).c_str());
        ASSERT_STREQ("endpoint-123456789120.s3-accesspoint.us-east-1-fips.amazonaws.com",
            S3CrtEndpoint::ForAccessPointArn(S3CrtARN("arn:aws:s3:us-east-1:123456789120:accesspoint:endpoint"), "us-east-1-fips", false).c_str());
        ASSERT_STREQ("endpoint-123456789120.s3-accesspoint.fips-us-gov-west-1.amazonaws.com",
            S3CrtEndpoint::ForAccessPointArn(S3CrtARN("arn:aws-us-gov:s3:us-gov-west-1:123456789120:accesspoint:endpoint"), "fips-us-gov-west-1", false).c_str());
        ASSERT_STREQ("endpoint-123456789120.s3-accesspoint.dualstack.fips-us-gov-west-1.amazonaws.com",
            S3CrtEndpoint::ForAccessPointArn(S3CrtARN("arn:aws-us-gov:s3:us-gov-west-1:123456789120:accesspoint:endpoint"), "fips-us-gov-west-1", true).c_str());
    }

    TEST_F(BucketAndObjectOperationTest, TestS3OutpostsARNValidation)
    {
        // The followings are examples for valid S3Crt ARN:
        ASSERT_TRUE(S3CrtARN("arn:aws:s3-outposts:us-east-1:123456789120:outpost:outpost-id:accesspoint:access-point-name").Validate().IsSuccess());
        ASSERT_TRUE(S3CrtARN("arn:aws:s3-outposts:us-east-1:123456789120:outpost/outpost-id/accesspoint/access-point-name").Validate().IsSuccess());

        // The followings are examples for invalid S3Crt ARN:
        // S3CrtARN partition
        // Invalid partition: cn-aws
        ASSERT_FALSE(S3CrtARN("arn:cn-aws:s3-outposts:us-east-1:123456789120:outpost:outpost-id:accesspoint:access-point-name").Validate().IsSuccess());
        // Empty partition name
        ASSERT_FALSE(S3CrtARN("arn::s3-outposts:us-east-1:123456789120:outpost:outpost-id:accesspoint:access-point-name").Validate().IsSuccess());

        // S3CrtARN service
        // Invalid service: EC2
        ASSERT_FALSE(S3CrtARN("arn:aws:ec2:us-east-1:123456789120:outpost:outpost-id:accesspoint:access-point-name").Validate().IsSuccess());
        // Empty service name
        ASSERT_FALSE(S3CrtARN("arn:aws::us-east-1:123456789120:outpost:outpost-id:accesspoint:access-point-name").Validate().IsSuccess());
        // Invalid service name with upper case
        ASSERT_FALSE(S3CrtARN("arn:aws:S3Crt-outposts:us-east-1:123456789120:outpost:outpost-id:accesspoint:access-point-name").Validate().IsSuccess());

        // S3CrtARN region
        // Outposts ARN doesn't support fips region right now
        ASSERT_FALSE(S3CrtARN("arn:aws-us-gov:s3-outposts:fips-us-gov-west-1:123456789120:outpost:outpost-id:accesspoint:access-point-name").Validate().IsSuccess());
        ASSERT_FALSE(S3CrtARN("arn:aws-us-gov:s3-outposts:us-gov-west-1:123456789120:outpost:outpost-id:accesspoint:access-point-name").Validate("fips-us-gov-west-1").IsSuccess());
        ASSERT_FALSE(S3CrtARN("arn:aws:s3-outposts:us-east-1:123456789120:outpost:outpost-id:accesspoint:access-point-name").Validate("us-east-1-fips").IsSuccess());
        // Cross region ARN when useArnRegion = false
        ASSERT_FALSE(S3CrtARN("arn:aws:s3-outposts:us-west-1:123456789120:outpost:outpost-id:accesspoint:access-point-name").Validate("us-east-1").IsSuccess());
        // Empty region name
        ASSERT_FALSE(S3CrtARN("arn:aws:s3-outposts::123456789120:outpost:outpost-id:accesspoint:access-point-name").Validate().IsSuccess());

        // S3CrtARN account id
        // Invalid account ID with non RFC 3986 Host label
        ASSERT_FALSE(S3CrtARN("arn:aws:s3-outposts:us-east-1:12345.678912:outpost:outpost-id:accesspoint:access-point-name").Validate().IsSuccess());
        // Empty account ID
        ASSERT_FALSE(S3CrtARN("arn:aws:s3-outposts:us-east-1::outpost:outpost-id:accesspoint:access-point-name").Validate().IsSuccess());

        // S3CrtARN resource type
        // Invalid resource type: bucket_name
        ASSERT_FALSE(S3CrtARN("arn:aws:s3-outposts:us-east-1:123456789120:bucket_name:bucket:accesspoint:access-point-name").Validate().IsSuccess());
        // Empty outpost ID
        ASSERT_FALSE(S3CrtARN("arn:aws:s3-outposts:us-east-1:123456789120:outpost::accesspoint:access-point-name").Validate().IsSuccess());
        // Missing access point
        ASSERT_FALSE(S3CrtARN("arn:aws:s3-outposts:us-east-1:123456789120:outpost:outpost-id").Validate().IsSuccess());
        ASSERT_FALSE(S3CrtARN("arn:aws:s3-outposts:us-east-1:123456789120:outpost:outpost-id:accesspoint").Validate().IsSuccess());
        // Invalid outpost ID with non RFC 3986 Host label
        ASSERT_FALSE(S3CrtARN("arn:aws:s3-outposts:us-east-1:123456789120:outpost:outpost.id:accesspoint:access-point-name").Validate().IsSuccess());
        ASSERT_FALSE(S3CrtARN("arn:aws:s3-outposts:us-east-1:123456789120:outpost:*:accesspoint:access-point-name").Validate().IsSuccess());
        // Invalid sub resource type: access-point
        ASSERT_FALSE(S3CrtARN("arn:aws:s3-outposts:us-east-1:123456789120:outpost:outpost-id:access-point:access-point-name").Validate().IsSuccess());
        // Invald access point name with non RFC 3986 Host label
        ASSERT_FALSE(S3CrtARN("arn:aws:s3-outposts:us-east-1:123456789120:outpost:outpost-id:accesspoint:access.point.name").Validate().IsSuccess());
        // Empty access point name
        ASSERT_FALSE(S3CrtARN("arn:aws:s3-outposts:us-east-1:123456789120:outpost:outpost-id:accesspoint:").Validate().IsSuccess());
    }

    TEST_F(BucketAndObjectOperationTest, TestS3CrtEndpointForOutpostsARN)
    {
        ASSERT_STREQ("access-point-name-123456789120.outpost-id.s3-outposts.us-east-1.amazonaws.com",
            S3CrtEndpoint::ForOutpostsArn(S3CrtARN("arn:aws:s3-outposts:us-east-1:123456789120:outpost:outpost-id:accesspoint:access-point-name"), "").c_str());
        ASSERT_STREQ("access-point-name-123456789120.outpost-id.s3-outposts.us-east-1.amazonaws.com",
            S3CrtEndpoint::ForOutpostsArn(S3CrtARN("arn:aws:s3-outposts:us-east-1:123456789120:outpost/outpost-id/accesspoint/access-point-name"), "").c_str());
        ASSERT_STREQ("access-point-name-123456789120.outpost-id.s3-outposts.cn-north-1.amazonaws.com.cn",
            S3CrtEndpoint::ForOutpostsArn(S3CrtARN("arn:aws-cn:s3-outposts:cn-north-1:123456789120:outpost:outpost-id:accesspoint:access-point-name"), "").c_str());
    }

}
