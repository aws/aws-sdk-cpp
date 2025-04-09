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

AWS_PROTOCOL_TEST(EmptyOperation, sends_requests_to_slash) {
  JsonProtocolClient client;
  EmptyOperationRequest request;

  auto outcome = client.EmptyOperation(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(EmptyOperation, includes_x_amz_target_and_content_type) {
  JsonProtocolClient client;
  EmptyOperationRequest request;

  auto outcome = client.EmptyOperation(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(EmptyOperation, json_1_1_client_sends_empty_payload_for_no_input_shape) {
  JsonProtocolClient client;
  EmptyOperationRequest request;

  auto outcome = client.EmptyOperation(request);
  AWS_ASSERT_SUCCESS(outcome);
}
