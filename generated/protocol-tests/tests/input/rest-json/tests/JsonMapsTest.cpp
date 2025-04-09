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
  {
    GreetingStruct requestDenseStructMapItem;
    requestDenseStructMapItem.SetHi(R"(there)");
    request.AddDenseStructMap("foo", requestDenseStructMapItem);
  }
  {
    GreetingStruct requestDenseStructMapItem;
    requestDenseStructMapItem.SetHi(R"(bye)");
    request.AddDenseStructMap("baz", requestDenseStructMapItem);
  }

  auto outcome = client.JsonMaps(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(JsonMaps, RestJsonSerializesZeroValuesInMaps) {
  RestJsonProtocolClient client;
  JsonMapsRequest request;
  request.SetDenseNumberMap({{"x",  0}});
  request.SetDenseBooleanMap({{"x",  false}});

  auto outcome = client.JsonMaps(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(JsonMaps, RestJsonSerializesDenseSetMap) {
  RestJsonProtocolClient client;
  JsonMapsRequest request;
  request.SetDenseSetMap({{"x",  {}}, {"y",  {R"(a)", R"(b)"}}});

  auto outcome = client.JsonMaps(request);
  AWS_ASSERT_SUCCESS(outcome);
}
