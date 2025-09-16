/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/JsonIntEnumsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using JsonIntEnums = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(JsonIntEnums, RestJsonJsonIntEnums) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body =
      "ewogICAgImludGVnZXJFbnVtMSI6IDEsCiAgICAiaW50ZWdlckVudW0yIjogMiwKICAgICJpbnRlZ2VyRW51bTMiOiAzLAogICAgImludGVnZXJFbnVtTGlzdCI6IFsKICAg"
      "ICAgICAxLAogICAgICAgIDIsCiAgICAgICAgMwogICAgXSwKICAgICJpbnRlZ2VyRW51bVNldCI6IFsKICAgICAgICAxLAogICAgICAgIDIKICAgIF0sCiAgICAiaW50ZWdl"
      "ckVudW1NYXAiOiB7CiAgICAgICAgImFiYyI6IDEsCiAgICAgICAgImRlZiI6IDIKICAgIH0KfQ==";
  SetMockResponse(mockRs);

  JsonIntEnumsRequest request;

  auto outcome = client.JsonIntEnums(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const JsonIntEnumsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"(
     * {"integerEnum1":1,"integerEnum2":2,"integerEnum3":3,"integerEnumList":[1,2,3],"integerEnumSet":[1,2],"integerEnumMap":{"abc":1,"def":2}}
     * )" */
    EXPECT_EQ(1, result.GetIntegerEnum1());
    EXPECT_EQ(2, result.GetIntegerEnum2());
    EXPECT_EQ(3, result.GetIntegerEnum3());
    const Aws::Vector<int>& resultIntegerEnumListItem = result.GetIntegerEnumList();
    EXPECT_EQ(3U, resultIntegerEnumListItem.size());
    EXPECT_EQ(1, resultIntegerEnumListItem.at(0));
    EXPECT_EQ(2, resultIntegerEnumListItem.at(1));
    EXPECT_EQ(3, resultIntegerEnumListItem.at(2));
    const Aws::Vector<int>& resultIntegerEnumSetItem = result.GetIntegerEnumSet();
    EXPECT_EQ(2U, resultIntegerEnumSetItem.size());
    EXPECT_EQ(1, resultIntegerEnumSetItem.at(0));
    EXPECT_EQ(2, resultIntegerEnumSetItem.at(1));
    const Aws::Map<Aws::String, int>& resultIntegerEnumMap = result.GetIntegerEnumMap();
    EXPECT_EQ(2U, resultIntegerEnumMap.size());
    EXPECT_TRUE(resultIntegerEnumMap.find("abc") != resultIntegerEnumMap.end());
    EXPECT_EQ(1, resultIntegerEnumMap.at("abc"));
    EXPECT_TRUE(resultIntegerEnumMap.find("def") != resultIntegerEnumMap.end());
    EXPECT_EQ(2, resultIntegerEnumMap.at("def"));
  });
}
