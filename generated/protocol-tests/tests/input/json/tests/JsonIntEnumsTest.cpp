/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/json-protocol/JsonProtocolClient.h>
#include <aws/json-protocol/model/JsonIntEnumsRequest.h>

using JsonIntEnums = AWS_PROTOCOL_TEST_SUITE;
using JsonProtocolClient = Aws::JsonProtocol::JsonProtocolClient;
using namespace Aws::JsonProtocol::Model;

AWS_PROTOCOL_TEST(JsonIntEnums, AwsJson11IntEnums) {
  JsonProtocolClient client;
  JsonIntEnumsRequest request;
  request.SetIntEnum1(1);
  request.SetIntEnum2(2);
  request.SetIntEnum3(3);
  request.SetIntEnumList({1, 2});
  request.SetIntEnumSet({1, 2});
  request.SetIntEnumMap({{"a",  1}, {"b",  2}});

  auto outcome = client.JsonIntEnums(request);
  AWS_ASSERT_SUCCESS(outcome);
}
