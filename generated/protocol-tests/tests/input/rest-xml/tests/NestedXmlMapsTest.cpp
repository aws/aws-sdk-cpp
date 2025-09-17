/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/NestedXmlMapsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using NestedXmlMaps = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(NestedXmlMaps, NestedXmlMapRequest) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  NestedXmlMapsRequest request;
  request.SetNestedMap({{"foo", {{"bar", FooEnumMapper::GetFooEnumForName(R"e(Bar)e")}}}});

  auto outcome = client.NestedXmlMaps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "PE5lc3RlZFhtbE1hcHNSZXF1ZXN0PgogICAgPG5lc3RlZE1hcD4KICAgICAgICA8ZW50cnk+CiAgICAgICAgICAgIDxrZXk+Zm9vPC9rZXk+"
      "CiAgICAgICAgICAgIDx2YWx1ZT4KICAgICAgICAgICAgICAgIDxlbnRyeT4KICAgICAgICAgICAgICAgICAgICA8a2V5PmJhcjwva2V5PgogICAgICAgICAgICAgICAgICAg"
      "IDx2YWx1ZT5CYXI8L3ZhbHVlPgogICAgICAgICAgICAgICAgPC9lbnRyeT4KICAgICAgICAgICAgPC92YWx1ZT4KICAgICAgICA8L2VudHJ5PgogICAgPC9uZXN0ZWRNYXA+"
      "CjwvTmVzdGVkWG1sTWFwc1JlcXVlc3Q+";
  expectedRq.uri = "/NestedXmlMaps";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(NestedXmlMaps, FlatNestedXmlMapRequest) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  NestedXmlMapsRequest request;
  request.SetFlatNestedMap({{"foo", {{"bar", FooEnumMapper::GetFooEnumForName(R"e(Bar)e")}}}});

  auto outcome = client.NestedXmlMaps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "PE5lc3RlZFhtbE1hcHNSZXF1ZXN0PgogICAgPGZsYXROZXN0ZWRNYXA+CiAgICAgICAgPGtleT5mb288L2tleT4KICAgICAgICA8dmFsdWU+"
      "CiAgICAgICAgICAgIDxlbnRyeT4KICAgICAgICAgICAgICAgIDxrZXk+YmFyPC9rZXk+CiAgICAgICAgICAgICAgICA8dmFsdWU+"
      "QmFyPC92YWx1ZT4KICAgICAgICAgICAgPC9lbnRyeT4KICAgICAgICA8L3ZhbHVlPgogICAgPC9mbGF0TmVzdGVkTWFwPgo8L05lc3RlZFhtbE1hcHNSZXF1ZXN0Pg==";
  expectedRq.uri = "/NestedXmlMaps";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
