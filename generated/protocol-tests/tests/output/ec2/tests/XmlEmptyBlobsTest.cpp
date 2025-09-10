/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/ec2-protocol/EC2ProtocolClient.h>
#include <aws/ec2-protocol/model/XmlEmptyBlobsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlEmptyBlobs = AWS_PROTOCOL_TEST_SUITE;
using EC2ProtocolClient = Aws::EC2Protocol::EC2ProtocolClient;
using namespace Aws::EC2Protocol::Model;

AWS_PROTOCOL_TEST(XmlEmptyBlobs, Ec2XmlEmptyBlobs) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml;charset=UTF-8)"}};
  mockRs.body =
      "PFhtbEVtcHR5QmxvYnNSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogICAgPGRhdGE+"
      "PC9kYXRhPgogICAgPHJlcXVlc3RJZD5yZXF1ZXN0aWQ8L3JlcXVlc3RJZD4KPC9YbWxFbXB0eUJsb2JzUmVzcG9uc2U+Cg==";
  SetMockResponse(mockRs);

  XmlEmptyBlobsRequest request;

  auto outcome = client.XmlEmptyBlobs(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlEmptyBlobsResponse& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"data":""} )" */
    EXPECT_EQ(Aws::Utils::ByteBuffer(R"()"), result.GetData());
  });
}

AWS_PROTOCOL_TEST(XmlEmptyBlobs, Ec2XmlEmptySelfClosedBlobs) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml;charset=UTF-8)"}};
  mockRs.body =
      "PFhtbEVtcHR5QmxvYnNSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogICAgPGRhdGEvPgogICAgPHJlcXVlc3RJZD5yZXF1ZXN0aWQ8L3JlcXVlc3RJ"
      "ZD4KPC9YbWxFbXB0eUJsb2JzUmVzcG9uc2U+Cg==";
  SetMockResponse(mockRs);

  XmlEmptyBlobsRequest request;

  auto outcome = client.XmlEmptyBlobs(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlEmptyBlobsResponse& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"data":""} )" */
    EXPECT_EQ(Aws::Utils::ByteBuffer(R"()"), result.GetData());
  });
}
