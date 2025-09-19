/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/json-protocol/JsonProtocolClient.h>
#include <aws/json-protocol/model/EndpointOperationRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using EndpointOperation = AWS_PROTOCOL_TEST_SUITE;
using JsonProtocolClient = Aws::JsonProtocol::JsonProtocolClient;
using namespace Aws::JsonProtocol::Model;

AWS_PROTOCOL_TEST(EndpointOperation, AwsJson11EndpointTrait) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  EndpointOperationRequest request;

  auto outcome = client.EndpointOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "e30=";
  expectedRq.uri = "/";
  expectedRq.host = "foo.example.com";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.EndpointOperation)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
