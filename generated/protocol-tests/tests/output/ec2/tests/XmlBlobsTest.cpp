/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/ec2-protocol/EC2ProtocolClient.h>
#include <aws/ec2-protocol/model/XmlBlobsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlBlobs = AWS_PROTOCOL_TEST_SUITE;
using EC2ProtocolClient = Aws::EC2Protocol::EC2ProtocolClient;
using namespace Aws::EC2Protocol::Model;

AWS_PROTOCOL_TEST(XmlBlobs, Ec2XmlBlobs) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml;charset=UTF-8)"}};
  mockRs.body =
      "PFhtbEJsb2JzUmVzcG9uc2UgeG1sbnM9Imh0dHBzOi8vZXhhbXBsZS5jb20vIj4KICAgIDxkYXRhPmRtRnNkV1U9PC9kYXRhPgogICAgPHJlcXVlc3RJZD5yZXF1ZXN0aWQ8"
      "L3JlcXVlc3RJZD4KPC9YbWxCbG9ic1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  XmlBlobsRequest request;

  auto outcome = client.XmlBlobs(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlBlobsResponse& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"data":"value"} )" */
    EXPECT_EQ(Aws::Utils::ByteBuffer(R"(value)"), result.GetData());
  });
}
