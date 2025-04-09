/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/json-protocol/JsonProtocolClient.h>
#include <aws/json-protocol/model/NullOperationRequest.h>

using NullOperation = AWS_PROTOCOL_TEST_SUITE;
using JsonProtocolClient = Aws::JsonProtocol::JsonProtocolClient;
using namespace Aws::JsonProtocol::Model;

AWS_PROTOCOL_TEST(NullOperation, AwsJson11StructuresDontDeserializeNullValues) {
  JsonProtocolClient client;
  NullOperationRequest request;

  auto outcome = client.NullOperation(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
