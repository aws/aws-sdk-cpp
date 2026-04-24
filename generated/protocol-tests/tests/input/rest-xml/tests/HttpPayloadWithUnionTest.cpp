/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/HttpPayloadWithUnionRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using HttpPayloadWithUnion = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(HttpPayloadWithUnion, RestXmlHttpPayloadWithUnion) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

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
  expectedRq.body = "PFVuaW9uUGF5bG9hZD4KICAgIDxncmVldGluZz5oZWxsbzwvZ3JlZXRpbmc+CjwvVW5pb25QYXlsb2FkPg==";
  expectedRq.uri = "/HttpPayloadWithUnion";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(HttpPayloadWithUnion, RestXmlHttpPayloadWithUnsetUnion) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  HttpPayloadWithUnionRequest request;

  auto outcome = client.HttpPayloadWithUnion(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.uri = "/HttpPayloadWithUnion";
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
