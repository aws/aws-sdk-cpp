/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/JsonBlobsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using JsonBlobs = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(JsonBlobs, RestJsonJsonBlobs) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  JsonBlobsRequest request;
  request.SetData(Aws::String(R"(value)"));

  auto outcome = client.JsonBlobs(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "ewogICAgImRhdGEiOiAiZG1Gc2RXVT0iCn0=";
  expectedRq.uri = "/JsonBlobs";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
