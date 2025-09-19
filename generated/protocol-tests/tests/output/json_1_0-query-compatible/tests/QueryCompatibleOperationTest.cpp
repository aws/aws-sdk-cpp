/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/query-compatible-json-rpc-10/QueryCompatibleJSONRPC10Client.h>
#include <aws/query-compatible-json-rpc-10/model/QueryCompatibleOperationRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using QueryCompatibleOperation = AWS_PROTOCOL_TEST_SUITE;
using QueryCompatibleJSONRPC10Client = Aws::QueryCompatibleJSONRPC10::QueryCompatibleJSONRPC10Client;
using namespace Aws::QueryCompatibleJSONRPC10::Model;

AWS_PROTOCOL_TEST(QueryCompatibleOperation, QueryCompatibleAwsJson10CborNoCustomCodeError) {
  QueryCompatibleJSONRPC10Client client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 400;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.0)"}};
  mockRs.body = "ewogICAgIl9fdHlwZSI6ICJhd3MucHJvdG9jb2x0ZXN0cy5qc29uMTAjTm9DdXN0b21Db2RlRXJyb3IiLAogICAgIk1lc3NhZ2UiOiAiSGkiCn0=";
  SetMockResponse(mockRs);

  QueryCompatibleOperationRequest request;

  auto outcome = client.QueryCompatibleOperation(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
