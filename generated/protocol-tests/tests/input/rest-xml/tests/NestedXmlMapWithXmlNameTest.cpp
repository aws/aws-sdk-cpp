/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/NestedXmlMapWithXmlNameRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using NestedXmlMapWithXmlName = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(NestedXmlMapWithXmlName, NestedXmlMapWithXmlNameSerializes) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  NestedXmlMapWithXmlNameRequest request;
  request.SetNestedXmlMapWithXmlNameMap(
      {{"foo", {{"bar", R"(Baz)"}, {"fizz", R"(Buzz)"}}}, {"qux", {{"foobar", R"(Bar)"}, {"fizzbuzz", R"(Buzz)"}}}});

  auto outcome = client.NestedXmlMapWithXmlName(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "ICAgIDxOZXN0ZWRYbWxNYXBXaXRoWG1sTmFtZVJlcXVlc3Q+CiAgICAgICAgPG5lc3RlZFhtbE1hcFdpdGhYbWxOYW1lTWFwPgogICAgICAgICAgICA8ZW50cnk+"
      "CiAgICAgICAgICAgICAgICA8T3V0ZXJLZXk+Zm9vPC9PdXRlcktleT4KICAgICAgICAgICAgICAgIDx2YWx1ZT4KICAgICAgICAgICAgICAgICAgICA8ZW50cnk+"
      "CiAgICAgICAgICAgICAgICAgICAgICAgIDxJbm5lcktleT5iYXI8L0lubmVyS2V5PgogICAgICAgICAgICAgICAgICAgICAgICA8SW5uZXJWYWx1ZT5CYXo8L0lubmVyVmFs"
      "dWU+CiAgICAgICAgICAgICAgICAgICAgPC9lbnRyeT4KICAgICAgICAgICAgICAgICAgICA8ZW50cnk+"
      "CiAgICAgICAgICAgICAgICAgICAgICAgIDxJbm5lcktleT5maXp6PC9Jbm5lcktleT4KICAgICAgICAgICAgICAgICAgICAgICAgPElubmVyVmFsdWU+"
      "QnV6ejwvSW5uZXJWYWx1ZT4KICAgICAgICAgICAgICAgICAgICA8L2VudHJ5PgogICAgICAgICAgICAgICAgPC92YWx1ZT4KICAgICAgICAgICAgPC9lbnRyeT4KICAgICAg"
      "ICAgICAgPGVudHJ5PgogICAgICAgICAgICAgICAgPE91dGVyS2V5PnF1eDwvT3V0ZXJLZXk+CiAgICAgICAgICAgICAgICA8dmFsdWU+"
      "CiAgICAgICAgICAgICAgICAgICAgPGVudHJ5PgogICAgICAgICAgICAgICAgICAgICAgICA8SW5uZXJLZXk+"
      "Zm9vYmFyPC9Jbm5lcktleT4KICAgICAgICAgICAgICAgICAgICAgICAgPElubmVyVmFsdWU+QmFyPC9Jbm5lclZhbHVlPgogICAgICAgICAgICAgICAgICAgIDwvZW50cnk+"
      "CiAgICAgICAgICAgICAgICAgICAgPGVudHJ5PgogICAgICAgICAgICAgICAgICAgICAgICA8SW5uZXJLZXk+"
      "Zml6emJ1eno8L0lubmVyS2V5PgogICAgICAgICAgICAgICAgICAgICAgICA8SW5uZXJWYWx1ZT5CdXp6PC9Jbm5lclZhbHVlPgogICAgICAgICAgICAgICAgICAgIDwvZW50"
      "cnk+CiAgICAgICAgICAgICAgICA8L3ZhbHVlPgogICAgICAgICAgICA8L2VudHJ5PgogICAgICAgIDwvbmVzdGVkWG1sTWFwV2l0aFhtbE5hbWVNYXA+"
      "CiAgICA8L05lc3RlZFhtbE1hcFdpdGhYbWxOYW1lUmVxdWVzdD4K";
  expectedRq.uri = "/NestedXmlMapWithXmlName";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  ValidateRequestSent(expectedRq, ValidateXmlBody);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
