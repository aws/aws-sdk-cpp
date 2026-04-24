/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/TestGetNoInputNoPayloadRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using TestGetNoInputNoPayload = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(TestGetNoInputNoPayload, RestJsonHttpGetWithNoInput) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  TestGetNoInputNoPayloadRequest request;

  auto outcome = client.TestGetNoInputNoPayload(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "GET";
  expectedRq.uri = "/no_input_no_payload";
  expectedRq.forbidHeaders = {"Content-Type", "Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
