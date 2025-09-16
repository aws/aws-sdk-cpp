/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/NoInputAndNoOutputRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using NoInputAndNoOutput = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(NoInputAndNoOutput, RestJsonNoInputAndNoOutput) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  NoInputAndNoOutputRequest request;

  auto outcome = client.NoInputAndNoOutput(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.uri = "/NoInputAndNoOutput";
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
