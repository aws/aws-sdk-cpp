/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/GreetingWithErrorsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using GreetingWithErrors2 = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(GreetingWithErrors2, QueryComplexError) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 400;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body =
      "PEVycm9yUmVzcG9uc2U+CiAgIDxFcnJvcj4KICAgICAgPFR5cGU+U2VuZGVyPC9UeXBlPgogICAgICA8Q29kZT5Db21wbGV4RXJyb3I8L0NvZGU+"
      "CiAgICAgIDxUb3BMZXZlbD5Ub3AgbGV2ZWw8L1RvcExldmVsPgogICAgICA8TmVzdGVkPgogICAgICAgICAgPEZvbz5iYXI8L0Zvbz4KICAgICAgPC9OZXN0ZWQ+"
      "CiAgIDwvRXJyb3I+CiAgIDxSZXF1ZXN0SWQ+Zm9vLWlkPC9SZXF1ZXN0SWQ+CjwvRXJyb3JSZXNwb25zZT4K";
  SetMockResponse(mockRs);

  GreetingWithErrorsRequest request;

  auto outcome = client.GreetingWithErrors(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
