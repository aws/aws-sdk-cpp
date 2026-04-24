/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/NestedXmlMapsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using NestedXmlMaps = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(NestedXmlMaps, NestedXmlMapResponse) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body =
      "PE5lc3RlZFhtbE1hcHNSZXNwb25zZT4KICAgIDxuZXN0ZWRNYXA+"
      "CiAgICAgICAgPGVudHJ5PgogICAgICAgICAgICA8a2V5PmZvbzwva2V5PgogICAgICAgICAgICA8dmFsdWU+CiAgICAgICAgICAgICAgICA8ZW50cnk+"
      "CiAgICAgICAgICAgICAgICAgICAgPGtleT5iYXI8L2tleT4KICAgICAgICAgICAgICAgICAgICA8dmFsdWU+QmFyPC92YWx1ZT4KICAgICAgICAgICAgICAgIDwvZW50cnk+"
      "CiAgICAgICAgICAgIDwvdmFsdWU+CiAgICAgICAgPC9lbnRyeT4KICAgIDwvbmVzdGVkTWFwPgo8L05lc3RlZFhtbE1hcHNSZXNwb25zZT4=";
  SetMockResponse(mockRs);

  NestedXmlMapsRequest request;

  auto outcome = client.NestedXmlMaps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const NestedXmlMapsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"nestedMap":{"foo":{"bar":"Bar"}}} )" */
    const Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>>& resultNestedMap = result.GetNestedMap();
    EXPECT_EQ(1U, resultNestedMap.size());
    EXPECT_TRUE(resultNestedMap.find("foo") != resultNestedMap.end());
    {
      const Aws::Map<Aws::String, FooEnum>& resultNestedMapNestedMap = resultNestedMap.at("foo");
      EXPECT_EQ(1U, resultNestedMapNestedMap.size());
      EXPECT_TRUE(resultNestedMapNestedMap.find("bar") != resultNestedMapNestedMap.end());
      EXPECT_EQ(FooEnumMapper::GetFooEnumForName(R"e(Bar)e"), resultNestedMapNestedMap.at("bar"));
    }
  });
}

AWS_PROTOCOL_TEST(NestedXmlMaps, FlatNestedXmlMapResponse) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body =
      "PE5lc3RlZFhtbE1hcHNSZXNwb25zZT4KICAgIDxmbGF0TmVzdGVkTWFwPgogICAgICAgIDxrZXk+Zm9vPC9rZXk+"
      "CiAgICAgICAgPHZhbHVlPgogICAgICAgICAgICA8ZW50cnk+"
      "CiAgICAgICAgICAgICAgICA8a2V5PmJhcjwva2V5PgogICAgICAgICAgICAgICAgPHZhbHVlPkJhcjwvdmFsdWU+CiAgICAgICAgICAgIDwvZW50cnk+"
      "CiAgICAgICAgPC92YWx1ZT4KICAgIDwvZmxhdE5lc3RlZE1hcD4KPC9OZXN0ZWRYbWxNYXBzUmVzcG9uc2U+";
  SetMockResponse(mockRs);

  NestedXmlMapsRequest request;

  auto outcome = client.NestedXmlMaps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const NestedXmlMapsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"flatNestedMap":{"foo":{"bar":"Bar"}}} )" */
    const Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>>& resultFlatNestedMap = result.GetFlatNestedMap();
    EXPECT_EQ(1U, resultFlatNestedMap.size());
    EXPECT_TRUE(resultFlatNestedMap.find("foo") != resultFlatNestedMap.end());
    {
      const Aws::Map<Aws::String, FooEnum>& resultFlatNestedMapNestedMap = resultFlatNestedMap.at("foo");
      EXPECT_EQ(1U, resultFlatNestedMapNestedMap.size());
      EXPECT_TRUE(resultFlatNestedMapNestedMap.find("bar") != resultFlatNestedMapNestedMap.end());
      EXPECT_EQ(FooEnumMapper::GetFooEnumForName(R"e(Bar)e"), resultFlatNestedMapNestedMap.at("bar"));
    }
  });
}
