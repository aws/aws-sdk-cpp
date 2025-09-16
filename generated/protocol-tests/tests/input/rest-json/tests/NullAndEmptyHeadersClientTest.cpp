/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/NullAndEmptyHeadersClientRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using NullAndEmptyHeadersClient = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(NullAndEmptyHeadersClient, RestJsonNullAndEmptyHeaders) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  NullAndEmptyHeadersClientRequest request;
  request.SetB(R"()");
  request.SetC({});

  auto outcome = client.NullAndEmptyHeadersClient(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "GET";
  expectedRq.uri = "/NullAndEmptyHeadersClient";
  expectedRq.headers = {{"X-B", R"()"}, {"X-C", R"()"}};
  expectedRq.forbidHeaders = {"X-A"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
