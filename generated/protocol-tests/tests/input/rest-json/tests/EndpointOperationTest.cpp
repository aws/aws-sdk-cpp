/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/EndpointOperationRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using EndpointOperation = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(EndpointOperation, RestJsonEndpointTrait) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  EndpointOperationRequest request;

  auto outcome = client.EndpointOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.uri = "/EndpointOperation";
  expectedRq.host = "foo.example.com";
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
