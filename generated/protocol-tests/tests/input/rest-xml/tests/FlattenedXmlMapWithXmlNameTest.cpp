/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/FlattenedXmlMapWithXmlNameRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using FlattenedXmlMapWithXmlName = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(FlattenedXmlMapWithXmlName, FlattenedXmlMapWithXmlName) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  FlattenedXmlMapWithXmlNameRequest request;
  request.SetMyMap({{"a", R"(A)"}, {"b", R"(B)"}});

  auto outcome = client.FlattenedXmlMapWithXmlName(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "PEZsYXR0ZW5lZFhtbE1hcFdpdGhYbWxOYW1lUmVxdWVzdD4KICAgIDxLVlA+CiAgICAgICAgPEs+YTwvSz4KICAgICAgICA8Vj5BPC9WPgogICAgPC9LVlA+"
      "CiAgICA8S1ZQPgogICAgICAgIDxLPmI8L0s+CiAgICAgICAgPFY+QjwvVj4KICAgIDwvS1ZQPgo8L0ZsYXR0ZW5lZFhtbE1hcFdpdGhYbWxOYW1lUmVxdWVzdD4=";
  expectedRq.uri = "/FlattenedXmlMapWithXmlName";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
