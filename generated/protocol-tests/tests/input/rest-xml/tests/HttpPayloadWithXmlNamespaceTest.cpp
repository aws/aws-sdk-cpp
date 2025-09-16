/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/HttpPayloadWithXmlNamespaceRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using HttpPayloadWithXmlNamespace = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(HttpPayloadWithXmlNamespace, HttpPayloadWithXmlNamespace) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  HttpPayloadWithXmlNamespaceRequest request;
  {
    PayloadWithXmlNamespace requestNested;
    requestNested.SetName(R"(Phreddy)");
    request.SetNested(requestNested);
  }

  auto outcome = client.HttpPayloadWithXmlNamespace(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body =
      "PFBheWxvYWRXaXRoWG1sTmFtZXNwYWNlIHhtbG5zPSJodHRwOi8vZm9vLmNvbSI+"
      "CiAgICA8bmFtZT5QaHJlZGR5PC9uYW1lPgo8L1BheWxvYWRXaXRoWG1sTmFtZXNwYWNlPg==";
  expectedRq.uri = "/HttpPayloadWithXmlNamespace";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
