/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/TestGetNoInputNoPayloadRequest.h>

using TestGetNoInputNoPayload = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(TestGetNoInputNoPayload, RestJsonHttpGetWithNoInput) {
  RestJsonProtocolClient client;
  TestGetNoInputNoPayloadRequest request;

  auto outcome = client.TestGetNoInputNoPayload(request);
  AWS_ASSERT_SUCCESS(outcome);
}
