/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/FlattenedXmlMapRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using FlattenedXmlMap = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(FlattenedXmlMap, FlattenedXmlMap) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  FlattenedXmlMapRequest request;
  request.SetMyMap({{"foo", FooEnumMapper::GetFooEnumForName(R"e(Foo)e")}, {"baz", FooEnumMapper::GetFooEnumForName(R"e(Baz)e")}});

  auto outcome = client.FlattenedXmlMap(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "PEZsYXR0ZW5lZFhtbE1hcFJlcXVlc3Q+CiAgICA8bXlNYXA+CiAgICAgICAgPGtleT5mb288L2tleT4KICAgICAgICA8dmFsdWU+Rm9vPC92YWx1ZT4KICAgIDwvbXlNYXA+"
      "CiAgICA8bXlNYXA+CiAgICAgICAgPGtleT5iYXo8L2tleT4KICAgICAgICA8dmFsdWU+QmF6PC92YWx1ZT4KICAgIDwvbXlNYXA+"
      "CjwvRmxhdHRlbmVkWG1sTWFwUmVxdWVzdD4=";
  expectedRq.uri = "/FlattenedXmlMap";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
