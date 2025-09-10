/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/GreetingWithErrorsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using GreetingWithErrors1 = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(GreetingWithErrors1, QueryCustomizedError) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 402;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body =
      "PEVycm9yUmVzcG9uc2U+CiAgIDxFcnJvcj4KICAgICAgPFR5cGU+"
      "U2VuZGVyPC9UeXBlPgogICAgICA8Q29kZT5DdXN0b21pemVkPC9Db2RlPgogICAgICA8TWVzc2FnZT5IaTwvTWVzc2FnZT4KICAgPC9FcnJvcj4KICAgPFJlcXVlc3RJZD5m"
      "b28taWQ8L1JlcXVlc3RJZD4KPC9FcnJvclJlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  GreetingWithErrorsRequest request;

  auto outcome = client.GreetingWithErrors(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
