/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/FlattenedXmlMapWithXmlNamespaceRequest.h>

using FlattenedXmlMapWithXmlNamespace = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(FlattenedXmlMapWithXmlNamespace, RestXmlFlattenedXmlMapWithXmlNamespace) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PEZsYXR0ZW5lZFhtbE1hcFdpdGhYbWxOYW1lc3BhY2VPdXRwdXQ+CiAgICA8S1ZQIHhtbG5zPSJodHRwczovL3RoZS1tZW1iZXIuZXhhbXBsZS5jb20iPgogICAgICAgIDxLIHhtbG5zPSJodHRwczovL3RoZS1rZXkuZXhhbXBsZS5jb20iPmE8L0s+CiAgICAgICAgPFYgeG1sbnM9Imh0dHBzOi8vdGhlLXZhbHVlLmV4YW1wbGUuY29tIj5BPC9WPgogICAgPC9LVlA+CiAgICA8S1ZQIHhtbG5zPSJodHRwczovL3RoZS1tZW1iZXIuZXhhbXBsZS5jb20iPgogICAgICAgIDxLIHhtbG5zPSJodHRwczovL3RoZS1rZXkuZXhhbXBsZS5jb20iPmI8L0s+CiAgICAgICAgPFYgeG1sbnM9Imh0dHBzOi8vdGhlLXZhbHVlLmV4YW1wbGUuY29tIj5CPC9WPgogICAgPC9LVlA+CjwvRmxhdHRlbmVkWG1sTWFwV2l0aFhtbE5hbWVzcGFjZU91dHB1dD4=";
  SetMockResponse(mockRs);

  FlattenedXmlMapWithXmlNamespaceRequest request;

  auto outcome = client.FlattenedXmlMapWithXmlNamespace(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
