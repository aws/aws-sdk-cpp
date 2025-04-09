/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/json-protocol/JsonProtocolClient.h>
#include <aws/json-protocol/model/OperationWithOptionalInputOutputRequest.h>

using OperationWithOptionalInputOutput = AWS_PROTOCOL_TEST_SUITE;
using JsonProtocolClient = Aws::JsonProtocol::JsonProtocolClient;
using namespace Aws::JsonProtocol::Model;

AWS_PROTOCOL_TEST(OperationWithOptionalInputOutput, can_call_operation_with_no_input_or_output) {
  JsonProtocolClient client;
  OperationWithOptionalInputOutputRequest request;

  auto outcome = client.OperationWithOptionalInputOutput(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(OperationWithOptionalInputOutput, can_call_operation_with_optional_input) {
  JsonProtocolClient client;
  OperationWithOptionalInputOutputRequest request;
  request.SetValue(R"(Hi)");

  auto outcome = client.OperationWithOptionalInputOutput(request);
  AWS_ASSERT_SUCCESS(outcome);
}
