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

AWS_PROTOCOL_TEST(QueryCompatibleOperation, QueryCompatibleAwsJson10CborSendsQueryModeHeader) {
  QueryCompatibleJSONRPC10Client client(mockCredentials, mockConfig);

  SetMockResponse();

  QueryCompatibleOperationRequest request;

  auto outcome = client.QueryCompatibleOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "e30=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.0)"},
                        {"X-Amz-Target", R"(QueryCompatibleJsonRpc10.QueryCompatibleOperation)"},
                        {"x-amzn-query-mode", R"(true)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
