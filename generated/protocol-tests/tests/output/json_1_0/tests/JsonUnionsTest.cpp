/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/json-rpc-10/JSONRPC10Client.h>
#include <aws/json-rpc-10/model/JsonUnionsRequest.h>

using JsonUnions = AWS_PROTOCOL_TEST_SUITE;
using JSONRPC10Client = Aws::JSONRPC10::JSONRPC10Client;
using namespace Aws::JSONRPC10::Model;

AWS_PROTOCOL_TEST(JsonUnions, AwsJson10DeserializeStringUnionValue) {
  JSONRPC10Client client;
  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson10DeserializeBooleanUnionValue) {
  JSONRPC10Client client;
  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson10DeserializeNumberUnionValue) {
  JSONRPC10Client client;
  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson10DeserializeBlobUnionValue) {
  JSONRPC10Client client;
  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson10DeserializeTimestampUnionValue) {
  JSONRPC10Client client;
  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson10DeserializeEnumUnionValue) {
  JSONRPC10Client client;
  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson10DeserializeIntEnumUnionValue) {
  JSONRPC10Client client;
  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson10DeserializeListUnionValue) {
  JSONRPC10Client client;
  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson10DeserializeMapUnionValue) {
  JSONRPC10Client client;
  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson10DeserializeStructureUnionValue) {
  JSONRPC10Client client;
  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson10DeserializeIgnoreType) {
  JSONRPC10Client client;
  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson10DeserializeAllowNulls) {
  JSONRPC10Client client;
  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
