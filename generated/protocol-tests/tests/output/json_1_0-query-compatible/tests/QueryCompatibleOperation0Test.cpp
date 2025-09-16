/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/query-compatible-json-rpc-10/QueryCompatibleJSONRPC10Client.h>
#include <aws/query-compatible-json-rpc-10/model/QueryCompatibleOperationRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using QueryCompatibleOperation0 = AWS_PROTOCOL_TEST_SUITE;
using QueryCompatibleJSONRPC10Client = Aws::QueryCompatibleJSONRPC10::QueryCompatibleJSONRPC10Client;
using namespace Aws::QueryCompatibleJSONRPC10::Model;

AWS_PROTOCOL_TEST(QueryCompatibleOperation0, QueryCompatibleAwsJson10CustomCodeError) {
  QueryCompatibleJSONRPC10Client client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 400;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.0)"}, {"x-amzn-query-error", R"(Customized;Sender)"}};
  mockRs.body = "ewogICAgIl9fdHlwZSI6ICJhd3MucHJvdG9jb2x0ZXN0cy5qc29uMTAjQ3VzdG9tQ29kZUVycm9yIiwKICAgICJNZXNzYWdlIjogIkhpIgp9";
  SetMockResponse(mockRs);

  QueryCompatibleOperationRequest request;

  auto outcome = client.QueryCompatibleOperation(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
