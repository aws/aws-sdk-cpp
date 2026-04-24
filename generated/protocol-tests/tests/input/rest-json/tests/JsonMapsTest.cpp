/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/JsonMapsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using JsonMaps = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(JsonMaps, RestJsonJsonMaps) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

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
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "ewogICAgImRlbnNlU3RydWN0TWFwIjogewogICAgICAgICJmb28iOiB7CiAgICAgICAgICAgICJoaSI6ICJ0aGVyZSIKICAgICAgICB9LAogICAgICAgICJiYXoiOiB7CiAg"
      "ICAgICAgICAgICJoaSI6ICJieWUiCiAgICAgICAgfQogICAgfQp9";
  expectedRq.uri = "/JsonMaps";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(JsonMaps, RestJsonSerializesZeroValuesInMaps) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  JsonMapsRequest request;
  request.SetDenseNumberMap({{"x", 0}});
  request.SetDenseBooleanMap({{"x", false}});

  auto outcome = client.JsonMaps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "ewogICAgImRlbnNlTnVtYmVyTWFwIjogewogICAgICAgICJ4IjogMAogICAgfSwKICAgICJkZW5zZUJvb2xlYW5NYXAiOiB7CiAgICAgICAgIngiOiBmYWxzZQogICAgfQp"
      "9";
  expectedRq.uri = "/JsonMaps";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(JsonMaps, RestJsonSerializesDenseSetMap) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  JsonMapsRequest request;
  request.SetDenseSetMap({{"x", {}}, {"y", {R"(a)", R"(b)"}}});

  auto outcome = client.JsonMaps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "ewogICAgImRlbnNlU2V0TWFwIjogewogICAgICAgICJ4IjogW10sCiAgICAgICAgInkiOiBbImEiLCAiYiJdCiAgICB9Cn0=";
  expectedRq.uri = "/JsonMaps";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
