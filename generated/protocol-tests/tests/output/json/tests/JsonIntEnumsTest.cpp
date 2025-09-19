/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/json-protocol/JsonProtocolClient.h>
#include <aws/json-protocol/model/JsonIntEnumsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using JsonIntEnums = AWS_PROTOCOL_TEST_SUITE;
using JsonProtocolClient = Aws::JsonProtocol::JsonProtocolClient;
using namespace Aws::JsonProtocol::Model;

AWS_PROTOCOL_TEST(JsonIntEnums, AwsJson11IntEnums) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.JsonIntEnums)"}};
  mockRs.body =
      "ewogICAgImludEVudW0xIjogMSwKICAgICJpbnRFbnVtMiI6IDIsCiAgICAiaW50RW51bTMiOiAzLAogICAgImludEVudW1MaXN0IjogWwogICAgICAgIDEsCiAgICAgICAg"
      "MgogICAgXSwKICAgICJpbnRFbnVtU2V0IjogWwogICAgICAgIDEsCiAgICAgICAgMgogICAgXSwKICAgICJpbnRFbnVtTWFwIjogewogICAgICAgICJhIjogMSwKICAgICAg"
      "ICAiYiI6IDIKICAgIH0KfQ==";
  SetMockResponse(mockRs);

  JsonIntEnumsRequest request;

  auto outcome = client.JsonIntEnums(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const JsonIntEnumsResult& result = outcome.GetResult();
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
