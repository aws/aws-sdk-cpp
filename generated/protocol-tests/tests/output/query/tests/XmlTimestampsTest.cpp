/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/XmlTimestampsRequest.h>

using XmlTimestamps = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(XmlTimestamps, QueryXmlTimestamps) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body = "PFhtbFRpbWVzdGFtcHNSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogICAgPFhtbFRpbWVzdGFtcHNSZXN1bHQ+CiAgICAgICAgPG5vcm1hbD4yMDE0LTA0LTI5VDE4OjMwOjM4Wjwvbm9ybWFsPgogICAgPC9YbWxUaW1lc3RhbXBzUmVzdWx0Pgo8L1htbFRpbWVzdGFtcHNSZXNwb25zZT4K";
  SetMockResponse(mockRs);

  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(XmlTimestamps, QueryXmlTimestampsWithDateTimeFormat) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body = "PFhtbFRpbWVzdGFtcHNSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogICAgPFhtbFRpbWVzdGFtcHNSZXN1bHQ+CiAgICAgICAgPGRhdGVUaW1lPjIwMTQtMDQtMjlUMTg6MzA6MzhaPC9kYXRlVGltZT4KICAgIDwvWG1sVGltZXN0YW1wc1Jlc3VsdD4KPC9YbWxUaW1lc3RhbXBzUmVzcG9uc2U+Cg==";
  SetMockResponse(mockRs);

  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(XmlTimestamps, QueryXmlTimestampsWithDateTimeOnTargetFormat) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body = "PFhtbFRpbWVzdGFtcHNSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogICAgPFhtbFRpbWVzdGFtcHNSZXN1bHQ+CiAgICAgICAgPGRhdGVUaW1lT25UYXJnZXQ+MjAxNC0wNC0yOVQxODozMDozOFo8L2RhdGVUaW1lT25UYXJnZXQ+CiAgICA8L1htbFRpbWVzdGFtcHNSZXN1bHQ+CjwvWG1sVGltZXN0YW1wc1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(XmlTimestamps, QueryXmlTimestampsWithEpochSecondsFormat) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body = "PFhtbFRpbWVzdGFtcHNSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogICAgPFhtbFRpbWVzdGFtcHNSZXN1bHQ+CiAgICAgICAgPGVwb2NoU2Vjb25kcz4xMzk4Nzk2MjM4PC9lcG9jaFNlY29uZHM+CiAgICA8L1htbFRpbWVzdGFtcHNSZXN1bHQ+CjwvWG1sVGltZXN0YW1wc1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(XmlTimestamps, QueryXmlTimestampsWithEpochSecondsOnTargetFormat) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body = "PFhtbFRpbWVzdGFtcHNSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogICAgPFhtbFRpbWVzdGFtcHNSZXN1bHQ+CiAgICAgICAgPGVwb2NoU2Vjb25kc09uVGFyZ2V0PjEzOTg3OTYyMzg8L2Vwb2NoU2Vjb25kc09uVGFyZ2V0PgogICAgPC9YbWxUaW1lc3RhbXBzUmVzdWx0Pgo8L1htbFRpbWVzdGFtcHNSZXNwb25zZT4K";
  SetMockResponse(mockRs);

  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(XmlTimestamps, QueryXmlTimestampsWithHttpDateFormat) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body = "PFhtbFRpbWVzdGFtcHNSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogICAgPFhtbFRpbWVzdGFtcHNSZXN1bHQ+CiAgICAgICAgPGh0dHBEYXRlPlR1ZSwgMjkgQXByIDIwMTQgMTg6MzA6MzggR01UPC9odHRwRGF0ZT4KICAgIDwvWG1sVGltZXN0YW1wc1Jlc3VsdD4KPC9YbWxUaW1lc3RhbXBzUmVzcG9uc2U+Cg==";
  SetMockResponse(mockRs);

  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(XmlTimestamps, QueryXmlTimestampsWithHttpDateOnTargetFormat) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body = "PFhtbFRpbWVzdGFtcHNSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogICAgPFhtbFRpbWVzdGFtcHNSZXN1bHQ+CiAgICAgICAgPGh0dHBEYXRlT25UYXJnZXQ+VHVlLCAyOSBBcHIgMjAxNCAxODozMDozOCBHTVQ8L2h0dHBEYXRlT25UYXJnZXQ+CiAgICA8L1htbFRpbWVzdGFtcHNSZXN1bHQ+CjwvWG1sVGltZXN0YW1wc1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
