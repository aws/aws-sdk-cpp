/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/HttpPayloadWithUnionRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using HttpPayloadWithUnion = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(HttpPayloadWithUnion, RestJsonHttpPayloadWithUnion) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  HttpPayloadWithUnionRequest request;
  {
    UnionPayload requestNested;
    requestNested.SetGreeting(R"(hello)");
    request.SetNested(requestNested);
  }

  auto outcome = client.HttpPayloadWithUnion(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body = "ewogICAgImdyZWV0aW5nIjogImhlbGxvIgp9";
  expectedRq.uri = "/HttpPayloadWithUnion";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(HttpPayloadWithUnion, RestJsonHttpPayloadWithUnsetUnion) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  HttpPayloadWithUnionRequest request;

  auto outcome = client.HttpPayloadWithUnion(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.uri = "/HttpPayloadWithUnion";
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
