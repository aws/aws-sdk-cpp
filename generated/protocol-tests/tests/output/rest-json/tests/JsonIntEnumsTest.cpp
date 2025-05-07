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
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgImludGVnZXJFbnVtMSI6IDEsCiAgICAiaW50ZWdlckVudW0yIjogMiwKICAgICJpbnRlZ2VyRW51bTMiOiAzLAogICAgImludGVnZXJFbnVtTGlzdCI6IFsKICAgICAgICAxLAogICAgICAgIDIsCiAgICAgICAgMwogICAgXSwKICAgICJpbnRlZ2VyRW51bVNldCI6IFsKICAgICAgICAxLAogICAgICAgIDIKICAgIF0sCiAgICAiaW50ZWdlckVudW1NYXAiOiB7CiAgICAgICAgImFiYyI6IDEsCiAgICAgICAgImRlZiI6IDIKICAgIH0KfQ==";
  SetMockResponse(mockRs);

  JsonIntEnumsRequest request;

  auto outcome = client.JsonIntEnums(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
