/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/FlattenedXmlMapWithXmlNamespaceRequest.h>

using FlattenedXmlMapWithXmlNamespace = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(FlattenedXmlMapWithXmlNamespace, QueryQueryFlattenedXmlMapWithXmlNamespace) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body = "PEZsYXR0ZW5lZFhtbE1hcFdpdGhYbWxOYW1lc3BhY2VSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogICAgPEZsYXR0ZW5lZFhtbE1hcFdpdGhYbWxOYW1lc3BhY2VSZXN1bHQ+CiAgICAgICAgPEtWUCB4bWxucz0iaHR0cHM6Ly90aGUtbWVtYmVyLmV4YW1wbGUuY29tIj4KICAgICAgICAgICAgPEsgeG1sbnM9Imh0dHBzOi8vdGhlLWtleS5leGFtcGxlLmNvbSI+YTwvSz4KICAgICAgICAgICAgPFYgeG1sbnM9Imh0dHBzOi8vdGhlLXZhbHVlLmV4YW1wbGUuY29tIj5BPC9WPgogICAgICAgIDwvS1ZQPgogICAgICAgIDxLVlAgeG1sbnM9Imh0dHBzOi8vdGhlLW1lbWJlci5leGFtcGxlLmNvbSI+CiAgICAgICAgICAgIDxLIHhtbG5zPSJodHRwczovL3RoZS1rZXkuZXhhbXBsZS5jb20iPmI8L0s+CiAgICAgICAgICAgIDxWIHhtbG5zPSJodHRwczovL3RoZS12YWx1ZS5leGFtcGxlLmNvbSI+QjwvVj4KICAgICAgICA8L0tWUD4KICAgIDwvRmxhdHRlbmVkWG1sTWFwV2l0aFhtbE5hbWVzcGFjZVJlc3VsdD4KPC9GbGF0dGVuZWRYbWxNYXBXaXRoWG1sTmFtZXNwYWNlUmVzcG9uc2U+";
  SetMockResponse(mockRs);

  FlattenedXmlMapWithXmlNamespaceRequest request;

  auto outcome = client.FlattenedXmlMapWithXmlNamespace(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
