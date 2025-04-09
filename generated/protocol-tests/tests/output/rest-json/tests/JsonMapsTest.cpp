/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/JsonMapsRequest.h>

using JsonMaps = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(JsonMaps, RestJsonJsonMaps) {
  RestJsonProtocolClient client;
  JsonMapsRequest request;

  auto outcome = client.JsonMaps(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonMaps, RestJsonDeserializesZeroValuesInMaps) {
  RestJsonProtocolClient client;
  JsonMapsRequest request;

  auto outcome = client.JsonMaps(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonMaps, RestJsonDeserializesDenseSetMap) {
  RestJsonProtocolClient client;
  JsonMapsRequest request;

  auto outcome = client.JsonMaps(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(JsonMaps, RestJsonDeserializesDenseSetMapAndSkipsNull) {
  RestJsonProtocolClient client;
  JsonMapsRequest request;

  auto outcome = client.JsonMaps(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
