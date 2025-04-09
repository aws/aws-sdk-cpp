/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/TestBodyStructureRequest.h>

using TestBodyStructure = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(TestBodyStructure, RestJsonTestBodyStructure) {
  RestJsonProtocolClient client;
  TestBodyStructureRequest request;
  {
    TestConfig requestTestConfig;
    requestTestConfig.SetTimeout(10);
    request.SetTestConfig(requestTestConfig);
  }

  auto outcome = client.TestBodyStructure(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(TestBodyStructure, RestJsonHttpWithEmptyBody) {
  RestJsonProtocolClient client;
  TestBodyStructureRequest request;

  auto outcome = client.TestBodyStructure(request);
  AWS_ASSERT_SUCCESS(outcome);
}
