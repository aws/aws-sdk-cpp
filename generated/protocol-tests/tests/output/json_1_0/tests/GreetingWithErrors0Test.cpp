/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/json-rpc-10/JSONRPC10Client.h>
#include <aws/json-rpc-10/model/GreetingWithErrors0Request.h>

using GreetingWithErrors0 = AWS_PROTOCOL_TEST_SUITE;
using JSONRPC10Client = Aws::JSONRPC10::JSONRPC10Client;
using namespace Aws::JSONRPC10::Model;

AWS_PROTOCOL_TEST(GreetingWithErrors0, AwsJson10FooErrorUsingXAmznErrorType) {
  JSONRPC10Client client;
  GreetingWithErrors0Request request;

  auto outcome = client.GreetingWithErrors0(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors0, AwsJson10FooErrorUsingXAmznErrorTypeWithUri) {
  JSONRPC10Client client;
  GreetingWithErrors0Request request;

  auto outcome = client.GreetingWithErrors0(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors0, AwsJson10FooErrorUsingXAmznErrorTypeWithUriAndNamespace) {
  JSONRPC10Client client;
  GreetingWithErrors0Request request;

  auto outcome = client.GreetingWithErrors0(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors0, AwsJson10FooErrorUsingCode) {
  JSONRPC10Client client;
  GreetingWithErrors0Request request;

  auto outcome = client.GreetingWithErrors0(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors0, AwsJson10FooErrorUsingCodeAndNamespace) {
  JSONRPC10Client client;
  GreetingWithErrors0Request request;

  auto outcome = client.GreetingWithErrors0(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors0, AwsJson10FooErrorUsingCodeUriAndNamespace) {
  JSONRPC10Client client;
  GreetingWithErrors0Request request;

  auto outcome = client.GreetingWithErrors0(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors0, AwsJson10FooErrorWithDunderType) {
  JSONRPC10Client client;
  GreetingWithErrors0Request request;

  auto outcome = client.GreetingWithErrors0(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors0, AwsJson10FooErrorWithDunderTypeAndNamespace) {
  JSONRPC10Client client;
  GreetingWithErrors0Request request;

  auto outcome = client.GreetingWithErrors0(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors0, AwsJson10FooErrorWithDunderTypeUriAndNamespace) {
  JSONRPC10Client client;
  GreetingWithErrors0Request request;

  auto outcome = client.GreetingWithErrors0(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
