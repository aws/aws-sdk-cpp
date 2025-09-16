/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rpcv2protocol/RpcV2ProtocolClient.h>
#include <aws/rpcv2protocol/model/OptionalInputOutputRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using OptionalInputOutput = AWS_PROTOCOL_TEST_SUITE;
using RpcV2ProtocolClient = Aws::RpcV2Protocol::RpcV2ProtocolClient;
using namespace Aws::RpcV2Protocol::Model;

AWS_PROTOCOL_TEST(OptionalInputOutput, optional_input) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  // Cbor specific
  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.body = "v/8=";
  SetMockResponse(mockRs);

  OptionalInputOutputRequest request;

  auto outcome = client.OptionalInputOutput(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "v/8=";
  expectedRq.uri = "/service/RpcV2Protocol/operation/OptionalInputOutput";
  expectedRq.headers = {{"Accept", R"(application/cbor)"}, {"Content-Type", R"(application/cbor)"}, {"smithy-protocol", R"(rpc-v2-cbor)"}};
  expectedRq.forbidHeaders = {"X-Amz-Target"};
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  ValidateRequestSent(expectedRq, [](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {} )" */
  });
}
