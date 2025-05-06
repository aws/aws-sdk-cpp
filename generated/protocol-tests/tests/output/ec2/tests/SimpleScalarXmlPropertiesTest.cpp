/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/ec2-protocol/EC2ProtocolClient.h>
#include <aws/ec2-protocol/model/SimpleScalarXmlPropertiesRequest.h>

using SimpleScalarXmlProperties = AWS_PROTOCOL_TEST_SUITE;
using EC2ProtocolClient = Aws::EC2Protocol::EC2ProtocolClient;
using namespace Aws::EC2Protocol::Model;

AWS_PROTOCOL_TEST(SimpleScalarXmlProperties, Ec2SimpleScalarProperties) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml;charset=UTF-8)"}};
  mockRs.body = "PFNpbXBsZVNjYWxhclhtbFByb3BlcnRpZXNSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogICAgPHN0cmluZ1ZhbHVlPnN0cmluZzwvc3RyaW5nVmFsdWU+CiAgICA8ZW1wdHlTdHJpbmdWYWx1ZS8+CiAgICA8dHJ1ZUJvb2xlYW5WYWx1ZT50cnVlPC90cnVlQm9vbGVhblZhbHVlPgogICAgPGZhbHNlQm9vbGVhblZhbHVlPmZhbHNlPC9mYWxzZUJvb2xlYW5WYWx1ZT4KICAgIDxieXRlVmFsdWU+MTwvYnl0ZVZhbHVlPgogICAgPHNob3J0VmFsdWU+Mjwvc2hvcnRWYWx1ZT4KICAgIDxpbnRlZ2VyVmFsdWU+MzwvaW50ZWdlclZhbHVlPgogICAgPGxvbmdWYWx1ZT40PC9sb25nVmFsdWU+CiAgICA8ZmxvYXRWYWx1ZT41LjU8L2Zsb2F0VmFsdWU+CiAgICA8RG91YmxlRHJpYmJsZT42LjU8L0RvdWJsZURyaWJibGU+CiAgICA8cmVxdWVzdElkPnJlcXVlc3RpZDwvcmVxdWVzdElkPgo8L1NpbXBsZVNjYWxhclhtbFByb3BlcnRpZXNSZXNwb25zZT4K";
  SetMockResponse(mockRs);

  SimpleScalarXmlPropertiesRequest request;

  auto outcome = client.SimpleScalarXmlProperties(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(SimpleScalarXmlProperties, Ec2QuerySupportsNaNFloatOutputs) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml;charset=UTF-8)"}};
  mockRs.body = "PFNpbXBsZVNjYWxhclhtbFByb3BlcnRpZXNSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogICAgPGZsb2F0VmFsdWU+TmFOPC9mbG9hdFZhbHVlPgogICAgPERvdWJsZURyaWJibGU+TmFOPC9Eb3VibGVEcmliYmxlPgo8L1NpbXBsZVNjYWxhclhtbFByb3BlcnRpZXNSZXNwb25zZT4K";
  SetMockResponse(mockRs);

  SimpleScalarXmlPropertiesRequest request;

  auto outcome = client.SimpleScalarXmlProperties(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(SimpleScalarXmlProperties, Ec2QuerySupportsInfinityFloatOutputs) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml;charset=UTF-8)"}};
  mockRs.body = "PFNpbXBsZVNjYWxhclhtbFByb3BlcnRpZXNSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogICAgPGZsb2F0VmFsdWU+SW5maW5pdHk8L2Zsb2F0VmFsdWU+CiAgICA8RG91YmxlRHJpYmJsZT5JbmZpbml0eTwvRG91YmxlRHJpYmJsZT4KPC9TaW1wbGVTY2FsYXJYbWxQcm9wZXJ0aWVzUmVzcG9uc2U+Cg==";
  SetMockResponse(mockRs);

  SimpleScalarXmlPropertiesRequest request;

  auto outcome = client.SimpleScalarXmlProperties(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(SimpleScalarXmlProperties, Ec2QuerySupportsNegativeInfinityFloatOutputs) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml;charset=UTF-8)"}};
  mockRs.body = "PFNpbXBsZVNjYWxhclhtbFByb3BlcnRpZXNSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogICAgPGZsb2F0VmFsdWU+LUluZmluaXR5PC9mbG9hdFZhbHVlPgogICAgPERvdWJsZURyaWJibGU+LUluZmluaXR5PC9Eb3VibGVEcmliYmxlPgo8L1NpbXBsZVNjYWxhclhtbFByb3BlcnRpZXNSZXNwb25zZT4K";
  SetMockResponse(mockRs);

  SimpleScalarXmlPropertiesRequest request;

  auto outcome = client.SimpleScalarXmlProperties(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
