/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/NoInputAndOutputRequest.h>

using NoInputAndOutput = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(NoInputAndOutput, RestJsonNoInputAndOutput) {
  RestJsonProtocolClient client;
  NoInputAndOutputRequest request;

  auto outcome = client.NoInputAndOutput(request);
  AWS_ASSERT_SUCCESS(outcome);
}
