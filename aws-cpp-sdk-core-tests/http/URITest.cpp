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

#include <aws/core/http/URI.h>

using namespace Aws::Http;
TEST(URITest, DefaultConstructor)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    URI uri;
    EXPECT_EQ(Scheme::HTTP, uri.GetScheme());
    EXPECT_EQ(HTTP_DEFAULT_PORT, uri.GetPort());

    AWS_END_MEMORY_TEST
}

TEST(URITest, TestSchemeChanges)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    URI uri;
    EXPECT_EQ(Scheme::HTTP, uri.GetScheme());
    EXPECT_EQ(HTTP_DEFAULT_PORT, uri.GetPort());

    uri.SetScheme(Scheme::HTTPS);
    EXPECT_EQ(Scheme::HTTPS, uri.GetScheme());
    //make sure port was updated to 443
    EXPECT_EQ(HTTPS_DEFAULT_PORT, uri.GetPort());

    uri.SetScheme(Scheme::HTTP);
    //make sure port was set to 80
    EXPECT_EQ(HTTP_DEFAULT_PORT, uri.GetPort());

    uri.SetPort(8080);
    uri.SetScheme(Scheme::HTTPS);
    //if port was not 80 or 443, then it shouldn't have been changed.
    EXPECT_EQ(Scheme::HTTPS, uri.GetScheme());
    EXPECT_EQ(8080, uri.GetPort());

    AWS_END_MEMORY_TEST
}

TEST(URITest, TestSetPath)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    URI uri;
    Aws::String path = "/path/to/resource";

    uri.SetPath(path);
    EXPECT_EQ(path, uri.GetPath());

    //make sure url encoding works here
    path = "/path/with space/to/resource";
    uri.SetPath(path);
    EXPECT_EQ("/path/with%20space/to/resource", uri.GetURLEncodedPath());
    //make sure we return an UnEncoded path properly
    EXPECT_EQ(path, uri.GetPath());

    AWS_END_MEMORY_TEST
}

TEST(URITest, TestAddQueryStringParameters)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    URI uri;
    Aws::String path = "/path/to/resource";
    uri.SetPath(path);
    uri.SetAuthority("www.test.com");

    uri.AddQueryStringParameter("test1", "value1");
    uri.AddQueryStringParameter("test needs escaping", "value needs escaping");

    //parameter collection shouldn't  be encoded when accessed
    QueryStringParameterCollection queryStringParams = uri.GetQueryStringParameters();
    EXPECT_STREQ("test needs escaping", queryStringParams.begin()->first.c_str());
    EXPECT_STREQ("value needs escaping", queryStringParams.begin()->second.c_str());
    QueryStringParameterCollection::iterator secondEntry = queryStringParams.begin();
    secondEntry++;
    EXPECT_STREQ("test1", secondEntry->first.c_str());
    EXPECT_STREQ("value1", secondEntry->second.c_str());

    //it should be encoded in the actual query string.
    EXPECT_STREQ("?test1=value1&test%20needs%20escaping=value%20needs%20escaping", uri.GetQueryString().c_str());

    //let's go ahead and make sure the url is constructed properly.
    EXPECT_STREQ("http://www.test.com/path/to/resource?test1=value1&test%20needs%20escaping=value%20needs%20escaping",
        uri.GetURIString().c_str());

    AWS_END_MEMORY_TEST
}

TEST(URITest, TestCanonicalizeQueryStringParameters)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    URI uri;
    Aws::String path = "/path/to/resource";
    uri.SetPath(path);
    uri.SetAuthority("www.test.com");

    uri.AddQueryStringParameter("b", "c");
    uri.AddQueryStringParameter("a", "b");
    uri.AddQueryStringParameter("c", "a");

    uri.CanonicalizeQueryString();

    //it should be sorted and canonical
    EXPECT_EQ("?a=b&b=c&c=a", uri.GetQueryString());
    
    URI nonStandardUri("www.test.com/path/to/resource?nonStandard");
    nonStandardUri.CanonicalizeQueryString();
    EXPECT_EQ("?nonStandard", nonStandardUri.GetQueryString());

    AWS_END_MEMORY_TEST
}

TEST(URITest, TestPort)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    URI uri;
    Aws::String path = "/path/to/resource";
    uri.SetPath(path);
    uri.SetAuthority("www.test.com");
    uri.SetPort(8080);

    EXPECT_STREQ("http://www.test.com:8080/path/to/resource", uri.GetURIString().c_str());

    AWS_END_MEMORY_TEST
}

TEST(URITest, TestParse)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    const char* strUri = "https://www.test.com:8443/path/to/resource?test1=value1&test%20space=value%20space";
    URI uri(strUri);

    EXPECT_EQ(Scheme::HTTPS, uri.GetScheme());
    EXPECT_STREQ("www.test.com", uri.GetAuthority().c_str());
    EXPECT_EQ(8443, uri.GetPort());
    EXPECT_STREQ("/path/to/resource", uri.GetPath().c_str());
    EXPECT_STREQ("?test1=value1&test%20space=value%20space", uri.GetQueryString().c_str());
    EXPECT_STREQ(strUri, uri.GetURIString().c_str());

    const char* strUriNoPort = "https://www.test.com/path/to/resource.htm?test1=value1&test%20space=value%20space";
    URI uriNoPort(strUriNoPort);

    EXPECT_EQ(Scheme::HTTPS, uriNoPort.GetScheme());
    EXPECT_STREQ("www.test.com", uriNoPort.GetAuthority().c_str());
    EXPECT_EQ(443, uriNoPort.GetPort());
    EXPECT_STREQ("/path/to/resource.htm", uriNoPort.GetPath().c_str());
    EXPECT_STREQ("?test1=value1&test%20space=value%20space", uriNoPort.GetQueryString().c_str());
    EXPECT_STREQ(strUriNoPort, uriNoPort.GetURIString().c_str());

    URI uriThatBrokeTheOtherDay = "http://sqs.us-east-1.amazonaws.com/686094048/testQueueName/";
    EXPECT_EQ(Scheme::HTTP, uriThatBrokeTheOtherDay.GetScheme());
    EXPECT_EQ("sqs.us-east-1.amazonaws.com", uriThatBrokeTheOtherDay.GetAuthority());
    EXPECT_EQ(80, uriThatBrokeTheOtherDay.GetPort());
    EXPECT_EQ("/686094048/testQueueName/", uriThatBrokeTheOtherDay.GetPath());
    EXPECT_EQ("http://sqs.us-east-1.amazonaws.com/686094048/testQueueName/", uriThatBrokeTheOtherDay.GetURIString());

    AWS_END_MEMORY_TEST
}

TEST(URITest, TestParseWithColon)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    const char* strUri = "https://test.com/path/1234:_Some_Path";
    URI uri(strUri);

    EXPECT_EQ(Scheme::HTTPS, uri.GetScheme());
    EXPECT_STREQ("test.com", uri.GetAuthority().c_str());
    EXPECT_EQ(443, uri.GetPort());
    EXPECT_STREQ("/path/1234:_Some_Path", uri.GetPath().c_str());
    EXPECT_STREQ(strUri, uri.GetURIString().c_str());

    const char* strUriWithPort = "https://test.com:8080/path/1234:_Some_Path";
    URI uriWithPort(strUriWithPort);

    EXPECT_EQ(Scheme::HTTPS, uriWithPort.GetScheme());
    EXPECT_STREQ("test.com", uriWithPort.GetAuthority().c_str());
    EXPECT_EQ(8080, uriWithPort.GetPort());
    EXPECT_STREQ("/path/1234:_Some_Path", uriWithPort.GetPath().c_str());
    EXPECT_STREQ(strUriWithPort, uriWithPort.GetURIString().c_str());


    const char* strComplexUri = "http://s3.us-east-1.amazonaws.com/awsnativesdkputobjectstestbucket20150702T200059Z/TestObject:1234/awsnativesdkputobjectstestbucket20150702T200059Z/TestObject:Key";
    URI complexUri(strComplexUri);

    EXPECT_EQ(Scheme::HTTP, complexUri.GetScheme());
    EXPECT_STREQ("s3.us-east-1.amazonaws.com", complexUri.GetAuthority().c_str());
    EXPECT_EQ(80, complexUri.GetPort());
    EXPECT_STREQ("/awsnativesdkputobjectstestbucket20150702T200059Z/TestObject:1234/awsnativesdkputobjectstestbucket20150702T200059Z/TestObject:Key", complexUri.GetPath().c_str());
    EXPECT_STREQ(strComplexUri, complexUri.GetURIString().c_str());

    AWS_END_MEMORY_TEST
}

