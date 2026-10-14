/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/non-query-compatible-rpcv2-protocol/NonQueryCompatibleRpcV2ProtocolClient.h>
#include <aws/non-query-compatible-rpcv2-protocol/model/NonQueryCompatibleOperationRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using NonQueryCompatibleOperation = AWS_PROTOCOL_TEST_SUITE;
using NonQueryCompatibleRpcV2ProtocolClient = Aws::NonQueryCompatibleRpcV2Protocol::NonQueryCompatibleRpcV2ProtocolClient;
using namespace Aws::NonQueryCompatibleRpcV2Protocol::Model;

AWS_PROTOCOL_TEST(NonQueryCompatibleOperation, NonQueryCompatibleRpcV2CborForbidsQueryModeHeader) {
  NonQueryCompatibleRpcV2ProtocolClient client(mockCredentials, mockConfig);

  // Cbor specific
  OutputResponse mockRs;
  mockRs.statusCode = 200;
  SetMockResponse(mockRs);

  NonQueryCompatibleOperationRequest request;

  auto outcome = client.NonQueryCompatibleOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.uri = "/service/NonQueryCompatibleRpcV2Protocol/operation/NonQueryCompatibleOperation";
  expectedRq.headers = {{"Accept", R"(application/cbor)"}, {"smithy-protocol", R"(rpc-v2-cbor)"}};
  expectedRq.forbidHeaders = {"x-amzn-query-mode"};
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  ValidateRequestSent(expectedRq, [](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {} )" */
  });
}
