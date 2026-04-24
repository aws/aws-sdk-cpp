/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/ec2-protocol/EC2ProtocolClient.h>
#include <aws/ec2-protocol/model/DatetimeOffsetsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using DatetimeOffsets = AWS_PROTOCOL_TEST_SUITE;
using EC2ProtocolClient = Aws::EC2Protocol::EC2ProtocolClient;
using namespace Aws::EC2Protocol::Model;

AWS_PROTOCOL_TEST(DatetimeOffsets, Ec2QueryDateTimeWithNegativeOffset) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml;charset=UTF-8)"}};
  mockRs.body =
      "PERhdGV0aW1lT2Zmc2V0c1Jlc3BvbnNlIHhtbG5zPSJodHRwczovL2V4YW1wbGUuY29tLyI+CiAgICA8ZGF0ZXRpbWU+"
      "MjAxOS0xMi0xNlQyMjo0ODoxOC0wMTowMDwvZGF0ZXRpbWU+"
      "CiAgICA8cmVxdWVzdElkPnJlcXVlc3RpZDwvcmVxdWVzdElkPgo8L0RhdGV0aW1lT2Zmc2V0c1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  DatetimeOffsetsRequest request;

  auto outcome = client.DatetimeOffsets(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const DatetimeOffsetsResponse& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"datetime":1576540098} )" */
    EXPECT_EQ(Aws::Utils::DateTime(static_cast<int64_t>(1576540098)), result.GetDatetime());
  });
}

AWS_PROTOCOL_TEST(DatetimeOffsets, Ec2QueryDateTimeWithPositiveOffset) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml;charset=UTF-8)"}};
  mockRs.body =
      "PERhdGV0aW1lT2Zmc2V0c1Jlc3BvbnNlIHhtbG5zPSJodHRwczovL2V4YW1wbGUuY29tLyI+CiAgICA8ZGF0ZXRpbWU+"
      "MjAxOS0xMi0xN1QwMDo0ODoxOCswMTowMDwvZGF0ZXRpbWU+"
      "CiAgICA8cmVxdWVzdElkPnJlcXVlc3RpZDwvcmVxdWVzdElkPgo8L0RhdGV0aW1lT2Zmc2V0c1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  DatetimeOffsetsRequest request;

  auto outcome = client.DatetimeOffsets(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const DatetimeOffsetsResponse& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"datetime":1576540098} )" */
    EXPECT_EQ(Aws::Utils::DateTime(static_cast<int64_t>(1576540098)), result.GetDatetime());
  });
}
