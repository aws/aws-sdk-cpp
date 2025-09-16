/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/UnitInputAndOutputRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using UnitInputAndOutput = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(UnitInputAndOutput, RestJsonUnitInputAndOutput) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  UnitInputAndOutputRequest request;

  auto outcome = client.UnitInputAndOutput(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.uri = "/UnitInputAndOutput";
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
