/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/json-rpc-10/JSONRPC10Client.h>
#include <aws/json-rpc-10/model/SimpleScalarPropertiesRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using SimpleScalarProperties = AWS_PROTOCOL_TEST_SUITE;
using JSONRPC10Client = Aws::JSONRPC10::JSONRPC10Client;
using namespace Aws::JSONRPC10::Model;

AWS_PROTOCOL_TEST(SimpleScalarProperties, AwsJson10SupportsNaNFloatInputs) {
  JSONRPC10Client client(mockCredentials, mockConfig);

  SetMockResponse();

  SimpleScalarPropertiesRequest request;
  request.SetFloatValue(std::numeric_limits<double>::quiet_NaN());
  request.SetDoubleValue(std::numeric_limits<double>::quiet_NaN());

  auto outcome = client.SimpleScalarProperties(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "ewogICAgImZsb2F0VmFsdWUiOiAiTmFOIiwKICAgICJkb3VibGVWYWx1ZSI6ICJOYU4iCn0=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.0)"}, {"X-Amz-Target", R"(JsonRpc10.SimpleScalarProperties)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, AwsJson10SupportsInfinityFloatInputs) {
  JSONRPC10Client client(mockCredentials, mockConfig);

  SetMockResponse();

  SimpleScalarPropertiesRequest request;
  request.SetFloatValue(std::numeric_limits<double>::infinity());
  request.SetDoubleValue(std::numeric_limits<double>::infinity());

  auto outcome = client.SimpleScalarProperties(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "ewogICAgImZsb2F0VmFsdWUiOiAiSW5maW5pdHkiLAogICAgImRvdWJsZVZhbHVlIjogIkluZmluaXR5Igp9";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.0)"}, {"X-Amz-Target", R"(JsonRpc10.SimpleScalarProperties)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, AwsJson10SupportsNegativeInfinityFloatInputs) {
  JSONRPC10Client client(mockCredentials, mockConfig);

  SetMockResponse();

  SimpleScalarPropertiesRequest request;
  request.SetFloatValue(-std::numeric_limits<double>::infinity());
  request.SetDoubleValue(-std::numeric_limits<double>::infinity());

  auto outcome = client.SimpleScalarProperties(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "ewogICAgImZsb2F0VmFsdWUiOiAiLUluZmluaXR5IiwKICAgICJkb3VibGVWYWx1ZSI6ICItSW5maW5pdHkiCn0=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.0)"}, {"X-Amz-Target", R"(JsonRpc10.SimpleScalarProperties)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
