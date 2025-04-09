/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/NullAndEmptyHeadersClientRequest.h>

using NullAndEmptyHeadersClient = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(NullAndEmptyHeadersClient, NullAndEmptyHeaders) {
  RestXmlProtocolClient client;
  NullAndEmptyHeadersClientRequest request;
  request.SetA(R"(null)");
  request.SetB(R"()");
  request.SetC({});

  auto outcome = client.NullAndEmptyHeadersClient(request);
  AWS_ASSERT_SUCCESS(outcome);
}
