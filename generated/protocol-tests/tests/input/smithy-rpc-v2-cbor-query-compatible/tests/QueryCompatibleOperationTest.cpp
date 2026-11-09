/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/query-compatible-rpcv2-protocol/QueryCompatibleRpcV2ProtocolClient.h>
#include <aws/query-compatible-rpcv2-protocol/model/QueryCompatibleOperationRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using QueryCompatibleOperation = AWS_PROTOCOL_TEST_SUITE;
using QueryCompatibleRpcV2ProtocolClient = Aws::QueryCompatibleRpcV2Protocol::QueryCompatibleRpcV2ProtocolClient;
using namespace Aws::QueryCompatibleRpcV2Protocol::Model;

AWS_PROTOCOL_TEST(QueryCompatibleOperation, QueryCompatibleRpcV2CborSendsQueryModeHeader) {
  QueryCompatibleRpcV2ProtocolClient client(mockCredentials, mockConfig);

  // Cbor specific
  OutputResponse mockRs;
  mockRs.statusCode = 200;
  SetMockResponse(mockRs);

  QueryCompatibleOperationRequest request;

  auto outcome = client.QueryCompatibleOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.uri = "/service/QueryCompatibleRpcV2Protocol/operation/QueryCompatibleOperation";
  expectedRq.headers = {{"smithy-protocol", R"(rpc-v2-cbor)"}, {"Accept", R"(application/cbor)"}, {"x-amzn-query-mode", R"(true)"}};
  expectedRq.forbidHeaders = {"Content-Type", "X-Amz-Target"};
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  ValidateRequestSent(expectedRq, [](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {} )" */
  });
}
