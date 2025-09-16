/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/ec2-protocol/EC2ProtocolClient.h>
#include <aws/ec2-protocol/model/XmlTimestampsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlTimestamps = AWS_PROTOCOL_TEST_SUITE;
using EC2ProtocolClient = Aws::EC2Protocol::EC2ProtocolClient;
using namespace Aws::EC2Protocol::Model;

AWS_PROTOCOL_TEST(XmlTimestamps, Ec2XmlTimestamps) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml;charset=UTF-8)"}};
  mockRs.body =
      "PFhtbFRpbWVzdGFtcHNSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogICAgPG5vcm1hbD4yMDE0LTA0LTI5VDE4OjMwOjM4Wjwvbm9ybWFsPgogICAg"
      "PHJlcXVlc3RJZD5yZXF1ZXN0aWQ8L3JlcXVlc3RJZD4KPC9YbWxUaW1lc3RhbXBzUmVzcG9uc2U+Cg==";
  SetMockResponse(mockRs);

  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlTimestampsResponse& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"normal":1398796238} )" */
    EXPECT_EQ(Aws::Utils::DateTime(static_cast<int64_t>(1398796238)), result.GetNormal());
  });
}

AWS_PROTOCOL_TEST(XmlTimestamps, Ec2XmlTimestampsWithDateTimeFormat) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml;charset=UTF-8)"}};
  mockRs.body =
      "PFhtbFRpbWVzdGFtcHNSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogICAgPGRhdGVUaW1lPjIwMTQtMDQtMjlUMTg6MzA6MzhaPC9kYXRlVGltZT4K"
      "ICAgIDxyZXF1ZXN0SWQ+cmVxdWVzdGlkPC9yZXF1ZXN0SWQ+CjwvWG1sVGltZXN0YW1wc1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlTimestampsResponse& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"dateTime":1398796238} )" */
    EXPECT_EQ(Aws::Utils::DateTime(static_cast<int64_t>(1398796238)), result.GetDateTime());
  });
}

AWS_PROTOCOL_TEST(XmlTimestamps, Ec2XmlTimestampsWithDateTimeOnTargetFormat) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml;charset=UTF-8)"}};
  mockRs.body =
      "PFhtbFRpbWVzdGFtcHNSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogICAgPGRhdGVUaW1lT25UYXJnZXQ+"
      "MjAxNC0wNC0yOVQxODozMDozOFo8L2RhdGVUaW1lT25UYXJnZXQ+"
      "CiAgICA8cmVxdWVzdElkPnJlcXVlc3RpZDwvcmVxdWVzdElkPgo8L1htbFRpbWVzdGFtcHNSZXNwb25zZT4K";
  SetMockResponse(mockRs);

  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlTimestampsResponse& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"dateTimeOnTarget":1398796238} )" */
    EXPECT_EQ(Aws::Utils::DateTime(static_cast<int64_t>(1398796238)), result.GetDateTimeOnTarget());
  });
}

AWS_PROTOCOL_TEST(XmlTimestamps, Ec2XmlTimestampsWithEpochSecondsFormat) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml;charset=UTF-8)"}};
  mockRs.body =
      "PFhtbFRpbWVzdGFtcHNSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogICAgPGVwb2NoU2Vjb25kcz4xMzk4Nzk2MjM4PC9lcG9jaFNlY29uZHM+"
      "CiAgICA8cmVxdWVzdElkPnJlcXVlc3RpZDwvcmVxdWVzdElkPgo8L1htbFRpbWVzdGFtcHNSZXNwb25zZT4K";
  SetMockResponse(mockRs);

  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlTimestampsResponse& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"epochSeconds":1398796238} )" */
    EXPECT_EQ(Aws::Utils::DateTime(static_cast<int64_t>(1398796238)), result.GetEpochSeconds());
  });
}

AWS_PROTOCOL_TEST(XmlTimestamps, Ec2XmlTimestampsWithEpochSecondsOnTargetFormat) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml;charset=UTF-8)"}};
  mockRs.body =
      "PFhtbFRpbWVzdGFtcHNSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogICAgPGVwb2NoU2Vjb25kc09uVGFyZ2V0PjEzOTg3OTYyMzg8L2Vwb2NoU2Vj"
      "b25kc09uVGFyZ2V0PgogICAgPHJlcXVlc3RJZD5yZXF1ZXN0aWQ8L3JlcXVlc3RJZD4KPC9YbWxUaW1lc3RhbXBzUmVzcG9uc2U+Cg==";
  SetMockResponse(mockRs);

  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlTimestampsResponse& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"epochSecondsOnTarget":1398796238} )" */
    EXPECT_EQ(Aws::Utils::DateTime(static_cast<int64_t>(1398796238)), result.GetEpochSecondsOnTarget());
  });
}

AWS_PROTOCOL_TEST(XmlTimestamps, Ec2XmlTimestampsWithHttpDateFormat) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml;charset=UTF-8)"}};
  mockRs.body =
      "PFhtbFRpbWVzdGFtcHNSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogICAgPGh0dHBEYXRlPlR1ZSwgMjkgQXByIDIwMTQgMTg6MzA6MzggR01UPC9o"
      "dHRwRGF0ZT4KICAgIDxyZXF1ZXN0SWQ+cmVxdWVzdGlkPC9yZXF1ZXN0SWQ+CjwvWG1sVGltZXN0YW1wc1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlTimestampsResponse& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"httpDate":1398796238} )" */
    EXPECT_EQ(Aws::Utils::DateTime(static_cast<int64_t>(1398796238)), result.GetHttpDate());
  });
}

AWS_PROTOCOL_TEST(XmlTimestamps, Ec2XmlTimestampsWithHttpDateOnTargetFormat) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml;charset=UTF-8)"}};
  mockRs.body =
      "PFhtbFRpbWVzdGFtcHNSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogICAgPGh0dHBEYXRlT25UYXJnZXQ+"
      "VHVlLCAyOSBBcHIgMjAxNCAxODozMDozOCBHTVQ8L2h0dHBEYXRlT25UYXJnZXQ+"
      "CiAgICA8cmVxdWVzdElkPnJlcXVlc3RpZDwvcmVxdWVzdElkPgo8L1htbFRpbWVzdGFtcHNSZXNwb25zZT4K";
  SetMockResponse(mockRs);

  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlTimestampsResponse& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"httpDateOnTarget":1398796238} )" */
    EXPECT_EQ(Aws::Utils::DateTime(static_cast<int64_t>(1398796238)), result.GetHttpDateOnTarget());
  });
}
