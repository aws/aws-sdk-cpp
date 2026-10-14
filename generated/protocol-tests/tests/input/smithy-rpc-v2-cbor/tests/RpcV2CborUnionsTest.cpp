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

AWS_PROTOCOL_TEST(RpcV2CborUnions, RpcV2CborSerializesUnionValue) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  // Cbor specific
  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.body = "omhjb250ZW50c6Frc3RyaW5nVmFsdWVjZm9vam90aGVyVmFsdWVjYmFy";
  SetMockResponse(mockRs);

  RpcV2CborUnionsRequest request;
  {
    RpcV2CborUnion requestContents;
    requestContents.SetStringValue(R"(foo)");
    request.SetContents(requestContents);
  }
  request.SetOtherValue(R"(bar)");

  auto outcome = client.RpcV2CborUnions(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "omhjb250ZW50c6Frc3RyaW5nVmFsdWVjZm9vam90aGVyVmFsdWVjYmFy";
  expectedRq.uri = "/service/RpcV2Protocol/operation/RpcV2CborUnions";
  expectedRq.headers = {{"smithy-protocol", R"(rpc-v2-cbor)"}, {"Accept", R"(application/cbor)"}, {"Content-Type", R"(application/cbor)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const RpcV2CborUnionsResult& result = outcome.GetResult();
  ValidateRequestSent(expectedRq, [&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"contents":{"stringValue":"foo"},"otherValue":"bar"} )" */
    {
      const RpcV2CborUnion& resultContents = result.GetContents();
      EXPECT_EQ(R"(foo)", resultContents.GetStringValue());
    }
    EXPECT_EQ(R"(bar)", result.GetOtherValue());
  });
}

AWS_PROTOCOL_TEST(RpcV2CborUnions, RpcV2CborSerializesNestedUnionValue) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  // Cbor specific
  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.body = "omhjb250ZW50c6FqdW5pb25WYWx1ZaFrc3RyaW5nVmFsdWVjZm9vam90aGVyVmFsdWVjYmFy";
  SetMockResponse(mockRs);

  RpcV2CborUnionsRequest request;
  {
    RpcV2CborUnion requestContents;
    {
      RpcV2CborNestedUnion requestContentsUnionValue;
      requestContentsUnionValue.SetStringValue(R"(foo)");
      requestContents.SetUnionValue(requestContentsUnionValue);
    }
    request.SetContents(requestContents);
  }
  request.SetOtherValue(R"(bar)");

  auto outcome = client.RpcV2CborUnions(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "omhjb250ZW50c6FqdW5pb25WYWx1ZaFrc3RyaW5nVmFsdWVjZm9vam90aGVyVmFsdWVjYmFy";
  expectedRq.uri = "/service/RpcV2Protocol/operation/RpcV2CborUnions";
  expectedRq.headers = {{"smithy-protocol", R"(rpc-v2-cbor)"}, {"Accept", R"(application/cbor)"}, {"Content-Type", R"(application/cbor)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const RpcV2CborUnionsResult& result = outcome.GetResult();
  ValidateRequestSent(expectedRq, [&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
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
