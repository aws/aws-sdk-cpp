/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/ec2-protocol/EC2ProtocolClient.h>
#include <aws/ec2-protocol/model/XmlTimestampsRequest.h>

using XmlTimestamps = AWS_PROTOCOL_TEST_SUITE;
using EC2ProtocolClient = Aws::EC2Protocol::EC2ProtocolClient;
using namespace Aws::EC2Protocol::Model;

AWS_PROTOCOL_TEST(XmlTimestamps, Ec2XmlTimestamps) {
  EC2ProtocolClient client;
  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(XmlTimestamps, Ec2XmlTimestampsWithDateTimeFormat) {
  EC2ProtocolClient client;
  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(XmlTimestamps, Ec2XmlTimestampsWithDateTimeOnTargetFormat) {
  EC2ProtocolClient client;
  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(XmlTimestamps, Ec2XmlTimestampsWithEpochSecondsFormat) {
  EC2ProtocolClient client;
  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(XmlTimestamps, Ec2XmlTimestampsWithEpochSecondsOnTargetFormat) {
  EC2ProtocolClient client;
  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(XmlTimestamps, Ec2XmlTimestampsWithHttpDateFormat) {
  EC2ProtocolClient client;
  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(XmlTimestamps, Ec2XmlTimestampsWithHttpDateOnTargetFormat) {
  EC2ProtocolClient client;
  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
