/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/JsonTimestampsRequest.h>

using JsonTimestamps = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(JsonTimestamps, RestJsonJsonTimestamps) {
  RestJsonProtocolClient client;
  JsonTimestampsRequest request;

  auto outcome = client.JsonTimestamps(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonTimestamps, RestJsonJsonTimestampsWithDateTimeFormat) {
  RestJsonProtocolClient client;
  JsonTimestampsRequest request;

  auto outcome = client.JsonTimestamps(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonTimestamps, RestJsonJsonTimestampsWithDateTimeOnTargetFormat) {
  RestJsonProtocolClient client;
  JsonTimestampsRequest request;

  auto outcome = client.JsonTimestamps(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonTimestamps, RestJsonJsonTimestampsWithEpochSecondsFormat) {
  RestJsonProtocolClient client;
  JsonTimestampsRequest request;

  auto outcome = client.JsonTimestamps(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonTimestamps, RestJsonJsonTimestampsWithEpochSecondsOnTargetFormat) {
  RestJsonProtocolClient client;
  JsonTimestampsRequest request;

  auto outcome = client.JsonTimestamps(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonTimestamps, RestJsonJsonTimestampsWithHttpDateFormat) {
  RestJsonProtocolClient client;
  JsonTimestampsRequest request;

  auto outcome = client.JsonTimestamps(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonTimestamps, RestJsonJsonTimestampsWithHttpDateOnTargetFormat) {
  RestJsonProtocolClient client;
  JsonTimestampsRequest request;

  auto outcome = client.JsonTimestamps(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
