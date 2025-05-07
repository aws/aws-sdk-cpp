﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/HostWithPathOperationRequest.h>

using HostWithPathOperation = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(HostWithPathOperation, QueryHostWithPath) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  HostWithPathOperationRequest request;

  auto outcome = client.HostWithPathOperation(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "QWN0aW9uPUhvc3RXaXRoUGF0aE9wZXJhdGlvbiZWZXJzaW9uPTIwMjAtMDEtMDg=";
  expectedRq.uri = "/custom/";
  expectedRq.host = "example.com/custom";
  ValidateRequestSent(expectedRq);
}
