/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/FlattenedXmlMapRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using FlattenedXmlMap = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(FlattenedXmlMap, QueryQueryFlattenedXmlMap) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body =
      "PEZsYXR0ZW5lZFhtbE1hcFJlc3BvbnNlIHhtbG5zPSJodHRwczovL2V4YW1wbGUuY29tLyI+"
      "CiAgICA8RmxhdHRlbmVkWG1sTWFwUmVzdWx0PgogICAgICAgIDxteU1hcD4KICAgICAgICAgICAgPGtleT5mb288L2tleT4KICAgICAgICAgICAgPHZhbHVlPkZvbzwvdmFs"
      "dWU+CiAgICAgICAgPC9teU1hcD4KICAgICAgICA8bXlNYXA+CiAgICAgICAgICAgIDxrZXk+YmF6PC9rZXk+"
      "CiAgICAgICAgICAgIDx2YWx1ZT5CYXo8L3ZhbHVlPgogICAgICAgIDwvbXlNYXA+"
      "CiAgICA8L0ZsYXR0ZW5lZFhtbE1hcFJlc3VsdD4KPC9GbGF0dGVuZWRYbWxNYXBSZXNwb25zZT4=";
  SetMockResponse(mockRs);

  FlattenedXmlMapRequest request;

  auto outcome = client.FlattenedXmlMap(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const FlattenedXmlMapResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"myMap":{"foo":"Foo","baz":"Baz"}} )" */
    const Aws::Map<Aws::String, FooEnum>& resultMyMap = result.GetMyMap();
    EXPECT_EQ(2U, resultMyMap.size());
    EXPECT_TRUE(resultMyMap.find("foo") != resultMyMap.end());
    EXPECT_EQ(FooEnumMapper::GetFooEnumForName(R"e(Foo)e"), resultMyMap.at("foo"));
    EXPECT_TRUE(resultMyMap.find("baz") != resultMyMap.end());
    EXPECT_EQ(FooEnumMapper::GetFooEnumForName(R"e(Baz)e"), resultMyMap.at("baz"));
  });
}
