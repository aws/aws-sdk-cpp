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
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.JsonIntEnums)"}};
  mockRs.body = "ewogICAgImludEVudW0xIjogMSwKICAgICJpbnRFbnVtMiI6IDIsCiAgICAiaW50RW51bTMiOiAzLAogICAgImludEVudW1MaXN0IjogWwogICAgICAgIDEsCiAgICAgICAgMgogICAgXSwKICAgICJpbnRFbnVtU2V0IjogWwogICAgICAgIDEsCiAgICAgICAgMgogICAgXSwKICAgICJpbnRFbnVtTWFwIjogewogICAgICAgICJhIjogMSwKICAgICAgICAiYiI6IDIKICAgIH0KfQ==";
  SetMockResponse(mockRs);

  JsonIntEnumsRequest request;

  auto outcome = client.JsonIntEnums(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
