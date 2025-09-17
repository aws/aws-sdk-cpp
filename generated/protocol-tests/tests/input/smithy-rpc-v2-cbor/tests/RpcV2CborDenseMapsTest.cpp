/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rpcv2protocol/RpcV2ProtocolClient.h>
#include <aws/rpcv2protocol/model/RpcV2CborDenseMapsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using RpcV2CborDenseMaps = AWS_PROTOCOL_TEST_SUITE;
using RpcV2ProtocolClient = Aws::RpcV2Protocol::RpcV2ProtocolClient;
using namespace Aws::RpcV2Protocol::Model;

AWS_PROTOCOL_TEST(RpcV2CborDenseMaps, RpcV2CborMaps) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  // Cbor specific
  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.body = "oW5kZW5zZVN0cnVjdE1hcKJjZm9voWJoaWV0aGVyZWNiYXqhYmhpY2J5ZQ==";
  SetMockResponse(mockRs);

  RpcV2CborDenseMapsRequest request;
  {
    GreetingStruct requestDenseStructMapItem;
    requestDenseStructMapItem.SetHi(R"(there)");
    request.AddDenseStructMap("foo", requestDenseStructMapItem);
  }
  {
    GreetingStruct requestDenseStructMapItem;
    requestDenseStructMapItem.SetHi(R"(bye)");
    request.AddDenseStructMap("baz", requestDenseStructMapItem);
  }

  auto outcome = client.RpcV2CborDenseMaps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "oW5kZW5zZVN0cnVjdE1hcKJjZm9voWJoaWV0aGVyZWNiYXqhYmhpY2J5ZQ==";
  expectedRq.uri = "/service/RpcV2Protocol/operation/RpcV2CborDenseMaps";
  expectedRq.headers = {{"Accept", R"(application/cbor)"}, {"Content-Type", R"(application/cbor)"}, {"smithy-protocol", R"(rpc-v2-cbor)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const RpcV2CborDenseMapsResult& result = outcome.GetResult();
  ValidateRequestSent(expectedRq, [&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
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

AWS_PROTOCOL_TEST(RpcV2CborDenseMaps, RpcV2CborSerializesZeroValuesInMaps) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  // Cbor specific
  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.body = "om5kZW5zZU51bWJlck1hcKFheABvZGVuc2VCb29sZWFuTWFwoWF49A==";
  SetMockResponse(mockRs);

  RpcV2CborDenseMapsRequest request;
  request.SetDenseNumberMap({{"x", 0}});
  request.SetDenseBooleanMap({{"x", false}});

  auto outcome = client.RpcV2CborDenseMaps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "om5kZW5zZU51bWJlck1hcKFheABvZGVuc2VCb29sZWFuTWFwoWF49A==";
  expectedRq.uri = "/service/RpcV2Protocol/operation/RpcV2CborDenseMaps";
  expectedRq.headers = {{"Accept", R"(application/cbor)"}, {"Content-Type", R"(application/cbor)"}, {"smithy-protocol", R"(rpc-v2-cbor)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const RpcV2CborDenseMapsResult& result = outcome.GetResult();
  ValidateRequestSent(expectedRq, [&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"denseNumberMap":{"x":0},"denseBooleanMap":{"x":false}} )" */
    const Aws::Map<Aws::String, int64_t>& resultDenseNumberMap = result.GetDenseNumberMap();
    EXPECT_EQ(1U, resultDenseNumberMap.size());
    EXPECT_TRUE(resultDenseNumberMap.find("x") != resultDenseNumberMap.end());
    EXPECT_EQ(0, resultDenseNumberMap.at("x"));
    const Aws::Map<Aws::String, bool>& resultDenseBooleanMap = result.GetDenseBooleanMap();
    EXPECT_EQ(1U, resultDenseBooleanMap.size());
    EXPECT_TRUE(resultDenseBooleanMap.find("x") != resultDenseBooleanMap.end());
    EXPECT_EQ(false, resultDenseBooleanMap.at("x"));
  });
}

AWS_PROTOCOL_TEST(RpcV2CborDenseMaps, RpcV2CborSerializesDenseSetMap) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  // Cbor specific
  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.body = "oWtkZW5zZVNldE1hcKJheIBheYJhYWFi";
  SetMockResponse(mockRs);

  RpcV2CborDenseMapsRequest request;
  request.SetDenseSetMap({{"x", {}}, {"y", {R"(a)", R"(b)"}}});

  auto outcome = client.RpcV2CborDenseMaps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "oWtkZW5zZVNldE1hcKJheIBheYJhYWFi";
  expectedRq.uri = "/service/RpcV2Protocol/operation/RpcV2CborDenseMaps";
  expectedRq.headers = {{"Accept", R"(application/cbor)"}, {"Content-Type", R"(application/cbor)"}, {"smithy-protocol", R"(rpc-v2-cbor)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const RpcV2CborDenseMapsResult& result = outcome.GetResult();
  ValidateRequestSent(expectedRq, [&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
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
