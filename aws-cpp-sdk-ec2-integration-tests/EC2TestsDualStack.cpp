/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/testing/mocks/http/MockHttpClient.h>

#include <aws/core/auth/AWSCredentials.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>

#include <aws/ec2/EC2Client.h>
#include <aws/ec2/model/DescribeHostsRequest.h>

static const char* ALLOCATION_TAG = "AWSEC2DualStackTests";

/*
 * A test suite that shows how to use a dualstack endpoint with EC2
 */
class EC2DualStackTests : public ::testing::Test
{
};


TEST_F(EC2DualStackTests, TestDualStackMocked)
{
    std::shared_ptr<MockHttpClient> mockHttpClient;
    std::shared_ptr<MockHttpClientFactory> mockHttpClientFactory;
    mockHttpClient = Aws::MakeShared<MockHttpClient>(ALLOCATION_TAG);
    mockHttpClientFactory = Aws::MakeShared<MockHttpClientFactory>(ALLOCATION_TAG);
    mockHttpClientFactory->SetClient(mockHttpClient);
    SetHttpClientFactory(mockHttpClientFactory);

    // mock service reply
    const Aws::String goodReply = R"(<DescribeHostsResponse xmlns="http://ec2.amazonaws.com/doc/2016-11-15/">)"
                                  R"(<requestId>baadf00d-1111-2222-3333-444444444444</requestId><hostSet/></DescribeHostsResponse>)";
    std::shared_ptr<Aws::Http::HttpRequest> requestTmp = CreateHttpRequest(Aws::Http::URI("dummy"), Aws::Http::HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    std::shared_ptr<Aws::Http::Standard::StandardHttpResponse> goodResponse =
            Aws::MakeShared<Aws::Http::Standard::StandardHttpResponse>(ALLOCATION_TAG, requestTmp);
    goodResponse->SetResponseCode(Aws::Http::HttpResponseCode::OK);
    goodResponse->GetResponseBody() << goodReply;
    mockHttpClient->AddResponseToReturn(goodResponse);

    Aws::Client::ClientConfiguration clientConfig;
    clientConfig.region = "us-east-1";
    clientConfig.useDualStack = true;

    Aws::Auth::AWSCredentials mockCreds("accessKey", "secretKey", "sessionToken");
    Aws::EC2::EC2Client ec2Client(mockCreds, clientConfig);

    Aws::EC2::Model::DescribeHostsRequest request;
    Aws::EC2::Model::DescribeHostsOutcome response = ec2Client.DescribeHosts(request);
    AWS_ASSERT_SUCCESS(response);

    auto requestsMade = mockHttpClient->GetAllRequestsMade();
    ASSERT_EQ(1u, requestsMade.size());
    const Aws::Http::Standard::StandardHttpRequest requestMade = requestsMade[0];
    ASSERT_EQ("https://ec2.us-east-1.api.aws", requestMade.GetURIString());
    ASSERT_EQ("ec2.us-east-1.api.aws", requestMade.GetHeaderValue("host"));

    mockHttpClient->Reset();
    mockHttpClient = nullptr;
    mockHttpClientFactory = nullptr;
    Aws::Http::CleanupHttp();
    Aws::Http::InitHttp();
}

TEST_F(EC2DualStackTests, TestDualStackEndpoint)
{
    Aws::Client::ClientConfiguration clientConfig;
    clientConfig.region = "us-east-1";
    clientConfig.useDualStack = true;

    Aws::EC2::EC2Client ec2Client(clientConfig);

    Aws::EC2::Model::DescribeHostsRequest request;
    Aws::EC2::Model::DescribeHostsOutcome response = ec2Client.DescribeHosts(request);

    AWS_ASSERT_SUCCESS(response);
}