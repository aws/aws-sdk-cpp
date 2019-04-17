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
#include <aws/core/http/HttpRequest.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/client/ClientConfiguration.h>

using namespace Aws::Http;
#ifndef NO_HTTP_CLIENT
TEST(HttpClientTest, TestNullResponse)
{
	auto request = CreateHttpRequest(Aws::String("http://some.unknown1234xxx.test.aws"), 
            HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
	auto httpClient = CreateHttpClient(Aws::Client::ClientConfiguration());
	auto response = httpClient->MakeRequest(request);
	ASSERT_EQ(nullptr, response);
}
#endif
