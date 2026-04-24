/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlMapsXmlNameRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlMapsXmlName = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlMapsXmlName, XmlMapsXmlName) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  XmlMapsXmlNameRequest request;
  {
    GreetingStruct requestMyMapItem;
    requestMyMapItem.SetHi(R"(there)");
    request.AddMyMap("foo", requestMyMapItem);
  }
  {
    GreetingStruct requestMyMapItem;
    requestMyMapItem.SetHi(R"(bye)");
    request.AddMyMap("baz", requestMyMapItem);
  }

  auto outcome = client.XmlMapsXmlName(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "PFhtbE1hcHNYbWxOYW1lUmVxdWVzdD4KICAgIDxteU1hcD4KICAgICAgICA8ZW50cnk+CiAgICAgICAgICAgIDxBdHRyaWJ1dGU+Zm9vPC9BdHRyaWJ1dGU+"
      "CiAgICAgICAgICAgIDxTZXR0aW5nPgogICAgICAgICAgICAgICAgPGhpPnRoZXJlPC9oaT4KICAgICAgICAgICAgPC9TZXR0aW5nPgogICAgICAgIDwvZW50cnk+"
      "CiAgICAgICAgPGVudHJ5PgogICAgICAgICAgICA8QXR0cmlidXRlPmJhejwvQXR0cmlidXRlPgogICAgICAgICAgICA8U2V0dGluZz4KICAgICAgICAgICAgICAgIDxoaT5i"
      "eWU8L2hpPgogICAgICAgICAgICA8L1NldHRpbmc+CiAgICAgICAgPC9lbnRyeT4KICAgIDwvbXlNYXA+CjwvWG1sTWFwc1htbE5hbWVSZXF1ZXN0Pgo=";
  expectedRq.uri = "/XmlMapsXmlName";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
