/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlMapsXmlNameRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlMapsXmlName = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlMapsXmlName, XmlMapsXmlName) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body =
      "PFhtbE1hcHNYbWxOYW1lUmVzcG9uc2U+CiAgICA8bXlNYXA+"
      "CiAgICAgICAgPGVudHJ5PgogICAgICAgICAgICA8QXR0cmlidXRlPmZvbzwvQXR0cmlidXRlPgogICAgICAgICAgICA8U2V0dGluZz4KICAgICAgICAgICAgICAgIDxoaT50"
      "aGVyZTwvaGk+"
      "CiAgICAgICAgICAgIDwvU2V0dGluZz4KICAgICAgICA8L2VudHJ5PgogICAgICAgIDxlbnRyeT4KICAgICAgICAgICAgPEF0dHJpYnV0ZT5iYXo8L0F0dHJpYnV0ZT4KICAg"
      "ICAgICAgICAgPFNldHRpbmc+CiAgICAgICAgICAgICAgICA8aGk+YnllPC9oaT4KICAgICAgICAgICAgPC9TZXR0aW5nPgogICAgICAgIDwvZW50cnk+"
      "CiAgICA8L215TWFwPgo8L1htbE1hcHNYbWxOYW1lUmVzcG9uc2U+Cg==";
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
