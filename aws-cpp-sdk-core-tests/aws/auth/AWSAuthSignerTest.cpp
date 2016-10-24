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
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/http/standard/StandardHttpRequest.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/utils/StringUtils.h>
#include <fstream>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Http;

static const char* ALLOC_TAG = "AwsAuthV4SignerTest";

//Simple test fixture that allows us to override the timestamp, and also turn off a header that isn't in the test sets.
class TestableAuthv4Signer : public AWSAuthV4Signer
{
public:
    TestableAuthv4Signer(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
        const char* serviceName, const Aws::String& region, bool signPayloads, bool urlEscapePath)
        : AWSAuthV4Signer(credentialsProvider, serviceName, region, signPayloads, urlEscapePath) { m_includeSha256HashHeader = false; }

    void SetSigningTimestamp(const DateTime& dateTime) { m_signingTimeStamp = dateTime; }

protected:
    virtual Aws::Utils::DateTime GetSigningTimestamp() const { return m_signingTimeStamp; }    

private:
    DateTime m_signingTimeStamp;
};

static DateTime ParseTestFileDateTime(const char* dateStr)
{
    Aws::StringStream ss;
    ss << dateStr[0] << dateStr[1] << dateStr[2] << dateStr[3] << "-" << dateStr[4] << dateStr[5] << "-" << dateStr[6] << dateStr[7] << "T"
        << dateStr[9] << dateStr[10] << ":" << dateStr[11] << dateStr[12] << ":" << dateStr[13] << dateStr[14] << "Z";
    return DateTime(ss.str().c_str(), DateFormat::ISO_8601);
}

static Standard::StandardHttpRequest ParseHttpRequest(Aws::IOStream& inputStream, DateTime& date)
{
    Aws::String methodLine;
    std::getline(inputStream, methodLine);
    auto firstSpaceIter = methodLine.find_first_of(' ');
    auto secondSpaceIter = methodLine.find(' ', firstSpaceIter + 1);
    Aws::String methodStr = methodLine.substr(0, firstSpaceIter);
    Aws::String pathStr = methodLine.substr(firstSpaceIter + 1, secondSpaceIter - firstSpaceIter - 1);
    Aws::String hostStr;
    HeaderValueCollection headers;
    std::shared_ptr<Aws::IOStream> bodyStream = Aws::MakeShared<Aws::StringStream>("AuthSignerTest");

    Aws::String pairLine;
    Aws::String currentHeader;

    while (std::getline(inputStream, pairLine))
    {
        if(!pairLine.empty())
        {
            //if it's not form parameters, parse headers.
            if(pairLine.find('=') == std::string::npos)
            {
                auto pair = StringUtils::Split(pairLine, ':');
                if (pair[0] == "Host")
                {
                    hostStr = pair[1];
                }
                else if (pair[0] == "X-Amz-Date")
                {
                    date = ParseTestFileDateTime(pair[1].c_str());
                }
                else
                {
                    if (pair.size() == 2)
                    {
                        currentHeader = pair[0].c_str();

                        if (headers.find(currentHeader) == headers.end())
                        {
                            headers[currentHeader] = pair[1].c_str();
                        }
                        else
                        {          
                            headers[currentHeader] += ",";
                            headers[currentHeader] += pair[1].c_str();
                        }
                
                    }
                    else
                    {
                        headers[currentHeader] += "\n";
                        headers[currentHeader] += pair[0].c_str();
                    }            
                }
            }
            //parse content-body
            else 
            {                
                auto pair = StringUtils::Split(pairLine, '=');
                *bodyStream << StringUtils::URLEncode(pair[0].c_str()) << StringUtils::URLEncode(pair[1].c_str()) << "&" << std::endl;
            }
        }
    }
    
    auto pathAndQuery = StringUtils::Split(pathStr, '?');
    auto pathOnly = pathAndQuery[0];
    URI uri;
    uri.SetScheme(Scheme::HTTP);
    uri.SetAuthority(hostStr);
    uri.SetPath(pathOnly);

    if (pathAndQuery.size() == 2)
    {
        auto params = StringUtils::Split(pathAndQuery[1], '&');
        for (auto& param : params)
        {
            auto keyValue = StringUtils::Split(param, '=');
            if (keyValue.size() == 2)
            {
                uri.AddQueryStringParameter(keyValue[0].c_str(), keyValue[1]);
            }
        }
    }

    HttpMethod method = HttpMethod::HTTP_GET;
    if (methodStr == "GET")
    {
        method = HttpMethod::HTTP_GET;
    }
    else if (methodStr == "POST")
    {
        method = HttpMethod::HTTP_POST;
    }
    else if (methodStr == "DELETE")
    {
        method = HttpMethod::HTTP_DELETE;
    }
    else if (methodStr == "PUT")
    {
        method = HttpMethod::HTTP_PUT;
    }
    else if (methodStr == "HEAD")
    {
        method = HttpMethod::HTTP_HEAD;
    }

    Standard::StandardHttpRequest request(uri, method);
    for (auto& header : headers)
    {
        request.SetHeaderValue(header.first, header.second);
    }

    request.AddContentBody(bodyStream);
    return request;
}

static void RunV4TestCase(const char* testCaseName)
{
    Aws::StringStream requestFileName;
    requestFileName << "./aws4_testsuite/aws4_testsuite/" << testCaseName << "/" << testCaseName << ".req";
    Aws::FStream requestFile(requestFileName.str().c_str(), std::ios::in);
    ASSERT_TRUE(requestFile.good());

    Aws::StringStream expectedSignatureFileName;
    expectedSignatureFileName << "./aws4_testsuite/aws4_testsuite/" << testCaseName << "/" << testCaseName << ".authz";

    Aws::FStream signatureFile(expectedSignatureFileName.str().c_str(), std::ios::in);
    ASSERT_TRUE(signatureFile.good());

    DateTime timestampForSigner;
    static const char* region = "us-east-1";
        
    std::shared_ptr<Aws::Auth::AWSCredentialsProvider> credProvider = Aws::MakeShared<Aws::Auth::SimpleAWSCredentialsProvider>(ALLOC_TAG, "AKIDEXAMPLE", "wJalrXUtnFEMI/K7MDENG+bPxRfiCYEXAMPLEKEY");

    auto httpRequestToMake = ParseHttpRequest(requestFile, timestampForSigner);
    TestableAuthv4Signer signer(credProvider, "service", region, false, false);

    signer.SetSigningTimestamp(timestampForSigner);
    bool successfullySigned = signer.SignRequest(httpRequestToMake);
    ASSERT_TRUE(successfullySigned);

    Aws::String expectedSignature;
    std::getline(signatureFile, expectedSignature);

    ASSERT_STREQ(expectedSignature.c_str(), httpRequestToMake.GetAwsAuthorization().c_str());
}

TEST(AWSAuthV4SignerTest, GetHeaderKeyDuplicate)
{
    RunV4TestCase("get-header-key-duplicate");
}

TEST(AWSAuthV4SignerTest, GetHeaderValueMultiline)
{
    RunV4TestCase("get-header-value-multiline");
}

TEST(AWSAuthV4SignerTest, GetHeaderValueOrder)
{
    RunV4TestCase("get-header-value-order");
}

TEST(AWSAuthV4SignerTest, GetHeaderValueTrim)
{
    RunV4TestCase("get-header-value-trim");
}

TEST(AWSAuthV4SignerTest, GetUnreserved)
{
    RunV4TestCase("get-unreserved");
}

TEST(AWSAuthV4SignerTest, GetUtf8)
{
    RunV4TestCase("get-utf8");
}

TEST(AWSAuthV4SignerTest, GetVanilla)
{
    RunV4TestCase("get-vanilla");   
}

TEST(AWSAuthV4SignerTest, GetVanillaEmptyQueryKey)
{
    RunV4TestCase("get-vanilla-empty-query-key");
}

TEST(AWSAuthV4SignerTest, GetVanillaQuery)
{
    RunV4TestCase("get-vanilla-query");
}

TEST(AWSAuthV4SignerTest, GetVanillaQueryOrderKeyCase)
{
    RunV4TestCase("get-vanilla-query-order-key-case");
}

TEST(AWSAuthV4SignerTest, GetVanillaQueryUnreserved)
{
    RunV4TestCase("get-vanilla-query-unreserved");
}

TEST(AWSAuthV4SignerTest, GetVanillaUtf8Query)
{
    RunV4TestCase("get-vanilla-utf8-query");
}

TEST(AWSAuthV4SignerTest, PostHeaderKeyCase)
{
    RunV4TestCase("post-header-key-case");
}

TEST(AWSAuthV4SignerTest, PostHeaderKeySort)
{
    RunV4TestCase("post-header-key-sort");
}

TEST(AWSAuthV4SignerTest, PostHeaderValueCase)
{
    RunV4TestCase("post-header-value-case");
}

TEST(AWSAuthV4SignerTest, PostVanilla)
{
    RunV4TestCase("post-vanilla");
}

TEST(AWSAuthV4SignerTest, PostVanillaEmptyQueryValue)
{
    RunV4TestCase("post-vanilla-empty-query-value");
}

TEST(AWSAuthV4SignerTest, PostVanillaQuery)
{
    RunV4TestCase("post-vanilla-query");
}
