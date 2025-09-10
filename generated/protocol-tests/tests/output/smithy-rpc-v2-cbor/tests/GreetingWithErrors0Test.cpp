/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rpcv2protocol/RpcV2ProtocolClient.h>
#include <aws/rpcv2protocol/model/GreetingWithErrorsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using GreetingWithErrors0 = AWS_PROTOCOL_TEST_SUITE;
using RpcV2ProtocolClient = Aws::RpcV2Protocol::RpcV2ProtocolClient;
using namespace Aws::RpcV2Protocol::Model;

AWS_PROTOCOL_TEST(GreetingWithErrors0, RpcV2CborComplexError) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 400;
  mockRs.headers = {{"Content-Type", R"(application/cbor)"}, {"smithy-protocol", R"(rpc-v2-cbor)"}};
  mockRs.body = "v2ZfX3R5cGV4K3NtaXRoeS5wcm90b2NvbHRlc3RzLnJwY3YyQ2JvciNDb21wbGV4RXJyb3JoVG9wTGV2ZWxpVG9wIGxldmVsZk5lc3RlZL9jRm9vY2Jhcv//";
  SetMockResponse(mockRs);

  GreetingWithErrorsRequest request;

  auto outcome = client.GreetingWithErrors(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors0, RpcV2CborEmptyComplexError) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 400;
  mockRs.headers = {{"Content-Type", R"(application/cbor)"}, {"smithy-protocol", R"(rpc-v2-cbor)"}};
  mockRs.body = "v2ZfX3R5cGV4K3NtaXRoeS5wcm90b2NvbHRlc3RzLnJwY3YyQ2JvciNDb21wbGV4RXJyb3L/";
  SetMockResponse(mockRs);

  GreetingWithErrorsRequest request;

  auto outcome = client.GreetingWithErrors(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
