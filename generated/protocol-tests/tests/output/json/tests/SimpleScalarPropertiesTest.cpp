/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/json-protocol/JsonProtocolClient.h>
#include <aws/json-protocol/model/SimpleScalarPropertiesRequest.h>

using SimpleScalarProperties = AWS_PROTOCOL_TEST_SUITE;
using JsonProtocolClient = Aws::JsonProtocol::JsonProtocolClient;
using namespace Aws::JsonProtocol::Model;

AWS_PROTOCOL_TEST(SimpleScalarProperties, AwsJson11SupportsNaNFloatInputs) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "ewogICAgImZsb2F0VmFsdWUiOiAiTmFOIiwKICAgICJkb3VibGVWYWx1ZSI6ICJOYU4iCn0=";
  SetMockResponse(mockRs);

  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  ValidateRequestSent();
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SimpleScalarPropertiesResult& result = outcome.GetResult();
  /* expectedResult = R"( {"floatValue":"NaN","doubleValue":"NaN"} )" */
  EXPECT_EQ(std::numeric_limits<double>::quiet_NaN(), result.GetFloatValue());
  EXPECT_EQ(std::numeric_limits<double>::quiet_NaN(), result.GetDoubleValue());
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, AwsJson11SupportsInfinityFloatInputs) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "ewogICAgImZsb2F0VmFsdWUiOiAiSW5maW5pdHkiLAogICAgImRvdWJsZVZhbHVlIjogIkluZmluaXR5Igp9";
  SetMockResponse(mockRs);

  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  ValidateRequestSent();
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SimpleScalarPropertiesResult& result = outcome.GetResult();
  /* expectedResult = R"( {"floatValue":"Infinity","doubleValue":"Infinity"} )" */
  EXPECT_EQ(std::numeric_limits<double>::infinity(), result.GetFloatValue());
  EXPECT_EQ(std::numeric_limits<double>::infinity(), result.GetDoubleValue());
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, AwsJson11SupportsNegativeInfinityFloatInputs) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "ewogICAgImZsb2F0VmFsdWUiOiAiLUluZmluaXR5IiwKICAgICJkb3VibGVWYWx1ZSI6ICItSW5maW5pdHkiCn0=";
  SetMockResponse(mockRs);

  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  ValidateRequestSent();
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SimpleScalarPropertiesResult& result = outcome.GetResult();
  /* expectedResult = R"( {"floatValue":"-Infinity","doubleValue":"-Infinity"} )" */
  EXPECT_EQ(-std::numeric_limits<double>::infinity(), result.GetFloatValue());
  EXPECT_EQ(-std::numeric_limits<double>::infinity(), result.GetDoubleValue());
}
