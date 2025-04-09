/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/ec2-protocol/EC2ProtocolClient.h>
#include <aws/ec2-protocol/model/RecursiveXmlShapesRequest.h>

using RecursiveXmlShapes = AWS_PROTOCOL_TEST_SUITE;
using EC2ProtocolClient = Aws::EC2Protocol::EC2ProtocolClient;
using namespace Aws::EC2Protocol::Model;

AWS_PROTOCOL_TEST(RecursiveXmlShapes, Ec2RecursiveShapes) {
  EC2ProtocolClient client;
  RecursiveXmlShapesRequest request;

  auto outcome = client.RecursiveXmlShapes(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
