/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/query-compatible-rpcv2-protocol/QueryCompatibleRpcV2ProtocolClient.h>
#include <aws/query-compatible-rpcv2-protocol/model/QueryCompatibleOperationRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using QueryCompatibleOperation0 = AWS_PROTOCOL_TEST_SUITE;
using QueryCompatibleRpcV2ProtocolClient = Aws::QueryCompatibleRpcV2Protocol::QueryCompatibleRpcV2ProtocolClient;
using namespace Aws::QueryCompatibleRpcV2Protocol::Model;

AWS_PROTOCOL_TEST(QueryCompatibleOperation0, QueryCompatibleRpcV2CborCustomCodeError) {
  QueryCompatibleRpcV2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 400;
  mockRs.headers = {
      {"x-amzn-query-error", R"(Customized;Sender)"}, {"smithy-protocol", R"(rpc-v2-cbor)"}, {"Content-Type", R"(application/cbor)"}};
  mockRs.body = "dVFBQ1psOWZkSGx3WlhncllYZHpMbkJ5YjNSdlkyOXNkR1Z6ZEhNdWNuQmpkakpqWW05eUkwTjFjM1J2YlVOdlpHVkZjbkp2Y21kdFpYTnpZV2RsWWtocA==";
  SetMockResponse(mockRs);

  QueryCompatibleOperationRequest request;

  auto outcome = client.QueryCompatibleOperation(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
