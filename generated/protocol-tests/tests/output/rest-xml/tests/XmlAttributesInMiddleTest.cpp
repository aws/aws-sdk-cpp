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

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body =
      "PFhtbEF0dHJpYnV0ZXNJbk1pZGRsZVBheWxvYWRSZXNwb25zZSB0ZXN0PSJhdHRyaWJ1dGVWYWx1ZSI+"
      "CiAgICA8Zm9vPkZvbzwvZm9vPgogICAgPGJhej5CYXo8L2Jhej4KPC9YbWxBdHRyaWJ1dGVzSW5NaWRkbGVQYXlsb2FkUmVzcG9uc2U+Cg==";
  SetMockResponse(mockRs);

  XmlAttributesInMiddleRequest request;

  auto outcome = client.XmlAttributesInMiddle(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlAttributesInMiddleResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"payload":{"foo":"Foo","attr":"attributeValue","baz":"Baz"}} )" */
    {
      const XmlAttributesInMiddlePayloadResponse& resultPayload = result.GetPayload();
      EXPECT_EQ(R"(Foo)", resultPayload.GetFoo());
      EXPECT_EQ(R"(attributeValue)", resultPayload.GetAttr());
      EXPECT_EQ(R"(Baz)", resultPayload.GetBaz());
    }
  });
}
