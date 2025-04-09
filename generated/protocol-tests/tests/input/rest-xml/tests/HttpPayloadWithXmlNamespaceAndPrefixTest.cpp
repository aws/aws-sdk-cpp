/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/HttpPayloadWithXmlNamespaceAndPrefixRequest.h>

using HttpPayloadWithXmlNamespaceAndPrefix = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(HttpPayloadWithXmlNamespaceAndPrefix, HttpPayloadWithXmlNamespaceAndPrefix) {
  RestXmlProtocolClient client;
  HttpPayloadWithXmlNamespaceAndPrefixRequest request;
  {
    PayloadWithXmlNamespaceAndPrefix requestNested;
    requestNested.SetName(R"(Phreddy)");
    request.SetNested(requestNested);
  }

  auto outcome = client.HttpPayloadWithXmlNamespaceAndPrefix(request);
  AWS_ASSERT_SUCCESS(outcome);
}
