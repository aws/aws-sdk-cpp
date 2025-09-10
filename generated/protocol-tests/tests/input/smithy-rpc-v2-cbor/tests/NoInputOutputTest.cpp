/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rpcv2protocol/RpcV2ProtocolClient.h>
#include <aws/rpcv2protocol/model/NoInputOutputRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using NoInputOutput = AWS_PROTOCOL_TEST_SUITE;
using RpcV2ProtocolClient = Aws::RpcV2Protocol::RpcV2ProtocolClient;
using namespace Aws::RpcV2Protocol::Model;

AWS_PROTOCOL_TEST(NoInputOutput, no_input) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  // Cbor specific
  OutputResponse mockRs;
  mockRs.statusCode = 200;
  SetMockResponse(mockRs);

  NoInputOutputRequest request;

  auto outcome = client.NoInputOutput(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.uri = "/service/RpcV2Protocol/operation/NoInputOutput";
  expectedRq.headers = {{"Accept", R"(application/cbor)"}, {"smithy-protocol", R"(rpc-v2-cbor)"}};
  expectedRq.forbidHeaders = {"Content-Type", "X-Amz-Target"};
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  ValidateRequestSent(expectedRq, [](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {} )" */
  });
}
