/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlIntEnumsRequest.h>

using XmlIntEnums = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlIntEnums, XmlIntEnums) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PFhtbEludEVudW1zUmVzcG9uc2U+CiAgICA8aW50RW51bTE+MTwvaW50RW51bTE+CiAgICA8aW50RW51bTI+MjwvaW50RW51bTI+CiAgICA8aW50RW51bTM+MzwvaW50RW51bTM+CiAgICA8aW50RW51bUxpc3Q+CiAgICAgICAgPG1lbWJlcj4xPC9tZW1iZXI+CiAgICAgICAgPG1lbWJlcj4yPC9tZW1iZXI+CiAgICA8L2ludEVudW1MaXN0PgogICAgPGludEVudW1TZXQ+CiAgICAgICAgPG1lbWJlcj4xPC9tZW1iZXI+CiAgICAgICAgPG1lbWJlcj4yPC9tZW1iZXI+CiAgICA8L2ludEVudW1TZXQ+CiAgICA8aW50RW51bU1hcD4KICAgICAgICA8ZW50cnk+CiAgICAgICAgICAgIDxrZXk+YTwva2V5PgogICAgICAgICAgICA8dmFsdWU+MTwvdmFsdWU+CiAgICAgICAgPC9lbnRyeT4KICAgICAgICA8ZW50cnk+CiAgICAgICAgICAgIDxrZXk+Yjwva2V5PgogICAgICAgICAgICA8dmFsdWU+MjwvdmFsdWU+CiAgICAgICAgPC9lbnRyeT4KICAgIDwvaW50RW51bU1hcD4KPC9YbWxJbnRFbnVtc1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  XmlIntEnumsRequest request;

  auto outcome = client.XmlIntEnums(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
