/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/GreetingWithErrorsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using GreetingWithErrors0 = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(GreetingWithErrors0, QueryInvalidGreetingError) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 400;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body =
      "PEVycm9yUmVzcG9uc2U+CiAgIDxFcnJvcj4KICAgICAgPFR5cGU+U2VuZGVyPC9UeXBlPgogICAgICA8Q29kZT5JbnZhbGlkR3JlZXRpbmc8L0NvZGU+"
      "CiAgICAgIDxNZXNzYWdlPkhpPC9NZXNzYWdlPgogICA8L0Vycm9yPgogICA8UmVxdWVzdElkPmZvby1pZDwvUmVxdWVzdElkPgo8L0Vycm9yUmVzcG9uc2U+Cg==";
  SetMockResponse(mockRs);

  GreetingWithErrorsRequest request;

  auto outcome = client.GreetingWithErrors(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
