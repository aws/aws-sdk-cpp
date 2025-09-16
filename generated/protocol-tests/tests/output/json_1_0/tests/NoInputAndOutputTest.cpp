/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/json-rpc-10/JSONRPC10Client.h>
#include <aws/json-rpc-10/model/NoInputAndOutputRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using NoInputAndOutput = AWS_PROTOCOL_TEST_SUITE;
using JSONRPC10Client = Aws::JSONRPC10::JSONRPC10Client;
using namespace Aws::JSONRPC10::Model;

AWS_PROTOCOL_TEST(NoInputAndOutput, AwsJson10NoInputAndOutput) {
  JSONRPC10Client client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.0)"}};
  mockRs.body = "e30=";
  SetMockResponse(mockRs);

  NoInputAndOutputRequest request;

  auto outcome = client.NoInputAndOutput(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  ValidateRequestSent([](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {} )" */
  });
}
