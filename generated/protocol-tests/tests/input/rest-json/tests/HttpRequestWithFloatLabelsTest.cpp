/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/HttpRequestWithFloatLabelsRequest.h>

using HttpRequestWithFloatLabels = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(HttpRequestWithFloatLabels, RestJsonSupportsNaNFloatLabels) {
  RestJsonProtocolClient client;
  HttpRequestWithFloatLabelsRequest request;
  request.SetFloat(std::numeric_limits<double>::quiet_NaN());
  request.SetDouble(std::numeric_limits<double>::quiet_NaN());

  auto outcome = client.HttpRequestWithFloatLabels(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(HttpRequestWithFloatLabels, RestJsonSupportsInfinityFloatLabels) {
  RestJsonProtocolClient client;
  HttpRequestWithFloatLabelsRequest request;
  request.SetFloat(std::numeric_limits<double>::infinity());
  request.SetDouble(std::numeric_limits<double>::infinity());

  auto outcome = client.HttpRequestWithFloatLabels(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(HttpRequestWithFloatLabels, RestJsonSupportsNegativeInfinityFloatLabels) {
  RestJsonProtocolClient client;
  HttpRequestWithFloatLabelsRequest request;
  request.SetFloat(-std::numeric_limits<double>::infinity());
  request.SetDouble(-std::numeric_limits<double>::infinity());

  auto outcome = client.HttpRequestWithFloatLabels(request);
  AWS_ASSERT_SUCCESS(outcome);
}
