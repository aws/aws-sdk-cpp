/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/internal/AWSHttpResourceClient.h>
#include <aws/testing/mocks/http/MockHttpClient.h>

#include <fstream>

using namespace Aws::Utils;
using namespace Aws::Client;
using namespace Aws::Http;
using namespace Aws::Http::Standard;
using namespace Aws::Internal;

static const char* ALLOCATION_TAG = "AWSHttpResourceClientTest";

namespace
{
    class AWSHttpResourceClientTest : public ::testing::Test
    {
    protected:
        std::shared_ptr<MockHttpClient> mockHttpClient;
        std::shared_ptr<MockHttpClientFactory> mockHttpClientFactory;

        void SetUp()
        {
            // Create a client
            ClientConfiguration config;
            config.scheme = Scheme::HTTP;
            config.connectTimeoutMs = 30000;
            config.requestTimeoutMs = 30000;           

            mockHttpClient = Aws::MakeShared<MockHttpClient>(ALLOCATION_TAG);
            mockHttpClientFactory = Aws::MakeShared<MockHttpClientFactory>(ALLOCATION_TAG);
            mockHttpClientFactory->SetClient(mockHttpClient);
            SetHttpClientFactory(mockHttpClientFactory);
        }

        void TearDown()
        {
            mockHttpClient = nullptr;
            mockHttpClientFactory = nullptr;

            CleanupHttp();
            InitHttp();
        }
    };

    TEST_F(AWSHttpResourceClientTest, TestAWSHttpResourceClientWithEmptyResponse)
    {
        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> request = CreateHttpRequest(URI("http://www.uri.com/path/to/res"), 
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> response = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*request));
        response->SetResponseCode(HttpResponseCode::OK);
        response->GetResponseBody() << "";
        mockHttpClient->AddResponseToReturn(response);

        auto awsHttpResourceClient = Aws::MakeShared<Aws::Internal::AWSHttpResourceClient>(ALLOCATION_TAG, ALLOCATION_TAG);
        Aws::String result = awsHttpResourceClient->GetResource("http://www.uri.com", "/path/to/res");
        
        auto mockRequest = mockHttpClient->GetMostRecentHttpRequest();
        ASSERT_EQ("http://www.uri.com/path/to/res", mockRequest.GetURIString());
        ASSERT_EQ(Aws::Http::Scheme::HTTP, mockRequest.GetUri().GetScheme());
        ASSERT_EQ("www.uri.com", mockRequest.GetUri().GetAuthority());
        ASSERT_EQ("/path/to/res", mockRequest.GetUri().GetPath());
        ASSERT_EQ("", result);
    }

    TEST_F(AWSHttpResourceClientTest, TestAWSHttpResourceClientFailedWithHttpBadRequest)
    {
        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> request = CreateHttpRequest(URI("http://www.uri.com/path/to/res"), 
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> response = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*request));
        response->SetResponseCode(HttpResponseCode::BAD_REQUEST);
        response->GetResponseBody() << "{ \"Resource\": \"TestResource\" }";
        mockHttpClient->AddResponseToReturn(response);

        auto awsHttpResourceClient = Aws::MakeShared<Aws::Internal::AWSHttpResourceClient>(ALLOCATION_TAG, ALLOCATION_TAG);
        Aws::String result = awsHttpResourceClient->GetResource("http://www.uri.com", "/path/to/res");

        auto mockRequest = mockHttpClient->GetMostRecentHttpRequest();
        ASSERT_EQ("http://www.uri.com/path/to/res", mockRequest.GetURIString());
        ASSERT_EQ(Aws::Http::Scheme::HTTP, mockRequest.GetUri().GetScheme());
        ASSERT_EQ("www.uri.com", mockRequest.GetUri().GetAuthority());
        ASSERT_EQ("/path/to/res", mockRequest.GetUri().GetPath());

        ASSERT_EQ("", result);       
    }

    TEST_F(AWSHttpResourceClientTest, TestAWSHttpResourceClientGetExpectedResource)
    {
        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> request = CreateHttpRequest(URI("http://www.uri.com/path/to/res"), 
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> response = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*request));
        response->SetResponseCode(HttpResponseCode::OK);
        response->GetResponseBody() << "{ \"Resource\": \"TestResource\" }";
        mockHttpClient->AddResponseToReturn(response);

        auto awsHttpResourceClient = Aws::MakeShared<Aws::Internal::AWSHttpResourceClient>(ALLOCATION_TAG, ALLOCATION_TAG);
        Aws::String result = awsHttpResourceClient->GetResource("http://www.uri.com", "/path/to/res");
        
        auto mockRequest = mockHttpClient->GetMostRecentHttpRequest();
        ASSERT_EQ("http://www.uri.com/path/to/res", mockRequest.GetURIString());
        ASSERT_EQ(Aws::Http::Scheme::HTTP, mockRequest.GetUri().GetScheme());
        ASSERT_EQ("www.uri.com", mockRequest.GetUri().GetAuthority());
        ASSERT_EQ("/path/to/res", mockRequest.GetUri().GetPath());
        ASSERT_EQ("{ \"Resource\": \"TestResource\" }", result);
    }

    TEST_F(AWSHttpResourceClientTest, TestEC2MetadataClientFailedWithEmptySecurityCredentialsStringResponse)
    {
        // Create EC2MetadataClient with default endpoint http://169.254.169.254
        auto ec2MetadataClient = Aws::MakeShared<Aws::Internal::EC2MetadataClient>(ALLOCATION_TAG);

        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> secureRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/meta-data/iam/security-credentials"), 
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> secureResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*secureRequest));
        secureResponse->SetResponseCode(HttpResponseCode::OK);
        secureResponse->GetResponseBody() << "";
        mockHttpClient->AddResponseToReturn(secureResponse);

        auto cred = ec2MetadataClient->GetDefaultCredentials();
        auto mockRequest = mockHttpClient->GetMostRecentHttpRequest();

        ASSERT_EQ("http://169.254.169.254/latest/meta-data/iam/security-credentials", mockRequest.GetURIString());
        ASSERT_EQ(Aws::Http::Scheme::HTTP, mockRequest.GetUri().GetScheme());
        ASSERT_EQ("169.254.169.254", mockRequest.GetUri().GetAuthority());
        ASSERT_EQ("/latest/meta-data/iam/security-credentials", mockRequest.GetUri().GetPath());
        
        ASSERT_EQ("", cred);
    }

    TEST_F(AWSHttpResourceClientTest, TestEC2MetadataClientFailedWithMalformedSecurityCredentialsString)
    {
        // Create EC2MetadataClient with default endpoint http://169.254.169.254
        auto ec2MetadataClient = Aws::MakeShared<Aws::Internal::EC2MetadataClient>(ALLOCATION_TAG);

        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> secureRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/meta-data/iam/security-credentials"), 
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> secureResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*secureRequest));
        secureResponse->SetResponseCode(HttpResponseCode::OK);
        secureResponse->GetResponseBody() << " \n \t ";
        mockHttpClient->AddResponseToReturn(secureResponse);

        auto cred = ec2MetadataClient->GetDefaultCredentials();
        auto mockRequest = mockHttpClient->GetMostRecentHttpRequest();

        ASSERT_EQ("http://169.254.169.254/latest/meta-data/iam/security-credentials", mockRequest.GetURIString());
        ASSERT_EQ(Aws::Http::Scheme::HTTP, mockRequest.GetUri().GetScheme());
        ASSERT_EQ("169.254.169.254", mockRequest.GetUri().GetAuthority());
        ASSERT_EQ("/latest/meta-data/iam/security-credentials", mockRequest.GetUri().GetPath());
        
        ASSERT_EQ("", cred);
    }

    TEST_F(AWSHttpResourceClientTest, TestEC2MetadataClientGetExpectedCredentials)
    {
        // Create EC2MetadataClient with default endpoint http://169.254.169.254
        auto ec2MetadataClient = Aws::MakeShared<Aws::Internal::EC2MetadataClient>(ALLOCATION_TAG);
        
        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> secureRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/meta-data/iam/security-credentials"), 
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> secureResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*secureRequest));
        secureResponse->SetResponseCode(HttpResponseCode::OK);
        secureResponse->GetResponseBody() << "credentials";
        mockHttpClient->AddResponseToReturn(secureResponse);

        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> credRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/meta-data/iam/security-credentials/credentials"), 
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> credResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*credRequest));
        credResponse->SetResponseCode(HttpResponseCode::OK);
        credResponse->GetResponseBody() << "{ \"AccessKeyId\": \"goodAccessKey\", \"SecretAccessKey\": \"goodSecretKey\", \"Token\": \"goodToken\" }";
        mockHttpClient->AddResponseToReturn(credResponse);

        auto cred = ec2MetadataClient->GetDefaultCredentials();
        auto mockRequest = mockHttpClient->GetMostRecentHttpRequest();

        ASSERT_EQ("http://169.254.169.254/latest/meta-data/iam/security-credentials/credentials", mockRequest.GetURIString());
        ASSERT_EQ(Aws::Http::Scheme::HTTP, mockRequest.GetUri().GetScheme());
        ASSERT_EQ("169.254.169.254", mockRequest.GetUri().GetAuthority());
        ASSERT_EQ("/latest/meta-data/iam/security-credentials/credentials", mockRequest.GetUri().GetPath());

        ASSERT_EQ(cred, "{ \"AccessKeyId\": \"goodAccessKey\", \"SecretAccessKey\": \"goodSecretKey\", \"Token\": \"goodToken\" }");
    }

    TEST_F(AWSHttpResourceClientTest, TestEC2MetadataClientGetRegionFailedWithEmptyResponse)
    {
        // Create EC2MetadataClient with default endpoint http://169.254.169.254
        auto ec2MetadataClient = Aws::MakeShared<Aws::Internal::EC2MetadataClient>(ALLOCATION_TAG);

        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> secureRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/meta-data/placement/availability-zone"), 
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> secureResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*secureRequest));
        secureResponse->SetResponseCode(HttpResponseCode::OK);
        secureResponse->GetResponseBody() << "";
        mockHttpClient->AddResponseToReturn(secureResponse);

        auto region = ec2MetadataClient->GetCurrentRegion();
        auto mockRequest = mockHttpClient->GetMostRecentHttpRequest();

        ASSERT_EQ("http://169.254.169.254/latest/meta-data/placement/availability-zone", mockRequest.GetURIString());
        ASSERT_EQ(Aws::Http::Scheme::HTTP, mockRequest.GetUri().GetScheme());
        ASSERT_EQ("169.254.169.254", mockRequest.GetUri().GetAuthority());
        ASSERT_EQ("/latest/meta-data/placement/availability-zone", mockRequest.GetUri().GetPath());
        ASSERT_EQ("", region);
    }

    TEST_F(AWSHttpResourceClientTest, TestEC2MetadataClientGetRegionWithResponseHasDigits)
    {
        // Create EC2MetadataClient with default endpoint http://169.254.169.254
        auto ec2MetadataClient = Aws::MakeShared<Aws::Internal::EC2MetadataClient>(ALLOCATION_TAG);

        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> secureRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/meta-data/placement/availability-zone"), 
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> secureResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*secureRequest));
        secureResponse->SetResponseCode(HttpResponseCode::OK);
        secureResponse->GetResponseBody() << "us-west-123abc";
        mockHttpClient->AddResponseToReturn(secureResponse);

        auto region = ec2MetadataClient->GetCurrentRegion();
        auto mockRequest = mockHttpClient->GetMostRecentHttpRequest();
        ASSERT_EQ("http://169.254.169.254/latest/meta-data/placement/availability-zone", mockRequest.GetURIString());
        ASSERT_EQ(Aws::Http::Scheme::HTTP, mockRequest.GetUri().GetScheme());
        ASSERT_EQ("169.254.169.254", mockRequest.GetUri().GetAuthority());
        ASSERT_EQ("/latest/meta-data/placement/availability-zone", mockRequest.GetUri().GetPath());
        ASSERT_EQ("us-west-123", region);
    }

    TEST_F(AWSHttpResourceClientTest, TestEC2MetadataClientGetRegionWithResponseHasNoDigit)
    {
        // Create EC2MetadataClient with default endpoint http://169.254.169.254
        auto ec2MetadataClient = Aws::MakeShared<Aws::Internal::EC2MetadataClient>(ALLOCATION_TAG);

        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> secureRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/meta-data/placement/availability-zone"), 
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> secureResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*secureRequest));
        secureResponse->SetResponseCode(HttpResponseCode::OK);
        secureResponse->GetResponseBody() << "us-west-123321";
        mockHttpClient->AddResponseToReturn(secureResponse);

        auto region = ec2MetadataClient->GetCurrentRegion();
        auto mockRequest = mockHttpClient->GetMostRecentHttpRequest();
        ASSERT_EQ("http://169.254.169.254/latest/meta-data/placement/availability-zone", mockRequest.GetURIString());
        ASSERT_EQ(Aws::Http::Scheme::HTTP, mockRequest.GetUri().GetScheme());
        ASSERT_EQ("169.254.169.254", mockRequest.GetUri().GetAuthority());
        ASSERT_EQ("/latest/meta-data/placement/availability-zone", mockRequest.GetUri().GetPath());
        ASSERT_EQ("us-west-123321", region);
    }

    TEST_F(AWSHttpResourceClientTest, TestECSCredentialsClientGetExpectedCredentials)
    {
        // Create EC2CredentialsClient with default endpoint http://169.254.170.2
        auto ecsCredentialsClient = Aws::MakeShared<Aws::Internal::ECSCredentialsClient>(ALLOCATION_TAG, "/path/to/res");

        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> credRequest = CreateHttpRequest(URI("http://169.254.170.2/path/to/res"), 
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> credResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*credRequest));
        credResponse->SetResponseCode(HttpResponseCode::OK);
        credResponse->GetResponseBody() << "{ \"AccessKeyId\": \"betterAccessKey\", \"SecretAccessKey\": \"betterSecretKey\", \"Token\": \"betterToken\", \"Expiration\": \"2020-02-25T06:03:31Z\" }";
        mockHttpClient->AddResponseToReturn(credResponse);

        auto cred = ecsCredentialsClient->GetECSCredentials();
        auto mockRequest = mockHttpClient->GetMostRecentHttpRequest();
        ASSERT_EQ("http://169.254.170.2/path/to/res", mockRequest.GetURIString());
        ASSERT_EQ(Aws::Http::Scheme::HTTP, mockRequest.GetUri().GetScheme());
        ASSERT_EQ("169.254.170.2", mockRequest.GetUri().GetAuthority());
        ASSERT_EQ("/path/to/res", mockRequest.GetUri().GetPath());
        ASSERT_EQ(cred, "{ \"AccessKeyId\": \"betterAccessKey\", \"SecretAccessKey\": \"betterSecretKey\", \"Token\": \"betterToken\", \"Expiration\": \"2020-02-25T06:03:31Z\" }");
    }

    TEST_F(AWSHttpResourceClientTest, TestECSCredentialsClientFailedWithEmptyResponse)
    {
        // Create EC2CredentialsClient with default endpoint http://169.254.170.2
        auto ecsCredentialsClient = Aws::MakeShared<Aws::Internal::ECSCredentialsClient>(ALLOCATION_TAG, "/path/to/res");

        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> credRequest = CreateHttpRequest(URI("http://169.254.170.2/path/to/res"),
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> credResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*credRequest));
        credResponse->SetResponseCode(HttpResponseCode::OK);
        credResponse->GetResponseBody() << "";
        mockHttpClient->AddResponseToReturn(credResponse);

        auto cred = ecsCredentialsClient->GetECSCredentials();
        auto mockRequest = mockHttpClient->GetMostRecentHttpRequest();
        ASSERT_EQ("http://169.254.170.2/path/to/res", mockRequest.GetURIString());
        ASSERT_EQ(Aws::Http::Scheme::HTTP, mockRequest.GetUri().GetScheme());
        ASSERT_EQ("169.254.170.2", mockRequest.GetUri().GetAuthority());
        ASSERT_EQ("/path/to/res", mockRequest.GetUri().GetPath());
        ASSERT_EQ("", cred);
    }

}
