/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/PostUnionWithJsonNameRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using PostUnionWithJsonName = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(PostUnionWithJsonName, PostUnionWithJsonNameRequest1) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  PostUnionWithJsonNameRequest request;
  {
    UnionWithJsonName requestValue;
    requestValue.SetFoo(R"(hi)");
    request.SetValue(requestValue);
  }

  auto outcome = client.PostUnionWithJsonName(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "ewogICAgInZhbHVlIjogewogICAgICAgICJGT08iOiAiaGkiCiAgICB9Cn0=";
  expectedRq.uri = "/PostUnionWithJsonName";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(PostUnionWithJsonName, PostUnionWithJsonNameRequest2) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  PostUnionWithJsonNameRequest request;
  {
    UnionWithJsonName requestValue;
    requestValue.SetBaz(R"(hi)");
    request.SetValue(requestValue);
  }

  auto outcome = client.PostUnionWithJsonName(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "ewogICAgInZhbHVlIjogewogICAgICAgICJfYmF6IjogImhpIgogICAgfQp9";
  expectedRq.uri = "/PostUnionWithJsonName";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(PostUnionWithJsonName, PostUnionWithJsonNameRequest3) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  PostUnionWithJsonNameRequest request;
  {
    UnionWithJsonName requestValue;
    requestValue.SetBar(R"(hi)");
    request.SetValue(requestValue);
  }

  auto outcome = client.PostUnionWithJsonName(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "ewogICAgInZhbHVlIjogewogICAgICAgICJiYXIiOiAiaGkiCiAgICB9Cn0=";
  expectedRq.uri = "/PostUnionWithJsonName";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
