/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/XmlEnumsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlEnums = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(XmlEnums, QueryXmlEnums) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body =
      "PFhtbEVudW1zUmVzcG9uc2UgeG1sbnM9Imh0dHBzOi8vZXhhbXBsZS5jb20vIj4KICAgIDxYbWxFbnVtc1Jlc3VsdD4KICAgICAgICA8Zm9vRW51bTE+"
      "Rm9vPC9mb29FbnVtMT4KICAgICAgICA8Zm9vRW51bTI+MDwvZm9vRW51bTI+"
      "CiAgICAgICAgPGZvb0VudW0zPjE8L2Zvb0VudW0zPgogICAgICAgIDxmb29FbnVtTGlzdD4KICAgICAgICAgICAgPG1lbWJlcj5Gb288L21lbWJlcj4KICAgICAgICAgICAg"
      "PG1lbWJlcj4wPC9tZW1iZXI+"
      "CiAgICAgICAgPC9mb29FbnVtTGlzdD4KICAgICAgICA8Zm9vRW51bVNldD4KICAgICAgICAgICAgPG1lbWJlcj5Gb288L21lbWJlcj4KICAgICAgICAgICAgPG1lbWJlcj4w"
      "PC9tZW1iZXI+CiAgICAgICAgPC9mb29FbnVtU2V0PgogICAgICAgIDxmb29FbnVtTWFwPgogICAgICAgICAgICA8ZW50cnk+"
      "CiAgICAgICAgICAgICAgICA8a2V5PmhpPC9rZXk+CiAgICAgICAgICAgICAgICA8dmFsdWU+"
      "Rm9vPC92YWx1ZT4KICAgICAgICAgICAgPC9lbnRyeT4KICAgICAgICAgICAgPGVudHJ5PgogICAgICAgICAgICAgICAgPGtleT56ZXJvPC9rZXk+"
      "CiAgICAgICAgICAgICAgICA8dmFsdWU+MDwvdmFsdWU+CiAgICAgICAgICAgIDwvZW50cnk+"
      "CiAgICAgICAgPC9mb29FbnVtTWFwPgogICAgPC9YbWxFbnVtc1Jlc3VsdD4KPC9YbWxFbnVtc1Jlc3BvbnNlPgo=";
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
