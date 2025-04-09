/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/ec2-protocol/EC2ProtocolClient.h>
#include <aws/ec2-protocol/model/QueryTimestampsRequest.h>

using QueryTimestamps = AWS_PROTOCOL_TEST_SUITE;
using EC2ProtocolClient = Aws::EC2Protocol::EC2ProtocolClient;
using namespace Aws::EC2Protocol::Model;

AWS_PROTOCOL_TEST(QueryTimestamps, Ec2TimestampsInput) {
  EC2ProtocolClient client;
  QueryTimestampsRequest request;
  request.SetNormalFormat(Aws::Utils::DateTime(1422172800));
  request.SetEpochMember(Aws::Utils::DateTime(1422172800));
  request.SetEpochTarget(Aws::Utils::DateTime(1422172800));

  auto outcome = client.QueryTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome);
}
