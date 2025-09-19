/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/EndpointOperationRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using EndpointOperation = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(EndpointOperation, AwsQueryEndpointTrait) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  EndpointOperationRequest request;

  auto outcome = client.EndpointOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "QWN0aW9uPUVuZHBvaW50T3BlcmF0aW9uJlZlcnNpb249MjAyMC0wMS0wOA==";
  expectedRq.uri = "/";
  expectedRq.host = "foo.example.com";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
