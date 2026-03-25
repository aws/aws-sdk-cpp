/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/SparseJsonMapsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using SparseJsonMaps = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(SparseJsonMaps, RestJsonSparseJsonMaps) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body =
      "ewogICAgInNwYXJzZVN0cnVjdE1hcCI6IHsKICAgICAgICAiZm9vIjogewogICAgICAgICAgICAiaGkiOiAidGhlcmUiCiAgICAgICAgfSwKICAgICAgICAiYmF6Ijogewog"
      "ICAgICAgICAgICAiaGkiOiAiYnllIgogICAgICAgIH0KICAgfQp9";
  SetMockResponse(mockRs);

  SparseJsonMapsRequest request;

  auto outcome = client.SparseJsonMaps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SparseJsonMapsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"sparseStructMap":{"foo":{"hi":"there"},"baz":{"hi":"bye"}}} )" */
    const Aws::Map<Aws::String, Aws::Crt::Optional<GreetingStruct>>& resultSparseStructMap = result.GetSparseStructMap();
    EXPECT_EQ(2U, resultSparseStructMap.size());
    {
      EXPECT_TRUE(resultSparseStructMap.find("foo") != resultSparseStructMap.end());
      EXPECT_TRUE(resultSparseStructMap.at("foo").has_value());
      const GreetingStruct& resultSparseStructMapItem = *resultSparseStructMap.at("foo");
      EXPECT_EQ(R"(there)", resultSparseStructMapItem.GetHi());
    }
    {
      EXPECT_TRUE(resultSparseStructMap.find("baz") != resultSparseStructMap.end());
      EXPECT_TRUE(resultSparseStructMap.at("baz").has_value());
      const GreetingStruct& resultSparseStructMapItem = *resultSparseStructMap.at("baz");
      EXPECT_EQ(R"(bye)", resultSparseStructMapItem.GetHi());
    }
  });
}

AWS_PROTOCOL_TEST(SparseJsonMaps, RestJsonDeserializesSparseNullMapValues) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body =
      "ewogICAgInNwYXJzZUJvb2xlYW5NYXAiOiB7CiAgICAgICAgIngiOiBudWxsCiAgICB9LAogICAgInNwYXJzZU51bWJlck1hcCI6IHsKICAgICAgICAieCI6IG51bGwKICAg"
      "IH0sCiAgICAic3BhcnNlU3RyaW5nTWFwIjogewogICAgICAgICJ4IjogbnVsbAogICAgfSwKICAgICJzcGFyc2VTdHJ1Y3RNYXAiOiB7CiAgICAgICAgIngiOiBudWxsCiAg"
      "ICB9Cn0=";
  SetMockResponse(mockRs);

  SparseJsonMapsRequest request;

  auto outcome = client.SparseJsonMaps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SparseJsonMapsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"(
     * {"sparseBooleanMap":{"x":null},"sparseNumberMap":{"x":null},"sparseStringMap":{"x":null},"sparseStructMap":{"x":null}} )" */
    const Aws::Map<Aws::String, Aws::Crt::Optional<bool>>& resultSparseBooleanMap = result.GetSparseBooleanMap();
    EXPECT_EQ(1U, resultSparseBooleanMap.size());
    EXPECT_TRUE(resultSparseBooleanMap.find("x") != resultSparseBooleanMap.end());
    EXPECT_FALSE(resultSparseBooleanMap.at("x").has_value());
    const Aws::Map<Aws::String, Aws::Crt::Optional<int>>& resultSparseNumberMap = result.GetSparseNumberMap();
    EXPECT_EQ(1U, resultSparseNumberMap.size());
    EXPECT_TRUE(resultSparseNumberMap.find("x") != resultSparseNumberMap.end());
    EXPECT_FALSE(resultSparseNumberMap.at("x").has_value());
    const Aws::Map<Aws::String, Aws::Crt::Optional<Aws::String>>& resultSparseStringMap = result.GetSparseStringMap();
    EXPECT_EQ(1U, resultSparseStringMap.size());
    EXPECT_TRUE(resultSparseStringMap.find("x") != resultSparseStringMap.end());
    EXPECT_FALSE(resultSparseStringMap.at("x").has_value());
    const Aws::Map<Aws::String, Aws::Crt::Optional<GreetingStruct>>& resultSparseStructMap = result.GetSparseStructMap();
    EXPECT_EQ(1U, resultSparseStructMap.size());
    {
      EXPECT_TRUE(resultSparseStructMap.find("x") != resultSparseStructMap.end());
      EXPECT_FALSE(resultSparseStructMap.at("x").has_value());
    }
  });
}

AWS_PROTOCOL_TEST(SparseJsonMaps, RestJsonDeserializesZeroValuesInSparseMaps) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body =
      "ewogICAgInNwYXJzZU51bWJlck1hcCI6IHsKICAgICAgICAieCI6IDAKICAgIH0sCiAgICAic3BhcnNlQm9vbGVhbk1hcCI6IHsKICAgICAgICAieCI6IGZhbHNlCiAgICB9"
      "Cn0=";
  SetMockResponse(mockRs);

  SparseJsonMapsRequest request;

  auto outcome = client.SparseJsonMaps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SparseJsonMapsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"sparseNumberMap":{"x":0},"sparseBooleanMap":{"x":false}} )" */
    const Aws::Map<Aws::String, Aws::Crt::Optional<int>>& resultSparseNumberMap = result.GetSparseNumberMap();
    EXPECT_EQ(1U, resultSparseNumberMap.size());
    EXPECT_TRUE(resultSparseNumberMap.find("x") != resultSparseNumberMap.end());
    EXPECT_TRUE(resultSparseNumberMap.at("x").has_value());
    EXPECT_EQ(0, *resultSparseNumberMap.at("x"));
    const Aws::Map<Aws::String, Aws::Crt::Optional<bool>>& resultSparseBooleanMap = result.GetSparseBooleanMap();
    EXPECT_EQ(1U, resultSparseBooleanMap.size());
    EXPECT_TRUE(resultSparseBooleanMap.find("x") != resultSparseBooleanMap.end());
    EXPECT_TRUE(resultSparseBooleanMap.at("x").has_value());
    EXPECT_EQ(false, *resultSparseBooleanMap.at("x"));
  });
}

AWS_PROTOCOL_TEST(SparseJsonMaps, RestJsonDeserializesSparseSetMap) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgInNwYXJzZVNldE1hcCI6IHsKICAgICAgICAieCI6IFtdLAogICAgICAgICJ5IjogWyJhIiwgImIiXQogICAgfQp9";
  SetMockResponse(mockRs);

  SparseJsonMapsRequest request;

  auto outcome = client.SparseJsonMaps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SparseJsonMapsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"sparseSetMap":{"x":[],"y":["a","b"]}} )" */
    const Aws::Map<Aws::String, Aws::Crt::Optional<Aws::Vector<Aws::String>>>& resultSparseSetMap = result.GetSparseSetMap();
    EXPECT_EQ(2U, resultSparseSetMap.size());
    EXPECT_TRUE(resultSparseSetMap.find("x") != resultSparseSetMap.end());
    EXPECT_TRUE(resultSparseSetMap.at("x").has_value());
    EXPECT_EQ(Aws::Vector<Aws::String>({}), *resultSparseSetMap.at("x"));
    EXPECT_TRUE(resultSparseSetMap.find("y") != resultSparseSetMap.end());
    EXPECT_TRUE(resultSparseSetMap.at("y").has_value());
    EXPECT_EQ(Aws::Vector<Aws::String>({R"(a)", R"(b)"}), *resultSparseSetMap.at("y"));
  });
}

AWS_PROTOCOL_TEST(SparseJsonMaps, RestJsonDeserializesSparseSetMapAndRetainsNull) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body =
      "ewogICAgInNwYXJzZVNldE1hcCI6IHsKICAgICAgICAieCI6IFtdLAogICAgICAgICJ5IjogWyJhIiwgImIiXSwKICAgICAgICAieiI6IG51bGwKICAgIH0KfQ==";
  SetMockResponse(mockRs);

  SparseJsonMapsRequest request;

  auto outcome = client.SparseJsonMaps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SparseJsonMapsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"sparseSetMap":{"x":[],"y":["a","b"],"z":null}} )" */
    const Aws::Map<Aws::String, Aws::Crt::Optional<Aws::Vector<Aws::String>>>& resultSparseSetMap = result.GetSparseSetMap();
    EXPECT_EQ(3U, resultSparseSetMap.size());
    EXPECT_TRUE(resultSparseSetMap.find("x") != resultSparseSetMap.end());
    EXPECT_TRUE(resultSparseSetMap.at("x").has_value());
    EXPECT_EQ(Aws::Vector<Aws::String>({}), *resultSparseSetMap.at("x"));
    EXPECT_TRUE(resultSparseSetMap.find("y") != resultSparseSetMap.end());
    EXPECT_TRUE(resultSparseSetMap.at("y").has_value());
    EXPECT_EQ(Aws::Vector<Aws::String>({R"(a)", R"(b)"}), *resultSparseSetMap.at("y"));
    EXPECT_TRUE(resultSparseSetMap.find("z") != resultSparseSetMap.end());
    EXPECT_FALSE(resultSparseSetMap.at("z").has_value());
  });
}
