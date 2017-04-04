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

    TEST_F(AWSHttpResourceClientTest, TestAWSHttpResourceClientWorksCorrectly)
    {
        std::shared_ptr<HttpRequest> request = CreateHttpRequest(URI("http://www.uri.com/path/to/res"), 
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> response = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*request));
        response->SetResponseCode(HttpResponseCode::OK);
        response->GetResponseBody() << "{ \"Resource\": \"TestResource\" }";
        mockHttpClient->AddResponseToReturn(response);

        auto awsHttpResourceClient = Aws::MakeShared<Aws::Internal::AWSHttpResourceClient>(ALLOCATION_TAG, ALLOCATION_TAG);
        Aws::String result = awsHttpResourceClient->GetResource("http://www.uri.com", "/path/to/res");

        ASSERT_EQ("{ \"Resource\": \"TestResource\" }", result);
    }

    TEST_F(AWSHttpResourceClientTest, TestAWSHttpResourceClientFailsToCall)
    {
         std::shared_ptr<HttpRequest> request = CreateHttpRequest(URI("http://www.uri.com/path/to/res"), 
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> response = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*request));
        response->SetResponseCode(HttpResponseCode::BAD_REQUEST);
        response->GetResponseBody() << "{ \"Resource\": \"TestResource\" }";
        mockHttpClient->AddResponseToReturn(response);

        auto awsHttpResourceClient = Aws::MakeShared<Aws::Internal::AWSHttpResourceClient>(ALLOCATION_TAG, ALLOCATION_TAG);
        Aws::String result = awsHttpResourceClient->GetResource("http://www.uri.com", "/path/to/res");

        ASSERT_EQ(0u, result.size());       
    }

    TEST_F(AWSHttpResourceClientTest, TestEC2MetadataClientWorksCorrectly)
    {
        auto ec2MetadataClient = Aws::MakeShared<Aws::Internal::EC2MetadataClient>(ALLOCATION_TAG);

        std::shared_ptr<HttpRequest> secureRequest = CreateHttpRequest(URI("http://www.uri.com/path/to/res"), 
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> secureResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*secureRequest));
        secureResponse->SetResponseCode(HttpResponseCode::OK);
        secureResponse->GetResponseBody() << "{ \"Test\":\n \"Test\" }";
        mockHttpClient->AddResponseToReturn(secureResponse);

        std::shared_ptr<HttpRequest> credRequest = CreateHttpRequest(URI("http://www.uri.com/path/to/res"), 
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> credResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*credRequest));
        credResponse->SetResponseCode(HttpResponseCode::OK);
        credResponse->GetResponseBody() << "{ \"AccessKeyId\": \"goodAccessKey\", \"SecretAccessKey\": \"goodSecretKey\", \"Token\": \"goodToken\" }";
        mockHttpClient->AddResponseToReturn(credResponse);

        std::shared_ptr<HttpRequest> regionRequest = CreateHttpRequest(URI("http://www.uri.com/path/to/region"), 
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> regionResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*regionRequest));
        regionResponse->SetResponseCode(HttpResponseCode::OK);
        regionResponse->GetResponseBody() << "us-west-1";
        mockHttpClient->AddResponseToReturn(regionResponse);

        auto cred = ec2MetadataClient->GetDefaultCredentials();
        auto region = ec2MetadataClient->GetCurrentRegion();

        ASSERT_EQ(cred, "{ \"AccessKeyId\": \"goodAccessKey\", \"SecretAccessKey\": \"goodSecretKey\", \"Token\": \"goodToken\" }");
        ASSERT_EQ(region, "us-west-1");
    }

    TEST_F(AWSHttpResourceClientTest, TestEC2MetadataClientFailsToCall)
    {
        auto ec2MetadataClient = Aws::MakeShared<Aws::Internal::EC2MetadataClient>(ALLOCATION_TAG);

        std::shared_ptr<HttpRequest> secureRequest = CreateHttpRequest(URI("http://www.uri.com/path/to/res"), 
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> secureResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*secureRequest));
        secureResponse->SetResponseCode(HttpResponseCode::BAD_REQUEST);
        secureResponse->GetResponseBody() << "{ \"Test\":\n \"Test\" }";
        mockHttpClient->AddResponseToReturn(secureResponse);

        std::shared_ptr<HttpRequest> regionRequest = CreateHttpRequest(URI("http://www.uri.com/path/to/region"), 
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> regionResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*regionRequest));
        regionResponse->SetResponseCode(HttpResponseCode::BAD_REQUEST);
        regionResponse->GetResponseBody() << "us-west-1";
        mockHttpClient->AddResponseToReturn(regionResponse);

        auto cred = ec2MetadataClient->GetDefaultCredentials();
        auto region = ec2MetadataClient->GetCurrentRegion();

        ASSERT_EQ(0u, cred.size());
        ASSERT_EQ(0u, region.size());
    }

    TEST_F(AWSHttpResourceClientTest, TestECSCredentialsClientWorksCorrectly)
    {
        auto ecsCredentialsClient = Aws::MakeShared<Aws::Internal::ECSCredentialsClient>(ALLOCATION_TAG, "/path/to/res");

        std::shared_ptr<HttpRequest> credRequest = CreateHttpRequest(URI("http://www.uri.com"), 
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> credResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*credRequest));
        credResponse->SetResponseCode(HttpResponseCode::OK);
        credResponse->GetResponseBody() << "{ \"AccessKeyId\": \"betterAccessKey\", \"SecretAccessKey\": \"betterSecretKey\", \"Token\": \"betterToken\", \"Expiration\": \"2020-02-25T06:03:31Z\" }";
        mockHttpClient->AddResponseToReturn(credResponse);

        auto cred = ecsCredentialsClient->GetECSCredentials();
        ASSERT_EQ(cred, "{ \"AccessKeyId\": \"betterAccessKey\", \"SecretAccessKey\": \"betterSecretKey\", \"Token\": \"betterToken\", \"Expiration\": \"2020-02-25T06:03:31Z\" }");
    }

    TEST_F(AWSHttpResourceClientTest, TestECSCredentialsClientFailsToCall)
    {
        auto ecsCredentialsClient = Aws::MakeShared<Aws::Internal::ECSCredentialsClient>(ALLOCATION_TAG, "/path/to/res");

        std::shared_ptr<HttpRequest> credRequest = CreateHttpRequest(URI("http://www.uri.com"), 
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> credResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*credRequest));
        credResponse->SetResponseCode(HttpResponseCode::BAD_REQUEST);
        credResponse->GetResponseBody() << "{ \"AccessKeyId\": \"betterAccessKey\", \"SecretAccessKey\": \"betterSecretKey\", \"Token\": \"betterToken\", \"Expiration\": \"2020-02-25T06:03:31Z\" }";
        mockHttpClient->AddResponseToReturn(credResponse);

        auto cred = ecsCredentialsClient->GetECSCredentials();
        ASSERT_EQ(0u, cred.size());
    }

}
