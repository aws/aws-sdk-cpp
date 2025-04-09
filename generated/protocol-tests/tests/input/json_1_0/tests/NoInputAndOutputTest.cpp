/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/json-rpc-10/JSONRPC10Client.h>
#include <aws/json-rpc-10/model/NoInputAndOutputRequest.h>

using NoInputAndOutput = AWS_PROTOCOL_TEST_SUITE;
using JSONRPC10Client = Aws::JSONRPC10::JSONRPC10Client;
using namespace Aws::JSONRPC10::Model;

AWS_PROTOCOL_TEST(NoInputAndOutput, AwsJson10NoInputAndOutput) {
  JSONRPC10Client client;
  NoInputAndOutputRequest request;

  auto outcome = client.NoInputAndOutput(request);
  AWS_ASSERT_SUCCESS(outcome);
}
