/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/RecursiveShapesInputOutputNested2.h>
#include <aws/rest-json-protocol/model/RecursiveShapesRequest.h>

using RecursiveShapes = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(RecursiveShapes, RestJsonRecursiveShapes) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgIm5lc3RlZCI6IHsKICAgICAgICAiZm9vIjogIkZvbzEiLAogICAgICAgICJuZXN0ZWQiOiB7CiAgICAgICAgICAgICJiYXIiOiAiQmFyMSIsCiAgICAgICAgICAgICJyZWN1cnNpdmVNZW1iZXIiOiB7CiAgICAgICAgICAgICAgICAiZm9vIjogIkZvbzIiLAogICAgICAgICAgICAgICAgIm5lc3RlZCI6IHsKICAgICAgICAgICAgICAgICAgICAiYmFyIjogIkJhcjIiCiAgICAgICAgICAgICAgICB9CiAgICAgICAgICAgIH0KICAgICAgICB9CiAgICB9Cn0=";
  SetMockResponse(mockRs);

  RecursiveShapesRequest request;

  auto outcome = client.RecursiveShapes(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
