/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/JsonEnumsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using JsonEnums = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(JsonEnums, RestJsonJsonEnums) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  JsonEnumsRequest request;
  request.SetFooEnum1(FooEnumMapper::GetFooEnumForName(R"e(Foo)e"));
  request.SetFooEnum2(FooEnumMapper::GetFooEnumForName(R"e(0)e"));
  request.SetFooEnum3(FooEnumMapper::GetFooEnumForName(R"e(1)e"));
  request.SetFooEnumList({FooEnumMapper::GetFooEnumForName(R"e(Foo)e"), FooEnumMapper::GetFooEnumForName(R"e(0)e")});
  request.SetFooEnumSet({FooEnumMapper::GetFooEnumForName(R"e(Foo)e"), FooEnumMapper::GetFooEnumForName(R"e(0)e")});
  request.SetFooEnumMap({{"hi", FooEnumMapper::GetFooEnumForName(R"e(Foo)e")}, {"zero", FooEnumMapper::GetFooEnumForName(R"e(0)e")}});

  auto outcome = client.JsonEnums(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body =
      "ewogICAgImZvb0VudW0xIjogIkZvbyIsCiAgICAiZm9vRW51bTIiOiAiMCIsCiAgICAiZm9vRW51bTMiOiAiMSIsCiAgICAiZm9vRW51bUxpc3QiOiBbCiAgICAgICAgIkZv"
      "byIsCiAgICAgICAgIjAiCiAgICBdLAogICAgImZvb0VudW1TZXQiOiBbCiAgICAgICAgIkZvbyIsCiAgICAgICAgIjAiCiAgICBdLAogICAgImZvb0VudW1NYXAiOiB7CiAg"
      "ICAgICAgImhpIjogIkZvbyIsCiAgICAgICAgInplcm8iOiAiMCIKICAgIH0KfQ==";
  expectedRq.uri = "/JsonEnums";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
