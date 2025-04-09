/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/EmptyInputAndEmptyOutputRequest.h>

using EmptyInputAndEmptyOutput = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(EmptyInputAndEmptyOutput, EmptyInputAndEmptyOutput) {
  RestXmlProtocolClient client;
  EmptyInputAndEmptyOutputRequest request;

  auto outcome = client.EmptyInputAndEmptyOutput(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
