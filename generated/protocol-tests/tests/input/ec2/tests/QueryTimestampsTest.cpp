﻿/**
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
  EC2ProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  QueryTimestampsRequest request;
  request.SetNormalFormat(Aws::Utils::DateTime(1422172800L));
  request.SetEpochMember(Aws::Utils::DateTime(1422172800L));
  request.SetEpochTarget(Aws::Utils::DateTime(1422172800L));

  auto outcome = client.QueryTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "QWN0aW9uPVF1ZXJ5VGltZXN0YW1wcyZWZXJzaW9uPTIwMjAtMDEtMDgmTm9ybWFsRm9ybWF0PTIwMTUtMDEtMjVUMDglM0EwMCUzQTAwWiZFcG9jaE1lbWJlcj0xNDIyMTcyODAwJkVwb2NoVGFyZ2V0PTE0MjIxNzI4MDA=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
}
