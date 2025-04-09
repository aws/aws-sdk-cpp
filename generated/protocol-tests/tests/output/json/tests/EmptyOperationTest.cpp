/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/json-protocol/JsonProtocolClient.h>
#include <aws/json-protocol/model/EmptyOperationRequest.h>

using EmptyOperation = AWS_PROTOCOL_TEST_SUITE;
using JsonProtocolClient = Aws::JsonProtocol::JsonProtocolClient;
using namespace Aws::JsonProtocol::Model;

AWS_PROTOCOL_TEST(EmptyOperation, handles_empty_output_shape) {
  JsonProtocolClient client;
  EmptyOperationRequest request;

  auto outcome = client.EmptyOperation(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(EmptyOperation, handles_unexpected_json_output) {
  JsonProtocolClient client;
  EmptyOperationRequest request;

  auto outcome = client.EmptyOperation(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(EmptyOperation, json_1_1_service_responds_with_no_payload) {
  JsonProtocolClient client;
  EmptyOperationRequest request;

  auto outcome = client.EmptyOperation(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
