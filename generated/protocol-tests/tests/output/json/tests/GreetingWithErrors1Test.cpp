/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/json-protocol/JsonProtocolClient.h>
#include <aws/json-protocol/model/GreetingWithErrors1Request.h>

using GreetingWithErrors1 = AWS_PROTOCOL_TEST_SUITE;
using JsonProtocolClient = Aws::JsonProtocol::JsonProtocolClient;
using namespace Aws::JsonProtocol::Model;

AWS_PROTOCOL_TEST(GreetingWithErrors1, AwsJson11FooErrorUsingXAmznErrorType) {
  JsonProtocolClient client;
  GreetingWithErrors1Request request;

  auto outcome = client.GreetingWithErrors1(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors1, AwsJson11FooErrorUsingXAmznErrorTypeWithUri) {
  JsonProtocolClient client;
  GreetingWithErrors1Request request;

  auto outcome = client.GreetingWithErrors1(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors1, AwsJson11FooErrorUsingXAmznErrorTypeWithUriAndNamespace) {
  JsonProtocolClient client;
  GreetingWithErrors1Request request;

  auto outcome = client.GreetingWithErrors1(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors1, AwsJson11FooErrorUsingCode) {
  JsonProtocolClient client;
  GreetingWithErrors1Request request;

  auto outcome = client.GreetingWithErrors1(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors1, AwsJson11FooErrorUsingCodeAndNamespace) {
  JsonProtocolClient client;
  GreetingWithErrors1Request request;

  auto outcome = client.GreetingWithErrors1(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors1, AwsJson11FooErrorUsingCodeUriAndNamespace) {
  JsonProtocolClient client;
  GreetingWithErrors1Request request;

  auto outcome = client.GreetingWithErrors1(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors1, AwsJson11FooErrorWithDunderType) {
  JsonProtocolClient client;
  GreetingWithErrors1Request request;

  auto outcome = client.GreetingWithErrors1(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors1, AwsJson11FooErrorWithDunderTypeAndNamespace) {
  JsonProtocolClient client;
  GreetingWithErrors1Request request;

  auto outcome = client.GreetingWithErrors1(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors1, AwsJson11FooErrorWithDunderTypeUriAndNamespace) {
  JsonProtocolClient client;
  GreetingWithErrors1Request request;

  auto outcome = client.GreetingWithErrors1(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
