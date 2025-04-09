/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/ec2-protocol/EC2ProtocolClient.h>
#include <aws/ec2-protocol/model/XmlEmptyBlobsRequest.h>

using XmlEmptyBlobs = AWS_PROTOCOL_TEST_SUITE;
using EC2ProtocolClient = Aws::EC2Protocol::EC2ProtocolClient;
using namespace Aws::EC2Protocol::Model;

AWS_PROTOCOL_TEST(XmlEmptyBlobs, Ec2XmlEmptyBlobs) {
  EC2ProtocolClient client;
  XmlEmptyBlobsRequest request;

  auto outcome = client.XmlEmptyBlobs(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(XmlEmptyBlobs, Ec2XmlEmptySelfClosedBlobs) {
  EC2ProtocolClient client;
  XmlEmptyBlobsRequest request;

  auto outcome = client.XmlEmptyBlobs(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
