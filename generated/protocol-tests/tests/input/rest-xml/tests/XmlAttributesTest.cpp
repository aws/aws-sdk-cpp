/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlAttributesRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlAttributes = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlAttributes, XmlAttributes) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  XmlAttributesRequest request;
  request.SetFoo(R"(hi)");
  request.SetAttr(R"(test)");

  auto outcome = client.XmlAttributes(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body = "PFhtbEF0dHJpYnV0ZXNSZXF1ZXN0IHRlc3Q9InRlc3QiPgogICAgPGZvbz5oaTwvZm9vPgo8L1htbEF0dHJpYnV0ZXNSZXF1ZXN0Pgo=";
  expectedRq.uri = "/XmlAttributes";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(XmlAttributes, XmlAttributesWithEscaping) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  XmlAttributesRequest request;
  request.SetFoo(R"(hi)");
  request.SetAttr(R"(<test&mock>)");

  auto outcome = client.XmlAttributes(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body =
      "PFhtbEF0dHJpYnV0ZXNSZXF1ZXN0IHRlc3Q9IiZsdDt0ZXN0JmFtcDttb2NrJmd0OyI+CiAgICA8Zm9vPmhpPC9mb28+CjwvWG1sQXR0cmlidXRlc1JlcXVlc3Q+Cg==";
  expectedRq.uri = "/XmlAttributes";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
