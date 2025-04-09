/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/ec2-protocol/EC2ProtocolClient.h>
#include <aws/ec2-protocol/model/SimpleScalarXmlPropertiesRequest.h>

using SimpleScalarXmlProperties = AWS_PROTOCOL_TEST_SUITE;
using EC2ProtocolClient = Aws::EC2Protocol::EC2ProtocolClient;
using namespace Aws::EC2Protocol::Model;

AWS_PROTOCOL_TEST(SimpleScalarXmlProperties, Ec2SimpleScalarProperties) {
  EC2ProtocolClient client;
  SimpleScalarXmlPropertiesRequest request;

  auto outcome = client.SimpleScalarXmlProperties(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(SimpleScalarXmlProperties, Ec2QuerySupportsNaNFloatOutputs) {
  EC2ProtocolClient client;
  SimpleScalarXmlPropertiesRequest request;

  auto outcome = client.SimpleScalarXmlProperties(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(SimpleScalarXmlProperties, Ec2QuerySupportsInfinityFloatOutputs) {
  EC2ProtocolClient client;
  SimpleScalarXmlPropertiesRequest request;

  auto outcome = client.SimpleScalarXmlProperties(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(SimpleScalarXmlProperties, Ec2QuerySupportsNegativeInfinityFloatOutputs) {
  EC2ProtocolClient client;
  SimpleScalarXmlPropertiesRequest request;

  auto outcome = client.SimpleScalarXmlProperties(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
