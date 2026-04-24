/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/XmlBlobsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlBlobs = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(XmlBlobs, QueryXmlBlobs) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body =
      "PFhtbEJsb2JzUmVzcG9uc2UgeG1sbnM9Imh0dHBzOi8vZXhhbXBsZS5jb20vIj4KICAgIDxYbWxCbG9ic1Jlc3VsdD4KICAgICAgICA8ZGF0YT5kbUZzZFdVPTwvZGF0YT4K"
      "ICAgIDwvWG1sQmxvYnNSZXN1bHQ+CjwvWG1sQmxvYnNSZXNwb25zZT4K";
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
