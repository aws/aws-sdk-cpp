/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlEmptyMapsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlEmptyMaps = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlEmptyMaps, XmlEmptyMaps) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  XmlEmptyMapsRequest request;

  auto outcome = client.XmlEmptyMaps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "PFhtbEVtcHR5TWFwc1JlcXVlc3Q+CiAgICA8bXlNYXA+PC9teU1hcD4KPC9YbWxFbXB0eU1hcHNSZXF1ZXN0Pgo=";
  expectedRq.uri = "/XmlEmptyMaps";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
