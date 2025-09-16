/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/ec2-protocol/EC2ProtocolClient.h>
#include <aws/ec2-protocol/model/XmlEnumsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlEnums = AWS_PROTOCOL_TEST_SUITE;
using EC2ProtocolClient = Aws::EC2Protocol::EC2ProtocolClient;
using namespace Aws::EC2Protocol::Model;

AWS_PROTOCOL_TEST(XmlEnums, Ec2XmlEnums) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml;charset=UTF-8)"}};
  mockRs.body =
      "PFhtbEVudW1zUmVzcG9uc2UgeG1sbnM9Imh0dHBzOi8vZXhhbXBsZS5jb20vIj4KICAgIDxmb29FbnVtMT5Gb288L2Zvb0VudW0xPgogICAgPGZvb0VudW0yPjA8L2Zvb0Vu"
      "dW0yPgogICAgPGZvb0VudW0zPjE8L2Zvb0VudW0zPgogICAgPGZvb0VudW1MaXN0PgogICAgICAgIDxtZW1iZXI+Rm9vPC9tZW1iZXI+"
      "CiAgICAgICAgPG1lbWJlcj4wPC9tZW1iZXI+CiAgICA8L2Zvb0VudW1MaXN0PgogICAgPGZvb0VudW1TZXQ+"
      "CiAgICAgICAgPG1lbWJlcj5Gb288L21lbWJlcj4KICAgICAgICA8bWVtYmVyPjA8L21lbWJlcj4KICAgIDwvZm9vRW51bVNldD4KICAgIDxmb29FbnVtTWFwPgogICAgICAg"
      "IDxlbnRyeT4KICAgICAgICAgICAgPGtleT5oaTwva2V5PgogICAgICAgICAgICA8dmFsdWU+"
      "Rm9vPC92YWx1ZT4KICAgICAgICA8L2VudHJ5PgogICAgICAgIDxlbnRyeT4KICAgICAgICAgICAgPGtleT56ZXJvPC9rZXk+"
      "CiAgICAgICAgICAgIDx2YWx1ZT4wPC92YWx1ZT4KICAgICAgICA8L2VudHJ5PgogICAgPC9mb29FbnVtTWFwPgogICAgPHJlcXVlc3RJZD5yZXF1ZXN0aWQ8L3JlcXVlc3RJ"
      "ZD4KPC9YbWxFbnVtc1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  XmlEnumsRequest request;

  auto outcome = client.XmlEnums(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlEnumsResponse& result = outcome.GetResult();
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
