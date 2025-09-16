/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/NoInputAndOutputRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using NoInputAndOutput = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(NoInputAndOutput, RestJsonNoInputAndOutputWithJson) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "e30=";
  SetMockResponse(mockRs);

  NoInputAndOutputRequest request;

  auto outcome = client.NoInputAndOutput(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  ValidateRequestSent([](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {} )" */
  });
}

AWS_PROTOCOL_TEST(NoInputAndOutput, RestJsonNoInputAndOutputNoPayload) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  SetMockResponse(mockRs);

  NoInputAndOutputRequest request;

  auto outcome = client.NoInputAndOutput(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  ValidateRequestSent([](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {} )" */
  });
}
