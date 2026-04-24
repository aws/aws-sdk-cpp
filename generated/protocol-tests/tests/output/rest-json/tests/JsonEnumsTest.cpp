/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/JsonEnumsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using JsonEnums = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(JsonEnums, RestJsonJsonEnums) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body =
      "ewogICAgImZvb0VudW0xIjogIkZvbyIsCiAgICAiZm9vRW51bTIiOiAiMCIsCiAgICAiZm9vRW51bTMiOiAiMSIsCiAgICAiZm9vRW51bUxpc3QiOiBbCiAgICAgICAgIkZv"
      "byIsCiAgICAgICAgIjAiCiAgICBdLAogICAgImZvb0VudW1TZXQiOiBbCiAgICAgICAgIkZvbyIsCiAgICAgICAgIjAiCiAgICBdLAogICAgImZvb0VudW1NYXAiOiB7CiAg"
      "ICAgICAgImhpIjogIkZvbyIsCiAgICAgICAgInplcm8iOiAiMCIKICAgIH0KfQ==";
  SetMockResponse(mockRs);

  JsonEnumsRequest request;

  auto outcome = client.JsonEnums(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const JsonEnumsResult& result = outcome.GetResult();
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
