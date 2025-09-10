/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/BodyWithXmlNameRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using BodyWithXmlName = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(BodyWithXmlName, BodyWithXmlName) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  BodyWithXmlNameRequest request;
  {
    PayloadWithXmlName requestNested;
    requestNested.SetName(R"(Phreddy)");
    request.SetNested(requestNested);
  }

  auto outcome = client.BodyWithXmlName(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body = "PEFob3k+PG5lc3RlZD48bmFtZT5QaHJlZGR5PC9uYW1lPjwvbmVzdGVkPjwvQWhveT4=";
  expectedRq.uri = "/BodyWithXmlName";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
