﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/ec2-protocol/EC2ProtocolClient.h>
#include <aws/ec2-protocol/model/HostWithPathOperationRequest.h>

using HostWithPathOperation = AWS_PROTOCOL_TEST_SUITE;
using EC2ProtocolClient = Aws::EC2Protocol::EC2ProtocolClient;
using namespace Aws::EC2Protocol::Model;

AWS_PROTOCOL_TEST(HostWithPathOperation, Ec2QueryHostWithPath) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  HostWithPathOperationRequest request;

  auto outcome = client.HostWithPathOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "QWN0aW9uPUhvc3RXaXRoUGF0aE9wZXJhdGlvbiZWZXJzaW9uPTIwMjAtMDEtMDg=";
  expectedRq.uri = "/custom/";
  expectedRq.host = "example.com/custom";
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
