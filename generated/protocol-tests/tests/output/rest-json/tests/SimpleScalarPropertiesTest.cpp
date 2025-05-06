/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/SimpleScalarPropertiesRequest.h>

using SimpleScalarProperties = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(SimpleScalarProperties, RestJsonSimpleScalarProperties) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}, {"X-Foo", R"(Foo)"}};
  mockRs.body = "ewogICAgInN0cmluZ1ZhbHVlIjogInN0cmluZyIsCiAgICAidHJ1ZUJvb2xlYW5WYWx1ZSI6IHRydWUsCiAgICAiZmFsc2VCb29sZWFuVmFsdWUiOiBmYWxzZSwKICAgICJieXRlVmFsdWUiOiAxLAogICAgInNob3J0VmFsdWUiOiAyLAogICAgImludGVnZXJWYWx1ZSI6IDMsCiAgICAibG9uZ1ZhbHVlIjogNCwKICAgICJmbG9hdFZhbHVlIjogNS41LAogICAgIkRvdWJsZURyaWJibGUiOiA2LjUKfQ==";
  SetMockResponse(mockRs);

  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, RestJsonDoesntDeserializeNullStructureValues) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgInN0cmluZ1ZhbHVlIjogbnVsbAp9";
  SetMockResponse(mockRs);

  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, RestJsonSupportsNaNFloatInputs) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgImZsb2F0VmFsdWUiOiAiTmFOIiwKICAgICJEb3VibGVEcmliYmxlIjogIk5hTiIKfQ==";
  SetMockResponse(mockRs);

  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, RestJsonSupportsInfinityFloatInputs) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgImZsb2F0VmFsdWUiOiAiSW5maW5pdHkiLAogICAgIkRvdWJsZURyaWJibGUiOiAiSW5maW5pdHkiCn0=";
  SetMockResponse(mockRs);

  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, RestJsonSupportsNegativeInfinityFloatInputs) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgImZsb2F0VmFsdWUiOiAiLUluZmluaXR5IiwKICAgICJEb3VibGVEcmliYmxlIjogIi1JbmZpbml0eSIKfQ==";
  SetMockResponse(mockRs);

  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
