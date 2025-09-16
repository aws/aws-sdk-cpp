/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/json-protocol/JsonProtocolClient.h>
#include <aws/json-protocol/model/OperationWithOptionalInputOutputRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using OperationWithOptionalInputOutput = AWS_PROTOCOL_TEST_SUITE;
using JsonProtocolClient = Aws::JsonProtocol::JsonProtocolClient;
using namespace Aws::JsonProtocol::Model;

AWS_PROTOCOL_TEST(OperationWithOptionalInputOutput, can_call_operation_with_no_input_or_output) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  OperationWithOptionalInputOutputRequest request;

  auto outcome = client.OperationWithOptionalInputOutput(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "e30=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"},
                        {"X-Amz-Target", R"(JsonProtocol.OperationWithOptionalInputOutput)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(OperationWithOptionalInputOutput, can_call_operation_with_optional_input) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  OperationWithOptionalInputOutputRequest request;
  request.SetValue(R"(Hi)");

  auto outcome = client.OperationWithOptionalInputOutput(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "eyJWYWx1ZSI6IkhpIn0=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"},
                        {"X-Amz-Target", R"(JsonProtocol.OperationWithOptionalInputOutput)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
