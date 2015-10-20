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
#include <aws/testing/MemoryTesting.h>

#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/http/standard/StandardHttpRequest.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/testing/mocks/http/MockHttpClient.h>

TEST(MemoryTest, trivialTest)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    AWS_END_MEMORY_TEST
}

TEST(MemoryTest, simpleTest1)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)
  
    Aws::String toSplit = "test1,test2,test3,test4";
    
    AWS_END_MEMORY_TEST
}


TEST(MemoryTest, simpleTest2)
{
    AWS_BEGIN_MEMORY_TEST(4, 2)

    Aws::String toSplit = "test1,test2,test3,test4";
    Aws::Vector<Aws::String> splits = Aws::Utils::StringUtils::Split(toSplit, ',');

    AWS_END_MEMORY_TEST
}


TEST(MemoryTest, streamTest1)
{
    AWS_BEGIN_MEMORY_TEST(1, 10)

    Aws::StringStream ss;
    ss << "This is a really dumb string but I need a nice long string" << " so that we get some reallocation going on\n";

    AWS_END_MEMORY_TEST
}

TEST(MemoryTest, streamTest2)
{
    static const char* TEST_TAG = "ExactMemoryTest::streamTest2";

    AWS_BEGIN_MEMORY_TEST(1, 10)

    auto strBuffer = Aws::New<Aws::StringBuf>(TEST_TAG);
    auto ioStream = Aws::New<Aws::IOStream>(TEST_TAG, strBuffer);

    (*ioStream) << "This is a really dumb string but I need a nice long string" << " so that we get some reallocation going on\n";

    Aws::Delete(strBuffer);
    Aws::Delete(ioStream);

    AWS_END_MEMORY_TEST
}


TEST(MemoryTest, mockHttpClientJsonTest)
{
    static const char* TEST_TAG = "ExactMemoryTest::mockHttpClientJsonTest";

    AWS_BEGIN_MEMORY_TEST(1, 10)

    auto mockHttpClient = Aws::MakeShared<MockHttpClient>(TEST_TAG);
    auto mockHttpClientFactory = Aws::MakeShared<MockHttpClientFactory>(TEST_TAG);
    mockHttpClientFactory->SetClient(mockHttpClient);

    auto request = mockHttpClientFactory->CreateHttpRequest(Aws::String("http://blah.blah.com/blah"), Aws::Http::HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);

    // Stolen from a cognito identity test
    auto fakeResponse = Aws::MakeShared<Aws::Http::Standard::StandardHttpResponse>(TEST_TAG, *request);
    Aws::Utils::Json::JsonValue responseJson;
    responseJson.WithString("IdentityPoolId", "SomeGUID");
    responseJson.WithString("IdentityPoolName", "MyIdentityPool");
    responseJson.WithBool("AllowUnauthenticatedIdentities", true);

    Aws::String serializedResponseBody = responseJson.WriteReadable();
    fakeResponse->GetResponseBody().write(serializedResponseBody.c_str(), serializedResponseBody.length());
    fakeResponse->SetResponseCode(Aws::Http::HttpResponseCode::OK);

    mockHttpClient->AddResponseToReturn(fakeResponse);

    auto response = mockHttpClient->MakeRequest(*request);

    ASSERT_EQ(response.get(), fakeResponse.get());

    AWS_END_MEMORY_TEST

}

TEST(MemoryTest, DefaultCredentialsProvider)
{
    static const char* TEST_TAG = "MemoryTest::DefaultCredentialsProvider";

    AWS_BEGIN_MEMORY_TEST(1, 10)

    auto blah3 = Aws::MakeShared<Aws::Auth::ProfileConfigFileAWSCredentialsProvider>(TEST_TAG);
    auto vec = Aws::MakeShared<Aws::Vector<std::shared_ptr<Aws::Auth::AWSCredentialsProvider> > >(TEST_TAG);
    vec->push_back(blah3);
    vec = nullptr;

    auto blah2 = Aws::MakeShared<Aws::Auth::ProfileConfigFileAWSCredentialsProvider>(TEST_TAG);
    blah2 = nullptr;

    auto blah = Aws::MakeShared<Aws::Auth::DefaultAWSCredentialsProviderChain>(TEST_TAG);
    blah = nullptr;

    AWS_END_MEMORY_TEST

}

