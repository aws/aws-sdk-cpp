/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/PostUnionWithJsonNameRequest.h>

using PostUnionWithJsonName = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(PostUnionWithJsonName, PostUnionWithJsonNameResponse1) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgInZhbHVlIjogewogICAgICAgICJGT08iOiAiaGkiCiAgICB9Cn0=";
  SetMockResponse(mockRs);

  PostUnionWithJsonNameRequest request;

  auto outcome = client.PostUnionWithJsonName(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(PostUnionWithJsonName, PostUnionWithJsonNameResponse2) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgInZhbHVlIjogewogICAgICAgICJfYmF6IjogImhpIgogICAgfQp9";
  SetMockResponse(mockRs);

  PostUnionWithJsonNameRequest request;

  auto outcome = client.PostUnionWithJsonName(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(PostUnionWithJsonName, PostUnionWithJsonNameResponse3) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgInZhbHVlIjogewogICAgICAgICJiYXIiOiAiaGkiCiAgICB9Cn0=";
  SetMockResponse(mockRs);

  PostUnionWithJsonNameRequest request;

  auto outcome = client.PostUnionWithJsonName(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
