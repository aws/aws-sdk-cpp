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

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PFhtbEF0dHJpYnV0ZXNSZXNwb25zZSB0ZXN0PSJ0ZXN0Ij4KICAgIDxmb28+aGk8L2Zvbz4KPC9YbWxBdHRyaWJ1dGVzUmVzcG9uc2U+Cg==";
  SetMockResponse(mockRs);

  XmlAttributesRequest request;

  auto outcome = client.XmlAttributes(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlAttributesResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"foo":"hi","attr":"test"} )" */
    EXPECT_EQ(R"(hi)", result.GetFoo());
    EXPECT_EQ(R"(test)", result.GetAttr());
  });
}
