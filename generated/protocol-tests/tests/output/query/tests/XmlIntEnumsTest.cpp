/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/XmlIntEnumsRequest.h>

using XmlIntEnums = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(XmlIntEnums, QueryXmlIntEnums) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body = "PFhtbEludEVudW1zUmVzcG9uc2UgeG1sbnM9Imh0dHBzOi8vZXhhbXBsZS5jb20vIj4KICAgIDxYbWxJbnRFbnVtc1Jlc3VsdD4KICAgICAgICA8aW50RW51bTE+MTwvaW50RW51bTE+CiAgICAgICAgPGludEVudW0yPjI8L2ludEVudW0yPgogICAgICAgIDxpbnRFbnVtMz4zPC9pbnRFbnVtMz4KICAgICAgICA8aW50RW51bUxpc3Q+CiAgICAgICAgICAgIDxtZW1iZXI+MTwvbWVtYmVyPgogICAgICAgICAgICA8bWVtYmVyPjI8L21lbWJlcj4KICAgICAgICA8L2ludEVudW1MaXN0PgogICAgICAgIDxpbnRFbnVtU2V0PgogICAgICAgICAgICA8bWVtYmVyPjE8L21lbWJlcj4KICAgICAgICAgICAgPG1lbWJlcj4yPC9tZW1iZXI+CiAgICAgICAgPC9pbnRFbnVtU2V0PgogICAgICAgIDxpbnRFbnVtTWFwPgogICAgICAgICAgICA8ZW50cnk+CiAgICAgICAgICAgICAgICA8a2V5PmE8L2tleT4KICAgICAgICAgICAgICAgIDx2YWx1ZT4xPC92YWx1ZT4KICAgICAgICAgICAgPC9lbnRyeT4KICAgICAgICAgICAgPGVudHJ5PgogICAgICAgICAgICAgICAgPGtleT5iPC9rZXk+CiAgICAgICAgICAgICAgICA8dmFsdWU+MjwvdmFsdWU+CiAgICAgICAgICAgIDwvZW50cnk+CiAgICAgICAgPC9pbnRFbnVtTWFwPgogICAgPC9YbWxJbnRFbnVtc1Jlc3VsdD4KPC9YbWxJbnRFbnVtc1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  XmlIntEnumsRequest request;

  auto outcome = client.XmlIntEnums(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
