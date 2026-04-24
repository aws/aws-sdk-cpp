/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/ec2-protocol/EC2ProtocolClient.h>
#include <aws/ec2-protocol/model/IgnoresWrappingXmlNameRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using IgnoresWrappingXmlName = AWS_PROTOCOL_TEST_SUITE;
using EC2ProtocolClient = Aws::EC2Protocol::EC2ProtocolClient;
using namespace Aws::EC2Protocol::Model;

AWS_PROTOCOL_TEST(IgnoresWrappingXmlName, Ec2IgnoresWrappingXmlName) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml;charset=UTF-8)"}};
  mockRs.body =
      "PElnbm9yZXNXcmFwcGluZ1htbE5hbWVSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogICAgPGZvbz5iYXI8L2Zvbz4KICAgIDxyZXF1ZXN0SWQ+"
      "cmVxdWVzdGlkPC9yZXF1ZXN0SWQ+CjwvSWdub3Jlc1dyYXBwaW5nWG1sTmFtZVJlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  IgnoresWrappingXmlNameRequest request;

  auto outcome = client.IgnoresWrappingXmlName(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const IgnoresWrappingXmlNameResponse& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"foo":"bar"} )" */
    EXPECT_EQ(R"(bar)", result.GetFoo());
  });
}
