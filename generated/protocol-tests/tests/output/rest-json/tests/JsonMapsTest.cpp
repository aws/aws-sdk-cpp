/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/JsonMapsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using JsonMaps = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(JsonMaps, RestJsonJsonMaps) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body =
      "ewogICAgImRlbnNlU3RydWN0TWFwIjogewogICAgICAgICJmb28iOiB7CiAgICAgICAgICAgICJoaSI6ICJ0aGVyZSIKICAgICAgICB9LAogICAgICAgICJiYXoiOiB7CiAg"
      "ICAgICAgICAgICJoaSI6ICJieWUiCiAgICAgICAgfQogICAgfQp9";
  SetMockResponse(mockRs);

  JsonMapsRequest request;

  auto outcome = client.JsonMaps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const JsonMapsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"denseStructMap":{"foo":{"hi":"there"},"baz":{"hi":"bye"}}} )" */
    const Aws::Map<Aws::String, GreetingStruct>& resultDenseStructMap = result.GetDenseStructMap();
    EXPECT_EQ(2U, resultDenseStructMap.size());
    {
      EXPECT_TRUE(resultDenseStructMap.find("foo") != resultDenseStructMap.end());
      const GreetingStruct& resultDenseStructMapItem = resultDenseStructMap.at("foo");
      EXPECT_EQ(R"(there)", resultDenseStructMapItem.GetHi());
    }
    {
      EXPECT_TRUE(resultDenseStructMap.find("baz") != resultDenseStructMap.end());
      const GreetingStruct& resultDenseStructMapItem = resultDenseStructMap.at("baz");
      EXPECT_EQ(R"(bye)", resultDenseStructMapItem.GetHi());
    }
  });
}

AWS_PROTOCOL_TEST(JsonMaps, RestJsonDeserializesZeroValuesInMaps) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body =
      "ewogICAgImRlbnNlTnVtYmVyTWFwIjogewogICAgICAgICJ4IjogMAogICAgfSwKICAgICJkZW5zZUJvb2xlYW5NYXAiOiB7CiAgICAgICAgIngiOiBmYWxzZQogICAgfQp"
      "9";
  SetMockResponse(mockRs);

  JsonMapsRequest request;

  auto outcome = client.JsonMaps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const JsonMapsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"denseNumberMap":{"x":0},"denseBooleanMap":{"x":false}} )" */
    const Aws::Map<Aws::String, int>& resultDenseNumberMap = result.GetDenseNumberMap();
    EXPECT_EQ(1U, resultDenseNumberMap.size());
    EXPECT_TRUE(resultDenseNumberMap.find("x") != resultDenseNumberMap.end());
    EXPECT_EQ(0, resultDenseNumberMap.at("x"));
    const Aws::Map<Aws::String, bool>& resultDenseBooleanMap = result.GetDenseBooleanMap();
    EXPECT_EQ(1U, resultDenseBooleanMap.size());
    EXPECT_TRUE(resultDenseBooleanMap.find("x") != resultDenseBooleanMap.end());
    EXPECT_EQ(false, resultDenseBooleanMap.at("x"));
  });
}

AWS_PROTOCOL_TEST(JsonMaps, RestJsonDeserializesDenseSetMap) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgImRlbnNlU2V0TWFwIjogewogICAgICAgICJ4IjogW10sCiAgICAgICAgInkiOiBbImEiLCAiYiJdCiAgICB9Cn0=";
  SetMockResponse(mockRs);

  JsonMapsRequest request;

  auto outcome = client.JsonMaps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const JsonMapsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"denseSetMap":{"x":[],"y":["a","b"]}} )" */
    const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& resultDenseSetMap = result.GetDenseSetMap();
    EXPECT_EQ(2U, resultDenseSetMap.size());
    EXPECT_TRUE(resultDenseSetMap.find("x") != resultDenseSetMap.end());
    {
      const Aws::Vector<Aws::String>& resultDenseSetMapItem = resultDenseSetMap.at("x");
      EXPECT_EQ(0U, resultDenseSetMapItem.size());
    }
    EXPECT_TRUE(resultDenseSetMap.find("y") != resultDenseSetMap.end());
    {
      const Aws::Vector<Aws::String>& resultDenseSetMapItem = resultDenseSetMap.at("y");
      EXPECT_EQ(2U, resultDenseSetMapItem.size());
      EXPECT_EQ(R"(a)", resultDenseSetMapItem.at(0));
      EXPECT_EQ(R"(b)", resultDenseSetMapItem.at(1));
    }
  });
}

AWS_PROTOCOL_TEST(JsonMaps, RestJsonDeserializesDenseSetMapAndSkipsNull) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgImRlbnNlU2V0TWFwIjogewogICAgICAgICJ4IjogW10sCiAgICAgICAgInkiOiBbImEiLCAiYiJdLAogICAgICAgICJ6IjogbnVsbAogICAgfQp9";
  SetMockResponse(mockRs);

  JsonMapsRequest request;

  auto outcome = client.JsonMaps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const JsonMapsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"denseSetMap":{"x":[],"y":["a","b"]}} )" */
    const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& resultDenseSetMap = result.GetDenseSetMap();
    EXPECT_EQ(2U, resultDenseSetMap.size());
    EXPECT_TRUE(resultDenseSetMap.find("x") != resultDenseSetMap.end());
    {
      const Aws::Vector<Aws::String>& resultDenseSetMapItem = resultDenseSetMap.at("x");
      EXPECT_EQ(0U, resultDenseSetMapItem.size());
    }
    EXPECT_TRUE(resultDenseSetMap.find("y") != resultDenseSetMap.end());
    {
      const Aws::Vector<Aws::String>& resultDenseSetMapItem = resultDenseSetMap.at("y");
      EXPECT_EQ(2U, resultDenseSetMapItem.size());
      EXPECT_EQ(R"(a)", resultDenseSetMapItem.at(0));
      EXPECT_EQ(R"(b)", resultDenseSetMapItem.at(1));
    }
  });
}
