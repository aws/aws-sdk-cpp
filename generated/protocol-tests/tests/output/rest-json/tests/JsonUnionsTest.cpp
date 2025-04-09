/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/JsonUnionsRequest.h>

using JsonUnions = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(JsonUnions, RestJsonDeserializeStringUnionValue) {
  RestJsonProtocolClient client;
  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonUnions, RestJsonDeserializeBooleanUnionValue) {
  RestJsonProtocolClient client;
  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonUnions, RestJsonDeserializeNumberUnionValue) {
  RestJsonProtocolClient client;
  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonUnions, RestJsonDeserializeBlobUnionValue) {
  RestJsonProtocolClient client;
  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonUnions, RestJsonDeserializeTimestampUnionValue) {
  RestJsonProtocolClient client;
  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonUnions, RestJsonDeserializeEnumUnionValue) {
  RestJsonProtocolClient client;
  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonUnions, RestJsonDeserializeListUnionValue) {
  RestJsonProtocolClient client;
  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonUnions, RestJsonDeserializeMapUnionValue) {
  RestJsonProtocolClient client;
  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonUnions, RestJsonDeserializeStructureUnionValue) {
  RestJsonProtocolClient client;
  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonUnions, RestJsonDeserializeIgnoreType) {
  RestJsonProtocolClient client;
  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
