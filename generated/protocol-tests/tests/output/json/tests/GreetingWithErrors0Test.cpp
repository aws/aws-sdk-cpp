/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/json-protocol/JsonProtocolClient.h>
#include <aws/json-protocol/model/GreetingWithErrors0Request.h>

using GreetingWithErrors0 = AWS_PROTOCOL_TEST_SUITE;
using JsonProtocolClient = Aws::JsonProtocol::JsonProtocolClient;
using namespace Aws::JsonProtocol::Model;

AWS_PROTOCOL_TEST(GreetingWithErrors0, AwsJson11ComplexError) {
  JsonProtocolClient client;
  GreetingWithErrors0Request request;

  auto outcome = client.GreetingWithErrors0(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors0, AwsJson11EmptyComplexError) {
  JsonProtocolClient client;
  GreetingWithErrors0Request request;

  auto outcome = client.GreetingWithErrors0(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
