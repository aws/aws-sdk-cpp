/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/JsonIntEnumsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using JsonIntEnums = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(JsonIntEnums, RestJsonJsonIntEnums) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  JsonIntEnumsRequest request;
  request.SetIntegerEnum1(1);
  request.SetIntegerEnum2(2);
  request.SetIntegerEnum3(3);
  request.SetIntegerEnumList({1, 2, 3});
  request.SetIntegerEnumSet({1, 2});
  request.SetIntegerEnumMap({{"abc", 1}, {"def", 2}});

  auto outcome = client.JsonIntEnums(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body =
      "ewogICAgImludGVnZXJFbnVtMSI6IDEsCiAgICAiaW50ZWdlckVudW0yIjogMiwKICAgICJpbnRlZ2VyRW51bTMiOiAzLAogICAgImludGVnZXJFbnVtTGlzdCI6IFsKICAg"
      "ICAgICAxLAogICAgICAgIDIsCiAgICAgICAgMwogICAgXSwKICAgICJpbnRlZ2VyRW51bVNldCI6IFsKICAgICAgICAxLAogICAgICAgIDIKICAgIF0sCiAgICAiaW50ZWdl"
      "ckVudW1NYXAiOiB7CiAgICAgICAgImFiYyI6IDEsCiAgICAgICAgImRlZiI6IDIKICAgIH0KfQ==";
  expectedRq.uri = "/JsonIntEnums";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
