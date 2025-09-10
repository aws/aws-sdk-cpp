/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/JsonTimestampsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using JsonTimestamps = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(JsonTimestamps, RestJsonJsonTimestamps) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  JsonTimestampsRequest request;
  request.SetNormal(Aws::Utils::DateTime(static_cast<int64_t>(1398796238)));

  auto outcome = client.JsonTimestamps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "ewogICAgIm5vcm1hbCI6IDEzOTg3OTYyMzgKfQ==";
  expectedRq.uri = "/JsonTimestamps";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(JsonTimestamps, RestJsonJsonTimestampsWithDateTimeFormat) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  JsonTimestampsRequest request;
  request.SetDateTime(Aws::Utils::DateTime(static_cast<int64_t>(1398796238)));

  auto outcome = client.JsonTimestamps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "ewogICAgImRhdGVUaW1lIjogIjIwMTQtMDQtMjlUMTg6MzA6MzhaIgp9";
  expectedRq.uri = "/JsonTimestamps";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(JsonTimestamps, RestJsonJsonTimestampsWithDateTimeOnTargetFormat) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  JsonTimestampsRequest request;
  request.SetDateTimeOnTarget(Aws::Utils::DateTime(static_cast<int64_t>(1398796238)));

  auto outcome = client.JsonTimestamps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "ewogICAgImRhdGVUaW1lT25UYXJnZXQiOiAiMjAxNC0wNC0yOVQxODozMDozOFoiCn0=";
  expectedRq.uri = "/JsonTimestamps";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(JsonTimestamps, RestJsonJsonTimestampsWithEpochSecondsFormat) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  JsonTimestampsRequest request;
  request.SetEpochSeconds(Aws::Utils::DateTime(static_cast<int64_t>(1398796238)));

  auto outcome = client.JsonTimestamps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "ewogICAgImVwb2NoU2Vjb25kcyI6IDEzOTg3OTYyMzgKfQ==";
  expectedRq.uri = "/JsonTimestamps";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(JsonTimestamps, RestJsonJsonTimestampsWithEpochSecondsOnTargetFormat) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  JsonTimestampsRequest request;
  request.SetEpochSecondsOnTarget(Aws::Utils::DateTime(static_cast<int64_t>(1398796238)));

  auto outcome = client.JsonTimestamps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "ewogICAgImVwb2NoU2Vjb25kc09uVGFyZ2V0IjogMTM5ODc5NjIzOAp9";
  expectedRq.uri = "/JsonTimestamps";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(JsonTimestamps, RestJsonJsonTimestampsWithHttpDateFormat) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  JsonTimestampsRequest request;
  request.SetHttpDate(Aws::Utils::DateTime(static_cast<int64_t>(1398796238)));

  auto outcome = client.JsonTimestamps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "ewogICAgImh0dHBEYXRlIjogIlR1ZSwgMjkgQXByIDIwMTQgMTg6MzA6MzggR01UIgp9";
  expectedRq.uri = "/JsonTimestamps";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(JsonTimestamps, RestJsonJsonTimestampsWithHttpDateOnTargetFormat) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  JsonTimestampsRequest request;
  request.SetHttpDateOnTarget(Aws::Utils::DateTime(static_cast<int64_t>(1398796238)));

  auto outcome = client.JsonTimestamps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "ewogICAgImh0dHBEYXRlT25UYXJnZXQiOiAiVHVlLCAyOSBBcHIgMjAxNCAxODozMDozOCBHTVQiCn0=";
  expectedRq.uri = "/JsonTimestamps";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
