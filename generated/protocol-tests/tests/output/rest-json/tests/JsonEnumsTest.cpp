/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/JsonEnumsRequest.h>

using JsonEnums = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(JsonEnums, RestJsonJsonEnums) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgImZvb0VudW0xIjogIkZvbyIsCiAgICAiZm9vRW51bTIiOiAiMCIsCiAgICAiZm9vRW51bTMiOiAiMSIsCiAgICAiZm9vRW51bUxpc3QiOiBbCiAgICAgICAgIkZvbyIsCiAgICAgICAgIjAiCiAgICBdLAogICAgImZvb0VudW1TZXQiOiBbCiAgICAgICAgIkZvbyIsCiAgICAgICAgIjAiCiAgICBdLAogICAgImZvb0VudW1NYXAiOiB7CiAgICAgICAgImhpIjogIkZvbyIsCiAgICAgICAgInplcm8iOiAiMCIKICAgIH0KfQ==";
  SetMockResponse(mockRs);

  JsonEnumsRequest request;

  auto outcome = client.JsonEnums(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
