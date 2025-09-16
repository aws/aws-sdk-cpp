/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/TestPostNoInputNoPayloadRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using TestPostNoInputNoPayload = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(TestPostNoInputNoPayload, RestJsonHttpPostWithNoInput) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  TestPostNoInputNoPayloadRequest request;

  auto outcome = client.TestPostNoInputNoPayload(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.uri = "/no_input_no_payload";
  expectedRq.forbidHeaders = {"Content-Type"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
