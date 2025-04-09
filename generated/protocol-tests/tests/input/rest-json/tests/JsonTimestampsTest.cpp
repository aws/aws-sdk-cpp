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
  request.SetNormal(Aws::Utils::DateTime(1398796238));

  auto outcome = client.JsonTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(JsonTimestamps, RestJsonJsonTimestampsWithDateTimeFormat) {
  RestJsonProtocolClient client;
  JsonTimestampsRequest request;
  request.SetDateTime(Aws::Utils::DateTime(1398796238));

  auto outcome = client.JsonTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(JsonTimestamps, RestJsonJsonTimestampsWithDateTimeOnTargetFormat) {
  RestJsonProtocolClient client;
  JsonTimestampsRequest request;
  request.SetDateTimeOnTarget(Aws::Utils::DateTime(1398796238));

  auto outcome = client.JsonTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(JsonTimestamps, RestJsonJsonTimestampsWithEpochSecondsFormat) {
  RestJsonProtocolClient client;
  JsonTimestampsRequest request;
  request.SetEpochSeconds(Aws::Utils::DateTime(1398796238));

  auto outcome = client.JsonTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(JsonTimestamps, RestJsonJsonTimestampsWithEpochSecondsOnTargetFormat) {
  RestJsonProtocolClient client;
  JsonTimestampsRequest request;
  request.SetEpochSecondsOnTarget(Aws::Utils::DateTime(1398796238));

  auto outcome = client.JsonTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(JsonTimestamps, RestJsonJsonTimestampsWithHttpDateFormat) {
  RestJsonProtocolClient client;
  JsonTimestampsRequest request;
  request.SetHttpDate(Aws::Utils::DateTime(1398796238));

  auto outcome = client.JsonTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(JsonTimestamps, RestJsonJsonTimestampsWithHttpDateOnTargetFormat) {
  RestJsonProtocolClient client;
  JsonTimestampsRequest request;
  request.SetHttpDateOnTarget(Aws::Utils::DateTime(1398796238));

  auto outcome = client.JsonTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome);
}
