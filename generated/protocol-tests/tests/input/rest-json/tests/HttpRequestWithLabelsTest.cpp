/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/HttpRequestWithLabelsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using HttpRequestWithLabels = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(HttpRequestWithLabels, RestJsonInputWithHeadersAndAllParams) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  HttpRequestWithLabelsRequest request;
  request.SetString(R"(string)");
  request.SetShort(1);
  request.SetInteger(2);
  request.SetLong(3);
  request.SetFloat(4.1);
  request.SetDouble(5.1);
  request.SetBoolean(true);
  request.SetTimestamp(Aws::Utils::DateTime(static_cast<int64_t>(1576540098)));

  auto outcome = client.HttpRequestWithLabels(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "GET";
  expectedRq.uri = "/HttpRequestWithLabels/string/1/2/3/4.1/5.1/true/2019-12-16T23%3A48%3A18Z";
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(HttpRequestWithLabels, RestJsonHttpRequestLabelEscaping) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  HttpRequestWithLabelsRequest request;
  request.SetString(R"( %:/?#[]@!$&'()*+,;=😹)");
  request.SetShort(1);
  request.SetInteger(2);
  request.SetLong(3);
  request.SetFloat(4.1);
  request.SetDouble(5.1);
  request.SetBoolean(true);
  request.SetTimestamp(Aws::Utils::DateTime(static_cast<int64_t>(1576540098)));

  auto outcome = client.HttpRequestWithLabels(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "GET";
  expectedRq.uri =
      "/HttpRequestWithLabels/%20%25%3A%2F%3F%23%5B%5D%40%21%24%26%27%28%29%2A%2B%2C%3B%3D%F0%9F%98%B9/1/2/3/4.1/5.1/true/"
      "2019-12-16T23%3A48%3A18Z";
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
