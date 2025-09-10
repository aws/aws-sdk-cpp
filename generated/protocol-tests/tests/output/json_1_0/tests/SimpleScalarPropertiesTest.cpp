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

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.0)"}};
  mockRs.body = "ewogICAgImZsb2F0VmFsdWUiOiAiTmFOIiwKICAgICJkb3VibGVWYWx1ZSI6ICJOYU4iCn0=";
  SetMockResponse(mockRs);

  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SimpleScalarPropertiesResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"floatValue":"NaN","doubleValue":"NaN"} )" */
    EXPECT_TRUE(std::isnan(result.GetFloatValue()));
    EXPECT_TRUE(std::isnan(result.GetDoubleValue()));
  });
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, AwsJson10SupportsInfinityFloatInputs) {
  JSONRPC10Client client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.0)"}};
  mockRs.body = "ewogICAgImZsb2F0VmFsdWUiOiAiSW5maW5pdHkiLAogICAgImRvdWJsZVZhbHVlIjogIkluZmluaXR5Igp9";
  SetMockResponse(mockRs);

  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SimpleScalarPropertiesResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"floatValue":"Infinity","doubleValue":"Infinity"} )" */
    EXPECT_EQ(std::numeric_limits<double>::infinity(), result.GetFloatValue());
    EXPECT_EQ(std::numeric_limits<double>::infinity(), result.GetDoubleValue());
  });
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, AwsJson10SupportsNegativeInfinityFloatInputs) {
  JSONRPC10Client client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.0)"}};
  mockRs.body = "ewogICAgImZsb2F0VmFsdWUiOiAiLUluZmluaXR5IiwKICAgICJkb3VibGVWYWx1ZSI6ICItSW5maW5pdHkiCn0=";
  SetMockResponse(mockRs);

  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SimpleScalarPropertiesResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"floatValue":"-Infinity","doubleValue":"-Infinity"} )" */
    EXPECT_EQ(-std::numeric_limits<double>::infinity(), result.GetFloatValue());
    EXPECT_EQ(-std::numeric_limits<double>::infinity(), result.GetDoubleValue());
  });
}
