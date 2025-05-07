/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/XmlNamespacesRequest.h>

using XmlNamespaces = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(XmlNamespaces, QueryXmlNamespaces) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body = "PFhtbE5hbWVzcGFjZXNSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogICAgPFhtbE5hbWVzcGFjZXNSZXN1bHQ+CiAgICAgICAgPG5lc3RlZD4KICAgICAgICAgICAgPGZvbyB4bWxuczpiYXo9Imh0dHA6Ly9iYXouY29tIj5Gb288L2Zvbz4KICAgICAgICAgICAgPHZhbHVlcyB4bWxucz0iaHR0cDovL3F1eC5jb20iPgogICAgICAgICAgICAgICAgPG1lbWJlciB4bWxucz0iaHR0cDovL2J1eC5jb20iPkJhcjwvbWVtYmVyPgogICAgICAgICAgICAgICAgPG1lbWJlciB4bWxucz0iaHR0cDovL2J1eC5jb20iPkJhejwvbWVtYmVyPgogICAgICAgICAgICA8L3ZhbHVlcz4KICAgICAgICA8L25lc3RlZD4KICAgIDwvWG1sTmFtZXNwYWNlc1Jlc3VsdD4KPC9YbWxOYW1lc3BhY2VzUmVzcG9uc2U+Cg==";
  SetMockResponse(mockRs);

  XmlNamespacesRequest request;

  auto outcome = client.XmlNamespaces(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
