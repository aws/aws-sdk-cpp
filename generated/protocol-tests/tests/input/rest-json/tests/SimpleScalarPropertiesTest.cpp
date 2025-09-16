/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/SimpleScalarPropertiesRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using SimpleScalarProperties = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(SimpleScalarProperties, RestJsonSimpleScalarProperties) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

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
      "ewogICAgInN0cmluZ1ZhbHVlIjogInN0cmluZyIsCiAgICAidHJ1ZUJvb2xlYW5WYWx1ZSI6IHRydWUsCiAgICAiZmFsc2VCb29sZWFuVmFsdWUiOiBmYWxzZSwKICAgICJi"
      "eXRlVmFsdWUiOiAxLAogICAgInNob3J0VmFsdWUiOiAyLAogICAgImludGVnZXJWYWx1ZSI6IDMsCiAgICAibG9uZ1ZhbHVlIjogNCwKICAgICJmbG9hdFZhbHVlIjogNS41"
      "LAogICAgIkRvdWJsZURyaWJibGUiOiA2LjUKfQ==";
  expectedRq.uri = "/SimpleScalarProperties";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}, {"X-Foo", R"(Foo)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, RestJsonDoesntSerializeNullStructureValues) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body = "e30=";
  expectedRq.uri = "/SimpleScalarProperties";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, RestJsonSupportsNaNFloatInputs) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  SimpleScalarPropertiesRequest request;
  request.SetFloatValue(std::numeric_limits<double>::quiet_NaN());
  request.SetDoubleValue(std::numeric_limits<double>::quiet_NaN());

  auto outcome = client.SimpleScalarProperties(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body = "ewogICAgImZsb2F0VmFsdWUiOiAiTmFOIiwKICAgICJEb3VibGVEcmliYmxlIjogIk5hTiIKfQ==";
  expectedRq.uri = "/SimpleScalarProperties";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, RestJsonSupportsInfinityFloatInputs) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  SimpleScalarPropertiesRequest request;
  request.SetFloatValue(std::numeric_limits<double>::infinity());
  request.SetDoubleValue(std::numeric_limits<double>::infinity());

  auto outcome = client.SimpleScalarProperties(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body = "ewogICAgImZsb2F0VmFsdWUiOiAiSW5maW5pdHkiLAogICAgIkRvdWJsZURyaWJibGUiOiAiSW5maW5pdHkiCn0=";
  expectedRq.uri = "/SimpleScalarProperties";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, RestJsonSupportsNegativeInfinityFloatInputs) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  SimpleScalarPropertiesRequest request;
  request.SetFloatValue(-std::numeric_limits<double>::infinity());
  request.SetDoubleValue(-std::numeric_limits<double>::infinity());

  auto outcome = client.SimpleScalarProperties(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body = "ewogICAgImZsb2F0VmFsdWUiOiAiLUluZmluaXR5IiwKICAgICJEb3VibGVEcmliYmxlIjogIi1JbmZpbml0eSIKfQ==";
  expectedRq.uri = "/SimpleScalarProperties";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
