/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/NoInputAndNoOutputRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using NoInputAndNoOutput = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(NoInputAndNoOutput, QueryNoInputAndNoOutput) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  SetMockResponse(mockRs);

  NoInputAndNoOutputRequest request;

  auto outcome = client.NoInputAndNoOutput(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  ValidateRequestSent([](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {} )" */
  });
}

AWS_PROTOCOL_TEST(NoInputAndNoOutput, QueryNoInputAndNoOutputWithResponseMetadata) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.body =
      "PE5vSW5wdXRBbmROb091dHB1dFJlc3BvbnNlPgogICAgPFJlc3BvbnNlTWV0YWRhdGE+CiAgICAgICAgPFJlcXVlc3RJZD5hYmMtMTIzPC9SZXF1ZXN0SWQ+"
      "CiAgICA8L1Jlc3BvbnNlTWV0YWRhdGE+CjwvTm9JbnB1dEFuZE5vT3V0cHV0UmVzcG9uc2U+Cg==";
  SetMockResponse(mockRs);

  NoInputAndNoOutputRequest request;

  auto outcome = client.NoInputAndNoOutput(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  ValidateRequestSent([](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {} )" */
  });
}
