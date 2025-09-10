/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/ec2-protocol/EC2ProtocolClient.h>
#include <aws/ec2-protocol/model/EndpointWithHostLabelOperationRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using EndpointWithHostLabelOperation = AWS_PROTOCOL_TEST_SUITE;
using EC2ProtocolClient = Aws::EC2Protocol::EC2ProtocolClient;
using namespace Aws::EC2Protocol::Model;

AWS_PROTOCOL_TEST(EndpointWithHostLabelOperation, Ec2QueryEndpointTraitWithHostLabel) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  EndpointWithHostLabelOperationRequest request;
  request.SetLabel(R"(bar)");

  auto outcome = client.EndpointWithHostLabelOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "QWN0aW9uPUVuZHBvaW50V2l0aEhvc3RMYWJlbE9wZXJhdGlvbiZWZXJzaW9uPTIwMjAtMDEtMDgmTGFiZWw9YmFy";
  expectedRq.uri = "/";
  expectedRq.host = "foo.bar.example.com";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
