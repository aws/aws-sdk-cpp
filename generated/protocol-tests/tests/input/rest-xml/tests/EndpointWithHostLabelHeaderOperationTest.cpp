/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/EndpointWithHostLabelHeaderOperationRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using EndpointWithHostLabelHeaderOperation = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(EndpointWithHostLabelHeaderOperation, RestXmlEndpointTraitWithHostLabelAndHttpBinding) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  EndpointWithHostLabelHeaderOperationRequest request;
  request.SetAccountId(R"(bar)");

  auto outcome = client.EndpointWithHostLabelHeaderOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.uri = "/EndpointWithHostLabelHeaderOperation";
  expectedRq.host = "bar.example.com";
  expectedRq.headers = {{"X-Amz-Account-Id", R"(bar)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
