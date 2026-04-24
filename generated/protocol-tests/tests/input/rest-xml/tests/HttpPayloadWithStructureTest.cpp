/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/HttpPayloadWithStructureRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using HttpPayloadWithStructure = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(HttpPayloadWithStructure, HttpPayloadWithStructure) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

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
  expectedRq.body =
      "PE5lc3RlZFBheWxvYWQ+CiAgICA8Z3JlZXRpbmc+aGVsbG88L2dyZWV0aW5nPgogICAgPG5hbWU+UGhyZWRkeTwvbmFtZT4KPC9OZXN0ZWRQYXlsb2FkPgo=";
  expectedRq.uri = "/HttpPayloadWithStructure";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
