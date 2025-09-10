/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlAttributesOnPayloadRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlAttributesOnPayload = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlAttributesOnPayload, XmlAttributesOnPayload) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  XmlAttributesOnPayloadRequest request;
  {
    XmlAttributesPayloadRequest requestPayload;
    requestPayload.SetFoo(R"(hi)");
    requestPayload.SetAttr(R"(test)");
    request.SetPayload(requestPayload);
  }

  auto outcome = client.XmlAttributesOnPayload(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body =
      "PFhtbEF0dHJpYnV0ZXNQYXlsb2FkUmVxdWVzdCB0ZXN0PSJ0ZXN0Ij4KICAgIDxmb28+aGk8L2Zvbz4KPC9YbWxBdHRyaWJ1dGVzUGF5bG9hZFJlcXVlc3Q+Cg==";
  expectedRq.uri = "/XmlAttributesOnPayload";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
