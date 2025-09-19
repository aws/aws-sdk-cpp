/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/XmlMapsXmlNameRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlMapsXmlName = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(XmlMapsXmlName, QueryQueryXmlMapsXmlName) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body =
      "PFhtbE1hcHNYbWxOYW1lUmVzcG9uc2UgeG1sbnM9Imh0dHBzOi8vZXhhbXBsZS5jb20vIj4KICAgIDxYbWxNYXBzWG1sTmFtZVJlc3VsdD4KICAgICAgICA8bXlNYXA+"
      "CiAgICAgICAgICAgIDxlbnRyeT4KICAgICAgICAgICAgICAgIDxBdHRyaWJ1dGU+Zm9vPC9BdHRyaWJ1dGU+"
      "CiAgICAgICAgICAgICAgICA8U2V0dGluZz4KICAgICAgICAgICAgICAgICAgICA8aGk+"
      "dGhlcmU8L2hpPgogICAgICAgICAgICAgICAgPC9TZXR0aW5nPgogICAgICAgICAgICA8L2VudHJ5PgogICAgICAgICAgICA8ZW50cnk+"
      "CiAgICAgICAgICAgICAgICA8QXR0cmlidXRlPmJhejwvQXR0cmlidXRlPgogICAgICAgICAgICAgICAgPFNldHRpbmc+"
      "CiAgICAgICAgICAgICAgICAgICAgPGhpPmJ5ZTwvaGk+CiAgICAgICAgICAgICAgICA8L1NldHRpbmc+CiAgICAgICAgICAgIDwvZW50cnk+"
      "CiAgICAgICAgPC9teU1hcD4KICAgIDwvWG1sTWFwc1htbE5hbWVSZXN1bHQ+CjwvWG1sTWFwc1htbE5hbWVSZXNwb25zZT4K";
  SetMockResponse(mockRs);

  XmlMapsXmlNameRequest request;

  auto outcome = client.XmlMapsXmlName(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlMapsXmlNameResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"myMap":{"foo":{"hi":"there"},"baz":{"hi":"bye"}}} )" */
    const Aws::Map<Aws::String, GreetingStruct>& resultMyMap = result.GetMyMap();
    EXPECT_EQ(2U, resultMyMap.size());
    {
      EXPECT_TRUE(resultMyMap.find("foo") != resultMyMap.end());
      const GreetingStruct& resultMyMapItem = resultMyMap.at("foo");
      EXPECT_EQ(R"(there)", resultMyMapItem.GetHi());
    }
    {
      EXPECT_TRUE(resultMyMap.find("baz") != resultMyMap.end());
      const GreetingStruct& resultMyMapItem = resultMyMap.at("baz");
      EXPECT_EQ(R"(bye)", resultMyMapItem.GetHi());
    }
  });
}
