/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/HttpPrefixHeadersRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using HttpPrefixHeaders = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(HttpPrefixHeaders, HttpPrefixHeadersArePresent) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"x-foo", R"(Foo)"}, {"x-foo-abc", R"(Abc value)"}, {"x-foo-def", R"(Def value)"}};
  SetMockResponse(mockRs);

  HttpPrefixHeadersRequest request;

  auto outcome = client.HttpPrefixHeaders(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const HttpPrefixHeadersResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"foo":"Foo","fooMap":{"abc":"Abc value","def":"Def value"}} )" */
    EXPECT_EQ(R"(Foo)", result.GetFoo());
    const Aws::Map<Aws::String, Aws::String>& resultFooMap = result.GetFooMap();
    EXPECT_EQ(2U, resultFooMap.size());
    EXPECT_TRUE(resultFooMap.find("abc") != resultFooMap.end());
    EXPECT_EQ(R"(Abc value)", resultFooMap.at("abc"));
    EXPECT_TRUE(resultFooMap.find("def") != resultFooMap.end());
    EXPECT_EQ(R"(Def value)", resultFooMap.at("def"));
  });
}

AWS_PROTOCOL_TEST(HttpPrefixHeaders, HttpPrefixHeadersAreNotPresent) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"x-foo", R"(Foo)"}};
  SetMockResponse(mockRs);

  HttpPrefixHeadersRequest request;

  auto outcome = client.HttpPrefixHeaders(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const HttpPrefixHeadersResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"foo":"Foo","fooMap":{}} )" */
    EXPECT_EQ(R"(Foo)", result.GetFoo());
    const Aws::Map<Aws::String, Aws::String>& resultFooMap = result.GetFooMap();
    EXPECT_EQ(0U, resultFooMap.size());
  });
}
