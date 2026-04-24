/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/ConstantQueryStringRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using ConstantQueryString = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(ConstantQueryString, ConstantQueryString) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  ConstantQueryStringRequest request;
  request.SetHello(R"(hi)");

  auto outcome = client.ConstantQueryString(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "GET";
  expectedRq.uri = "/ConstantQueryString/hi?foo=bar&hello";
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
