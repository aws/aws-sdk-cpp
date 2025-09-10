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

  SetMockResponse();

  NoInputAndNoOutputRequest request;

  auto outcome = client.NoInputAndNoOutput(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "QWN0aW9uPU5vSW5wdXRBbmROb091dHB1dCZWZXJzaW9uPTIwMjAtMDEtMDg=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
