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

    TEST_F(AWSHttpResourceClientTest, TestAWSHttpResourceClientWithNullResponse)
    {
        auto awsHttpResourceClient = Aws::MakeShared<Aws::Internal::AWSHttpResourceClient>(ALLOCATION_TAG, ALLOCATION_TAG);
        Aws::String result = awsHttpResourceClient->GetResource("http://www.uri.com", "/path/to/res");
        
        auto mockRequest = mockHttpClient->GetMostRecentHttpRequest();
        ASSERT_EQ("http://www.uri.com/path/to/res", mockRequest.GetURIString());
        ASSERT_EQ(Aws::Http::Scheme::HTTP, mockRequest.GetUri().GetScheme());
        ASSERT_EQ("www.uri.com", mockRequest.GetUri().GetAuthority());
        ASSERT_EQ("/path/to/res", mockRequest.GetUri().GetPath());
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_GET, mockRequest.GetMethod());
        ASSERT_EQ("", result);
    }

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
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_GET, mockRequest.GetMethod());
        ASSERT_EQ("", result);
    }

    TEST_F(AWSHttpResourceClientTest, TestAWSHttpResourceClientWithHttpBadRequest)
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
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_GET, mockRequest.GetMethod());
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
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_GET, mockRequest.GetMethod());
        ASSERT_EQ("{ \"Resource\": \"TestResource\" }", result);
    }

    TEST_F(AWSHttpResourceClientTest, TestEC2MetadataClientWithNullSecurityCredentialsStringResponse)
    {
        // Create EC2MetadataClient with default endpoint http://169.254.169.254
        auto ec2MetadataClient = Aws::MakeShared<Aws::Internal::EC2MetadataClient>(ALLOCATION_TAG);

        auto cred = ec2MetadataClient->GetDefaultCredentials();
        auto mockRequest = mockHttpClient->GetMostRecentHttpRequest();

        ASSERT_EQ("http://169.254.169.254/latest/meta-data/iam/security-credentials", mockRequest.GetURIString());
        ASSERT_EQ(Aws::Http::Scheme::HTTP, mockRequest.GetUri().GetScheme());
        ASSERT_EQ("169.254.169.254", mockRequest.GetUri().GetAuthority());
        ASSERT_EQ("/latest/meta-data/iam/security-credentials", mockRequest.GetUri().GetPath());
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_GET, mockRequest.GetMethod());       
        ASSERT_EQ("", cred);
    }

    TEST_F(AWSHttpResourceClientTest, TestEC2MetadataClientWithEmptySecurityCredentialsStringResponse)
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
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_GET, mockRequest.GetMethod());       
        ASSERT_EQ("", cred);
    }

    TEST_F(AWSHttpResourceClientTest, TestEC2MetadataClientWithMalformedSecurityCredentialsString)
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
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_GET, mockRequest.GetMethod());       
        ASSERT_EQ("", cred);
    }

    TEST_F(AWSHttpResourceClientTest, TestEC2MetadataClientWithBadHttpRequest)
    {
        // Create EC2MetadataClient with default endpoint http://169.254.169.254
        auto ec2MetadataClient = Aws::MakeShared<Aws::Internal::EC2MetadataClient>(ALLOCATION_TAG);

        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> secureRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/meta-data/iam/security-credentials"), 
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> secureResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*secureRequest));
        secureResponse->SetResponseCode(HttpResponseCode::BAD_REQUEST);
        secureResponse->GetResponseBody() << "Any test string";
        mockHttpClient->AddResponseToReturn(secureResponse);

        auto cred = ec2MetadataClient->GetDefaultCredentials();
        auto mockRequest = mockHttpClient->GetMostRecentHttpRequest();

        ASSERT_EQ("http://169.254.169.254/latest/meta-data/iam/security-credentials", mockRequest.GetURIString());
        ASSERT_EQ(Aws::Http::Scheme::HTTP, mockRequest.GetUri().GetScheme());
        ASSERT_EQ("169.254.169.254", mockRequest.GetUri().GetAuthority());
        ASSERT_EQ("/latest/meta-data/iam/security-credentials", mockRequest.GetUri().GetPath());
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_GET, mockRequest.GetMethod());       
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
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_GET, mockRequest.GetMethod());
        ASSERT_EQ(cred, "{ \"AccessKeyId\": \"goodAccessKey\", \"SecretAccessKey\": \"goodSecretKey\", \"Token\": \"goodToken\" }");
    }

    TEST_F(AWSHttpResourceClientTest, TestEC2MetadataClientGetRegionWithNullResponse)
    {
        // Create EC2MetadataClient with default endpoint http://169.254.169.254
        auto ec2MetadataClient = Aws::MakeShared<Aws::Internal::EC2MetadataClient>(ALLOCATION_TAG);

        auto region = ec2MetadataClient->GetCurrentRegion();
        auto mockRequest = mockHttpClient->GetMostRecentHttpRequest();

        ASSERT_EQ("http://169.254.169.254/latest/meta-data/placement/availability-zone", mockRequest.GetURIString());
        ASSERT_EQ(Aws::Http::Scheme::HTTP, mockRequest.GetUri().GetScheme());
        ASSERT_EQ("169.254.169.254", mockRequest.GetUri().GetAuthority());
        ASSERT_EQ("/latest/meta-data/placement/availability-zone", mockRequest.GetUri().GetPath());
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_GET, mockRequest.GetMethod());
        ASSERT_EQ("", region);
    }

    TEST_F(AWSHttpResourceClientTest, TestEC2MetadataClientGetRegionWithEmptyResponse)
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
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_GET, mockRequest.GetMethod());
        ASSERT_EQ("", region);
    }

    TEST_F(AWSHttpResourceClientTest, TestEC2MetadataClientGetRegionWithHttpBadRequest)
    {
        // Create EC2MetadataClient with default endpoint http://169.254.169.254
        auto ec2MetadataClient = Aws::MakeShared<Aws::Internal::EC2MetadataClient>(ALLOCATION_TAG);

        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> secureRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/meta-data/placement/availability-zone"), 
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> secureResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*secureRequest));
        secureResponse->SetResponseCode(HttpResponseCode::BAD_REQUEST);
        secureResponse->GetResponseBody() << "Any test string";
        mockHttpClient->AddResponseToReturn(secureResponse);

        auto region = ec2MetadataClient->GetCurrentRegion();
        auto mockRequest = mockHttpClient->GetMostRecentHttpRequest();

        ASSERT_EQ("http://169.254.169.254/latest/meta-data/placement/availability-zone", mockRequest.GetURIString());
        ASSERT_EQ(Aws::Http::Scheme::HTTP, mockRequest.GetUri().GetScheme());
        ASSERT_EQ("169.254.169.254", mockRequest.GetUri().GetAuthority());
        ASSERT_EQ("/latest/meta-data/placement/availability-zone", mockRequest.GetUri().GetPath());
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_GET, mockRequest.GetMethod());
        ASSERT_EQ("", region);
    }

    TEST_F(AWSHttpResourceClientTest, TestEC2MetadataClientGetRegionWithResponseHasSingleDigitSubStringInsideString)
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
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_GET, mockRequest.GetMethod());
        ASSERT_EQ("us-west-123", region);
    }

    TEST_F(AWSHttpResourceClientTest, TestEC2MetadataClientGetRegionWithResponseHasMultipleDigitSubStrings)
    {
        // Create EC2MetadataClient with default endpoint http://169.254.169.254
        auto ec2MetadataClient = Aws::MakeShared<Aws::Internal::EC2MetadataClient>(ALLOCATION_TAG);

        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> secureRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/meta-data/placement/availability-zone"), 
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> secureResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*secureRequest));
        secureResponse->SetResponseCode(HttpResponseCode::OK);
        secureResponse->GetResponseBody() << "us-west-123abc321def";
        mockHttpClient->AddResponseToReturn(secureResponse);

        auto region = ec2MetadataClient->GetCurrentRegion();
        auto mockRequest = mockHttpClient->GetMostRecentHttpRequest();
        ASSERT_EQ("http://169.254.169.254/latest/meta-data/placement/availability-zone", mockRequest.GetURIString());
        ASSERT_EQ(Aws::Http::Scheme::HTTP, mockRequest.GetUri().GetScheme());
        ASSERT_EQ("169.254.169.254", mockRequest.GetUri().GetAuthority());
        ASSERT_EQ("/latest/meta-data/placement/availability-zone", mockRequest.GetUri().GetPath());
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_GET, mockRequest.GetMethod());
        ASSERT_EQ("us-west-123", region);
    }

    TEST_F(AWSHttpResourceClientTest, TestEC2MetadataClientGetRegionWithResponseStartWithDigitSubString)
    {
        // Create EC2MetadataClient with default endpoint http://169.254.169.254
        auto ec2MetadataClient = Aws::MakeShared<Aws::Internal::EC2MetadataClient>(ALLOCATION_TAG);

        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> secureRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/meta-data/placement/availability-zone"), 
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> secureResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*secureRequest));
        secureResponse->SetResponseCode(HttpResponseCode::OK);
        secureResponse->GetResponseBody() << "123456-us-west-123abc321def";
        mockHttpClient->AddResponseToReturn(secureResponse);

        auto region = ec2MetadataClient->GetCurrentRegion();
        auto mockRequest = mockHttpClient->GetMostRecentHttpRequest();
        ASSERT_EQ("http://169.254.169.254/latest/meta-data/placement/availability-zone", mockRequest.GetURIString());
        ASSERT_EQ(Aws::Http::Scheme::HTTP, mockRequest.GetUri().GetScheme());
        ASSERT_EQ("169.254.169.254", mockRequest.GetUri().GetAuthority());
        ASSERT_EQ("/latest/meta-data/placement/availability-zone", mockRequest.GetUri().GetPath());
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_GET, mockRequest.GetMethod());
        ASSERT_EQ("123456", region);
    }

    TEST_F(AWSHttpResourceClientTest, TestEC2MetadataClientGetRegionWithResponseHasSingleDigitSubstringAtEnd)
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
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_GET, mockRequest.GetMethod());
        ASSERT_EQ("us-west-123321", region);
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
        secureResponse->GetResponseBody() << "us-west-abccba";
        mockHttpClient->AddResponseToReturn(secureResponse);

        auto region = ec2MetadataClient->GetCurrentRegion();
        auto mockRequest = mockHttpClient->GetMostRecentHttpRequest();
        ASSERT_EQ("http://169.254.169.254/latest/meta-data/placement/availability-zone", mockRequest.GetURIString());
        ASSERT_EQ(Aws::Http::Scheme::HTTP, mockRequest.GetUri().GetScheme());
        ASSERT_EQ("169.254.169.254", mockRequest.GetUri().GetAuthority());
        ASSERT_EQ("/latest/meta-data/placement/availability-zone", mockRequest.GetUri().GetPath());
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_GET, mockRequest.GetMethod());
        ASSERT_EQ("us-west-abccba", region);
    }

    TEST_F(AWSHttpResourceClientTest, TestECSCredentialsClientWithNullResponse)
    {
        // Create EC2CredentialsClient with default endpoint http://169.254.170.2
        auto ecsCredentialsClient = Aws::MakeShared<Aws::Internal::ECSCredentialsClient>(ALLOCATION_TAG, "/path/to/res");

        auto cred = ecsCredentialsClient->GetECSCredentials();
        auto mockRequest = mockHttpClient->GetMostRecentHttpRequest();
        ASSERT_EQ("http://169.254.170.2/path/to/res", mockRequest.GetURIString());
        ASSERT_EQ(Aws::Http::Scheme::HTTP, mockRequest.GetUri().GetScheme());
        ASSERT_EQ("169.254.170.2", mockRequest.GetUri().GetAuthority());
        ASSERT_EQ("/path/to/res", mockRequest.GetUri().GetPath());
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_GET, mockRequest.GetMethod());
        ASSERT_EQ("", cred);
    }

    TEST_F(AWSHttpResourceClientTest, TestECSCredentialsClientWithEmptyResponse)
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
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_GET, mockRequest.GetMethod());
        ASSERT_EQ("", cred);
    }

    TEST_F(AWSHttpResourceClientTest, TestECSCredentialsClientWithHttpBadRequest)
    {
        // Create EC2CredentialsClient with default endpoint http://169.254.170.2
        auto ecsCredentialsClient = Aws::MakeShared<Aws::Internal::ECSCredentialsClient>(ALLOCATION_TAG, "/path/to/res");

        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> credRequest = CreateHttpRequest(URI("http://169.254.170.2/path/to/res"),
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> credResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*credRequest));
        credResponse->SetResponseCode(HttpResponseCode::BAD_REQUEST);
        credResponse->GetResponseBody() << "Any test string";
        mockHttpClient->AddResponseToReturn(credResponse);

        auto cred = ecsCredentialsClient->GetECSCredentials();
        auto mockRequest = mockHttpClient->GetMostRecentHttpRequest();
        ASSERT_EQ("http://169.254.170.2/path/to/res", mockRequest.GetURIString());
        ASSERT_EQ(Aws::Http::Scheme::HTTP, mockRequest.GetUri().GetScheme());
        ASSERT_EQ("169.254.170.2", mockRequest.GetUri().GetAuthority());
        ASSERT_EQ("/path/to/res", mockRequest.GetUri().GetPath());
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_GET, mockRequest.GetMethod());
        ASSERT_EQ("", cred);
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
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_GET, mockRequest.GetMethod());
        ASSERT_EQ(cred, "{ \"AccessKeyId\": \"betterAccessKey\", \"SecretAccessKey\": \"betterSecretKey\", \"Token\": \"betterToken\", \"Expiration\": \"2020-02-25T06:03:31Z\" }");
    }
}
