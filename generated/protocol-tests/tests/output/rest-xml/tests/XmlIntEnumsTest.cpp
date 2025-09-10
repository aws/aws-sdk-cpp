/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlIntEnumsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlIntEnums = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlIntEnums, XmlIntEnums) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body =
      "PFhtbEludEVudW1zUmVzcG9uc2U+CiAgICA8aW50RW51bTE+MTwvaW50RW51bTE+CiAgICA8aW50RW51bTI+MjwvaW50RW51bTI+CiAgICA8aW50RW51bTM+"
      "MzwvaW50RW51bTM+CiAgICA8aW50RW51bUxpc3Q+CiAgICAgICAgPG1lbWJlcj4xPC9tZW1iZXI+CiAgICAgICAgPG1lbWJlcj4yPC9tZW1iZXI+"
      "CiAgICA8L2ludEVudW1MaXN0PgogICAgPGludEVudW1TZXQ+CiAgICAgICAgPG1lbWJlcj4xPC9tZW1iZXI+CiAgICAgICAgPG1lbWJlcj4yPC9tZW1iZXI+"
      "CiAgICA8L2ludEVudW1TZXQ+CiAgICA8aW50RW51bU1hcD4KICAgICAgICA8ZW50cnk+CiAgICAgICAgICAgIDxrZXk+YTwva2V5PgogICAgICAgICAgICA8dmFsdWU+"
      "MTwvdmFsdWU+CiAgICAgICAgPC9lbnRyeT4KICAgICAgICA8ZW50cnk+CiAgICAgICAgICAgIDxrZXk+Yjwva2V5PgogICAgICAgICAgICA8dmFsdWU+MjwvdmFsdWU+"
      "CiAgICAgICAgPC9lbnRyeT4KICAgIDwvaW50RW51bU1hcD4KPC9YbWxJbnRFbnVtc1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  XmlIntEnumsRequest request;

  auto outcome = client.XmlIntEnums(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlIntEnumsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"intEnum1":1,"intEnum2":2,"intEnum3":3,"intEnumList":[1,2],"intEnumSet":[1,2],"intEnumMap":{"a":1,"b":2}} )" */
    EXPECT_EQ(1, result.GetIntEnum1());
    EXPECT_EQ(2, result.GetIntEnum2());
    EXPECT_EQ(3, result.GetIntEnum3());
    const Aws::Vector<int>& resultIntEnumListItem = result.GetIntEnumList();
    EXPECT_EQ(2U, resultIntEnumListItem.size());
    EXPECT_EQ(1, resultIntEnumListItem.at(0));
    EXPECT_EQ(2, resultIntEnumListItem.at(1));
    const Aws::Vector<int>& resultIntEnumSetItem = result.GetIntEnumSet();
    EXPECT_EQ(2U, resultIntEnumSetItem.size());
    EXPECT_EQ(1, resultIntEnumSetItem.at(0));
    EXPECT_EQ(2, resultIntEnumSetItem.at(1));
    const Aws::Map<Aws::String, int>& resultIntEnumMap = result.GetIntEnumMap();
    EXPECT_EQ(2U, resultIntEnumMap.size());
    EXPECT_TRUE(resultIntEnumMap.find("a") != resultIntEnumMap.end());
    EXPECT_EQ(1, resultIntEnumMap.at("a"));
    EXPECT_TRUE(resultIntEnumMap.find("b") != resultIntEnumMap.end());
    EXPECT_EQ(2, resultIntEnumMap.at("b"));
  });
}
