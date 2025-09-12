/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/HttpPrefixHeadersInResponseRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using HttpPrefixHeadersInResponse = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(HttpPrefixHeadersInResponse, HttpPrefixHeadersResponse) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"hello", R"(Hello)"}, {"x-foo", R"(Foo)"}};
  SetMockResponse(mockRs);

  HttpPrefixHeadersInResponseRequest request;

  auto outcome = client.HttpPrefixHeadersInResponse(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const HttpPrefixHeadersInResponseResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"prefixHeaders":{"x-foo":"Foo","hello":"Hello"}} )" */
    const Aws::Map<Aws::String, Aws::String>& resultPrefixHeaders = result.GetPrefixHeaders();
    EXPECT_EQ(2U, resultPrefixHeaders.size());
    EXPECT_TRUE(resultPrefixHeaders.find("x-foo") != resultPrefixHeaders.end());
    EXPECT_EQ(R"(Foo)", resultPrefixHeaders.at("x-foo"));
    EXPECT_TRUE(resultPrefixHeaders.find("hello") != resultPrefixHeaders.end());
    EXPECT_EQ(R"(Hello)", resultPrefixHeaders.at("hello"));
  });
}
