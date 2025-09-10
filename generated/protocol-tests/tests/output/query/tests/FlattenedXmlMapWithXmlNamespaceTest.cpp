/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/FlattenedXmlMapWithXmlNamespaceRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using FlattenedXmlMapWithXmlNamespace = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(FlattenedXmlMapWithXmlNamespace, QueryQueryFlattenedXmlMapWithXmlNamespace) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body =
      "PEZsYXR0ZW5lZFhtbE1hcFdpdGhYbWxOYW1lc3BhY2VSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogICAgPEZsYXR0ZW5lZFhtbE1hcFdpdGhYbWxO"
      "YW1lc3BhY2VSZXN1bHQ+"
      "CiAgICAgICAgPEtWUCB4bWxucz0iaHR0cHM6Ly90aGUtbWVtYmVyLmV4YW1wbGUuY29tIj4KICAgICAgICAgICAgPEsgeG1sbnM9Imh0dHBzOi8vdGhlLWtleS5leGFtcGxl"
      "LmNvbSI+"
      "YTwvSz4KICAgICAgICAgICAgPFYgeG1sbnM9Imh0dHBzOi8vdGhlLXZhbHVlLmV4YW1wbGUuY29tIj5BPC9WPgogICAgICAgIDwvS1ZQPgogICAgICAgIDxLVlAgeG1sbnM9"
      "Imh0dHBzOi8vdGhlLW1lbWJlci5leGFtcGxlLmNvbSI+CiAgICAgICAgICAgIDxLIHhtbG5zPSJodHRwczovL3RoZS1rZXkuZXhhbXBsZS5jb20iPmI8L0s+"
      "CiAgICAgICAgICAgIDxWIHhtbG5zPSJodHRwczovL3RoZS12YWx1ZS5leGFtcGxlLmNvbSI+"
      "QjwvVj4KICAgICAgICA8L0tWUD4KICAgIDwvRmxhdHRlbmVkWG1sTWFwV2l0aFhtbE5hbWVzcGFjZVJlc3VsdD4KPC9GbGF0dGVuZWRYbWxNYXBXaXRoWG1sTmFtZXNwYWNl"
      "UmVzcG9uc2U+";
  SetMockResponse(mockRs);

  FlattenedXmlMapWithXmlNamespaceRequest request;

  auto outcome = client.FlattenedXmlMapWithXmlNamespace(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const FlattenedXmlMapWithXmlNamespaceResult& result = outcome.GetResult();
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
