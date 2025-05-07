﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/QueryTimestampsRequest.h>

using QueryTimestamps = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(QueryTimestamps, QueryTimestampsInput) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  QueryTimestampsRequest request;
  request.SetNormalFormat(Aws::Utils::DateTime(1422172800L));
  request.SetEpochMember(Aws::Utils::DateTime(1422172800L));
  request.SetEpochTarget(Aws::Utils::DateTime(1422172800L));

  auto outcome = client.QueryTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "QWN0aW9uPVF1ZXJ5VGltZXN0YW1wcyZWZXJzaW9uPTIwMjAtMDEtMDgmbm9ybWFsRm9ybWF0PTIwMTUtMDEtMjVUMDglM0EwMCUzQTAwWiZlcG9jaE1lbWJlcj0xNDIyMTcyODAwJmVwb2NoVGFyZ2V0PTE0MjIxNzI4MDA=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
}
