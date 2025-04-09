/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/json-rpc-10/JSONRPC10Client.h>
#include <aws/json-rpc-10/model/EndpointOperationRequest.h>

using EndpointOperation = AWS_PROTOCOL_TEST_SUITE;
using JSONRPC10Client = Aws::JSONRPC10::JSONRPC10Client;
using namespace Aws::JSONRPC10::Model;

AWS_PROTOCOL_TEST(EndpointOperation, AwsJson10EndpointTrait) {
  JSONRPC10Client client;
  EndpointOperationRequest request;

  auto outcome = client.EndpointOperation(request);
  AWS_ASSERT_SUCCESS(outcome);
}
