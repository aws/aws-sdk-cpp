/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/json-protocol/JsonProtocolClient.h>
#include <aws/json-protocol/model/EmptyOperationRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using EmptyOperation = AWS_PROTOCOL_TEST_SUITE;
using JsonProtocolClient = Aws::JsonProtocol::JsonProtocolClient;
using namespace Aws::JsonProtocol::Model;

AWS_PROTOCOL_TEST(EmptyOperation, sends_requests_to_slash) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  EmptyOperationRequest request;

  auto outcome = client.EmptyOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.EmptyOperation)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(EmptyOperation, includes_x_amz_target_and_content_type) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  EmptyOperationRequest request;

  auto outcome = client.EmptyOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.EmptyOperation)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(EmptyOperation, json_1_1_client_sends_empty_payload_for_no_input_shape) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  EmptyOperationRequest request;

  auto outcome = client.EmptyOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "e30=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.EmptyOperation)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
