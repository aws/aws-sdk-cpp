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

AWS_PROTOCOL_TEST(QueryCompatibleOperation, QueryCompatibleRpcV2CborNoCustomCodeError) {
  QueryCompatibleRpcV2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 400;
  mockRs.headers = {{"smithy-protocol", R"(rpc-v2-cbor)"}, {"Content-Type", R"(application/cbor)"}};
  mockRs.body =
      "dVFBQ1psOWZkSGx3WlhndFlYZHpMbkJ5YjNSdlkyOXNkR1Z6ZEhNdWNuQmpkakpqWW05eUkwNXZRM1Z6ZEc5dFEyOWtaVVZ5Y205eVoyMWxjM05oWjJWaVNHaz0=";
  SetMockResponse(mockRs);

  QueryCompatibleOperationRequest request;

  auto outcome = client.QueryCompatibleOperation(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
