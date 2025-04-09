/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/json-protocol/JsonProtocolClient.h>
#include <aws/json-protocol/model/HostWithPathOperationRequest.h>

using HostWithPathOperation = AWS_PROTOCOL_TEST_SUITE;
using JsonProtocolClient = Aws::JsonProtocol::JsonProtocolClient;
using namespace Aws::JsonProtocol::Model;

AWS_PROTOCOL_TEST(HostWithPathOperation, AwsJson11HostWithPath) {
  JsonProtocolClient client;
  HostWithPathOperationRequest request;

  auto outcome = client.HostWithPathOperation(request);
  AWS_ASSERT_SUCCESS(outcome);
}
