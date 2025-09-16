/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlEmptyStringsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlEmptyStrings = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlEmptyStrings, XmlEmptyStrings) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  XmlEmptyStringsRequest request;
  request.SetEmptyString(R"()");

  auto outcome = client.XmlEmptyStrings(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body = "PFhtbEVtcHR5U3RyaW5nc1JlcXVlc3Q+CiAgICA8ZW1wdHlTdHJpbmc+PC9lbXB0eVN0cmluZz4KPC9YbWxFbXB0eVN0cmluZ3NSZXF1ZXN0Pgo=";
  expectedRq.uri = "/XmlEmptyStrings";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
