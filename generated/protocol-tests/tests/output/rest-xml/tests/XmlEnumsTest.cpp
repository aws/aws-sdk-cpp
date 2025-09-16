/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlEnumsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlEnums = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlEnums, XmlEnums) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body =
      "PFhtbEVudW1zUmVzcG9uc2U+CiAgICA8Zm9vRW51bTE+"
      "Rm9vPC9mb29FbnVtMT4KICAgIDxmb29FbnVtMj4wPC9mb29FbnVtMj4KICAgIDxmb29FbnVtMz4xPC9mb29FbnVtMz4KICAgIDxmb29FbnVtTGlzdD4KICAgICAgICA8bWVt"
      "YmVyPkZvbzwvbWVtYmVyPgogICAgICAgIDxtZW1iZXI+MDwvbWVtYmVyPgogICAgPC9mb29FbnVtTGlzdD4KICAgIDxmb29FbnVtU2V0PgogICAgICAgIDxtZW1iZXI+"
      "Rm9vPC9tZW1iZXI+CiAgICAgICAgPG1lbWJlcj4wPC9tZW1iZXI+CiAgICA8L2Zvb0VudW1TZXQ+CiAgICA8Zm9vRW51bU1hcD4KICAgICAgICA8ZW50cnk+"
      "CiAgICAgICAgICAgIDxrZXk+aGk8L2tleT4KICAgICAgICAgICAgPHZhbHVlPkZvbzwvdmFsdWU+CiAgICAgICAgPC9lbnRyeT4KICAgICAgICA8ZW50cnk+"
      "CiAgICAgICAgICAgIDxrZXk+emVybzwva2V5PgogICAgICAgICAgICA8dmFsdWU+MDwvdmFsdWU+"
      "CiAgICAgICAgPC9lbnRyeT4KICAgIDwvZm9vRW51bU1hcD4KPC9YbWxFbnVtc1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  XmlEnumsRequest request;

  auto outcome = client.XmlEnums(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlEnumsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"(
     * {"fooEnum1":"Foo","fooEnum2":"0","fooEnum3":"1","fooEnumList":["Foo","0"],"fooEnumSet":["Foo","0"],"fooEnumMap":{"hi":"Foo","zero":"0"}}
     * )" */
    EXPECT_EQ(FooEnumMapper::GetFooEnumForName(R"e(Foo)e"), result.GetFooEnum1());
    EXPECT_EQ(FooEnumMapper::GetFooEnumForName(R"e(0)e"), result.GetFooEnum2());
    EXPECT_EQ(FooEnumMapper::GetFooEnumForName(R"e(1)e"), result.GetFooEnum3());
    const Aws::Vector<FooEnum>& resultFooEnumListItem = result.GetFooEnumList();
    EXPECT_EQ(2U, resultFooEnumListItem.size());
    EXPECT_EQ(FooEnumMapper::GetFooEnumForName(R"e(Foo)e"), resultFooEnumListItem.at(0));
    EXPECT_EQ(FooEnumMapper::GetFooEnumForName(R"e(0)e"), resultFooEnumListItem.at(1));
    const Aws::Vector<FooEnum>& resultFooEnumSetItem = result.GetFooEnumSet();
    EXPECT_EQ(2U, resultFooEnumSetItem.size());
    EXPECT_EQ(FooEnumMapper::GetFooEnumForName(R"e(Foo)e"), resultFooEnumSetItem.at(0));
    EXPECT_EQ(FooEnumMapper::GetFooEnumForName(R"e(0)e"), resultFooEnumSetItem.at(1));
    const Aws::Map<Aws::String, FooEnum>& resultFooEnumMap = result.GetFooEnumMap();
    EXPECT_EQ(2U, resultFooEnumMap.size());
    EXPECT_TRUE(resultFooEnumMap.find("hi") != resultFooEnumMap.end());
    EXPECT_EQ(FooEnumMapper::GetFooEnumForName(R"e(Foo)e"), resultFooEnumMap.at("hi"));
    EXPECT_TRUE(resultFooEnumMap.find("zero") != resultFooEnumMap.end());
    EXPECT_EQ(FooEnumMapper::GetFooEnumForName(R"e(0)e"), resultFooEnumMap.at("zero"));
  });
}
