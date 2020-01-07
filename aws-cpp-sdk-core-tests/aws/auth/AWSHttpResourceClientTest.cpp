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
#define AWS_DISABLE_DEPRECATION

#include <aws/external/gtest.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/internal/AWSHttpResourceClient.h>
#include <aws/testing/mocks/http/MockHttpClient.h>
#include <aws/core/client/SpecifiedRetryableErrorsRetryStrategy.h>
#include <aws/core/client/AWSErrorMarshaller.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <fstream>

using namespace Aws::Utils;
using namespace Aws::Client;
using namespace Aws::Http;
using namespace Aws::Http::Standard;
using namespace Aws::Internal;

static const char ALLOCATION_TAG[] = "AWSHttpResourceClientTest";

namespace Aws
{
    namespace Client
    {
        AWS_CORE_API Aws::String ComputeUserAgentString();
    }
}

namespace
{
    class AWSHttpResourceClientTest : public ::testing::Test
    {
    public:
        AWSHttpResourceClientTest()
        {
            // Default retry strategy set maxRetry to be 4, and interval factor to be 1000ms
            // In order to speed up our unit tests, we reset it here.
            clientConfig.retryStrategy = Aws::MakeShared<DefaultRetryStrategy>(ALLOCATION_TAG, 2/*maxRetry*/, 1/*Interval factor between retry (exp backoff), first retry wait 1ms, second retry wait 2ms*/);
        }

    protected:
        std::shared_ptr<MockHttpClient> mockHttpClient;
        std::shared_ptr<MockHttpClientFactory> mockHttpClientFactory;
        ClientConfiguration clientConfig;

        void SetUp()
        {
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

    static const char EC2_IMDS_TOKEN_TTL_HEADER[] = "x-aws-ec2-metadata-token-ttl-seconds";
    static const char EC2_IMDS_TOKEN_HEADER[] = "x-aws-ec2-metadata-token";

    TEST_F(AWSHttpResourceClientTest, TestSetErrorMarshallerCorrectly)
    {
        auto awsHttpResourceClient = Aws::MakeShared<Aws::Internal::AWSHttpResourceClient>(ALLOCATION_TAG, clientConfig, ALLOCATION_TAG);
        ASSERT_EQ(nullptr, awsHttpResourceClient->GetErrorMarshaller());
        awsHttpResourceClient->SetErrorMarshaller(Aws::MakeUnique<Aws::Client::XmlErrorMarshaller>(ALLOCATION_TAG));
        ASSERT_NE(nullptr, awsHttpResourceClient->GetErrorMarshaller());
    }

    TEST_F(AWSHttpResourceClientTest, TestErrorMarshallerWorksWithSTSRetryStrategyExpectedly)
    {
        Aws::Client::ClientConfiguration config;
        Aws::Vector<Aws::String> retryableErrors;
        retryableErrors.push_back("IDPCommunicationError");
        retryableErrors.push_back("InvalidIdentityToken");
        config.retryStrategy = Aws::MakeShared<Aws::Client::SpecifiedRetryableErrorsRetryStrategy>(ALLOCATION_TAG, retryableErrors, 3/*max retries*/);
        auto awsHttpResourceClient = Aws::MakeShared<Aws::Internal::AWSHttpResourceClient>(ALLOCATION_TAG, config, ALLOCATION_TAG);
        awsHttpResourceClient->SetErrorMarshaller(Aws::MakeUnique<Aws::Client::XmlErrorMarshaller>(ALLOCATION_TAG));

        // Retry 3 times without response, nullptr response is treated as NETWORK_CONNECTION_ERROR and is retryable
        Aws::String result = awsHttpResourceClient->GetResource("http://www.uri.com", "/path/to/res", nullptr/*authToken*/);
        ASSERT_EQ(4u, mockHttpClient->GetAllRequestsMade().size());
        ASSERT_EQ("", result);

        std::shared_ptr<HttpRequest> request = CreateHttpRequest(URI("https://www.uri.com/path/to/res"),
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);

        Aws::String retryError = "<?xml version=\"1.0\" encoding=\"UTF-8\"?><Error><Code>IDPCommunicationError</Code><Message>The resource you requested does not exist</Message><Resource>/path/to/resource.jpg</Resource><RequestId>4442587FB7D0A2F9</RequestId></Error>";
        std::shared_ptr<StandardHttpResponse> retryableResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*request));
        retryableResponse->SetResponseCode(HttpResponseCode::BAD_REQUEST);
        retryableResponse->GetResponseBody() << retryError;

        Aws::String retryError2 = "<?xml version=\"1.0\" encoding=\"UTF-8\"?><Error><Code>InvalidIdentityToken</Code><Message>The resource you requested does not exist</Message><Resource>/path/to/resource.jpg</Resource><RequestId>4442587FB7D0A2F9</RequestId></Error>";
        std::shared_ptr<StandardHttpResponse> retryableResponse2 = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*request));
        retryableResponse2->SetResponseCode(HttpResponseCode::BAD_REQUEST);
        retryableResponse2->GetResponseBody() << retryError2;

        Aws::String nonRetryError = "<?xml version=\"1.0\" encoding=\"UTF-8\"?><Error><Code>OtherError</Code><Message>The resource you requested does not exist</Message><Resource>/path/to/resource.jpg</Resource><RequestId>4442587FB7D0A2F9</RequestId></Error>";
        std::shared_ptr<StandardHttpResponse> nonRetryResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*request));
        nonRetryResponse->SetResponseCode(HttpResponseCode::BAD_REQUEST);
        nonRetryResponse->GetResponseBody() << nonRetryError;

        //Made up credentials from https://docs.aws.amazon.com/STS/latest/APIReference/API_AssumeRoleWithWebIdentity.html
        Aws::String goodXml = "<?xml version=\"1.0\" encoding=\"UTF-8\"?><Credentials><SessionToken>AQoDYXdzEE0a8ANXXXXXXXXNO1ewxE5TijQyp+IEXAMPLE</SessionToken><SecretAccessKey>wJalrXUtnFEMI/K7MDENG/bPxRfiCYzEXAMPLEKEY</SecretAccessKey><Expiration>2014-10-24T23:00:23Z</Expiration><AccessKeyId>ASgeIAIOSFODNN7EXAMPLE</AccessKeyId></Credentials>";
        std::shared_ptr<StandardHttpResponse> goodResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*request));
        goodResponse->SetResponseCode(HttpResponseCode::OK);
        goodResponse->GetResponseBody() << goodXml;

        // Encounter 1 non retryable error
        mockHttpClient->Reset();
        mockHttpClient->AddResponseToReturn(nonRetryResponse);
        result = awsHttpResourceClient->GetResource("http://www.uri.com", "/path/to/res", nullptr/*authToken*/);
        ASSERT_EQ(1u, mockHttpClient->GetAllRequestsMade().size());
        ASSERT_EQ("", result);

        // Encounter 2 IDPCommunicationError and InvalidIdentityToken in response and 1 other error, will retry 2 times.
        mockHttpClient->Reset();
        mockHttpClient->AddResponseToReturn(retryableResponse);
        mockHttpClient->AddResponseToReturn(retryableResponse2);
        nonRetryResponse->GetResponseBody() << nonRetryError; // response has been read out. need to refill.
        mockHttpClient->AddResponseToReturn(nonRetryResponse);
        result = awsHttpResourceClient->GetResource("http://www.uri.com", "/path/to/res", nullptr/*authToken*/);
        ASSERT_EQ(3u, mockHttpClient->GetAllRequestsMade().size());
        ASSERT_EQ("", result);

        // Encounter 2 retryable errors and 1 good response, will retry 2 times.
        mockHttpClient->Reset();
        retryableResponse->GetResponseBody() << retryError;
        retryableResponse2->GetResponseBody() << retryError;
        mockHttpClient->AddResponseToReturn(retryableResponse);
        mockHttpClient->AddResponseToReturn(retryableResponse2);
        mockHttpClient->AddResponseToReturn(goodResponse);
        result = awsHttpResourceClient->GetResource("http://www.uri.com", "/path/to/res", nullptr/*authToken*/);
        ASSERT_EQ(3u, mockHttpClient->GetAllRequestsMade().size());
        ASSERT_EQ(goodXml, result);
    }

    TEST_F(AWSHttpResourceClientTest, TestAWSHttpResourceClientWithPermanentNullResponse)
    {
        auto awsHttpResourceClient = Aws::MakeShared<Aws::Internal::AWSHttpResourceClient>(ALLOCATION_TAG, clientConfig, ALLOCATION_TAG);
        Aws::String result = awsHttpResourceClient->GetResource("http://www.uri.com", "/path/to/res", ""/*authToken*/);

        auto mockRequest = mockHttpClient->GetMostRecentHttpRequest();
        ASSERT_EQ("http://www.uri.com/path/to/res", mockRequest.GetURIString());
        ASSERT_EQ(Aws::Http::Scheme::HTTP, mockRequest.GetUri().GetScheme());
        ASSERT_EQ("www.uri.com", mockRequest.GetUri().GetAuthority());
        ASSERT_EQ("/path/to/res", mockRequest.GetUri().GetPath());
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_GET, mockRequest.GetMethod());
        ASSERT_STREQ(ComputeUserAgentString().c_str(), mockRequest.GetUserAgent().c_str());
        ASSERT_EQ("", result);
        // 1 initial request + 2 retries should be done when request can't be made at all
        ASSERT_EQ(3u, mockHttpClient->GetAllRequestsMade().size());
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

        auto awsHttpResourceClient = Aws::MakeShared<Aws::Internal::AWSHttpResourceClient>(ALLOCATION_TAG, clientConfig, ALLOCATION_TAG);
        Aws::String result = awsHttpResourceClient->GetResource("http://www.uri.com", "/path/to/res", ""/*authToken*/);

        auto mockRequest = mockHttpClient->GetMostRecentHttpRequest();
        ASSERT_EQ("http://www.uri.com/path/to/res", mockRequest.GetURIString());
        ASSERT_EQ(Aws::Http::Scheme::HTTP, mockRequest.GetUri().GetScheme());
        ASSERT_EQ("www.uri.com", mockRequest.GetUri().GetAuthority());
        ASSERT_EQ("/path/to/res", mockRequest.GetUri().GetPath());
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_GET, mockRequest.GetMethod());
        ASSERT_EQ("", result);
        // No retries should be made
        ASSERT_EQ(1u, mockHttpClient->GetAllRequestsMade().size());
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

        auto awsHttpResourceClient = Aws::MakeShared<Aws::Internal::AWSHttpResourceClient>(ALLOCATION_TAG, clientConfig, ALLOCATION_TAG);
        Aws::String result = awsHttpResourceClient->GetResource("http://www.uri.com", "/path/to/res", ""/*authToken*/);

        auto mockRequest = mockHttpClient->GetMostRecentHttpRequest();
        ASSERT_EQ("http://www.uri.com/path/to/res", mockRequest.GetURIString());
        ASSERT_EQ(Aws::Http::Scheme::HTTP, mockRequest.GetUri().GetScheme());
        ASSERT_EQ("www.uri.com", mockRequest.GetUri().GetAuthority());
        ASSERT_EQ("/path/to/res", mockRequest.GetUri().GetPath());
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_GET, mockRequest.GetMethod());
        ASSERT_EQ("", result);
        // No retries should be made for status code < 500
        ASSERT_EQ(1u, mockHttpClient->GetAllRequestsMade().size());
    }

    TEST_F(AWSHttpResourceClientTest, TestAWSHttpResourceClientWithPermanentInternalServerError)
    {
        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> request = CreateHttpRequest(URI("http://www.uri.com/path/to/res"),
                                                                 HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> response = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*request));
        response->SetResponseCode(HttpResponseCode::INTERNAL_SERVER_ERROR);
        response->GetResponseBody() << "{ \"Resource\": \"TestResource\" }";

        // Add enough to respond to 1 initial request and 2 retries
        for (int i = 0; i < 3; ++i)
        {
            mockHttpClient->AddResponseToReturn(response);
        }

        auto awsHttpResourceClient = Aws::MakeShared<Aws::Internal::AWSHttpResourceClient>(ALLOCATION_TAG, clientConfig, ALLOCATION_TAG);
        Aws::String result = awsHttpResourceClient->GetResource("http://www.uri.com", "/path/to/res", ""/*authToken*/);

        auto mockRequest = mockHttpClient->GetMostRecentHttpRequest();
        ASSERT_EQ("http://www.uri.com/path/to/res", mockRequest.GetURIString());
        ASSERT_EQ(Aws::Http::Scheme::HTTP, mockRequest.GetUri().GetScheme());
        ASSERT_EQ("www.uri.com", mockRequest.GetUri().GetAuthority());
        ASSERT_EQ("/path/to/res", mockRequest.GetUri().GetPath());
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_GET, mockRequest.GetMethod());
        ASSERT_EQ("", result);
        // 1 initial request + 2 retries should be done for status code >= 500
        ASSERT_EQ(3u, mockHttpClient->GetAllRequestsMade().size());
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

        auto awsHttpResourceClient = Aws::MakeShared<Aws::Internal::AWSHttpResourceClient>(ALLOCATION_TAG, clientConfig, ALLOCATION_TAG);
        Aws::String result = awsHttpResourceClient->GetResource("http://www.uri.com", "/path/to/res", ""/*authToken*/);

        auto mockRequest = mockHttpClient->GetMostRecentHttpRequest();
        ASSERT_EQ("http://www.uri.com/path/to/res", mockRequest.GetURIString());
        ASSERT_EQ(Aws::Http::Scheme::HTTP, mockRequest.GetUri().GetScheme());
        ASSERT_EQ("www.uri.com", mockRequest.GetUri().GetAuthority());
        ASSERT_EQ("/path/to/res", mockRequest.GetUri().GetPath());
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_GET, mockRequest.GetMethod());
        ASSERT_EQ("{ \"Resource\": \"TestResource\" }", result);
        // No retries should be made
        ASSERT_EQ(1u, mockHttpClient->GetAllRequestsMade().size());
    }

    TEST_F(AWSHttpResourceClientTest, TestAWSHttpResourceClientWithSuccessResponseAfterOneClientError)
    {
        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> request = CreateHttpRequest(URI("http://www.uri.com/path/to/res"),
                                                                 HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);

        std::shared_ptr<StandardHttpResponse> response1 = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*request));
        //response code is REQUEST_NOT_MADE, indicates error, and we set this as client error.
        response1->SetClientErrorType(Aws::Client::CoreErrors::NETWORK_CONNECTION);
        response1->SetClientErrorMessage("Mock Client Error");
        mockHttpClient->AddResponseToReturn(response1);

        std::shared_ptr<StandardHttpResponse> response2 = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*request));
        response2->SetResponseCode(HttpResponseCode::OK);
        response2->GetResponseBody() << "{ \"Resource\": \"TestResource\" }";
        mockHttpClient->AddResponseToReturn(response2);

        auto awsHttpResourceClient = Aws::MakeShared<Aws::Internal::AWSHttpResourceClient>(ALLOCATION_TAG, clientConfig, ALLOCATION_TAG);
        Aws::String result = awsHttpResourceClient->GetResource("http://www.uri.com", "/path/to/res", ""/*authToken*/);

        auto mockRequest = mockHttpClient->GetMostRecentHttpRequest();
        ASSERT_EQ("http://www.uri.com/path/to/res", mockRequest.GetURIString());
        ASSERT_EQ(Aws::Http::Scheme::HTTP, mockRequest.GetUri().GetScheme());
        ASSERT_EQ("www.uri.com", mockRequest.GetUri().GetAuthority());
        ASSERT_EQ("/path/to/res", mockRequest.GetUri().GetPath());
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_GET, mockRequest.GetMethod());
        ASSERT_EQ("{ \"Resource\": \"TestResource\" }", result);
        ASSERT_EQ(2u, mockHttpClient->GetAllRequestsMade().size());
    }

    TEST_F(AWSHttpResourceClientTest, TestAWSHttpResourceClientWithBadRequestResponseAfterOneResponseError)
    {
        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> request = CreateHttpRequest(URI("http://www.uri.com/path/to/res"),
                                                                 HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);

        std::shared_ptr<StandardHttpResponse> response1 = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*request));
        //response code is REQUEST_NOT_MADE, indicates error, and we set this as unparsable error.
        mockHttpClient->AddResponseToReturn(response1);

        auto response2 = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*request));
        response2->SetResponseCode(HttpResponseCode::BAD_REQUEST);
        response2->GetResponseBody() << "Any test string";
        mockHttpClient->AddResponseToReturn(response2);

        auto awsHttpResourceClient = Aws::MakeShared<Aws::Internal::AWSHttpResourceClient>(ALLOCATION_TAG, clientConfig, ALLOCATION_TAG);
        Aws::String result = awsHttpResourceClient->GetResource("http://www.uri.com", "/path/to/res", ""/*authToken*/);

        auto mockRequest = mockHttpClient->GetMostRecentHttpRequest();
        ASSERT_EQ("http://www.uri.com/path/to/res", mockRequest.GetURIString());
        ASSERT_EQ(Aws::Http::Scheme::HTTP, mockRequest.GetUri().GetScheme());
        ASSERT_EQ("www.uri.com", mockRequest.GetUri().GetAuthority());
        ASSERT_EQ("/path/to/res", mockRequest.GetUri().GetPath());
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_GET, mockRequest.GetMethod());
        ASSERT_EQ("", result);
        ASSERT_EQ(2u, mockHttpClient->GetAllRequestsMade().size());
    }

    TEST_F(AWSHttpResourceClientTest, TestAWSHttpResourceClientWithSuccessResponseAfterOneInternalServerError)
    {
        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> request = CreateHttpRequest(URI("http://www.uri.com/path/to/res"),
                                                                 HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> response1 = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*request));
        response1->SetResponseCode(HttpResponseCode::INTERNAL_SERVER_ERROR);
        response1->GetResponseBody() << "{ \"Resource\": \"TestResource\" }";
        mockHttpClient->AddResponseToReturn(response1);

        auto response2 = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*request));
        response2->SetResponseCode(HttpResponseCode::OK);
        response2->GetResponseBody() << "{ \"Resource\": \"TestResource\" }";
        mockHttpClient->AddResponseToReturn(response2);

        auto awsHttpResourceClient = Aws::MakeShared<Aws::Internal::AWSHttpResourceClient>(ALLOCATION_TAG, clientConfig, ALLOCATION_TAG);
        Aws::String result = awsHttpResourceClient->GetResource("http://www.uri.com", "/path/to/res", ""/*authToken*/);

        auto mockRequest = mockHttpClient->GetMostRecentHttpRequest();
        ASSERT_EQ("http://www.uri.com/path/to/res", mockRequest.GetURIString());
        ASSERT_EQ(Aws::Http::Scheme::HTTP, mockRequest.GetUri().GetScheme());
        ASSERT_EQ("www.uri.com", mockRequest.GetUri().GetAuthority());
        ASSERT_EQ("/path/to/res", mockRequest.GetUri().GetPath());
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_GET, mockRequest.GetMethod());
        ASSERT_EQ("{ \"Resource\": \"TestResource\" }", result);
        // 1 initial request + 1 retry
        ASSERT_EQ(2u, mockHttpClient->GetAllRequestsMade().size());
    }

    TEST_F(AWSHttpResourceClientTest, TestAWSHttpResourceClientWithBadRequestResponseAfterOneInternalServerError)
    {
        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> request = CreateHttpRequest(URI("http://www.uri.com/path/to/res"),
                                                                 HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> response1 = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*request));
        response1->SetResponseCode(HttpResponseCode::INTERNAL_SERVER_ERROR);
        response1->GetResponseBody() << "{ \"Resource\": \"TestResource\" }";
        mockHttpClient->AddResponseToReturn(response1);

        auto response2 = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*request));
        response2->SetResponseCode(HttpResponseCode::BAD_REQUEST);
        response2->GetResponseBody() << "Any test string";
        mockHttpClient->AddResponseToReturn(response2);

        auto awsHttpResourceClient = Aws::MakeShared<Aws::Internal::AWSHttpResourceClient>(ALLOCATION_TAG, clientConfig, ALLOCATION_TAG);
        Aws::String result = awsHttpResourceClient->GetResource("http://www.uri.com", "/path/to/res", ""/*authToken*/);

        auto mockRequest = mockHttpClient->GetMostRecentHttpRequest();
        ASSERT_EQ("http://www.uri.com/path/to/res", mockRequest.GetURIString());
        ASSERT_EQ(Aws::Http::Scheme::HTTP, mockRequest.GetUri().GetScheme());
        ASSERT_EQ("www.uri.com", mockRequest.GetUri().GetAuthority());
        ASSERT_EQ("/path/to/res", mockRequest.GetUri().GetPath());
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_GET, mockRequest.GetMethod());
        ASSERT_EQ("", result);
        // 1 initial request + 1 retry
        ASSERT_EQ(2u, mockHttpClient->GetAllRequestsMade().size());
    }

    TEST_F(AWSHttpResourceClientTest, TestEC2MetadataClientWithNullSecurityCredentialsStringResponse)
    {
        // Create EC2MetadataClient with default endpoint http://169.254.169.254
        auto ec2MetadataClient = Aws::MakeShared<Aws::Internal::EC2MetadataClient>(ALLOCATION_TAG, clientConfig);

        auto cred = ec2MetadataClient->GetDefaultCredentialsSecurely();
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
        auto ec2MetadataClient = Aws::MakeShared<Aws::Internal::EC2MetadataClient>(ALLOCATION_TAG, clientConfig);

        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> profileRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/meta-data/iam/security-credentials"),
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> profileResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*profileRequest));
        profileResponse->SetResponseCode(HttpResponseCode::OK);
        profileResponse->GetResponseBody() << "";
        mockHttpClient->AddResponseToReturn(profileResponse);

        auto cred = ec2MetadataClient->GetDefaultCredentialsSecurely();
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
        auto ec2MetadataClient = Aws::MakeShared<Aws::Internal::EC2MetadataClient>(ALLOCATION_TAG, clientConfig);

        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> profileRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/meta-data/iam/security-credentials"),
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> profileResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*profileRequest));
        profileResponse->SetResponseCode(HttpResponseCode::OK);
        profileResponse->GetResponseBody() << " \n \t ";
        mockHttpClient->AddResponseToReturn(profileResponse);

        auto cred = ec2MetadataClient->GetDefaultCredentialsSecurely();
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
        std::shared_ptr<HttpRequest> tokenRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/api/iam/token"),
                HttpMethod::HTTP_PUT, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> tokenResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*tokenRequest));
        tokenResponse->SetResponseCode(HttpResponseCode::BAD_REQUEST);
        tokenResponse->GetResponseBody() << "Any test string";
        mockHttpClient->AddResponseToReturn(tokenResponse);

        auto cred = ec2MetadataClient->GetDefaultCredentialsSecurely();
        auto mockRequest = mockHttpClient->GetMostRecentHttpRequest();

        ASSERT_EQ("http://169.254.169.254/latest/api/token", mockRequest.GetURIString());
        ASSERT_EQ(Aws::Http::Scheme::HTTP, mockRequest.GetUri().GetScheme());
        ASSERT_EQ("169.254.169.254", mockRequest.GetUri().GetAuthority());
        ASSERT_EQ("/latest/api/token", mockRequest.GetUri().GetPath());
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_PUT, mockRequest.GetMethod());
        ASSERT_EQ("", cred);
    }

    TEST_F(AWSHttpResourceClientTest, TestEC2MetadataClientGetExpectedCredentialsFromSecureServerWithRetry)
    {
        // Create EC2MetadataClient with default endpoint http://169.254.169.254
        auto ec2MetadataClient = Aws::MakeShared<Aws::Internal::EC2MetadataClient>(ALLOCATION_TAG, clientConfig);

        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> tokenRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/api/token"),
                                                                       HttpMethod::HTTP_PUT, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> tokenResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*tokenRequest));
        std::shared_ptr<StandardHttpResponse> tokenResponseRetry = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*tokenRequest));
        tokenResponseRetry->SetResponseCode(HttpResponseCode::SERVICE_UNAVAILABLE);
        tokenResponseRetry->GetResponseBody() << "Throttling";
        mockHttpClient->AddResponseToReturn(tokenResponseRetry);
        tokenResponse->SetResponseCode(HttpResponseCode::OK);
        tokenResponse->GetResponseBody() << "123321--=random token information xxx===";
        mockHttpClient->AddResponseToReturn(tokenResponse);

        std::shared_ptr<HttpRequest> profileRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/meta-data/iam/security-credentials"),
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> profileResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*profileRequest));
        std::shared_ptr<StandardHttpResponse> profileResponseRetry = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*profileRequest));

        profileResponseRetry->SetResponseCode(HttpResponseCode::SERVICE_UNAVAILABLE);
        profileResponseRetry->GetResponseBody() << "Throttling";
        mockHttpClient->AddResponseToReturn(profileResponseRetry);
        profileResponse->SetResponseCode(HttpResponseCode::OK);
        profileResponse->GetResponseBody() << "credentials";
        mockHttpClient->AddResponseToReturn(profileResponse);

        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> credRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/meta-data/iam/security-credentials/credentials"),
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> credResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*credRequest));
        credResponse->SetResponseCode(HttpResponseCode::OK);
        credResponse->GetResponseBody() << "{ \"AccessKeyId\": \"goodAccessKey\", \"SecretAccessKey\": \"goodSecretKey\", \"Token\": \"goodToken\" }";
        mockHttpClient->AddResponseToReturn(credResponse);

        auto cred = ec2MetadataClient->GetDefaultCredentialsSecurely();
        auto mockRequests = mockHttpClient->GetAllRequestsMade();
        ASSERT_EQ(5u, mockRequests.size());
        ASSERT_EQ("http://169.254.169.254/latest/api/token", mockRequests[0].GetURIString());
        ASSERT_EQ("http://169.254.169.254/latest/api/token", mockRequests[1].GetURIString());
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_PUT, mockRequests[0].GetMethod());
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_PUT, mockRequests[1].GetMethod());
        ASSERT_EQ("21600", mockRequests[0].GetHeaderValue(EC2_IMDS_TOKEN_TTL_HEADER));
        ASSERT_EQ("21600", mockRequests[1].GetHeaderValue(EC2_IMDS_TOKEN_TTL_HEADER));
        ASSERT_EQ("123321--=random token information xxx===", mockRequests[2].GetHeaderValue(EC2_IMDS_TOKEN_HEADER));
        ASSERT_EQ("http://169.254.169.254/latest/meta-data/iam/security-credentials", mockRequests[2].GetURIString());
        ASSERT_EQ("123321--=random token information xxx===", mockRequests[3].GetHeaderValue(EC2_IMDS_TOKEN_HEADER));
        ASSERT_EQ("http://169.254.169.254/latest/meta-data/iam/security-credentials", mockRequests[3].GetURIString());
        ASSERT_EQ("123321--=random token information xxx===", mockRequests[4].GetHeaderValue(EC2_IMDS_TOKEN_HEADER));
        ASSERT_EQ("http://169.254.169.254/latest/meta-data/iam/security-credentials/credentials", mockRequests[4].GetURIString());
        ASSERT_EQ(Aws::Http::Scheme::HTTP, mockRequests[4].GetUri().GetScheme());
        ASSERT_EQ("169.254.169.254", mockRequests[4].GetUri().GetAuthority());
        ASSERT_EQ("/latest/meta-data/iam/security-credentials/credentials", mockRequests[4].GetUri().GetPath());
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_GET, mockRequests[4].GetMethod());
        ASSERT_EQ(cred, "{ \"AccessKeyId\": \"goodAccessKey\", \"SecretAccessKey\": \"goodSecretKey\", \"Token\": \"goodToken\" }");
    }

    TEST_F(AWSHttpResourceClientTest, TestEC2MetadataClientFailedGettingCredentialsFromSecureServer)
    {
        // Create EC2MetadataClient with default endpoint http://169.254.169.254
        auto ec2MetadataClient = Aws::MakeShared<Aws::Internal::EC2MetadataClient>(ALLOCATION_TAG, clientConfig);

        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> tokenRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/api/token"),
                                                                      HttpMethod::HTTP_PUT, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> tokenResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*tokenRequest));
        tokenResponse->SetResponseCode(HttpResponseCode::BAD_REQUEST);
        tokenResponse->GetResponseBody() << "bad request info";
        mockHttpClient->AddResponseToReturn(tokenResponse);

        auto cred = ec2MetadataClient->GetDefaultCredentialsSecurely();
        auto mockRequests = mockHttpClient->GetAllRequestsMade();
        ASSERT_EQ(1u, mockRequests.size());
        ASSERT_EQ("http://169.254.169.254/latest/api/token", mockRequests[0].GetURIString());
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_PUT, mockRequests[0].GetMethod());
        ASSERT_EQ("21600", mockRequests[0].GetHeaderValue(EC2_IMDS_TOKEN_TTL_HEADER));
        ASSERT_EQ("", cred);
    }

    TEST_F(AWSHttpResourceClientTest, TestEC2MetadataClientFailedGettingCredentialsFromSecureServerWithExpiredToken)
    {
        // Create EC2MetadataClient with default endpoint http://169.254.169.254
        auto ec2MetadataClient = Aws::MakeShared<Aws::Internal::EC2MetadataClient>(ALLOCATION_TAG, clientConfig);

        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> tokenRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/api/token"),
                                                                      HttpMethod::HTTP_PUT, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> tokenResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*tokenRequest));
        tokenResponse->SetResponseCode(HttpResponseCode::OK);
        tokenResponse->GetResponseBody() << "123321--=random token information xxx===";
        mockHttpClient->AddResponseToReturn(tokenResponse);

        std::shared_ptr<HttpRequest> profileRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/meta-data/iam/security-credentials"),
                                                                       HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> profileResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*profileRequest));
        profileResponse->SetResponseCode(HttpResponseCode::UNAUTHORIZED);
        profileResponse->GetResponseBody() << "expired token";
        mockHttpClient->AddResponseToReturn(profileResponse);

        auto cred = ec2MetadataClient->GetDefaultCredentialsSecurely();
        auto mockRequests = mockHttpClient->GetAllRequestsMade();
        ASSERT_EQ(2u, mockRequests.size());
        ASSERT_EQ("http://169.254.169.254/latest/api/token", mockRequests[0].GetURIString());
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_PUT, mockRequests[0].GetMethod());
        ASSERT_EQ("21600", mockRequests[0].GetHeaderValue(EC2_IMDS_TOKEN_TTL_HEADER));
        ASSERT_EQ("123321--=random token information xxx===", mockRequests[1].GetHeaderValue(EC2_IMDS_TOKEN_HEADER));
        ASSERT_EQ("http://169.254.169.254/latest/meta-data/iam/security-credentials", mockRequests[1].GetURIString());
        ASSERT_EQ("", cred);
    }

    TEST_F(AWSHttpResourceClientTest, TestEC2MetadataClientFailedGettingCredentialsFromSecureServerWithTokenAndRetries)
    {
        // Create EC2MetadataClient with default endpoint http://169.254.169.254
        auto ec2MetadataClient = Aws::MakeShared<Aws::Internal::EC2MetadataClient>(ALLOCATION_TAG, clientConfig);

        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> tokenRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/api/token"),
                                                                      HttpMethod::HTTP_PUT, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> tokenResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*tokenRequest));
        tokenResponse->SetResponseCode(HttpResponseCode::OK);
        tokenResponse->GetResponseBody() << "123321--=random token information xxx===";
        mockHttpClient->AddResponseToReturn(tokenResponse);

        std::shared_ptr<HttpRequest> profileRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/meta-data/iam/security-credentials"),
                                                                       HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        Aws::Vector<std::shared_ptr<StandardHttpResponse>> profileResponses(3, Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*profileRequest)));
        for (auto& response: profileResponses)
        {
            response->SetResponseCode(HttpResponseCode::SERVICE_UNAVAILABLE);
            response->GetResponseBody() << "Throttling";
            mockHttpClient->AddResponseToReturn(response);
        }
        auto cred = ec2MetadataClient->GetDefaultCredentialsSecurely();
        auto mockRequests = mockHttpClient->GetAllRequestsMade();
        ASSERT_EQ(4u, mockRequests.size());
        ASSERT_EQ("http://169.254.169.254/latest/api/token", mockRequests[0].GetURIString());
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_PUT, mockRequests[0].GetMethod());
        ASSERT_EQ("21600", mockRequests[0].GetHeaderValue(EC2_IMDS_TOKEN_TTL_HEADER));
        ASSERT_EQ("123321--=random token information xxx===", mockRequests[1].GetHeaderValue(EC2_IMDS_TOKEN_HEADER));
        ASSERT_EQ("123321--=random token information xxx===", mockRequests[2].GetHeaderValue(EC2_IMDS_TOKEN_HEADER));
        ASSERT_EQ("123321--=random token information xxx===", mockRequests[3].GetHeaderValue(EC2_IMDS_TOKEN_HEADER));
        ASSERT_EQ("http://169.254.169.254/latest/meta-data/iam/security-credentials", mockRequests[1].GetURIString());
        ASSERT_EQ("http://169.254.169.254/latest/meta-data/iam/security-credentials", mockRequests[2].GetURIString());
        ASSERT_EQ("http://169.254.169.254/latest/meta-data/iam/security-credentials", mockRequests[3].GetURIString());
        ASSERT_EQ("", cred);
    }

    TEST_F(AWSHttpResourceClientTest, TestEC2MetadataClientFailedGettingCredentialsFromSecureServerWithRetries)
    {
        // Create EC2MetadataClient with default endpoint http://169.254.169.254
        auto ec2MetadataClient = Aws::MakeShared<Aws::Internal::EC2MetadataClient>(ALLOCATION_TAG, clientConfig);

        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> tokenRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/api/token"),
                                                                      HttpMethod::HTTP_PUT, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        // max try 2 times
        Aws::Vector<std::shared_ptr<StandardHttpResponse>> tokenResponses(3, Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*tokenRequest)));
        for (auto& response: tokenResponses)
        {
            response->SetResponseCode(HttpResponseCode::SERVICE_UNAVAILABLE);
            response->GetResponseBody() << "Throttling";
            mockHttpClient->AddResponseToReturn(response);
        }
        // falling back to insecure way
        std::shared_ptr<HttpRequest> profileRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/meta-data/iam/security-credentials"),
                                                                       HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> profileResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*profileRequest));
        profileResponse->SetResponseCode(HttpResponseCode::UNAUTHORIZED);
        profileResponse->GetResponseBody() << "token required";
        mockHttpClient->AddResponseToReturn(profileResponse);

        auto cred = ec2MetadataClient->GetDefaultCredentialsSecurely();
        auto mockRequests = mockHttpClient->GetAllRequestsMade();
        ASSERT_EQ(4u, mockRequests.size());
        ASSERT_EQ("http://169.254.169.254/latest/api/token", mockRequests[0].GetURIString());
        ASSERT_EQ("http://169.254.169.254/latest/api/token", mockRequests[1].GetURIString());
        ASSERT_EQ("http://169.254.169.254/latest/api/token", mockRequests[2].GetURIString());
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_PUT, mockRequests[0].GetMethod());
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_PUT, mockRequests[1].GetMethod());
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_PUT, mockRequests[2].GetMethod());
        ASSERT_EQ("21600", mockRequests[0].GetHeaderValue(EC2_IMDS_TOKEN_TTL_HEADER));
        ASSERT_EQ("21600", mockRequests[1].GetHeaderValue(EC2_IMDS_TOKEN_TTL_HEADER));
        ASSERT_EQ("21600", mockRequests[2].GetHeaderValue(EC2_IMDS_TOKEN_TTL_HEADER));
        ASSERT_FALSE(mockRequests[3].HasHeader(EC2_IMDS_TOKEN_HEADER));
        ASSERT_EQ("http://169.254.169.254/latest/meta-data/iam/security-credentials", mockRequests[3].GetURIString());
        ASSERT_EQ("", cred);
    }

    TEST_F(AWSHttpResourceClientTest, TestEC2MetadataClientGetExpectedCredentialsFromInSecureServerWithRetry)
    {
        // Create EC2MetadataClient with default endpoint http://169.254.169.254
        auto ec2MetadataClient = Aws::MakeShared<Aws::Internal::EC2MetadataClient>(ALLOCATION_TAG, clientConfig);

        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> tokenRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/api/token"),
                                                                      HttpMethod::HTTP_PUT, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> tokenResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*tokenRequest));
        tokenResponse->SetResponseCode(HttpResponseCode::NOT_FOUND);
        tokenResponse->GetResponseBody() << "error information"; // empty body will be treated as NETWORK_ERROR, hence retryable error.
        mockHttpClient->AddResponseToReturn(tokenResponse);

        std::shared_ptr<HttpRequest> profileRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/meta-data/iam/security-credentials"),
                                                                       HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> profileResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*profileRequest));
        std::shared_ptr<StandardHttpResponse> profileResponseRetry = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*profileRequest));
        profileResponseRetry->SetResponseCode(HttpResponseCode::SERVICE_UNAVAILABLE);
        profileResponseRetry->GetResponseBody() << "Throttling";
        mockHttpClient->AddResponseToReturn(profileResponseRetry);
        profileResponse->SetResponseCode(HttpResponseCode::OK);
        profileResponse->GetResponseBody() << "credentials";
        mockHttpClient->AddResponseToReturn(profileResponse);

        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> credRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/meta-data/iam/security-credentials/credentials"),
                                                                     HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> credResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*credRequest));
        credResponse->SetResponseCode(HttpResponseCode::OK);
        credResponse->GetResponseBody() << "{ \"AccessKeyId\": \"goodAccessKey\", \"SecretAccessKey\": \"goodSecretKey\", \"Token\": \"goodToken\" }";
        mockHttpClient->AddResponseToReturn(credResponse);

        auto cred = ec2MetadataClient->GetDefaultCredentialsSecurely();
        auto mockRequests = mockHttpClient->GetAllRequestsMade();
        ASSERT_EQ(4u, mockRequests.size());
        ASSERT_EQ("http://169.254.169.254/latest/api/token", mockRequests[0].GetURIString());
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_PUT, mockRequests[0].GetMethod());
        ASSERT_EQ("21600", mockRequests[0].GetHeaderValue(EC2_IMDS_TOKEN_TTL_HEADER));
        ASSERT_FALSE(mockRequests[1].HasHeader(EC2_IMDS_TOKEN_HEADER));
        ASSERT_EQ("http://169.254.169.254/latest/meta-data/iam/security-credentials", mockRequests[1].GetURIString());
        ASSERT_FALSE(mockRequests[2].HasHeader(EC2_IMDS_TOKEN_HEADER));
        ASSERT_EQ("http://169.254.169.254/latest/meta-data/iam/security-credentials", mockRequests[2].GetURIString());
        ASSERT_FALSE(mockRequests[3].HasHeader(EC2_IMDS_TOKEN_HEADER));
        ASSERT_EQ("http://169.254.169.254/latest/meta-data/iam/security-credentials/credentials", mockRequests[3].GetURIString());
        ASSERT_EQ(Aws::Http::Scheme::HTTP, mockRequests[3].GetUri().GetScheme());
        ASSERT_EQ("169.254.169.254", mockRequests[3].GetUri().GetAuthority());
        ASSERT_EQ("/latest/meta-data/iam/security-credentials/credentials", mockRequests[3].GetUri().GetPath());
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_GET, mockRequests[3].GetMethod());
        ASSERT_EQ(cred, "{ \"AccessKeyId\": \"goodAccessKey\", \"SecretAccessKey\": \"goodSecretKey\", \"Token\": \"goodToken\" }");
    }

    TEST_F(AWSHttpResourceClientTest, TestEC2MetadataClientFailedGettingCredentialsFromInSecureServer)
    {
        // Create EC2MetadataClient with default endpoint http://169.254.169.254
        auto ec2MetadataClient = Aws::MakeShared<Aws::Internal::EC2MetadataClient>(ALLOCATION_TAG, clientConfig);

        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> tokenRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/api/token"),
                                                                      HttpMethod::HTTP_PUT, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> tokenResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*tokenRequest));
        tokenResponse->SetResponseCode(HttpResponseCode::NOT_FOUND);
        tokenResponse->GetResponseBody() << "error information"; // empty body will be treated as NETWORK_ERROR, hence retryable error.
        mockHttpClient->AddResponseToReturn(tokenResponse);

        std::shared_ptr<HttpRequest> profileRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/meta-data/iam/security-credentials"),
                                                                       HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> profileResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*profileRequest));
        profileResponse->SetResponseCode(HttpResponseCode::NOT_FOUND);
        profileResponse->GetResponseBody() << "profile not found";
        mockHttpClient->AddResponseToReturn(profileResponse);

        auto cred = ec2MetadataClient->GetDefaultCredentialsSecurely();
        auto mockRequests = mockHttpClient->GetAllRequestsMade();
        ASSERT_EQ(2u, mockRequests.size());
        ASSERT_EQ("http://169.254.169.254/latest/api/token", mockRequests[0].GetURIString());
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_PUT, mockRequests[0].GetMethod());
        ASSERT_EQ("21600", mockRequests[0].GetHeaderValue(EC2_IMDS_TOKEN_TTL_HEADER));
        ASSERT_FALSE(mockRequests[1].HasHeader(EC2_IMDS_TOKEN_HEADER));
        ASSERT_EQ("http://169.254.169.254/latest/meta-data/iam/security-credentials", mockRequests[1].GetURIString());
        ASSERT_EQ("", cred);
    }

    TEST_F(AWSHttpResourceClientTest, TestEC2MetadataClientFailedGettingCredentialsFromInSecureServerWithRetries)
    {
        // Create EC2MetadataClient with default endpoint http://169.254.169.254
        auto ec2MetadataClient = Aws::MakeShared<Aws::Internal::EC2MetadataClient>(ALLOCATION_TAG, clientConfig);

        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> tokenRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/api/token"),
                                                                      HttpMethod::HTTP_PUT, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> tokenResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*tokenRequest));
        tokenResponse->SetResponseCode(HttpResponseCode::NOT_FOUND);
        tokenResponse->GetResponseBody() << "error information"; // empty body will be treated as NETWORK_ERROR, hence retryable error.
        mockHttpClient->AddResponseToReturn(tokenResponse);

        std::shared_ptr<HttpRequest> profileRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/meta-data/iam/security-credentials"),
                                                                       HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        Aws::Vector<std::shared_ptr<StandardHttpResponse>> profileResponses(3, Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*profileRequest)));
        for (auto& response: profileResponses)
        {
            response->SetResponseCode(HttpResponseCode::SERVICE_UNAVAILABLE);
            response->GetResponseBody() << "Throttling";
            mockHttpClient->AddResponseToReturn(response);
        }
        auto cred = ec2MetadataClient->GetDefaultCredentialsSecurely();
        auto mockRequests = mockHttpClient->GetAllRequestsMade();
        ASSERT_EQ(4u, mockRequests.size());
        ASSERT_EQ("http://169.254.169.254/latest/api/token", mockRequests[0].GetURIString());
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_PUT, mockRequests[0].GetMethod());
        ASSERT_EQ("21600", mockRequests[0].GetHeaderValue(EC2_IMDS_TOKEN_TTL_HEADER));
        ASSERT_FALSE(mockRequests[1].HasHeader(EC2_IMDS_TOKEN_HEADER));
        ASSERT_FALSE(mockRequests[2].HasHeader(EC2_IMDS_TOKEN_HEADER));
        ASSERT_FALSE(mockRequests[3].HasHeader(EC2_IMDS_TOKEN_HEADER));
        ASSERT_EQ("http://169.254.169.254/latest/meta-data/iam/security-credentials", mockRequests[1].GetURIString());
        ASSERT_EQ("http://169.254.169.254/latest/meta-data/iam/security-credentials", mockRequests[2].GetURIString());
        ASSERT_EQ("http://169.254.169.254/latest/meta-data/iam/security-credentials", mockRequests[3].GetURIString());
        ASSERT_EQ("", cred);
    }

    TEST_F(AWSHttpResourceClientTest, TestEC2MetadataClientGetRegionWithNullResponse)
    {
        // Create EC2MetadataClient with default endpoint http://169.254.169.254
        auto ec2MetadataClient = Aws::MakeShared<Aws::Internal::EC2MetadataClient>(ALLOCATION_TAG, clientConfig);

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
        auto ec2MetadataClient = Aws::MakeShared<Aws::Internal::EC2MetadataClient>(ALLOCATION_TAG, clientConfig);

        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> regionRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/meta-data/placement/availability-zone"),
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> regionResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*regionRequest));
        regionResponse->SetResponseCode(HttpResponseCode::OK);
        regionResponse->GetResponseBody() << "";
        mockHttpClient->AddResponseToReturn(regionResponse);

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
        auto ec2MetadataClient = Aws::MakeShared<Aws::Internal::EC2MetadataClient>(ALLOCATION_TAG, clientConfig);

        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> regionRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/meta-data/placement/availability-zone"),
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> regionResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*regionRequest));
        regionResponse->SetResponseCode(HttpResponseCode::BAD_REQUEST);
        regionResponse->GetResponseBody() << "Any test string";
        mockHttpClient->AddResponseToReturn(regionResponse);

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
        auto ec2MetadataClient = Aws::MakeShared<Aws::Internal::EC2MetadataClient>(ALLOCATION_TAG, clientConfig);

        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> regionRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/meta-data/placement/availability-zone"),
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> regionResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*regionRequest));
        regionResponse->SetResponseCode(HttpResponseCode::OK);
        regionResponse->GetResponseBody() << "us-west-123abc";
        mockHttpClient->AddResponseToReturn(regionResponse);

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
        auto ec2MetadataClient = Aws::MakeShared<Aws::Internal::EC2MetadataClient>(ALLOCATION_TAG, clientConfig);

        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> regionRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/meta-data/placement/availability-zone"),
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> regionResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*regionRequest));
        regionResponse->SetResponseCode(HttpResponseCode::OK);
        regionResponse->GetResponseBody() << "us-west-123abc321def";
        mockHttpClient->AddResponseToReturn(regionResponse);

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
        auto ec2MetadataClient = Aws::MakeShared<Aws::Internal::EC2MetadataClient>(ALLOCATION_TAG, clientConfig);

        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> regionRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/meta-data/placement/availability-zone"),
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> regionResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*regionRequest));
        regionResponse->SetResponseCode(HttpResponseCode::OK);
        regionResponse->GetResponseBody() << "123456-us-west-123abc321def";
        mockHttpClient->AddResponseToReturn(regionResponse);

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
        auto ec2MetadataClient = Aws::MakeShared<Aws::Internal::EC2MetadataClient>(ALLOCATION_TAG, clientConfig);

        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> regionRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/meta-data/placement/availability-zone"),
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> regionResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*regionRequest));
        regionResponse->SetResponseCode(HttpResponseCode::OK);
        regionResponse->GetResponseBody() << "us-west-123321";
        mockHttpClient->AddResponseToReturn(regionResponse);

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
        auto ec2MetadataClient = Aws::MakeShared<Aws::Internal::EC2MetadataClient>(ALLOCATION_TAG, clientConfig);

        // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
        std::shared_ptr<HttpRequest> regionRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/meta-data/placement/availability-zone"),
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> regionResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*regionRequest));
        regionResponse->SetResponseCode(HttpResponseCode::OK);
        regionResponse->GetResponseBody() << "us-west-abccba";
        mockHttpClient->AddResponseToReturn(regionResponse);

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
        auto ecsCredentialsClient = Aws::MakeShared<Aws::Internal::ECSCredentialsClient>(ALLOCATION_TAG, clientConfig, "/path/to/res");

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
        auto ecsCredentialsClient = Aws::MakeShared<Aws::Internal::ECSCredentialsClient>(ALLOCATION_TAG, clientConfig, "/path/to/res");

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

    TEST_F(AWSHttpResourceClientTest, TestECSCredentialsClientUsingFullUriAndAuthToken)
    {
        auto ecsCredentialsClient = Aws::MakeShared<Aws::Internal::ECSCredentialsClient>(ALLOCATION_TAG, clientConfig,
                ""/*resource*/, "http://10.1.1.1/super/secret"/*endpoint*/, "TrustMeItIsMe"/*authToken*/);

        auto cred = ecsCredentialsClient->GetECSCredentials();
        auto mockRequest = mockHttpClient->GetMostRecentHttpRequest();
        ASSERT_EQ(Aws::Http::Scheme::HTTP, mockRequest.GetUri().GetScheme());
        ASSERT_STREQ("http://10.1.1.1/super/secret", mockRequest.GetURIString().c_str());
        ASSERT_EQ(Aws::Http::HttpMethod::HTTP_GET, mockRequest.GetMethod());
        ASSERT_EQ("10.1.1.1", mockRequest.GetUri().GetAuthority());
        ASSERT_EQ("/super/secret", mockRequest.GetUri().GetPath());
        ASSERT_STREQ("TrustMeItIsMe", mockRequest.GetHeaderValue(Aws::Http::AWS_AUTHORIZATION_HEADER).c_str());
        ASSERT_EQ("", cred);
    }

    TEST_F(AWSHttpResourceClientTest, TestECSCredentialsClientWithHttpBadRequest)
    {
        // Create EC2CredentialsClient with default endpoint http://169.254.170.2
        auto ecsCredentialsClient = Aws::MakeShared<Aws::Internal::ECSCredentialsClient>(ALLOCATION_TAG, clientConfig, "/path/to/res");

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
        auto ecsCredentialsClient = Aws::MakeShared<Aws::Internal::ECSCredentialsClient>(ALLOCATION_TAG, clientConfig, "/path/to/res");

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
