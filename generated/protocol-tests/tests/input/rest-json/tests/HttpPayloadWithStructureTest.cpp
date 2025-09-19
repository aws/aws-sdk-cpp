/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/HttpPayloadWithStructureRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using HttpPayloadWithStructure = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(HttpPayloadWithStructure, RestJsonHttpPayloadWithStructure) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  HttpPayloadWithStructureRequest request;
  {
    NestedPayload requestNested;
    requestNested.SetGreeting(R"(hello)");
    requestNested.SetName(R"(Phreddy)");
    request.SetNested(requestNested);
  }

  auto outcome = client.HttpPayloadWithStructure(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body = "ewogICAgImdyZWV0aW5nIjogImhlbGxvIiwKICAgICJuYW1lIjogIlBocmVkZHkiCn0=";
  expectedRq.uri = "/HttpPayloadWithStructure";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
