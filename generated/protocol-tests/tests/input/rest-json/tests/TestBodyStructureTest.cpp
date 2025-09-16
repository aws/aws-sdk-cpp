/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/TestBodyStructureRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using TestBodyStructure = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(TestBodyStructure, RestJsonTestBodyStructure) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  TestBodyStructureRequest request;
  {
    TestConfig requestTestConfig;
    requestTestConfig.SetTimeout(10);
    request.SetTestConfig(requestTestConfig);
  }

  auto outcome = client.TestBodyStructure(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "eyJ0ZXN0Q29uZmlnIjoKICAgIHsidGltZW91dCI6IDEwfQp9";
  expectedRq.uri = "/body";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(TestBodyStructure, RestJsonHttpWithEmptyBody) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  TestBodyStructureRequest request;

  auto outcome = client.TestBodyStructure(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "e30=";
  expectedRq.uri = "/body";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
