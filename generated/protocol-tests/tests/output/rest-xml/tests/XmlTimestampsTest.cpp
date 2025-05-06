/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlTimestampsRequest.h>

using XmlTimestamps = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlTimestamps, XmlTimestamps) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PFhtbFRpbWVzdGFtcHNSZXNwb25zZT4KICAgIDxub3JtYWw+MjAxNC0wNC0yOVQxODozMDozOFo8L25vcm1hbD4KPC9YbWxUaW1lc3RhbXBzUmVzcG9uc2U+Cg==";
  SetMockResponse(mockRs);

  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(XmlTimestamps, XmlTimestampsWithDateTimeFormat) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PFhtbFRpbWVzdGFtcHNSZXNwb25zZT4KICAgIDxkYXRlVGltZT4yMDE0LTA0LTI5VDE4OjMwOjM4WjwvZGF0ZVRpbWU+CjwvWG1sVGltZXN0YW1wc1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(XmlTimestamps, XmlTimestampsWithDateTimeOnTargetFormat) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PFhtbFRpbWVzdGFtcHNSZXNwb25zZT4KICAgIDxkYXRlVGltZU9uVGFyZ2V0PjIwMTQtMDQtMjlUMTg6MzA6MzhaPC9kYXRlVGltZU9uVGFyZ2V0Pgo8L1htbFRpbWVzdGFtcHNSZXNwb25zZT4K";
  SetMockResponse(mockRs);

  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(XmlTimestamps, XmlTimestampsWithEpochSecondsFormat) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PFhtbFRpbWVzdGFtcHNSZXNwb25zZT4KICAgIDxlcG9jaFNlY29uZHM+MTM5ODc5NjIzODwvZXBvY2hTZWNvbmRzPgo8L1htbFRpbWVzdGFtcHNSZXNwb25zZT4K";
  SetMockResponse(mockRs);

  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(XmlTimestamps, XmlTimestampsWithEpochSecondsOnTargetFormat) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PFhtbFRpbWVzdGFtcHNSZXNwb25zZT4KICAgIDxlcG9jaFNlY29uZHNPblRhcmdldD4xMzk4Nzk2MjM4PC9lcG9jaFNlY29uZHNPblRhcmdldD4KPC9YbWxUaW1lc3RhbXBzUmVzcG9uc2U+Cg==";
  SetMockResponse(mockRs);

  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(XmlTimestamps, XmlTimestampsWithHttpDateFormat) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PFhtbFRpbWVzdGFtcHNSZXNwb25zZT4KICAgIDxodHRwRGF0ZT5UdWUsIDI5IEFwciAyMDE0IDE4OjMwOjM4IEdNVDwvaHR0cERhdGU+CjwvWG1sVGltZXN0YW1wc1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(XmlTimestamps, XmlTimestampsWithHttpDateOnTargetFormat) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PFhtbFRpbWVzdGFtcHNSZXNwb25zZT4KICAgIDxodHRwRGF0ZU9uVGFyZ2V0PlR1ZSwgMjkgQXByIDIwMTQgMTg6MzA6MzggR01UPC9odHRwRGF0ZU9uVGFyZ2V0Pgo8L1htbFRpbWVzdGFtcHNSZXNwb25zZT4K";
  SetMockResponse(mockRs);

  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
