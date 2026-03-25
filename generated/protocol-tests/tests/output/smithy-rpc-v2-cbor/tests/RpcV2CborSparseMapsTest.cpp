/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rpcv2protocol/RpcV2ProtocolClient.h>
#include <aws/rpcv2protocol/model/RpcV2CborSparseMapsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using RpcV2CborSparseMaps = AWS_PROTOCOL_TEST_SUITE;
using RpcV2ProtocolClient = Aws::RpcV2Protocol::RpcV2ProtocolClient;
using namespace Aws::RpcV2Protocol::Model;

AWS_PROTOCOL_TEST(RpcV2CborSparseMaps, RpcV2CborSparseJsonMaps) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"smithy-protocol", R"(rpc-v2-cbor)"}, {"Content-Type", R"(application/cbor)"}};
  mockRs.body = "v29zcGFyc2VTdHJ1Y3RNYXC/Y2Zvb79iaGlldGhlcmX/Y2Jher9iaGljYnll////";
  SetMockResponse(mockRs);

  RpcV2CborSparseMapsRequest request;

  auto outcome = client.RpcV2CborSparseMaps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const RpcV2CborSparseMapsResult& result = outcome.GetResult();
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

AWS_PROTOCOL_TEST(RpcV2CborSparseMaps, RpcV2CborDeserializesNullMapValues) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"smithy-protocol", R"(rpc-v2-cbor)"}, {"Content-Type", R"(application/cbor)"}};
  mockRs.body = "v3BzcGFyc2VCb29sZWFuTWFwv2F49v9vc3BhcnNlTnVtYmVyTWFwv2F49v9vc3BhcnNlU3RyaW5nTWFwv2F49v9vc3BhcnNlU3RydWN0TWFwv2F49v//";
  SetMockResponse(mockRs);

  RpcV2CborSparseMapsRequest request;

  auto outcome = client.RpcV2CborSparseMaps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const RpcV2CborSparseMapsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"(
     * {"sparseBooleanMap":{"x":null},"sparseNumberMap":{"x":null},"sparseStringMap":{"x":null},"sparseStructMap":{"x":null}} )" */
    const Aws::Map<Aws::String, Aws::Crt::Optional<bool>>& resultSparseBooleanMap = result.GetSparseBooleanMap();
    EXPECT_EQ(1U, resultSparseBooleanMap.size());
    EXPECT_TRUE(resultSparseBooleanMap.find("x") != resultSparseBooleanMap.end());
    EXPECT_FALSE(resultSparseBooleanMap.at("x").has_value());
    const Aws::Map<Aws::String, Aws::Crt::Optional<int64_t>>& resultSparseNumberMap = result.GetSparseNumberMap();
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

AWS_PROTOCOL_TEST(RpcV2CborSparseMaps, RpcV2CborDeserializesSparseSetMap) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"smithy-protocol", R"(rpc-v2-cbor)"}, {"Content-Type", R"(application/cbor)"}};
  mockRs.body = "v2xzcGFyc2VTZXRNYXC/YXmfYWFhYv9heJ////8=";
  SetMockResponse(mockRs);

  RpcV2CborSparseMapsRequest request;

  auto outcome = client.RpcV2CborSparseMaps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const RpcV2CborSparseMapsResult& result = outcome.GetResult();
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

AWS_PROTOCOL_TEST(RpcV2CborSparseMaps, RpcV2CborDeserializesSparseSetMapAndRetainsNull) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"smithy-protocol", R"(rpc-v2-cbor)"}, {"Content-Type", R"(application/cbor)"}};
  mockRs.body = "v2xzcGFyc2VTZXRNYXC/YXif/2F5n2FhYWL/YXr2//8=";
  SetMockResponse(mockRs);

  RpcV2CborSparseMapsRequest request;

  auto outcome = client.RpcV2CborSparseMaps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const RpcV2CborSparseMapsResult& result = outcome.GetResult();
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

AWS_PROTOCOL_TEST(RpcV2CborSparseMaps, RpcV2CborDeserializesZeroValuesInSparseMaps) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"smithy-protocol", R"(rpc-v2-cbor)"}, {"Content-Type", R"(application/cbor)"}};
  mockRs.body = "v29zcGFyc2VOdW1iZXJNYXC/YXgA/3BzcGFyc2VCb29sZWFuTWFwv2F49P//";
  SetMockResponse(mockRs);

  RpcV2CborSparseMapsRequest request;

  auto outcome = client.RpcV2CborSparseMaps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const RpcV2CborSparseMapsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"sparseNumberMap":{"x":0},"sparseBooleanMap":{"x":false}} )" */
    const Aws::Map<Aws::String, Aws::Crt::Optional<int64_t>>& resultSparseNumberMap = result.GetSparseNumberMap();
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
