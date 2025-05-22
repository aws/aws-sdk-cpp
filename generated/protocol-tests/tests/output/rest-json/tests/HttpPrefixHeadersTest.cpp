﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/HttpPrefixHeadersRequest.h>

using HttpPrefixHeaders = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(HttpPrefixHeaders, RestJsonHttpPrefixHeadersArePresent) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"x-foo", R"(Foo)"}, {"x-foo-abc", R"(Abc value)"}, {"x-foo-def", R"(Def value)"}};
  SetMockResponse(mockRs);

  HttpPrefixHeadersRequest request;

  auto outcome = client.HttpPrefixHeaders(request);
  ValidateRequestSent();
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const HttpPrefixHeadersResult& result = outcome.GetResult();
  /* expectedResult = R"( {"foo":"Foo","fooMap":{"abc":"Abc value","def":"Def value"}} )" */
  EXPECT_EQ(R"(Foo)", result.GetFoo());
  const Aws::Map<Aws::String, Aws::String>& resultFooMap = result.GetFooMap();
  EXPECT_EQ(2U, resultFooMap.size());
  EXPECT_TRUE(resultFooMap.find("abc") != resultFooMap.end());
  EXPECT_EQ(R"(Abc value)", resultFooMap.at("abc"));
  EXPECT_TRUE(resultFooMap.find("def") != resultFooMap.end());
  EXPECT_EQ(R"(Def value)", resultFooMap.at("def"));
}
