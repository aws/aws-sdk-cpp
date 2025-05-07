/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/NestedXmlMapsRequest.h>

using NestedXmlMaps = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(NestedXmlMaps, NestedXmlMapResponse) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PE5lc3RlZFhtbE1hcHNSZXNwb25zZT4KICAgIDxuZXN0ZWRNYXA+CiAgICAgICAgPGVudHJ5PgogICAgICAgICAgICA8a2V5PmZvbzwva2V5PgogICAgICAgICAgICA8dmFsdWU+CiAgICAgICAgICAgICAgICA8ZW50cnk+CiAgICAgICAgICAgICAgICAgICAgPGtleT5iYXI8L2tleT4KICAgICAgICAgICAgICAgICAgICA8dmFsdWU+QmFyPC92YWx1ZT4KICAgICAgICAgICAgICAgIDwvZW50cnk+CiAgICAgICAgICAgIDwvdmFsdWU+CiAgICAgICAgPC9lbnRyeT4KICAgIDwvbmVzdGVkTWFwPgo8L05lc3RlZFhtbE1hcHNSZXNwb25zZT4=";
  SetMockResponse(mockRs);

  NestedXmlMapsRequest request;

  auto outcome = client.NestedXmlMaps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(NestedXmlMaps, FlatNestedXmlMapResponse) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PE5lc3RlZFhtbE1hcHNSZXNwb25zZT4KICAgIDxmbGF0TmVzdGVkTWFwPgogICAgICAgIDxrZXk+Zm9vPC9rZXk+CiAgICAgICAgPHZhbHVlPgogICAgICAgICAgICA8ZW50cnk+CiAgICAgICAgICAgICAgICA8a2V5PmJhcjwva2V5PgogICAgICAgICAgICAgICAgPHZhbHVlPkJhcjwvdmFsdWU+CiAgICAgICAgICAgIDwvZW50cnk+CiAgICAgICAgPC92YWx1ZT4KICAgIDwvZmxhdE5lc3RlZE1hcD4KPC9OZXN0ZWRYbWxNYXBzUmVzcG9uc2U+";
  SetMockResponse(mockRs);

  NestedXmlMapsRequest request;

  auto outcome = client.NestedXmlMaps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
