/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/XmlEnumsRequest.h>

using XmlEnums = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(XmlEnums, QueryXmlEnums) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body = "PFhtbEVudW1zUmVzcG9uc2UgeG1sbnM9Imh0dHBzOi8vZXhhbXBsZS5jb20vIj4KICAgIDxYbWxFbnVtc1Jlc3VsdD4KICAgICAgICA8Zm9vRW51bTE+Rm9vPC9mb29FbnVtMT4KICAgICAgICA8Zm9vRW51bTI+MDwvZm9vRW51bTI+CiAgICAgICAgPGZvb0VudW0zPjE8L2Zvb0VudW0zPgogICAgICAgIDxmb29FbnVtTGlzdD4KICAgICAgICAgICAgPG1lbWJlcj5Gb288L21lbWJlcj4KICAgICAgICAgICAgPG1lbWJlcj4wPC9tZW1iZXI+CiAgICAgICAgPC9mb29FbnVtTGlzdD4KICAgICAgICA8Zm9vRW51bVNldD4KICAgICAgICAgICAgPG1lbWJlcj5Gb288L21lbWJlcj4KICAgICAgICAgICAgPG1lbWJlcj4wPC9tZW1iZXI+CiAgICAgICAgPC9mb29FbnVtU2V0PgogICAgICAgIDxmb29FbnVtTWFwPgogICAgICAgICAgICA8ZW50cnk+CiAgICAgICAgICAgICAgICA8a2V5PmhpPC9rZXk+CiAgICAgICAgICAgICAgICA8dmFsdWU+Rm9vPC92YWx1ZT4KICAgICAgICAgICAgPC9lbnRyeT4KICAgICAgICAgICAgPGVudHJ5PgogICAgICAgICAgICAgICAgPGtleT56ZXJvPC9rZXk+CiAgICAgICAgICAgICAgICA8dmFsdWU+MDwvdmFsdWU+CiAgICAgICAgICAgIDwvZW50cnk+CiAgICAgICAgPC9mb29FbnVtTWFwPgogICAgPC9YbWxFbnVtc1Jlc3VsdD4KPC9YbWxFbnVtc1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  XmlEnumsRequest request;

  auto outcome = client.XmlEnums(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
