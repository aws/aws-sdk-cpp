﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/UnitInputAndOutputRequest.h>

using UnitInputAndOutput = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(UnitInputAndOutput, RestJsonUnitInputAndOutputNoOutput) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  SetMockResponse(mockRs);

  UnitInputAndOutputRequest request;

  auto outcome = client.UnitInputAndOutput(request);
  ValidateRequestSent();
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  /* expectedResult = R"( {} )" */
}
