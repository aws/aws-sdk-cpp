/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/ec2-protocol/EC2ProtocolClient.h>
#include <aws/ec2-protocol/model/NoInputAndOutputRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using NoInputAndOutput = AWS_PROTOCOL_TEST_SUITE;
using EC2ProtocolClient = Aws::EC2Protocol::EC2ProtocolClient;
using namespace Aws::EC2Protocol::Model;

AWS_PROTOCOL_TEST(NoInputAndOutput, Ec2QueryNoInputAndOutput) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  NoInputAndOutputRequest request;

  auto outcome = client.NoInputAndOutput(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "QWN0aW9uPU5vSW5wdXRBbmRPdXRwdXQmVmVyc2lvbj0yMDIwLTAxLTA4";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
