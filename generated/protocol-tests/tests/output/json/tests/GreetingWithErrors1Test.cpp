/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/json-protocol/JsonProtocolClient.h>
#include <aws/json-protocol/model/GreetingWithErrorsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using GreetingWithErrors1 = AWS_PROTOCOL_TEST_SUITE;
using JsonProtocolClient = Aws::JsonProtocol::JsonProtocolClient;
using namespace Aws::JsonProtocol::Model;

AWS_PROTOCOL_TEST(GreetingWithErrors1, AwsJson11FooErrorUsingXAmznErrorType) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 500;
  mockRs.headers = {{"X-Amzn-Errortype", R"(FooError)"}};
  SetMockResponse(mockRs);

  GreetingWithErrorsRequest request;

  auto outcome = client.GreetingWithErrors(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors1, AwsJson11FooErrorUsingXAmznErrorTypeWithUri) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 500;
  mockRs.headers = {{"X-Amzn-Errortype", R"(FooError:http://internal.amazon.com/coral/com.amazon.coral.validate/)"}};
  SetMockResponse(mockRs);

  GreetingWithErrorsRequest request;

  auto outcome = client.GreetingWithErrors(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors1, AwsJson11FooErrorUsingXAmznErrorTypeWithUriAndNamespace) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 500;
  mockRs.headers = {
      {"X-Amzn-Errortype", R"(aws.protocoltests.restjson#FooError:http://internal.amazon.com/coral/com.amazon.coral.validate/)"}};
  SetMockResponse(mockRs);

  GreetingWithErrorsRequest request;

  auto outcome = client.GreetingWithErrors(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors1, AwsJson11FooErrorUsingCode) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 500;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "ewogICAgImNvZGUiOiAiRm9vRXJyb3IiCn0=";
  SetMockResponse(mockRs);

  GreetingWithErrorsRequest request;

  auto outcome = client.GreetingWithErrors(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors1, AwsJson11FooErrorUsingCodeAndNamespace) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 500;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "ewogICAgImNvZGUiOiAiYXdzLnByb3RvY29sdGVzdHMucmVzdGpzb24jRm9vRXJyb3IiCn0=";
  SetMockResponse(mockRs);

  GreetingWithErrorsRequest request;

  auto outcome = client.GreetingWithErrors(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors1, AwsJson11FooErrorUsingCodeUriAndNamespace) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 500;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body =
      "ewogICAgImNvZGUiOiAiYXdzLnByb3RvY29sdGVzdHMucmVzdGpzb24jRm9vRXJyb3I6aHR0cDovL2ludGVybmFsLmFtYXpvbi5jb20vY29yYWwvY29tLmFtYXpvbi5jb3Jh"
      "bC52YWxpZGF0ZS8iCn0=";
  SetMockResponse(mockRs);

  GreetingWithErrorsRequest request;

  auto outcome = client.GreetingWithErrors(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors1, AwsJson11FooErrorWithDunderType) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 500;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "ewogICAgIl9fdHlwZSI6ICJGb29FcnJvciIKfQ==";
  SetMockResponse(mockRs);

  GreetingWithErrorsRequest request;

  auto outcome = client.GreetingWithErrors(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors1, AwsJson11FooErrorWithDunderTypeAndNamespace) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 500;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "ewogICAgIl9fdHlwZSI6ICJhd3MucHJvdG9jb2x0ZXN0cy5yZXN0anNvbiNGb29FcnJvciIKfQ==";
  SetMockResponse(mockRs);

  GreetingWithErrorsRequest request;

  auto outcome = client.GreetingWithErrors(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors1, AwsJson11FooErrorWithDunderTypeUriAndNamespace) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 500;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body =
      "ewogICAgIl9fdHlwZSI6ICJhd3MucHJvdG9jb2x0ZXN0cy5yZXN0anNvbiNGb29FcnJvcjpodHRwOi8vaW50ZXJuYWwuYW1hem9uLmNvbS9jb3JhbC9jb20uYW1hem9uLmNv"
      "cmFsLnZhbGlkYXRlLyIKfQ==";
  SetMockResponse(mockRs);

  GreetingWithErrorsRequest request;

  auto outcome = client.GreetingWithErrors(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
