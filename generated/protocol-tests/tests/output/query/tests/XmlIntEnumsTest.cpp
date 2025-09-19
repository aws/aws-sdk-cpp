/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/XmlIntEnumsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlIntEnums = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(XmlIntEnums, QueryXmlIntEnums) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body =
      "PFhtbEludEVudW1zUmVzcG9uc2UgeG1sbnM9Imh0dHBzOi8vZXhhbXBsZS5jb20vIj4KICAgIDxYbWxJbnRFbnVtc1Jlc3VsdD4KICAgICAgICA8aW50RW51bTE+"
      "MTwvaW50RW51bTE+CiAgICAgICAgPGludEVudW0yPjI8L2ludEVudW0yPgogICAgICAgIDxpbnRFbnVtMz4zPC9pbnRFbnVtMz4KICAgICAgICA8aW50RW51bUxpc3Q+"
      "CiAgICAgICAgICAgIDxtZW1iZXI+"
      "MTwvbWVtYmVyPgogICAgICAgICAgICA8bWVtYmVyPjI8L21lbWJlcj4KICAgICAgICA8L2ludEVudW1MaXN0PgogICAgICAgIDxpbnRFbnVtU2V0PgogICAgICAgICAgICA8"
      "bWVtYmVyPjE8L21lbWJlcj4KICAgICAgICAgICAgPG1lbWJlcj4yPC9tZW1iZXI+"
      "CiAgICAgICAgPC9pbnRFbnVtU2V0PgogICAgICAgIDxpbnRFbnVtTWFwPgogICAgICAgICAgICA8ZW50cnk+"
      "CiAgICAgICAgICAgICAgICA8a2V5PmE8L2tleT4KICAgICAgICAgICAgICAgIDx2YWx1ZT4xPC92YWx1ZT4KICAgICAgICAgICAgPC9lbnRyeT4KICAgICAgICAgICAgPGVu"
      "dHJ5PgogICAgICAgICAgICAgICAgPGtleT5iPC9rZXk+CiAgICAgICAgICAgICAgICA8dmFsdWU+MjwvdmFsdWU+CiAgICAgICAgICAgIDwvZW50cnk+"
      "CiAgICAgICAgPC9pbnRFbnVtTWFwPgogICAgPC9YbWxJbnRFbnVtc1Jlc3VsdD4KPC9YbWxJbnRFbnVtc1Jlc3BvbnNlPgo=";
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
