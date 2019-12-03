/*
* Copyright 2010-2018 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/ratelimiter/DefaultRateLimiter.h>
#include <aws/core/utils/UUID.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/testing/TestingEnvironment.h>
#include <aws/s3/S3Client.h>
#include <aws/s3/model/CreateBucketRequest.h>
#include <aws/s3/model/HeadBucketRequest.h>
#include <aws/s3/model/DeleteBucketRequest.h>
#include <aws/s3/model/HeadObjectRequest.h>
#include <aws/s3control/S3ControlClient.h>
#include <aws/s3control/model/PutPublicAccessBlockRequest.h>
#include <aws/s3control/model/GetPublicAccessBlockRequest.h>
#include <aws/s3control/model/DeletePublicAccessBlockRequest.h>
#include <aws/s3control/model/CreateAccessPointRequest.h>
#include <aws/s3control/model/GetAccessPointRequest.h>
#include <aws/s3control/model/DeleteAccessPointRequest.h>
#include <aws/access-management/AccessManagementClient.h>
#include <aws/iam/IAMClient.h>
#include <aws/cognito-identity/CognitoIdentityClient.h>

using namespace Aws;
using namespace Aws::Http;
using namespace Aws::Client;
using namespace Aws::S3Control;
using namespace Aws::S3Control::Model;

namespace
{
    static const char ALLOCATION_TAG[] = "S3ControlTest";
    static const char BASE_BUCKET_NAME[] = "accesspointbucket";
    static const char BASE_ACCESS_POINT[] = "accesspoint";
    static const char PRESIGNED_URLS_BUCKET_NAME[] = "presignedaccesspointbucket";
    static const char PRESIGNED_URLS_ACCESS_POINT[] = "presignedaccesspoint";
    static const char TEST_OBJECT_KEY[] = "TestObjectKey";
    static const int TIMEOUT_MAX = 20;

    class S3ControlTest : public ::testing::Test
    {
    public:
        S3ControlClient m_client;
        S3::S3Client m_s3Client;
        Aws::String m_accountId;
        std::shared_ptr<HttpClient> m_httpClient;

        Aws::Vector<std::pair<const char*, Aws::String>> m_environments;

        S3ControlTest()
        {
            // Create a client
            ClientConfiguration config;
            config.region = Aws::Region::US_WEST_2;
            config.scheme = Scheme::HTTPS;
            config.connectTimeoutMs = 30000;
            config.requestTimeoutMs = 30000;
            m_client = S3ControlClient(config);
            m_s3Client = S3::S3Client(config);
            m_httpClient = Aws::Http::CreateHttpClient(config);

            // IAM client has to use us-east-1 in its signer.
            config.region = Aws::Region::US_EAST_1;
            auto iamClient = Aws::MakeShared<Aws::IAM::IAMClient>(ALLOCATION_TAG, config);
            auto cognitoClient = Aws::MakeShared<Aws::CognitoIdentity::CognitoIdentityClient>(ALLOCATION_TAG, config);
            Aws::AccessManagement::AccessManagementClient accessManagementClient(iamClient, cognitoClient);
            m_accountId = accessManagementClient.GetAccountId();
        }

    protected:

        Aws::String BuildResourceName(const char* baseAccessPoint)
        {
            // In case the length exceeds the limits.
            return Aws::Testing::GetAwsResourcePrefix() + baseAccessPoint + Aws::Utils::StringUtils::ToLower(GetRandomUUID().substr(0, 8).c_str());
        }

        static Aws::String GetRandomUUID()
        {
            static const Aws::Utils::UUID resourceUUID = Aws::Utils::UUID::RandomUUID();
            return resourceUUID;
        }

        static bool WaitForBucketToPropagate(const Aws::String& bucketName, const S3::S3Client& client)
        {
            unsigned timeoutCount = 0;
            while (timeoutCount++ < TIMEOUT_MAX)
            {
                S3::Model::HeadBucketRequest headBucketRequest;
                headBucketRequest.SetBucket(bucketName);
                auto headBucketOutcome = client.HeadBucket(headBucketRequest);
                if (headBucketOutcome.IsSuccess())
                {
                    return true;
                }

                std::this_thread::sleep_for(std::chrono::seconds(10));
            }

            return false;
        }

        static bool WaitForObjectToPropagate(const Aws::String& accessPointArn, const char* objectKey, const S3::S3Client& client)
        {
            unsigned timeoutCount = 0;
            while (timeoutCount++ < TIMEOUT_MAX)
            {
                S3::Model::HeadObjectRequest headObjectRequest;
                headObjectRequest.SetBucket(accessPointArn);
                headObjectRequest.SetKey(objectKey);
                auto headObjectOutcome = client.HeadObject(headObjectRequest);
                if (headObjectOutcome.IsSuccess())
                {
                    return true;
                }

                std::this_thread::sleep_for(std::chrono::seconds(1));
            }

            return false;
        }

        void PrepareAccessPointTest(const Aws::String& bucketName, const Aws::String& accessPoint)
        {
            m_environments.emplace_back("AWS_S3_USE_ARN_REGION", Aws::Environment::GetEnv("AWS_S3_USE_ARN_REGION"));
            Aws::Environment::UnSetEnv("AWS_S3_USE_ARN_REGION");

            S3::Model::CreateBucketRequest createBucketRequest;
            S3::Model::CreateBucketConfiguration bucketConfiguration;
            bucketConfiguration.SetLocationConstraint(S3::Model::BucketLocationConstraint::us_west_2);
            createBucketRequest.SetBucket(bucketName);
            createBucketRequest.SetCreateBucketConfiguration(bucketConfiguration);
            auto createBucketOutcome = m_s3Client.CreateBucket(createBucketRequest);
            ASSERT_TRUE(createBucketOutcome.IsSuccess());
            ASSERT_TRUE(WaitForBucketToPropagate(bucketName, m_s3Client));

            CreateAccessPointRequest createAccessPointRequest;
            createAccessPointRequest.SetName(accessPoint);
            createAccessPointRequest.SetAccountId(m_accountId);
            createAccessPointRequest.SetBucket(bucketName);
            auto createAccessPointOutcome = m_client.CreateAccessPoint(createAccessPointRequest);
            ASSERT_TRUE(createAccessPointOutcome.IsSuccess());
        }

        void CleanUpAccessPointTest(const Aws::String& bucketName, const Aws::String& accessPoint)
        {
            DeleteAccessPointRequest deleteAccessPointRequest;
            deleteAccessPointRequest.SetName(accessPoint);
            deleteAccessPointRequest.SetAccountId(m_accountId);
            auto deleteAccessPointOutcome = m_client.DeleteAccessPoint(deleteAccessPointRequest);
            ASSERT_TRUE(deleteAccessPointOutcome.IsSuccess());

            S3::Model::DeleteBucketRequest deleteBucketRequest;
            deleteBucketRequest.SetBucket(bucketName);
            auto deleteBucketOutcome = m_s3Client.DeleteBucket(deleteBucketRequest);
            ASSERT_TRUE(deleteBucketOutcome.IsSuccess());

            for(const auto& iter : m_environments)
            {
                if(iter.second.empty())
                {
                    Aws::Environment::UnSetEnv(iter.first);
                }
                else
                {
                    Aws::Environment::SetEnv(iter.first, iter.second.c_str(), 1);
                }
            }
        }

        void DoPresignedUrlTest(const Aws::String& accessPointArn, std::shared_ptr<HttpRequest>& putRequest)
        {
            std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>("BucketAndObjectOperationTest");
            *objectStream << "Test Object";
            objectStream->flush();

            putRequest->AddContentBody(objectStream);
            Aws::StringStream intConverter;
            intConverter << objectStream->tellp();
            putRequest->SetContentLength(intConverter.str());
            putRequest->SetContentType("text/plain");
            std::shared_ptr<HttpResponse> putResponse = m_httpClient->MakeRequest(putRequest);

            ASSERT_EQ(HttpResponseCode::OK, putResponse->GetResponseCode());

            WaitForObjectToPropagate(accessPointArn, TEST_OBJECT_KEY, m_s3Client);

            // GetObject with presigned url
            Aws::String presignedUrlGet = m_s3Client.GeneratePresignedUrl(accessPointArn, TEST_OBJECT_KEY, HttpMethod::HTTP_GET);
            std::shared_ptr<HttpRequest> getRequest = CreateHttpRequest(presignedUrlGet, HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
            std::shared_ptr<HttpResponse> getResponse = m_httpClient->MakeRequest(getRequest);

            ASSERT_EQ(HttpResponseCode::OK, getResponse->GetResponseCode());
            Aws::StringStream ss;
            ss << getResponse->GetResponseBody().rdbuf();
            ASSERT_STREQ("Test Object", ss.str().c_str());

            // DeleteObject with presigned url
            Aws::String presignedUrlDelete = m_s3Client.GeneratePresignedUrl(accessPointArn, TEST_OBJECT_KEY, HttpMethod::HTTP_DELETE);
            std::shared_ptr<HttpRequest> deleteRequest = CreateHttpRequest(presignedUrlDelete, HttpMethod::HTTP_DELETE, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
            std::shared_ptr<HttpResponse> deleteResponse = m_httpClient->MakeRequest(deleteRequest);
            ASSERT_EQ(HttpResponseCode::NO_CONTENT, deleteResponse->GetResponseCode());
        }
    };

    TEST_F(S3ControlTest, TestPublicAccessBlockOperations)
    {
        GetPublicAccessBlockRequest getPublicAccessBlockRequest;
        getPublicAccessBlockRequest.SetAccountId(m_accountId);
        auto getPublicAccessBlockOutcome = m_client.GetPublicAccessBlock(getPublicAccessBlockRequest);
        ASSERT_FALSE(getPublicAccessBlockOutcome.IsSuccess());
        ASSERT_EQ(S3ControlErrors::NO_SUCH_PUBLIC_ACCESS_BLOCK_CONFIGURATION, getPublicAccessBlockOutcome.GetError().GetErrorType());

        PutPublicAccessBlockRequest putPublicAccessBlockRequest;
        PublicAccessBlockConfiguration publicAccessBlockConfiguration;
        publicAccessBlockConfiguration.SetBlockPublicPolicy(true);
        putPublicAccessBlockRequest.SetPublicAccessBlockConfiguration(publicAccessBlockConfiguration);
        putPublicAccessBlockRequest.SetAccountId(m_accountId);
        auto putPublicAccessBlockOutcome = m_client.PutPublicAccessBlock(putPublicAccessBlockRequest);
        ASSERT_TRUE(putPublicAccessBlockOutcome.IsSuccess());

        DeletePublicAccessBlockRequest deletePublicAccessBlockRequest;
        deletePublicAccessBlockRequest.SetAccountId(m_accountId);
        auto deletePublicAccessBlockOutcome = m_client.DeletePublicAccessBlock(deletePublicAccessBlockRequest);
        ASSERT_TRUE(deletePublicAccessBlockOutcome.IsSuccess());
    }

    TEST_F(S3ControlTest, TestDualStackEndpoint)
    {
        ClientConfiguration config;
        config.region = Aws::Region::US_EAST_1;
        config.scheme = Scheme::HTTPS;
        config.useDualStack = true;
        S3ControlClient s3ControlClient(config);

        GetPublicAccessBlockRequest getPublicAccessBlockRequest;
        getPublicAccessBlockRequest.SetAccountId(m_accountId);
        auto getPublicAccessBlockOutcome = s3ControlClient.GetPublicAccessBlock(getPublicAccessBlockRequest);
        ASSERT_FALSE(getPublicAccessBlockOutcome.IsSuccess());
        ASSERT_EQ(S3ControlErrors::NO_SUCH_PUBLIC_ACCESS_BLOCK_CONFIGURATION, getPublicAccessBlockOutcome.GetError().GetErrorType());

        PutPublicAccessBlockRequest putPublicAccessBlockRequest;
        PublicAccessBlockConfiguration publicAccessBlockConfiguration;
        publicAccessBlockConfiguration.SetIgnorePublicAcls(true);
        putPublicAccessBlockRequest.SetPublicAccessBlockConfiguration(publicAccessBlockConfiguration);
        putPublicAccessBlockRequest.SetAccountId(m_accountId);
        auto putPublicAccessBlockOutcome = s3ControlClient.PutPublicAccessBlock(putPublicAccessBlockRequest);
        ASSERT_TRUE(putPublicAccessBlockOutcome.IsSuccess());

        DeletePublicAccessBlockRequest deletePublicAccessBlockRequest;
        deletePublicAccessBlockRequest.SetAccountId(m_accountId);
        auto deletePublicAccessBlockOutcome = s3ControlClient.DeletePublicAccessBlock(deletePublicAccessBlockRequest);
        ASSERT_TRUE(deletePublicAccessBlockOutcome.IsSuccess());
    }

    TEST_F(S3ControlTest, TestInvalidAccountId)
    {
        PutPublicAccessBlockRequest putPublicAccessBlockRequest;
        PublicAccessBlockConfiguration publicAccessBlockConfiguration;
        publicAccessBlockConfiguration.SetBlockPublicPolicy(true);
        putPublicAccessBlockRequest.SetPublicAccessBlockConfiguration(publicAccessBlockConfiguration);
        putPublicAccessBlockRequest.SetAccountId("fakeaccountid");

        auto putPublicAccessBlockOutcome = m_client.PutPublicAccessBlock(putPublicAccessBlockRequest);
        ASSERT_FALSE(putPublicAccessBlockOutcome.IsSuccess());

        // The account id shoud be a valid DNS label. Otherwise we will not make the request.
        putPublicAccessBlockRequest.SetAccountId("invalid.account.id");

        putPublicAccessBlockOutcome = m_client.PutPublicAccessBlock(putPublicAccessBlockRequest);
        ASSERT_FALSE(putPublicAccessBlockOutcome.IsSuccess());
        ASSERT_EQ(CoreErrors::VALIDATION, static_cast<CoreErrors>(putPublicAccessBlockOutcome.GetError().GetErrorType()));
    }

    TEST_F(S3ControlTest, TestS3AccessPointEndpoint)
    {
        Aws::String bucketName = BuildResourceName(BASE_BUCKET_NAME);
        Aws::String accessPoint = BuildResourceName(BASE_ACCESS_POINT);

        PrepareAccessPointTest(bucketName, accessPoint);
        S3::Model::HeadBucketRequest headBucketRequest;
        Aws::StringStream ss;
        ss << "arn:aws:s3:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":accesspoint:" << accessPoint;
        Aws::String accessPointArn = ss.str();
        headBucketRequest.SetBucket(accessPointArn);
        auto headBucketOutcome = m_s3Client.HeadBucket(headBucketRequest);
        ASSERT_TRUE(headBucketOutcome.IsSuccess());

        // Invalid service name
        ss.str("");
        ss << "arn:aws:sqs:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":accesspoint:" << accessPoint;
        headBucketRequest.SetBucket(ss.str());
        headBucketOutcome = m_s3Client.HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        ASSERT_EQ(S3::S3Errors::VALIDATION, headBucketOutcome.GetError().GetErrorType());

        // Invalid resource type
        ss.str("");
        ss << "arn:aws:s3:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":bucket_name:" << accessPoint;
        headBucketRequest.SetBucket(ss.str());
        headBucketOutcome = m_s3Client.HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        ASSERT_EQ(S3::S3Errors::VALIDATION, headBucketOutcome.GetError().GetErrorType());

        // Empty region
        ss.str("");
        ss << "arn:aws:s3:" << "" << ":" << m_accountId << ":accesspoint:" << accessPoint;
        headBucketRequest.SetBucket(ss.str());
        headBucketOutcome = m_s3Client.HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        ASSERT_EQ(S3::S3Errors::VALIDATION, headBucketOutcome.GetError().GetErrorType());

        // Empty account ID
        ss.str("");
        ss << "arn:aws:s3:" << Aws::Region::US_WEST_2 << ":" << "" << ":accesspoint:" << accessPoint;
        headBucketRequest.SetBucket(ss.str());
        headBucketOutcome = m_s3Client.HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        ASSERT_EQ(S3::S3Errors::VALIDATION, headBucketOutcome.GetError().GetErrorType());

        // Invalid account ID
        ss.str("");
        ss << "arn:aws:s3:" << Aws::Region::US_WEST_2 << ":." << m_accountId << ".:accesspoint:" << accessPoint;
        headBucketRequest.SetBucket(ss.str());
        headBucketOutcome = m_s3Client.HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        ASSERT_EQ(S3::S3Errors::VALIDATION, headBucketOutcome.GetError().GetErrorType());

        // Missing Access Point name
        ss.str("");
        ss << "arn:aws:s3:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":accesspoint:";
        headBucketRequest.SetBucket(ss.str());
        headBucketOutcome = m_s3Client.HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        ASSERT_EQ(S3::S3Errors::VALIDATION, headBucketOutcome.GetError().GetErrorType());

        // Missing Access Point name
        ss.str("");
        ss << "arn:aws:s3:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":accesspoint";
        headBucketRequest.SetBucket(ss.str());
        headBucketOutcome = m_s3Client.HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        ASSERT_EQ(S3::S3Errors::VALIDATION, headBucketOutcome.GetError().GetErrorType());

        // Invalid Access Point Name
        ss.str("");
        ss << "arn:aws:s3:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":accesspoint:*";
        headBucketRequest.SetBucket(ss.str());
        headBucketOutcome = m_s3Client.HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        ASSERT_EQ(S3::S3Errors::VALIDATION, headBucketOutcome.GetError().GetErrorType());

        // Invalid Access Point Name
        ss.str("");
        ss << "arn:aws:s3:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":accesspoint:my.bucket";
        headBucketRequest.SetBucket(ss.str());
        headBucketOutcome = m_s3Client.HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        ASSERT_EQ(S3::S3Errors::VALIDATION, headBucketOutcome.GetError().GetErrorType());

        // Invalid Access Point Name, containing sub resources
        ss.str("");
        ss << "arn:aws:s3:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":accesspoint:mybucket:object:foo";
        headBucketRequest.SetBucket(ss.str());
        headBucketOutcome = m_s3Client.HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        ASSERT_EQ(S3::S3Errors::VALIDATION, headBucketOutcome.GetError().GetErrorType());

        // Using dualstack
        ClientConfiguration config;
        config.region = Aws::Region::US_WEST_2;
        config.useDualStack = true;
        S3::S3Client s3ClientInUsWest2UsingDualStack(config);
        headBucketRequest.SetBucket(accessPointArn);
        headBucketOutcome = s3ClientInUsWest2UsingDualStack.HeadBucket(headBucketRequest);
        ASSERT_TRUE(headBucketOutcome.IsSuccess());

        config.region = Aws::Region::US_EAST_1;
        config.useDualStack = false;
        S3::S3Client s3ClientInUsEast1(config);
        headBucketOutcome = s3ClientInUsEast1.HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        ASSERT_EQ(S3::S3Errors::VALIDATION, headBucketOutcome.GetError().GetErrorType());

        // The following tests are using region in ARN when making requests.
        Aws::Environment::SetEnv("AWS_S3_USE_ARN_REGION", "true", 1);

        config.region = Aws::Region::US_EAST_1;
        S3::S3Client s3ClientInUsEast1usingArnRegion(config);
        headBucketOutcome = s3ClientInUsEast1usingArnRegion.HeadBucket(headBucketRequest);
        ASSERT_TRUE(headBucketOutcome.IsSuccess());

        // Using custom endpoint
        config.region = Aws::Region::US_WEST_2;
        config.endpointOverride = "s3.amazonaws.com";
        S3::S3Client s3ClientInUsWest2UsingCustomEndpoint(config);
        headBucketOutcome = s3ClientInUsWest2UsingCustomEndpoint.HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        ASSERT_EQ(S3::S3Errors::VALIDATION, headBucketOutcome.GetError().GetErrorType());

        // Using path style addressing
        config.endpointOverride = "";
        S3::S3Client s3ClientInUsWest2UsingPathStyleAddressing(config, AWSAuthV4Signer::PayloadSigningPolicy::Never /*signPayloads*/, false /*useVirtualAddressing*/);
        headBucketOutcome = s3ClientInUsWest2UsingPathStyleAddressing.HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        ASSERT_EQ(S3::S3Errors::VALIDATION, headBucketOutcome.GetError().GetErrorType());

        CleanUpAccessPointTest(bucketName, accessPoint);
    }

    TEST_F(S3ControlTest, TestS3AccessPointWithPresignedUrls)
    {
        Aws::String bucketName = BuildResourceName(PRESIGNED_URLS_BUCKET_NAME);
        Aws::String accessPoint = BuildResourceName(PRESIGNED_URLS_ACCESS_POINT);

        PrepareAccessPointTest(bucketName, accessPoint);

        Aws::StringStream ss;
        ss << "arn:aws:s3:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":accesspoint:" << accessPoint;
        Aws::String accessPointArn = ss.str();

        Aws::String presignedUrlPut = m_s3Client.GeneratePresignedUrl(accessPointArn, TEST_OBJECT_KEY, HttpMethod::HTTP_PUT);
        std::shared_ptr<HttpRequest> putRequest = CreateHttpRequest(presignedUrlPut, HttpMethod::HTTP_PUT, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        DoPresignedUrlTest(accessPointArn, putRequest);

        ClientConfiguration config;
        config.region = Aws::Region::US_EAST_1;
        S3::S3Client s3ClientInUsEast1(config);
        presignedUrlPut = s3ClientInUsEast1.GeneratePresignedUrl(accessPointArn, TEST_OBJECT_KEY, HttpMethod::HTTP_PUT);
        ASSERT_STREQ("", presignedUrlPut.c_str());

        // The following tests are using region in ARN when making requests.
        Aws::Environment::SetEnv("AWS_S3_USE_ARN_REGION", "true", 1);

        S3::S3Client s3ClientInUsEast1UsingArnRegion(config);
        presignedUrlPut = s3ClientInUsEast1UsingArnRegion.GeneratePresignedUrl(accessPointArn, TEST_OBJECT_KEY, HttpMethod::HTTP_PUT);
        putRequest = CreateHttpRequest(presignedUrlPut, HttpMethod::HTTP_PUT, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        DoPresignedUrlTest(accessPointArn, putRequest);

        CleanUpAccessPointTest(bucketName, accessPoint);
    }
}
