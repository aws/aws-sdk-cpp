/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/TestPayloadStructureRequest.h>

using TestPayloadStructure = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(TestPayloadStructure, RestJsonHttpWithEmptyStructurePayload) {
  RestJsonProtocolClient client;
  TestPayloadStructureRequest request;

  auto outcome = client.TestPayloadStructure(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(TestPayloadStructure, RestJsonTestPayloadStructure) {
  RestJsonProtocolClient client;
  TestPayloadStructureRequest request;
  {
    PayloadConfig requestPayloadConfig;
    requestPayloadConfig.SetData(25);
    request.SetPayloadConfig(requestPayloadConfig);
  }

  auto outcome = client.TestPayloadStructure(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(TestPayloadStructure, RestJsonHttpWithHeadersButNoPayload) {
  RestJsonProtocolClient client;
  TestPayloadStructureRequest request;
  request.SetTestId(R"(t-12345)");

  auto outcome = client.TestPayloadStructure(request);
  AWS_ASSERT_SUCCESS(outcome);
}
