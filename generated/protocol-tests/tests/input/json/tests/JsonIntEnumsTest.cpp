/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/json-protocol/JsonProtocolClient.h>
#include <aws/json-protocol/model/JsonIntEnumsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using JsonIntEnums = AWS_PROTOCOL_TEST_SUITE;
using JsonProtocolClient = Aws::JsonProtocol::JsonProtocolClient;
using namespace Aws::JsonProtocol::Model;

AWS_PROTOCOL_TEST(JsonIntEnums, AwsJson11IntEnums) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  JsonIntEnumsRequest request;
  request.SetIntEnum1(1);
  request.SetIntEnum2(2);
  request.SetIntEnum3(3);
  request.SetIntEnumList({1, 2});
  request.SetIntEnumSet({1, 2});
  request.SetIntEnumMap({{"a", 1}, {"b", 2}});

  auto outcome = client.JsonIntEnums(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "ewogICAgImludEVudW0xIjogMSwKICAgICJpbnRFbnVtMiI6IDIsCiAgICAiaW50RW51bTMiOiAzLAogICAgImludEVudW1MaXN0IjogWwogICAgICAgIDEsCiAgICAgICAg"
      "MgogICAgXSwKICAgICJpbnRFbnVtU2V0IjogWwogICAgICAgIDEsCiAgICAgICAgMgogICAgXSwKICAgICJpbnRFbnVtTWFwIjogewogICAgICAgICJhIjogMSwKICAgICAg"
      "ICAiYiI6IDIKICAgIH0KfQ==";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.JsonIntEnums)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
