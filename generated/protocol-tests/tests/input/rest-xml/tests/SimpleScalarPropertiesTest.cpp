/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/SimpleScalarPropertiesRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using SimpleScalarProperties = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(SimpleScalarProperties, SimpleScalarProperties) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  SimpleScalarPropertiesRequest request;
  request.SetFoo(R"(Foo)");
  request.SetStringValue(R"(string)");
  request.SetTrueBooleanValue(true);
  request.SetFalseBooleanValue(false);
  request.SetByteValue(1);
  request.SetShortValue(2);
  request.SetIntegerValue(3);
  request.SetLongValue(4);
  request.SetFloatValue(5.5);
  request.SetDoubleValue(6.5);

  auto outcome = client.SimpleScalarProperties(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body =
      "PFNpbXBsZVNjYWxhclByb3BlcnRpZXNSZXF1ZXN0PgogICAgPHN0cmluZ1ZhbHVlPnN0cmluZzwvc3RyaW5nVmFsdWU+"
      "CiAgICA8dHJ1ZUJvb2xlYW5WYWx1ZT50cnVlPC90cnVlQm9vbGVhblZhbHVlPgogICAgPGZhbHNlQm9vbGVhblZhbHVlPmZhbHNlPC9mYWxzZUJvb2xlYW5WYWx1ZT4KICAg"
      "IDxieXRlVmFsdWU+MTwvYnl0ZVZhbHVlPgogICAgPHNob3J0VmFsdWU+Mjwvc2hvcnRWYWx1ZT4KICAgIDxpbnRlZ2VyVmFsdWU+"
      "MzwvaW50ZWdlclZhbHVlPgogICAgPGxvbmdWYWx1ZT40PC9sb25nVmFsdWU+CiAgICA8ZmxvYXRWYWx1ZT41LjU8L2Zsb2F0VmFsdWU+"
      "CiAgICA8RG91YmxlRHJpYmJsZT42LjU8L0RvdWJsZURyaWJibGU+CjwvU2ltcGxlU2NhbGFyUHJvcGVydGllc1JlcXVlc3Q+Cg==";
  expectedRq.uri = "/SimpleScalarProperties";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}, {"X-Foo", R"(Foo)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, SimpleScalarPropertiesWithEscapedCharacter) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  SimpleScalarPropertiesRequest request;
  request.SetFoo(R"(Foo)");
  request.SetStringValue(R"(<string>)");

  auto outcome = client.SimpleScalarProperties(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body =
      "PFNpbXBsZVNjYWxhclByb3BlcnRpZXNSZXF1ZXN0PgogICAgPHN0cmluZ1ZhbHVlPiZsdDtzdHJpbmcmZ3Q7PC9zdHJpbmdWYWx1ZT4KPC9TaW1wbGVTY2FsYXJQcm9wZXJ0"
      "aWVzUmVxdWVzdD4K";
  expectedRq.uri = "/SimpleScalarProperties";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}, {"X-Foo", R"(Foo)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, SimpleScalarPropertiesWithWhiteSpace) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  SimpleScalarPropertiesRequest request;
  request.SetFoo(R"(Foo)");
  request.SetStringValue(R"(  string with white    space  )");

  auto outcome = client.SimpleScalarProperties(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body =
      "PFNpbXBsZVNjYWxhclByb3BlcnRpZXNSZXF1ZXN0PgogICAgPHN0cmluZ1ZhbHVlPiAgc3RyaW5nIHdpdGggd2hpdGUgICAgc3BhY2UgIDwvc3RyaW5nVmFsdWU+"
      "CjwvU2ltcGxlU2NhbGFyUHJvcGVydGllc1JlcXVlc3Q+Cg==";
  expectedRq.uri = "/SimpleScalarProperties";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}, {"X-Foo", R"(Foo)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, SimpleScalarPropertiesPureWhiteSpace) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  SimpleScalarPropertiesRequest request;
  request.SetFoo(R"(Foo)");
  request.SetStringValue(R"(   )");

  auto outcome = client.SimpleScalarProperties(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body =
      "PFNpbXBsZVNjYWxhclByb3BlcnRpZXNSZXF1ZXN0PgogICAgPHN0cmluZ1ZhbHVlPiAgIDwvc3RyaW5nVmFsdWU+CjwvU2ltcGxlU2NhbGFyUHJvcGVydGllc1JlcXVlc3Q+"
      "Cg==";
  expectedRq.uri = "/SimpleScalarProperties";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}, {"X-Foo", R"(Foo)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, RestXmlSupportsNaNFloatInputs) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  SimpleScalarPropertiesRequest request;
  request.SetFloatValue(std::numeric_limits<double>::quiet_NaN());
  request.SetDoubleValue(std::numeric_limits<double>::quiet_NaN());

  auto outcome = client.SimpleScalarProperties(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body =
      "PFNpbXBsZVNjYWxhclByb3BlcnRpZXNSZXF1ZXN0PgogICAgPGZsb2F0VmFsdWU+TmFOPC9mbG9hdFZhbHVlPgogICAgPERvdWJsZURyaWJibGU+"
      "TmFOPC9Eb3VibGVEcmliYmxlPgo8L1NpbXBsZVNjYWxhclByb3BlcnRpZXNSZXF1ZXN0Pgo=";
  expectedRq.uri = "/SimpleScalarProperties";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, RestXmlSupportsInfinityFloatInputs) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  SimpleScalarPropertiesRequest request;
  request.SetFloatValue(std::numeric_limits<double>::infinity());
  request.SetDoubleValue(std::numeric_limits<double>::infinity());

  auto outcome = client.SimpleScalarProperties(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body =
      "PFNpbXBsZVNjYWxhclByb3BlcnRpZXNSZXF1ZXN0PgogICAgPGZsb2F0VmFsdWU+SW5maW5pdHk8L2Zsb2F0VmFsdWU+"
      "CiAgICA8RG91YmxlRHJpYmJsZT5JbmZpbml0eTwvRG91YmxlRHJpYmJsZT4KPC9TaW1wbGVTY2FsYXJQcm9wZXJ0aWVzUmVxdWVzdD4K";
  expectedRq.uri = "/SimpleScalarProperties";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, RestXmlSupportsNegativeInfinityFloatInputs) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  SimpleScalarPropertiesRequest request;
  request.SetFloatValue(-std::numeric_limits<double>::infinity());
  request.SetDoubleValue(-std::numeric_limits<double>::infinity());

  auto outcome = client.SimpleScalarProperties(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body =
      "PFNpbXBsZVNjYWxhclByb3BlcnRpZXNSZXF1ZXN0PgogICAgPGZsb2F0VmFsdWU+LUluZmluaXR5PC9mbG9hdFZhbHVlPgogICAgPERvdWJsZURyaWJibGU+"
      "LUluZmluaXR5PC9Eb3VibGVEcmliYmxlPgo8L1NpbXBsZVNjYWxhclByb3BlcnRpZXNSZXF1ZXN0Pgo=";
  expectedRq.uri = "/SimpleScalarProperties";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
