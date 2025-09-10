/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/json-rpc-10/JSONRPC10Client.h>
#include <aws/json-rpc-10/model/GreetingWithErrorsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using GreetingWithErrors1 = AWS_PROTOCOL_TEST_SUITE;
using JSONRPC10Client = Aws::JSONRPC10::JSONRPC10Client;
using namespace Aws::JSONRPC10::Model;

AWS_PROTOCOL_TEST(GreetingWithErrors1, AwsJson10ComplexError) {
  JSONRPC10Client client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 400;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.0)"}};
  mockRs.body =
      "ewogICAgIl9fdHlwZSI6ICJhd3MucHJvdG9jb2x0ZXN0cy5qc29uMTAjQ29tcGxleEVycm9yIiwKICAgICJUb3BMZXZlbCI6ICJUb3AgbGV2ZWwiLAogICAgIk5lc3RlZCI6"
      "IHsKICAgICAgICAiRm9vIjogImJhciIKICAgIH0KfQ==";
  SetMockResponse(mockRs);

  GreetingWithErrorsRequest request;

  auto outcome = client.GreetingWithErrors(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors1, AwsJson10EmptyComplexError) {
  JSONRPC10Client client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 400;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.0)"}};
  mockRs.body = "ewogICAgIl9fdHlwZSI6ICJhd3MucHJvdG9jb2x0ZXN0cy5qc29uMTAjQ29tcGxleEVycm9yIgp9";
  SetMockResponse(mockRs);

  GreetingWithErrorsRequest request;

  auto outcome = client.GreetingWithErrors(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
