/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/json-rpc-10/JSONRPC10Client.h>
#include <aws/json-rpc-10/model/HostWithPathOperationRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using HostWithPathOperation = AWS_PROTOCOL_TEST_SUITE;
using JSONRPC10Client = Aws::JSONRPC10::JSONRPC10Client;
using namespace Aws::JSONRPC10::Model;

AWS_PROTOCOL_TEST(HostWithPathOperation, AwsJson10HostWithPath) {
  JSONRPC10Client client(mockCredentials, mockConfig);

  SetMockResponse();

  HostWithPathOperationRequest request;

  auto outcome = client.HostWithPathOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "e30=";
  expectedRq.uri = "/custom/";
  expectedRq.host = "example.com/custom";
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
