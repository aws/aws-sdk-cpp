/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlMapsXmlNameRequest.h>

using XmlMapsXmlName = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlMapsXmlName, XmlMapsXmlName) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PFhtbE1hcHNYbWxOYW1lUmVzcG9uc2U+CiAgICA8bXlNYXA+CiAgICAgICAgPGVudHJ5PgogICAgICAgICAgICA8QXR0cmlidXRlPmZvbzwvQXR0cmlidXRlPgogICAgICAgICAgICA8U2V0dGluZz4KICAgICAgICAgICAgICAgIDxoaT50aGVyZTwvaGk+CiAgICAgICAgICAgIDwvU2V0dGluZz4KICAgICAgICA8L2VudHJ5PgogICAgICAgIDxlbnRyeT4KICAgICAgICAgICAgPEF0dHJpYnV0ZT5iYXo8L0F0dHJpYnV0ZT4KICAgICAgICAgICAgPFNldHRpbmc+CiAgICAgICAgICAgICAgICA8aGk+YnllPC9oaT4KICAgICAgICAgICAgPC9TZXR0aW5nPgogICAgICAgIDwvZW50cnk+CiAgICA8L215TWFwPgo8L1htbE1hcHNYbWxOYW1lUmVzcG9uc2U+Cg==";
  SetMockResponse(mockRs);

  XmlMapsXmlNameRequest request;

  auto outcome = client.XmlMapsXmlName(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
