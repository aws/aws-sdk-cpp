/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/GreetingWithErrors0Request.h>

using GreetingWithErrors0 = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(GreetingWithErrors0, RestJsonFooErrorUsingXAmznErrorType) {
  RestJsonProtocolClient client;
  GreetingWithErrors0Request request;

  auto outcome = client.GreetingWithErrors0(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors0, RestJsonFooErrorUsingXAmznErrorTypeWithUri) {
  RestJsonProtocolClient client;
  GreetingWithErrors0Request request;

  auto outcome = client.GreetingWithErrors0(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors0, RestJsonFooErrorUsingXAmznErrorTypeWithUriAndNamespace) {
  RestJsonProtocolClient client;
  GreetingWithErrors0Request request;

  auto outcome = client.GreetingWithErrors0(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors0, RestJsonFooErrorUsingCode) {
  RestJsonProtocolClient client;
  GreetingWithErrors0Request request;

  auto outcome = client.GreetingWithErrors0(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors0, RestJsonFooErrorUsingCodeAndNamespace) {
  RestJsonProtocolClient client;
  GreetingWithErrors0Request request;

  auto outcome = client.GreetingWithErrors0(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors0, RestJsonFooErrorUsingCodeUriAndNamespace) {
  RestJsonProtocolClient client;
  GreetingWithErrors0Request request;

  auto outcome = client.GreetingWithErrors0(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors0, RestJsonFooErrorWithDunderType) {
  RestJsonProtocolClient client;
  GreetingWithErrors0Request request;

  auto outcome = client.GreetingWithErrors0(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors0, RestJsonFooErrorWithDunderTypeAndNamespace) {
  RestJsonProtocolClient client;
  GreetingWithErrors0Request request;

  auto outcome = client.GreetingWithErrors0(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors0, RestJsonFooErrorWithDunderTypeUriAndNamespace) {
  RestJsonProtocolClient client;
  GreetingWithErrors0Request request;

  auto outcome = client.GreetingWithErrors0(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
