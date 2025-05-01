/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/HttpRequestWithLabelsRequest.h>

using HttpRequestWithLabels = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(HttpRequestWithLabels, RestJsonInputWithHeadersAndAllParams) {
  RestJsonProtocolClient client;
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

AWS_PROTOCOL_TEST(HttpRequestWithLabels, RestJsonHttpRequestLabelEscaping) {
  RestJsonProtocolClient client;
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
