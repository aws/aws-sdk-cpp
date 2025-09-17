/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/HttpPayloadWithXmlNamespaceAndPrefixRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using HttpPayloadWithXmlNamespaceAndPrefix = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(HttpPayloadWithXmlNamespaceAndPrefix, HttpPayloadWithXmlNamespaceAndPrefix) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  HttpPayloadWithXmlNamespaceAndPrefixRequest request;
  {
    PayloadWithXmlNamespaceAndPrefix requestNested;
    requestNested.SetName(R"(Phreddy)");
    request.SetNested(requestNested);
  }

  auto outcome = client.HttpPayloadWithXmlNamespaceAndPrefix(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body =
      "PFBheWxvYWRXaXRoWG1sTmFtZXNwYWNlQW5kUHJlZml4IHhtbG5zOmJhej0iaHR0cDovL2Zvby5jb20iPgogICAgPG5hbWU+"
      "UGhyZWRkeTwvbmFtZT4KPC9QYXlsb2FkV2l0aFhtbE5hbWVzcGFjZUFuZFByZWZpeD4=";
  expectedRq.uri = "/HttpPayloadWithXmlNamespaceAndPrefix";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
