/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/json-rpc-10/JSONRPC10Client.h>
#include <aws/json-rpc-10/model/GreetingWithErrorsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using GreetingWithErrors0 = AWS_PROTOCOL_TEST_SUITE;
using JSONRPC10Client = Aws::JSONRPC10::JSONRPC10Client;
using namespace Aws::JSONRPC10::Model;

AWS_PROTOCOL_TEST(GreetingWithErrors0, AwsJson10FooErrorUsingXAmznErrorType) {
  JSONRPC10Client client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 500;
  mockRs.headers = {{"X-Amzn-Errortype", R"(FooError)"}};
  SetMockResponse(mockRs);

  GreetingWithErrorsRequest request;

  auto outcome = client.GreetingWithErrors(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors0, AwsJson10FooErrorUsingXAmznErrorTypeWithUri) {
  JSONRPC10Client client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 500;
  mockRs.headers = {{"X-Amzn-Errortype", R"(FooError:http://internal.amazon.com/coral/com.amazon.coral.validate/)"}};
  SetMockResponse(mockRs);

  GreetingWithErrorsRequest request;

  auto outcome = client.GreetingWithErrors(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors0, AwsJson10FooErrorUsingXAmznErrorTypeWithUriAndNamespace) {
  JSONRPC10Client client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 500;
  mockRs.headers = {
      {"X-Amzn-Errortype", R"(aws.protocoltests.json10#FooError:http://internal.amazon.com/coral/com.amazon.coral.validate/)"}};
  SetMockResponse(mockRs);

  GreetingWithErrorsRequest request;

  auto outcome = client.GreetingWithErrors(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors0, AwsJson10FooErrorUsingCode) {
  JSONRPC10Client client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 500;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.0)"}};
  mockRs.body = "ewogICAgImNvZGUiOiAiRm9vRXJyb3IiCn0=";
  SetMockResponse(mockRs);

  GreetingWithErrorsRequest request;

  auto outcome = client.GreetingWithErrors(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors0, AwsJson10FooErrorUsingCodeAndNamespace) {
  JSONRPC10Client client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 500;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.0)"}};
  mockRs.body = "ewogICAgImNvZGUiOiAiYXdzLnByb3RvY29sdGVzdHMuanNvbjEwI0Zvb0Vycm9yIgp9";
  SetMockResponse(mockRs);

  GreetingWithErrorsRequest request;

  auto outcome = client.GreetingWithErrors(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors0, AwsJson10FooErrorUsingCodeUriAndNamespace) {
  JSONRPC10Client client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 500;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.0)"}};
  mockRs.body =
      "ewogICAgImNvZGUiOiAiYXdzLnByb3RvY29sdGVzdHMuanNvbjEwI0Zvb0Vycm9yOmh0dHA6Ly9pbnRlcm5hbC5hbWF6b24uY29tL2NvcmFsL2NvbS5hbWF6b24uY29yYWwu"
      "dmFsaWRhdGUvIgp9";
  SetMockResponse(mockRs);

  GreetingWithErrorsRequest request;

  auto outcome = client.GreetingWithErrors(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors0, AwsJson10FooErrorWithDunderType) {
  JSONRPC10Client client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 500;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.0)"}};
  mockRs.body = "ewogICAgIl9fdHlwZSI6ICJGb29FcnJvciIKfQ==";
  SetMockResponse(mockRs);

  GreetingWithErrorsRequest request;

  auto outcome = client.GreetingWithErrors(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors0, AwsJson10FooErrorWithDunderTypeAndNamespace) {
  JSONRPC10Client client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 500;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.0)"}};
  mockRs.body = "ewogICAgIl9fdHlwZSI6ICJhd3MucHJvdG9jb2x0ZXN0cy5qc29uMTAjRm9vRXJyb3IiCn0=";
  SetMockResponse(mockRs);

  GreetingWithErrorsRequest request;

  auto outcome = client.GreetingWithErrors(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors0, AwsJson10FooErrorWithDunderTypeUriAndNamespace) {
  JSONRPC10Client client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 500;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.0)"}};
  mockRs.body =
      "ewogICAgIl9fdHlwZSI6ICJhd3MucHJvdG9jb2x0ZXN0cy5qc29uMTAjRm9vRXJyb3I6aHR0cDovL2ludGVybmFsLmFtYXpvbi5jb20vY29yYWwvY29tLmFtYXpvbi5jb3Jh"
      "bC52YWxpZGF0ZS8iCn0=";
  SetMockResponse(mockRs);

  GreetingWithErrorsRequest request;

  auto outcome = client.GreetingWithErrors(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
