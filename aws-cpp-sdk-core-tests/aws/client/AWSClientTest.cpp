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
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonWebServiceRequest.h>
#include <aws/core/http/standard/StandardHttpRequest.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/utils/memory/stl/AWSAllocator.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Client;
using namespace Aws::Http;
using namespace Aws;

const char* ALLOCATION_TAG = "AWSClientTest";

class AccessViolatingAWSClient : public AWSClient
{
public:
    AccessViolatingAWSClient() : AWSClient(
        ClientConfiguration(), nullptr, nullptr)
    {
    }

    void InvokeBuildHttpRequest(const AmazonWebServiceRequest& request,
        const std::shared_ptr<HttpRequest>& httpRequest) const
    {
        BuildHttpRequest(request, httpRequest);
    }

protected:
    //we don't actually need this for anything, it's just here so we can compile.
    AWSError<CoreErrors> BuildAWSError(const std::shared_ptr<Aws::Http::HttpResponse>& response) const override
    {
        AWS_UNREFERENCED_PARAM(response);
        return AWSError<CoreErrors>(CoreErrors::INVALID_ACTION, false);
    }
};
 
class AmazonWebServiceRequestMock : public AmazonWebServiceRequest
{
public:
    AmazonWebServiceRequestMock() : m_shouldComputeMd5(false) { }
    std::shared_ptr<Aws::IOStream> GetBody() const override { return m_body; }
    void SetBody(const std::shared_ptr<Aws::IOStream>& body) { m_body = body; }
    HeaderValueCollection GetHeaders() const override { return m_headers; }
    void SetHeaders(const HeaderValueCollection& value) { m_headers = value; }
    bool ShouldComputeContentMd5() const override { return m_shouldComputeMd5; }
    void SetComputeContentMd5(bool value) { m_shouldComputeMd5 = value; }

private:
    std::shared_ptr<Aws::IOStream> m_body;
    HeaderValueCollection m_headers;
    bool m_shouldComputeMd5;
};

TEST(AWSClientTest, TestBuildHttpRequestWithHeadersOnly)
{
    HeaderValueCollection headerValues;
    headerValues["test1"] = "testValue1";
    headerValues["test2"] = "testValue2";

    AmazonWebServiceRequestMock amazonWebServiceRequest;
    amazonWebServiceRequest.SetHeaders(headerValues);

    URI uri("http://www.uri.com");
    std::shared_ptr<Standard::StandardHttpRequest> httpRequest = Aws::MakeShared<Standard::StandardHttpRequest>(ALLOCATION_TAG, uri, HttpMethod::HTTP_GET);

    //content-length and content-type should never be added if body is not set. if they are there they should be removed.
    AccessViolatingAWSClient awsClient;
    awsClient.InvokeBuildHttpRequest(amazonWebServiceRequest, httpRequest);

    ASSERT_TRUE(httpRequest->HasHeader("test1"));
    ASSERT_TRUE(httpRequest->HasHeader("test2"));
    ASSERT_TRUE(httpRequest->HasHeader(Http::USER_AGENT_HEADER));
    ASSERT_TRUE(httpRequest->HasHeader(Http::HOST_HEADER));
    ASSERT_FALSE(httpRequest->HasHeader(Http::CONTENT_TYPE_HEADER));
    ASSERT_FALSE(httpRequest->HasHeader(Http::CONTENT_LENGTH_HEADER));

    HeaderValueCollection finalHeaders = httpRequest->GetHeaders();
    ASSERT_EQ(4u, finalHeaders.size());
    ASSERT_EQ("testValue1", finalHeaders["test1"]);
    ASSERT_EQ("testValue2", finalHeaders["test2"]);
    ASSERT_EQ("www.uri.com", finalHeaders[Http::HOST_HEADER]);
    ASSERT_FALSE(finalHeaders[Http::USER_AGENT_HEADER].empty());

    headerValues[Http::CONTENT_LENGTH_HEADER] = "0";
    headerValues[Http::CONTENT_TYPE_HEADER] = "blah";

    httpRequest = Aws::MakeShared<Standard::StandardHttpRequest>(ALLOCATION_TAG, uri, HttpMethod::HTTP_GET);
    awsClient.InvokeBuildHttpRequest(amazonWebServiceRequest, httpRequest);

    ASSERT_TRUE(httpRequest->HasHeader("test1"));
    ASSERT_TRUE(httpRequest->HasHeader("test2"));
    ASSERT_TRUE(httpRequest->HasHeader(Http::USER_AGENT_HEADER));
    ASSERT_TRUE(httpRequest->HasHeader(Http::HOST_HEADER));
    ASSERT_FALSE(httpRequest->HasHeader(Http::CONTENT_TYPE_HEADER));
    ASSERT_FALSE(httpRequest->HasHeader(Http::CONTENT_LENGTH_HEADER));

    finalHeaders = httpRequest->GetHeaders();
    ASSERT_EQ(4u, finalHeaders.size());
    ASSERT_EQ("testValue1", finalHeaders["test1"]);
    ASSERT_EQ("testValue2", finalHeaders["test2"]);
    ASSERT_EQ("www.uri.com", finalHeaders[Http::HOST_HEADER]);
    ASSERT_FALSE(finalHeaders[Http::USER_AGENT_HEADER].empty());
	}

TEST(AWSClientTest, TestBuildHttpRequestWithHeadersAndBody)
{
    HeaderValueCollection headerValues;
    headerValues["test1"] = "testValue1";
    headerValues["test2"] = "testValue2";

    AmazonWebServiceRequestMock amazonWebServiceRequest;
    amazonWebServiceRequest.SetHeaders(headerValues);
    amazonWebServiceRequest.SetComputeContentMd5(true);

    std::shared_ptr<Aws::StringStream> ss = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
    *ss << "test";
    amazonWebServiceRequest.SetBody(ss);

    URI uri("http://www.uri.com");
    std::shared_ptr<Standard::StandardHttpRequest> httpRequest = Aws::MakeShared<Standard::StandardHttpRequest>(ALLOCATION_TAG, uri, HttpMethod::HTTP_GET);

    //content-length should be added if body is set. If it is not there is should be added.
    AccessViolatingAWSClient awsClient;
    awsClient.InvokeBuildHttpRequest(amazonWebServiceRequest, httpRequest);

    ASSERT_TRUE(httpRequest->HasHeader("test1"));
    ASSERT_TRUE(httpRequest->HasHeader("test2"));
    ASSERT_TRUE(httpRequest->HasHeader(Http::USER_AGENT_HEADER));
    ASSERT_TRUE(httpRequest->HasHeader(Http::HOST_HEADER));
    ASSERT_TRUE(httpRequest->HasHeader(Http::CONTENT_LENGTH_HEADER));
    ASSERT_TRUE(httpRequest->HasHeader(Http::CONTENT_MD5_HEADER));

    auto hashResult = Utils::HashingUtils::Base64Encode(Utils::HashingUtils::CalculateMD5(*ss));

    HeaderValueCollection finalHeaders = httpRequest->GetHeaders();
    ASSERT_EQ(6u, finalHeaders.size());
    ASSERT_EQ("testValue1", finalHeaders["test1"]);
    ASSERT_EQ("testValue2", finalHeaders["test2"]);
    ASSERT_EQ("www.uri.com", finalHeaders[Http::HOST_HEADER]);
    ASSERT_EQ(hashResult, finalHeaders[Http::CONTENT_MD5_HEADER]);
    ASSERT_FALSE(finalHeaders[Http::USER_AGENT_HEADER].empty());

    Aws::StringStream contentLengthExpected;
    contentLengthExpected << ss->str().length();
    ASSERT_EQ(contentLengthExpected.str(), finalHeaders[Http::CONTENT_LENGTH_HEADER]);  
}
