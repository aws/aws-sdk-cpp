/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/ec2-protocol/EC2ProtocolClient.h>
#include <aws/ec2-protocol/model/XmlIntEnumsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlIntEnums = AWS_PROTOCOL_TEST_SUITE;
using EC2ProtocolClient = Aws::EC2Protocol::EC2ProtocolClient;
using namespace Aws::EC2Protocol::Model;

AWS_PROTOCOL_TEST(XmlIntEnums, Ec2XmlIntEnums) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml;charset=UTF-8)"}};
  mockRs.body =
      "PFhtbEludEVudW1zUmVzcG9uc2UgeG1sbnM9Imh0dHBzOi8vZXhhbXBsZS5jb20vIj4KICAgIDxpbnRFbnVtMT4xPC9pbnRFbnVtMT4KICAgIDxpbnRFbnVtMj4yPC9pbnRF"
      "bnVtMj4KICAgIDxpbnRFbnVtMz4zPC9pbnRFbnVtMz4KICAgIDxpbnRFbnVtTGlzdD4KICAgICAgICA8bWVtYmVyPjE8L21lbWJlcj4KICAgICAgICA8bWVtYmVyPjI8L21l"
      "bWJlcj4KICAgIDwvaW50RW51bUxpc3Q+"
      "CiAgICA8aW50RW51bVNldD4KICAgICAgICA8bWVtYmVyPjE8L21lbWJlcj4KICAgICAgICA8bWVtYmVyPjI8L21lbWJlcj4KICAgIDwvaW50RW51bVNldD4KICAgIDxpbnRF"
      "bnVtTWFwPgogICAgICAgIDxlbnRyeT4KICAgICAgICAgICAgPGtleT5hPC9rZXk+"
      "CiAgICAgICAgICAgIDx2YWx1ZT4xPC92YWx1ZT4KICAgICAgICA8L2VudHJ5PgogICAgICAgIDxlbnRyeT4KICAgICAgICAgICAgPGtleT5iPC9rZXk+"
      "CiAgICAgICAgICAgIDx2YWx1ZT4yPC92YWx1ZT4KICAgICAgICA8L2VudHJ5PgogICAgPC9pbnRFbnVtTWFwPgogICAgPHJlcXVlc3RJZD5yZXF1ZXN0aWQ8L3JlcXVlc3RJ"
      "ZD4KPC9YbWxJbnRFbnVtc1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  XmlIntEnumsRequest request;

  auto outcome = client.XmlIntEnums(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlIntEnumsResponse& result = outcome.GetResult();
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
