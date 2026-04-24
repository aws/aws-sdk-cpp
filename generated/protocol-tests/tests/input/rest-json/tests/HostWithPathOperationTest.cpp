/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/HostWithPathOperationRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using HostWithPathOperation = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(HostWithPathOperation, RestJsonHostWithPath) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  HostWithPathOperationRequest request;

  auto outcome = client.HostWithPathOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "GET";
  expectedRq.uri = "/custom/HostWithPathOperation";
  expectedRq.host = "example.com/custom";
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
