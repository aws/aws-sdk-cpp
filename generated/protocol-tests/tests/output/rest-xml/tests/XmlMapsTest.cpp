/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlMapsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlMaps = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlMaps, XmlMaps) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body =
      "PFhtbE1hcHNSZXNwb25zZT4KICAgIDxteU1hcD4KICAgICAgICA8ZW50cnk+CiAgICAgICAgICAgIDxrZXk+Zm9vPC9rZXk+"
      "CiAgICAgICAgICAgIDx2YWx1ZT4KICAgICAgICAgICAgICAgIDxoaT50aGVyZTwvaGk+CiAgICAgICAgICAgIDwvdmFsdWU+"
      "CiAgICAgICAgPC9lbnRyeT4KICAgICAgICA8ZW50cnk+CiAgICAgICAgICAgIDxrZXk+YmF6PC9rZXk+"
      "CiAgICAgICAgICAgIDx2YWx1ZT4KICAgICAgICAgICAgICAgIDxoaT5ieWU8L2hpPgogICAgICAgICAgICA8L3ZhbHVlPgogICAgICAgIDwvZW50cnk+"
      "CiAgICA8L215TWFwPgo8L1htbE1hcHNSZXNwb25zZT4K";
  SetMockResponse(mockRs);

  XmlMapsRequest request;

  auto outcome = client.XmlMaps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlMapsResult& result = outcome.GetResult();
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
