/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/NullAndEmptyHeadersClientRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using NullAndEmptyHeadersClient = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(NullAndEmptyHeadersClient, NullAndEmptyHeaders) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

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
