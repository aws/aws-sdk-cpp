/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlEnumsRequest.h>

using XmlEnums = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlEnums, XmlEnums) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PFhtbEVudW1zUmVzcG9uc2U+CiAgICA8Zm9vRW51bTE+Rm9vPC9mb29FbnVtMT4KICAgIDxmb29FbnVtMj4wPC9mb29FbnVtMj4KICAgIDxmb29FbnVtMz4xPC9mb29FbnVtMz4KICAgIDxmb29FbnVtTGlzdD4KICAgICAgICA8bWVtYmVyPkZvbzwvbWVtYmVyPgogICAgICAgIDxtZW1iZXI+MDwvbWVtYmVyPgogICAgPC9mb29FbnVtTGlzdD4KICAgIDxmb29FbnVtU2V0PgogICAgICAgIDxtZW1iZXI+Rm9vPC9tZW1iZXI+CiAgICAgICAgPG1lbWJlcj4wPC9tZW1iZXI+CiAgICA8L2Zvb0VudW1TZXQ+CiAgICA8Zm9vRW51bU1hcD4KICAgICAgICA8ZW50cnk+CiAgICAgICAgICAgIDxrZXk+aGk8L2tleT4KICAgICAgICAgICAgPHZhbHVlPkZvbzwvdmFsdWU+CiAgICAgICAgPC9lbnRyeT4KICAgICAgICA8ZW50cnk+CiAgICAgICAgICAgIDxrZXk+emVybzwva2V5PgogICAgICAgICAgICA8dmFsdWU+MDwvdmFsdWU+CiAgICAgICAgPC9lbnRyeT4KICAgIDwvZm9vRW51bU1hcD4KPC9YbWxFbnVtc1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  XmlEnumsRequest request;

  auto outcome = client.XmlEnums(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
