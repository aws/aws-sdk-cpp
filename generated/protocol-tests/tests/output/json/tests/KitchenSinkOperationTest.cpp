/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/json-protocol/JsonProtocolClient.h>
#include <aws/json-protocol/model/KitchenSinkOperationRequest.h>

using KitchenSinkOperation = AWS_PROTOCOL_TEST_SUITE;
using JsonProtocolClient = Aws::JsonProtocol::JsonProtocolClient;
using namespace Aws::JsonProtocol::Model;

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_operations_with_empty_json_bodies) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_string_shapes) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_integer_shapes) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_long_shapes) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_float_shapes) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_double_shapes) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_boolean_shapes_true) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_boolean_false) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_blob_shapes) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_timestamp_shapes) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_iso8601_timestamps) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_httpdate_timestamps) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_list_shapes) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_list_of_map_shapes) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_list_of_list_shapes) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_list_of_structure_shapes) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_list_of_recursive_structure_shapes) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_map_shapes) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_map_of_list_shapes) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_map_of_map_shapes) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_map_of_structure_shapes) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_map_of_recursive_structure_shapes) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_the_request_id_from_the_response) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
