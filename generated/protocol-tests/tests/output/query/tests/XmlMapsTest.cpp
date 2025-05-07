/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/XmlMapsRequest.h>

using XmlMaps = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(XmlMaps, QueryXmlMaps) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body = "PFhtbE1hcHNSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogICAgPFhtbE1hcHNSZXN1bHQ+CiAgICAgICAgPG15TWFwPgogICAgICAgICAgICA8ZW50cnk+CiAgICAgICAgICAgICAgICA8a2V5PmZvbzwva2V5PgogICAgICAgICAgICAgICAgPHZhbHVlPgogICAgICAgICAgICAgICAgICAgIDxoaT50aGVyZTwvaGk+CiAgICAgICAgICAgICAgICA8L3ZhbHVlPgogICAgICAgICAgICA8L2VudHJ5PgogICAgICAgICAgICA8ZW50cnk+CiAgICAgICAgICAgICAgICA8a2V5PmJhejwva2V5PgogICAgICAgICAgICAgICAgPHZhbHVlPgogICAgICAgICAgICAgICAgICAgIDxoaT5ieWU8L2hpPgogICAgICAgICAgICAgICAgPC92YWx1ZT4KICAgICAgICAgICAgPC9lbnRyeT4KICAgICAgICA8L215TWFwPgogICAgPC9YbWxNYXBzUmVzdWx0Pgo8L1htbE1hcHNSZXNwb25zZT4K";
  SetMockResponse(mockRs);

  XmlMapsRequest request;

  auto outcome = client.XmlMaps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
