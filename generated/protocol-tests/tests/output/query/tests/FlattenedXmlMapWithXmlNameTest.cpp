/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/FlattenedXmlMapWithXmlNameRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using FlattenedXmlMapWithXmlName = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(FlattenedXmlMapWithXmlName, QueryQueryFlattenedXmlMapWithXmlName) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body =
      "PEZsYXR0ZW5lZFhtbE1hcFdpdGhYbWxOYW1lUmVzcG9uc2UgeG1sbnM9Imh0dHBzOi8vZXhhbXBsZS5jb20vIj4KICAgIDxGbGF0dGVuZWRYbWxNYXBXaXRoWG1sTmFtZVJl"
      "c3VsdD4KICAgICAgICA8S1ZQPgogICAgICAgICAgICA8Sz5hPC9LPgogICAgICAgICAgICA8Vj5BPC9WPgogICAgICAgIDwvS1ZQPgogICAgICAgIDxLVlA+"
      "CiAgICAgICAgICAgIDxLPmI8L0s+CiAgICAgICAgICAgIDxWPkI8L1Y+CiAgICAgICAgPC9LVlA+"
      "CiAgICA8L0ZsYXR0ZW5lZFhtbE1hcFdpdGhYbWxOYW1lUmVzdWx0Pgo8L0ZsYXR0ZW5lZFhtbE1hcFdpdGhYbWxOYW1lUmVzcG9uc2U+";
  SetMockResponse(mockRs);

  FlattenedXmlMapWithXmlNameRequest request;

  auto outcome = client.FlattenedXmlMapWithXmlName(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const FlattenedXmlMapWithXmlNameResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"myMap":{"a":"A","b":"B"}} )" */
    const Aws::Map<Aws::String, Aws::String>& resultMyMap = result.GetMyMap();
    EXPECT_EQ(2U, resultMyMap.size());
    EXPECT_TRUE(resultMyMap.find("a") != resultMyMap.end());
    EXPECT_EQ(R"(A)", resultMyMap.at("a"));
    EXPECT_TRUE(resultMyMap.find("b") != resultMyMap.end());
    EXPECT_EQ(R"(B)", resultMyMap.at("b"));
  });
}
