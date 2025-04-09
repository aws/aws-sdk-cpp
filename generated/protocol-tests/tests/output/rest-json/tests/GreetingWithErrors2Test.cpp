/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/GreetingWithErrors2Request.h>

using GreetingWithErrors2 = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(GreetingWithErrors2, RestJsonInvalidGreetingError) {
  RestJsonProtocolClient client;
  GreetingWithErrors2Request request;

  auto outcome = client.GreetingWithErrors2(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
