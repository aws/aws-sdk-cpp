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

  SetMockResponse();

  XmlIntEnumsRequest request;
  request.SetIntEnum1(1);
  request.SetIntEnum2(2);
  request.SetIntEnum3(3);
  request.SetIntEnumList({1, 2});
  request.SetIntEnumSet({1, 2});
  request.SetIntEnumMap({{"a",  1}, {"b",  2}});

  auto outcome = client.XmlIntEnums(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body = "PFhtbEludEVudW1zUmVxdWVzdD4KICAgIDxpbnRFbnVtMT4xPC9pbnRFbnVtMT4KICAgIDxpbnRFbnVtMj4yPC9pbnRFbnVtMj4KICAgIDxpbnRFbnVtMz4zPC9pbnRFbnVtMz4KICAgIDxpbnRFbnVtTGlzdD4KICAgICAgICA8bWVtYmVyPjE8L21lbWJlcj4KICAgICAgICA8bWVtYmVyPjI8L21lbWJlcj4KICAgIDwvaW50RW51bUxpc3Q+CiAgICA8aW50RW51bVNldD4KICAgICAgICA8bWVtYmVyPjE8L21lbWJlcj4KICAgICAgICA8bWVtYmVyPjI8L21lbWJlcj4KICAgIDwvaW50RW51bVNldD4KICAgIDxpbnRFbnVtTWFwPgogICAgICAgIDxlbnRyeT4KICAgICAgICAgICAgPGtleT5hPC9rZXk+CiAgICAgICAgICAgIDx2YWx1ZT4xPC92YWx1ZT4KICAgICAgICA8L2VudHJ5PgogICAgICAgIDxlbnRyeT4KICAgICAgICAgICAgPGtleT5iPC9rZXk+CiAgICAgICAgICAgIDx2YWx1ZT4yPC92YWx1ZT4KICAgICAgICA8L2VudHJ5PgogICAgPC9pbnRFbnVtTWFwPgo8L1htbEludEVudW1zUmVxdWVzdD4K";
  expectedRq.uri = "/XmlIntEnums";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  ValidateRequestSent(expectedRq);
}
