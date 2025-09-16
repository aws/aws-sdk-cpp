/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/json-protocol/JsonProtocolClient.h>
#include <aws/json-protocol/model/EndpointWithHostLabelOperationRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using EndpointWithHostLabelOperation = AWS_PROTOCOL_TEST_SUITE;
using JsonProtocolClient = Aws::JsonProtocol::JsonProtocolClient;
using namespace Aws::JsonProtocol::Model;

AWS_PROTOCOL_TEST(EndpointWithHostLabelOperation, AwsJson11EndpointTraitWithHostLabel) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  EndpointWithHostLabelOperationRequest request;
  request.SetLabel(R"(bar)");

  auto outcome = client.EndpointWithHostLabelOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "eyJsYWJlbCI6ICJiYXIifQ==";
  expectedRq.uri = "/";
  expectedRq.host = "foo.bar.example.com";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"},
                        {"X-Amz-Target", R"(JsonProtocol.EndpointWithHostLabelOperation)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
