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
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgIm5vcm1hbCI6IDEzOTg3OTYyMzgKfQ==";
  SetMockResponse(mockRs);

  JsonTimestampsRequest request;

  auto outcome = client.JsonTimestamps(request);
  ValidateRequestSent();
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const JsonTimestampsResult& result = outcome.GetResult();
  /* expectedResult = R"( {"normal":1398796238} )" */
  EXPECT_EQ(Aws::Utils::DateTime(1398796238L), result.GetNormal());
}

AWS_PROTOCOL_TEST(JsonTimestamps, RestJsonJsonTimestampsWithDateTimeFormat) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgImRhdGVUaW1lIjogIjIwMTQtMDQtMjlUMTg6MzA6MzhaIgp9";
  SetMockResponse(mockRs);

  JsonTimestampsRequest request;

  auto outcome = client.JsonTimestamps(request);
  ValidateRequestSent();
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const JsonTimestampsResult& result = outcome.GetResult();
  /* expectedResult = R"( {"dateTime":1398796238} )" */
  EXPECT_EQ(Aws::Utils::DateTime(1398796238L), result.GetDateTime());
}

AWS_PROTOCOL_TEST(JsonTimestamps, RestJsonJsonTimestampsWithDateTimeOnTargetFormat) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgImRhdGVUaW1lT25UYXJnZXQiOiAiMjAxNC0wNC0yOVQxODozMDozOFoiCn0=";
  SetMockResponse(mockRs);

  JsonTimestampsRequest request;

  auto outcome = client.JsonTimestamps(request);
  ValidateRequestSent();
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const JsonTimestampsResult& result = outcome.GetResult();
  /* expectedResult = R"( {"dateTimeOnTarget":1398796238} )" */
  EXPECT_EQ(Aws::Utils::DateTime(1398796238L), result.GetDateTimeOnTarget());
}

AWS_PROTOCOL_TEST(JsonTimestamps, RestJsonJsonTimestampsWithEpochSecondsFormat) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgImVwb2NoU2Vjb25kcyI6IDEzOTg3OTYyMzgKfQ==";
  SetMockResponse(mockRs);

  JsonTimestampsRequest request;

  auto outcome = client.JsonTimestamps(request);
  ValidateRequestSent();
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const JsonTimestampsResult& result = outcome.GetResult();
  /* expectedResult = R"( {"epochSeconds":1398796238} )" */
  EXPECT_EQ(Aws::Utils::DateTime(1398796238L), result.GetEpochSeconds());
}

AWS_PROTOCOL_TEST(JsonTimestamps, RestJsonJsonTimestampsWithEpochSecondsOnTargetFormat) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgImVwb2NoU2Vjb25kc09uVGFyZ2V0IjogMTM5ODc5NjIzOAp9";
  SetMockResponse(mockRs);

  JsonTimestampsRequest request;

  auto outcome = client.JsonTimestamps(request);
  ValidateRequestSent();
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const JsonTimestampsResult& result = outcome.GetResult();
  /* expectedResult = R"( {"epochSecondsOnTarget":1398796238} )" */
  EXPECT_EQ(Aws::Utils::DateTime(1398796238L), result.GetEpochSecondsOnTarget());
}

AWS_PROTOCOL_TEST(JsonTimestamps, RestJsonJsonTimestampsWithHttpDateFormat) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgImh0dHBEYXRlIjogIlR1ZSwgMjkgQXByIDIwMTQgMTg6MzA6MzggR01UIgp9";
  SetMockResponse(mockRs);

  JsonTimestampsRequest request;

  auto outcome = client.JsonTimestamps(request);
  ValidateRequestSent();
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const JsonTimestampsResult& result = outcome.GetResult();
  /* expectedResult = R"( {"httpDate":1398796238} )" */
  EXPECT_EQ(Aws::Utils::DateTime(1398796238L), result.GetHttpDate());
}

AWS_PROTOCOL_TEST(JsonTimestamps, RestJsonJsonTimestampsWithHttpDateOnTargetFormat) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgImh0dHBEYXRlT25UYXJnZXQiOiAiVHVlLCAyOSBBcHIgMjAxNCAxODozMDozOCBHTVQiCn0=";
  SetMockResponse(mockRs);

  JsonTimestampsRequest request;

  auto outcome = client.JsonTimestamps(request);
  ValidateRequestSent();
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const JsonTimestampsResult& result = outcome.GetResult();
  /* expectedResult = R"( {"httpDateOnTarget":1398796238} )" */
  EXPECT_EQ(Aws::Utils::DateTime(1398796238L), result.GetHttpDateOnTarget());
}
