/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/JsonIntEnumsRequest.h>

using JsonIntEnums = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(JsonIntEnums, RestJsonJsonIntEnums) {
  RestJsonProtocolClient client;
  JsonIntEnumsRequest request;
  request.SetIntegerEnum1(1);
  request.SetIntegerEnum2(2);
  request.SetIntegerEnum3(3);
  request.SetIntegerEnumList({1, 2, 3});
  request.SetIntegerEnumSet({1, 2});
  request.SetIntegerEnumMap({{"abc",  1}, {"def",  2}});

  auto outcome = client.JsonIntEnums(request);
  AWS_ASSERT_SUCCESS(outcome);
}
