/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/json-protocol/JsonProtocolClient.h>
#include <aws/json-protocol/model/JsonUnionsRequest.h>

using JsonUnions = AWS_PROTOCOL_TEST_SUITE;
using JsonProtocolClient = Aws::JsonProtocol::JsonProtocolClient;
using namespace Aws::JsonProtocol::Model;

AWS_PROTOCOL_TEST(JsonUnions, AwsJson11DeserializeStringUnionValue) {
  JsonProtocolClient client;
  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson11DeserializeBooleanUnionValue) {
  JsonProtocolClient client;
  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson11DeserializeNumberUnionValue) {
  JsonProtocolClient client;
  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson11DeserializeBlobUnionValue) {
  JsonProtocolClient client;
  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson11DeserializeTimestampUnionValue) {
  JsonProtocolClient client;
  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson11DeserializeEnumUnionValue) {
  JsonProtocolClient client;
  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson11DeserializeListUnionValue) {
  JsonProtocolClient client;
  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson11DeserializeMapUnionValue) {
  JsonProtocolClient client;
  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson11DeserializeStructureUnionValue) {
  JsonProtocolClient client;
  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson11DeserializeIgnoreType) {
  JsonProtocolClient client;
  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
