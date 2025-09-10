/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/NoInputAndOutputRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using NoInputAndOutput = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(NoInputAndOutput, NoInputAndOutput) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  SetMockResponse(mockRs);

  NoInputAndOutputRequest request;

  auto outcome = client.NoInputAndOutput(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  ValidateRequestSent([](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {} )" */
  });
}
