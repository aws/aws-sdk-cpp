/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/SimpleScalarXmlPropertiesRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using SimpleScalarXmlProperties = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(SimpleScalarXmlProperties, QuerySimpleScalarProperties) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body =
      "PFNpbXBsZVNjYWxhclhtbFByb3BlcnRpZXNSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogICAgPFNpbXBsZVNjYWxhclhtbFByb3BlcnRpZXNSZXN1"
      "bHQ+CiAgICAgICAgPHN0cmluZ1ZhbHVlPnN0cmluZzwvc3RyaW5nVmFsdWU+"
      "CiAgICAgICAgPGVtcHR5U3RyaW5nVmFsdWUvPgogICAgICAgIDx0cnVlQm9vbGVhblZhbHVlPnRydWU8L3RydWVCb29sZWFuVmFsdWU+"
      "CiAgICAgICAgPGZhbHNlQm9vbGVhblZhbHVlPmZhbHNlPC9mYWxzZUJvb2xlYW5WYWx1ZT4KICAgICAgICA8Ynl0ZVZhbHVlPjE8L2J5dGVWYWx1ZT4KICAgICAgICA8c2hv"
      "cnRWYWx1ZT4yPC9zaG9ydFZhbHVlPgogICAgICAgIDxpbnRlZ2VyVmFsdWU+MzwvaW50ZWdlclZhbHVlPgogICAgICAgIDxsb25nVmFsdWU+"
      "NDwvbG9uZ1ZhbHVlPgogICAgICAgIDxmbG9hdFZhbHVlPjUuNTwvZmxvYXRWYWx1ZT4KICAgICAgICA8RG91YmxlRHJpYmJsZT42LjU8L0RvdWJsZURyaWJibGU+"
      "CiAgICA8L1NpbXBsZVNjYWxhclhtbFByb3BlcnRpZXNSZXN1bHQ+CjwvU2ltcGxlU2NhbGFyWG1sUHJvcGVydGllc1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  SimpleScalarXmlPropertiesRequest request;

  auto outcome = client.SimpleScalarXmlProperties(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SimpleScalarXmlPropertiesResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"(
     * {"stringValue":"string","emptyStringValue":"","trueBooleanValue":true,"falseBooleanValue":false,"byteValue":1,"shortValue":2,"integerValue":3,"longValue":4,"floatValue":5.5,"doubleValue":6.5}
     * )" */
    EXPECT_EQ(R"(string)", result.GetStringValue());
    EXPECT_EQ(R"()", result.GetEmptyStringValue());
    EXPECT_EQ(true, result.GetTrueBooleanValue());
    EXPECT_EQ(false, result.GetFalseBooleanValue());
    EXPECT_EQ(1, result.GetByteValue());
    EXPECT_EQ(2, result.GetShortValue());
    EXPECT_EQ(3, result.GetIntegerValue());
    EXPECT_EQ(4, result.GetLongValue());
    EXPECT_EQ(5.5, result.GetFloatValue());
    EXPECT_EQ(6.5, result.GetDoubleValue());
  });
}

AWS_PROTOCOL_TEST(SimpleScalarXmlProperties, AwsQuerySupportsNaNFloatOutputs) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body =
      "PFNpbXBsZVNjYWxhclhtbFByb3BlcnRpZXNSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogICAgPFNpbXBsZVNjYWxhclhtbFByb3BlcnRpZXNSZXN1"
      "bHQ+CiAgICAgICAgPGZsb2F0VmFsdWU+"
      "TmFOPC9mbG9hdFZhbHVlPgogICAgICAgIDxEb3VibGVEcmliYmxlPk5hTjwvRG91YmxlRHJpYmJsZT4KICAgIDwvU2ltcGxlU2NhbGFyWG1sUHJvcGVydGllc1Jlc3VsdD4K"
      "PC9TaW1wbGVTY2FsYXJYbWxQcm9wZXJ0aWVzUmVzcG9uc2U+Cg==";
  SetMockResponse(mockRs);

  SimpleScalarXmlPropertiesRequest request;

  auto outcome = client.SimpleScalarXmlProperties(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SimpleScalarXmlPropertiesResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"floatValue":"NaN","doubleValue":"NaN"} )" */
    EXPECT_TRUE(std::isnan(result.GetFloatValue()));
    EXPECT_TRUE(std::isnan(result.GetDoubleValue()));
  });
}

AWS_PROTOCOL_TEST(SimpleScalarXmlProperties, AwsQuerySupportsInfinityFloatOutputs) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body =
      "PFNpbXBsZVNjYWxhclhtbFByb3BlcnRpZXNSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogICAgPFNpbXBsZVNjYWxhclhtbFByb3BlcnRpZXNSZXN1"
      "bHQ+CiAgICAgICAgPGZsb2F0VmFsdWU+SW5maW5pdHk8L2Zsb2F0VmFsdWU+CiAgICAgICAgPERvdWJsZURyaWJibGU+SW5maW5pdHk8L0RvdWJsZURyaWJibGU+"
      "CiAgICA8L1NpbXBsZVNjYWxhclhtbFByb3BlcnRpZXNSZXN1bHQ+CjwvU2ltcGxlU2NhbGFyWG1sUHJvcGVydGllc1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  SimpleScalarXmlPropertiesRequest request;

  auto outcome = client.SimpleScalarXmlProperties(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SimpleScalarXmlPropertiesResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"floatValue":"Infinity","doubleValue":"Infinity"} )" */
    EXPECT_EQ(std::numeric_limits<double>::infinity(), result.GetFloatValue());
    EXPECT_EQ(std::numeric_limits<double>::infinity(), result.GetDoubleValue());
  });
}

AWS_PROTOCOL_TEST(SimpleScalarXmlProperties, AwsQuerySupportsNegativeInfinityFloatOutputs) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body =
      "PFNpbXBsZVNjYWxhclhtbFByb3BlcnRpZXNSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogICAgPFNpbXBsZVNjYWxhclhtbFByb3BlcnRpZXNSZXN1"
      "bHQ+CiAgICAgICAgPGZsb2F0VmFsdWU+"
      "LUluZmluaXR5PC9mbG9hdFZhbHVlPgogICAgICAgIDxEb3VibGVEcmliYmxlPi1JbmZpbml0eTwvRG91YmxlRHJpYmJsZT4KICAgIDwvU2ltcGxlU2NhbGFyWG1sUHJvcGVy"
      "dGllc1Jlc3VsdD4KPC9TaW1wbGVTY2FsYXJYbWxQcm9wZXJ0aWVzUmVzcG9uc2U+Cg==";
  SetMockResponse(mockRs);

  SimpleScalarXmlPropertiesRequest request;

  auto outcome = client.SimpleScalarXmlProperties(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SimpleScalarXmlPropertiesResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"floatValue":"-Infinity","doubleValue":"-Infinity"} )" */
    EXPECT_EQ(-std::numeric_limits<double>::infinity(), result.GetFloatValue());
    EXPECT_EQ(-std::numeric_limits<double>::infinity(), result.GetDoubleValue());
  });
}
