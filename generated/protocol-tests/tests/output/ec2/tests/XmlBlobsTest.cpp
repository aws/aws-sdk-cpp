/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/ec2-protocol/EC2ProtocolClient.h>
#include <aws/ec2-protocol/model/XmlBlobsRequest.h>

using XmlBlobs = AWS_PROTOCOL_TEST_SUITE;
using EC2ProtocolClient = Aws::EC2Protocol::EC2ProtocolClient;
using namespace Aws::EC2Protocol::Model;

AWS_PROTOCOL_TEST(XmlBlobs, Ec2XmlBlobs) {
  EC2ProtocolClient client;
  XmlBlobsRequest request;

  auto outcome = client.XmlBlobs(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
