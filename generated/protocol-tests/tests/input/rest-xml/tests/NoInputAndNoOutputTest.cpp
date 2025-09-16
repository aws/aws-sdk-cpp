/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/NoInputAndNoOutputRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using NoInputAndNoOutput = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(NoInputAndNoOutput, NoInputAndNoOutput) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  NoInputAndNoOutputRequest request;

  auto outcome = client.NoInputAndNoOutput(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.uri = "/NoInputAndNoOutput";
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
