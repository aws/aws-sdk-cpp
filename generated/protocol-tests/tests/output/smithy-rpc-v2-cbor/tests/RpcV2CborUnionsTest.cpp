/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rpcv2protocol/RpcV2ProtocolClient.h>
#include <aws/rpcv2protocol/model/RpcV2CborUnionsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using RpcV2CborUnions = AWS_PROTOCOL_TEST_SUITE;
using RpcV2ProtocolClient = Aws::RpcV2Protocol::RpcV2ProtocolClient;
using namespace Aws::RpcV2Protocol::Model;

AWS_PROTOCOL_TEST(RpcV2CborUnions, RpcV2CborDeserializesUnionValue) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"smithy-protocol", R"(rpc-v2-cbor)"}, {"Content-Type", R"(application/cbor)"}};
  mockRs.body = "omhjb250ZW50c6Frc3RyaW5nVmFsdWVjZm9vam90aGVyVmFsdWVjYmFy";
  SetMockResponse(mockRs);

  RpcV2CborUnionsRequest request;

  auto outcome = client.RpcV2CborUnions(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const RpcV2CborUnionsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"contents":{"stringValue":"foo"},"otherValue":"bar"} )" */
    {
      const RpcV2CborUnion& resultContents = result.GetContents();
      EXPECT_EQ(R"(foo)", resultContents.GetStringValue());
    }
    EXPECT_EQ(R"(bar)", result.GetOtherValue());
  });
}

AWS_PROTOCOL_TEST(RpcV2CborUnions, RpcV2CborDeserializesNestedUnionValue) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"smithy-protocol", R"(rpc-v2-cbor)"}, {"Content-Type", R"(application/cbor)"}};
  mockRs.body = "omhjb250ZW50c6FqdW5pb25WYWx1ZaFrc3RyaW5nVmFsdWVjZm9vam90aGVyVmFsdWVjYmFy";
  SetMockResponse(mockRs);

  RpcV2CborUnionsRequest request;

  auto outcome = client.RpcV2CborUnions(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const RpcV2CborUnionsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"contents":{"unionValue":{"stringValue":"foo"}},"otherValue":"bar"} )" */
    {
      const RpcV2CborUnion& resultContents = result.GetContents();
      {
        const RpcV2CborNestedUnion& resultContentsUnionValue = resultContents.GetUnionValue();
        EXPECT_EQ(R"(foo)", resultContentsUnionValue.GetStringValue());
      }
    }
    EXPECT_EQ(R"(bar)", result.GetOtherValue());
  });
}
