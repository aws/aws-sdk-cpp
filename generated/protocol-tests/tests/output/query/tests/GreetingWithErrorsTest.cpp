/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/GreetingWithErrorsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using GreetingWithErrors = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(GreetingWithErrors, QueryGreetingWithErrors) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body =
      "PEdyZWV0aW5nV2l0aEVycm9yc1Jlc3BvbnNlIHhtbG5zPSJodHRwczovL2V4YW1wbGUuY29tLyI+"
      "CiAgICA8R3JlZXRpbmdXaXRoRXJyb3JzUmVzdWx0PgogICAgICAgIDxncmVldGluZz5IZWxsbzwvZ3JlZXRpbmc+"
      "CiAgICA8L0dyZWV0aW5nV2l0aEVycm9yc1Jlc3VsdD4KPC9HcmVldGluZ1dpdGhFcnJvcnNSZXNwb25zZT4K";
  SetMockResponse(mockRs);

  GreetingWithErrorsRequest request;

  auto outcome = client.GreetingWithErrors(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const GreetingWithErrorsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"greeting":"Hello"} )" */
    EXPECT_EQ(R"(Hello)", result.GetGreeting());
  });
}
