/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/JsonMapsRequest.h>

using JsonMaps = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(JsonMaps, RestJsonJsonMaps) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgImRlbnNlU3RydWN0TWFwIjogewogICAgICAgICJmb28iOiB7CiAgICAgICAgICAgICJoaSI6ICJ0aGVyZSIKICAgICAgICB9LAogICAgICAgICJiYXoiOiB7CiAgICAgICAgICAgICJoaSI6ICJieWUiCiAgICAgICAgfQogICAgfQp9";
  SetMockResponse(mockRs);

  JsonMapsRequest request;

  auto outcome = client.JsonMaps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(JsonMaps, RestJsonDeserializesZeroValuesInMaps) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgImRlbnNlTnVtYmVyTWFwIjogewogICAgICAgICJ4IjogMAogICAgfSwKICAgICJkZW5zZUJvb2xlYW5NYXAiOiB7CiAgICAgICAgIngiOiBmYWxzZQogICAgfQp9";
  SetMockResponse(mockRs);

  JsonMapsRequest request;

  auto outcome = client.JsonMaps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(JsonMaps, RestJsonDeserializesDenseSetMap) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgImRlbnNlU2V0TWFwIjogewogICAgICAgICJ4IjogW10sCiAgICAgICAgInkiOiBbImEiLCAiYiJdCiAgICB9Cn0=";
  SetMockResponse(mockRs);

  JsonMapsRequest request;

  auto outcome = client.JsonMaps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(JsonMaps, RestJsonDeserializesDenseSetMapAndSkipsNull) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgImRlbnNlU2V0TWFwIjogewogICAgICAgICJ4IjogW10sCiAgICAgICAgInkiOiBbImEiLCAiYiJdLAogICAgICAgICJ6IjogbnVsbAogICAgfQp9";
  SetMockResponse(mockRs);

  JsonMapsRequest request;

  auto outcome = client.JsonMaps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
