/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/HttpRequestWithLabelsRequest.h>

using HttpRequestWithLabels = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(HttpRequestWithLabels, InputWithHeadersAndAllParams) {
  RestXmlProtocolClient client;
  HttpRequestWithLabelsRequest request;
  request.SetString(R"(string)");
  request.SetShort(1);
  request.SetInteger(2);
  request.SetLong(3);
  request.SetFloat(4.1);
  request.SetDouble(5.1);
  request.SetBoolean(true);
  request.SetTimestamp(Aws::Utils::DateTime(1576540098L));

  auto outcome = client.HttpRequestWithLabels(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(HttpRequestWithLabels, HttpRequestLabelEscaping) {
  RestXmlProtocolClient client;
  HttpRequestWithLabelsRequest request;
  request.SetString(R"( %:/?#[]@!$&'()*+,;=😹)");
  request.SetShort(1);
  request.SetInteger(2);
  request.SetLong(3);
  request.SetFloat(4.1);
  request.SetDouble(5.1);
  request.SetBoolean(true);
  request.SetTimestamp(Aws::Utils::DateTime(1576540098L));

  auto outcome = client.HttpRequestWithLabels(request);
  AWS_ASSERT_SUCCESS(outcome);
}
