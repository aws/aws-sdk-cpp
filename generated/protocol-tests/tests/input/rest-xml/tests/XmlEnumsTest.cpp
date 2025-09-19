/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlEnumsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlEnums = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlEnums, XmlEnums) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  XmlEnumsRequest request;
  request.SetFooEnum1(FooEnumMapper::GetFooEnumForName(R"e(Foo)e"));
  request.SetFooEnum2(FooEnumMapper::GetFooEnumForName(R"e(0)e"));
  request.SetFooEnum3(FooEnumMapper::GetFooEnumForName(R"e(1)e"));
  request.SetFooEnumList({FooEnumMapper::GetFooEnumForName(R"e(Foo)e"), FooEnumMapper::GetFooEnumForName(R"e(0)e")});
  request.SetFooEnumSet({FooEnumMapper::GetFooEnumForName(R"e(Foo)e"), FooEnumMapper::GetFooEnumForName(R"e(0)e")});
  request.SetFooEnumMap({{"hi", FooEnumMapper::GetFooEnumForName(R"e(Foo)e")}, {"zero", FooEnumMapper::GetFooEnumForName(R"e(0)e")}});

  auto outcome = client.XmlEnums(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body =
      "PFhtbEVudW1zUmVxdWVzdD4KICAgIDxmb29FbnVtMT5Gb288L2Zvb0VudW0xPgogICAgPGZvb0VudW0yPjA8L2Zvb0VudW0yPgogICAgPGZvb0VudW0zPjE8L2Zvb0VudW0z"
      "PgogICAgPGZvb0VudW1MaXN0PgogICAgICAgIDxtZW1iZXI+Rm9vPC9tZW1iZXI+CiAgICAgICAgPG1lbWJlcj4wPC9tZW1iZXI+"
      "CiAgICA8L2Zvb0VudW1MaXN0PgogICAgPGZvb0VudW1TZXQ+"
      "CiAgICAgICAgPG1lbWJlcj5Gb288L21lbWJlcj4KICAgICAgICA8bWVtYmVyPjA8L21lbWJlcj4KICAgIDwvZm9vRW51bVNldD4KICAgIDxmb29FbnVtTWFwPgogICAgICAg"
      "IDxlbnRyeT4KICAgICAgICAgICAgPGtleT5oaTwva2V5PgogICAgICAgICAgICA8dmFsdWU+"
      "Rm9vPC92YWx1ZT4KICAgICAgICA8L2VudHJ5PgogICAgICAgIDxlbnRyeT4KICAgICAgICAgICAgPGtleT56ZXJvPC9rZXk+"
      "CiAgICAgICAgICAgIDx2YWx1ZT4wPC92YWx1ZT4KICAgICAgICA8L2VudHJ5PgogICAgPC9mb29FbnVtTWFwPgo8L1htbEVudW1zUmVxdWVzdD4K";
  expectedRq.uri = "/XmlEnums";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
