/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlMapWithXmlNamespaceRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlMapWithXmlNamespace = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlMapWithXmlNamespace, RestXmlXmlMapWithXmlNamespace) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  XmlMapWithXmlNamespaceRequest request;
  request.SetMyMap({{"a", R"(A)"}, {"b", R"(B)"}});

  auto outcome = client.XmlMapWithXmlNamespace(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "PFhtbE1hcFdpdGhYbWxOYW1lc3BhY2VSZXF1ZXN0PgogICAgPEtWUCB4bWxucz0iaHR0cHM6Ly90aGUtbWVtYmVyLmV4YW1wbGUuY29tIj4KICAgICAgICA8ZW50cnk+"
      "CiAgICAgICAgICAgIDxLIHhtbG5zPSJodHRwczovL3RoZS1rZXkuZXhhbXBsZS5jb20iPmE8L0s+"
      "CiAgICAgICAgICAgIDxWIHhtbG5zPSJodHRwczovL3RoZS12YWx1ZS5leGFtcGxlLmNvbSI+"
      "QTwvVj4KICAgICAgICA8L2VudHJ5PgogICAgICAgIDxlbnRyeT4KICAgICAgICAgICAgPEsgeG1sbnM9Imh0dHBzOi8vdGhlLWtleS5leGFtcGxlLmNvbSI+"
      "YjwvSz4KICAgICAgICAgICAgPFYgeG1sbnM9Imh0dHBzOi8vdGhlLXZhbHVlLmV4YW1wbGUuY29tIj5CPC9WPgogICAgICAgIDwvZW50cnk+"
      "CiAgICA8L0tWUD4KPC9YbWxNYXBXaXRoWG1sTmFtZXNwYWNlUmVxdWVzdD4=";
  expectedRq.uri = "/XmlMapWithXmlNamespace";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
