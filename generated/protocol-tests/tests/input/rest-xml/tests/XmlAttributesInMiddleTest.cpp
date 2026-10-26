/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlAttributesInMiddleRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlAttributesInMiddle = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlAttributesInMiddle, XmlAttributesInMiddle) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  XmlAttributesInMiddleRequest request;
  {
    XmlAttributesInMiddlePayloadRequest requestPayload;
    requestPayload.SetFoo(R"(Foo)");
    requestPayload.SetAttr(R"(attributeValue)");
    requestPayload.SetBaz(R"(Baz)");
    request.SetPayload(requestPayload);
  }

  auto outcome = client.XmlAttributesInMiddle(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body =
      "PFhtbEF0dHJpYnV0ZXNJbk1pZGRsZVBheWxvYWRSZXF1ZXN0IHRlc3Q9ImF0dHJpYnV0ZVZhbHVlIj4KICAgIDxmb28+Rm9vPC9mb28+"
      "CiAgICA8YmF6PkJhejwvYmF6Pgo8L1htbEF0dHJpYnV0ZXNJbk1pZGRsZVBheWxvYWRSZXF1ZXN0Pgo=";
  expectedRq.uri = "/XmlAttributesInMiddle";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  ValidateRequestSent(expectedRq, ValidateXmlBody);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
