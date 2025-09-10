/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/EndpointWithHostLabelOperationRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using EndpointWithHostLabelOperation = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(EndpointWithHostLabelOperation, AwsQueryEndpointTraitWithHostLabel) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  EndpointWithHostLabelOperationRequest request;
  request.SetLabel(R"(bar)");

  auto outcome = client.EndpointWithHostLabelOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "QWN0aW9uPUVuZHBvaW50V2l0aEhvc3RMYWJlbE9wZXJhdGlvbiZWZXJzaW9uPTIwMjAtMDEtMDgmbGFiZWw9YmFy";
  expectedRq.uri = "/";
  expectedRq.host = "foo.bar.example.com";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
