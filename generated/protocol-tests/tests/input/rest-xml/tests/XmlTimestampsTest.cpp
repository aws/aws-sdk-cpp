/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlTimestampsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlTimestamps = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlTimestamps, XmlTimestamps) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  XmlTimestampsRequest request;
  request.SetNormal(Aws::Utils::DateTime(static_cast<int64_t>(1398796238)));

  auto outcome = client.XmlTimestamps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "PFhtbFRpbWVzdGFtcHNSZXF1ZXN0PgogICAgPG5vcm1hbD4yMDE0LTA0LTI5VDE4OjMwOjM4Wjwvbm9ybWFsPgo8L1htbFRpbWVzdGFtcHNSZXF1ZXN0Pgo=";
  expectedRq.uri = "/XmlTimestamps";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(XmlTimestamps, XmlTimestampsWithDateTimeFormat) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  XmlTimestampsRequest request;
  request.SetDateTime(Aws::Utils::DateTime(static_cast<int64_t>(1398796238)));

  auto outcome = client.XmlTimestamps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "PFhtbFRpbWVzdGFtcHNSZXF1ZXN0PgogICAgPGRhdGVUaW1lPjIwMTQtMDQtMjlUMTg6MzA6MzhaPC9kYXRlVGltZT4KPC9YbWxUaW1lc3RhbXBzUmVxdWVzdD4K";
  expectedRq.uri = "/XmlTimestamps";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(XmlTimestamps, XmlTimestampsWithDateTimeOnTargetFormat) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  XmlTimestampsRequest request;
  request.SetDateTimeOnTarget(Aws::Utils::DateTime(static_cast<int64_t>(1398796238)));

  auto outcome = client.XmlTimestamps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "PFhtbFRpbWVzdGFtcHNSZXF1ZXN0PgogICAgPGRhdGVUaW1lT25UYXJnZXQ+MjAxNC0wNC0yOVQxODozMDozOFo8L2RhdGVUaW1lT25UYXJnZXQ+"
      "CjwvWG1sVGltZXN0YW1wc1JlcXVlc3Q+Cg==";
  expectedRq.uri = "/XmlTimestamps";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(XmlTimestamps, XmlTimestampsWithEpochSecondsFormat) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  XmlTimestampsRequest request;
  request.SetEpochSeconds(Aws::Utils::DateTime(static_cast<int64_t>(1398796238)));

  auto outcome = client.XmlTimestamps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "PFhtbFRpbWVzdGFtcHNSZXF1ZXN0PgogICAgPGVwb2NoU2Vjb25kcz4xMzk4Nzk2MjM4PC9lcG9jaFNlY29uZHM+CjwvWG1sVGltZXN0YW1wc1JlcXVlc3Q+Cg==";
  expectedRq.uri = "/XmlTimestamps";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(XmlTimestamps, XmlTimestampsWithEpochSecondsOnTargetFormat) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  XmlTimestampsRequest request;
  request.SetEpochSecondsOnTarget(Aws::Utils::DateTime(static_cast<int64_t>(1398796238)));

  auto outcome = client.XmlTimestamps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "PFhtbFRpbWVzdGFtcHNSZXF1ZXN0PgogICAgPGVwb2NoU2Vjb25kc09uVGFyZ2V0PjEzOTg3OTYyMzg8L2Vwb2NoU2Vjb25kc09uVGFyZ2V0Pgo8L1htbFRpbWVzdGFtcHNS"
      "ZXF1ZXN0Pgo=";
  expectedRq.uri = "/XmlTimestamps";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(XmlTimestamps, XmlTimestampsWithHttpDateFormat) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  XmlTimestampsRequest request;
  request.SetHttpDate(Aws::Utils::DateTime(static_cast<int64_t>(1398796238)));

  auto outcome = client.XmlTimestamps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "PFhtbFRpbWVzdGFtcHNSZXF1ZXN0PgogICAgPGh0dHBEYXRlPlR1ZSwgMjkgQXByIDIwMTQgMTg6MzA6MzggR01UPC9odHRwRGF0ZT4KPC9YbWxUaW1lc3RhbXBzUmVxdWVz"
      "dD4K";
  expectedRq.uri = "/XmlTimestamps";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(XmlTimestamps, XmlTimestampsWithHttpDateOnTargetFormat) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  XmlTimestampsRequest request;
  request.SetHttpDateOnTarget(Aws::Utils::DateTime(static_cast<int64_t>(1398796238)));

  auto outcome = client.XmlTimestamps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "PFhtbFRpbWVzdGFtcHNSZXF1ZXN0PgogICAgPGh0dHBEYXRlT25UYXJnZXQ+VHVlLCAyOSBBcHIgMjAxNCAxODozMDozOCBHTVQ8L2h0dHBEYXRlT25UYXJnZXQ+"
      "CjwvWG1sVGltZXN0YW1wc1JlcXVlc3Q+Cg==";
  expectedRq.uri = "/XmlTimestamps";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
