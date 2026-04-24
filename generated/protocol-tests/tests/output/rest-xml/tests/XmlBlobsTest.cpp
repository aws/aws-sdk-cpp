/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlBlobsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlBlobs = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlBlobs, XmlBlobs) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PFhtbEJsb2JzUmVzcG9uc2U+CiAgICA8ZGF0YT5kbUZzZFdVPTwvZGF0YT4KPC9YbWxCbG9ic1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  XmlBlobsRequest request;

  auto outcome = client.XmlBlobs(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlBlobsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"data":"value"} )" */
    EXPECT_EQ(Aws::Utils::ByteBuffer(R"(value)"), result.GetData());
  });
}
