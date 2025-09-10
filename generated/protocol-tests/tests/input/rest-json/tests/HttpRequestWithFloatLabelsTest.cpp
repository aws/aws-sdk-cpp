/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/HttpRequestWithFloatLabelsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using HttpRequestWithFloatLabels = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(HttpRequestWithFloatLabels, RestJsonSupportsNaNFloatLabels) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  HttpRequestWithFloatLabelsRequest request;
  request.SetFloat(std::numeric_limits<double>::quiet_NaN());
  request.SetDouble(std::numeric_limits<double>::quiet_NaN());

  auto outcome = client.HttpRequestWithFloatLabels(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "GET";
  expectedRq.uri = "/FloatHttpLabels/NaN/NaN";
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(HttpRequestWithFloatLabels, RestJsonSupportsInfinityFloatLabels) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  HttpRequestWithFloatLabelsRequest request;
  request.SetFloat(std::numeric_limits<double>::infinity());
  request.SetDouble(std::numeric_limits<double>::infinity());

  auto outcome = client.HttpRequestWithFloatLabels(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "GET";
  expectedRq.uri = "/FloatHttpLabels/Infinity/Infinity";
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(HttpRequestWithFloatLabels, RestJsonSupportsNegativeInfinityFloatLabels) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  HttpRequestWithFloatLabelsRequest request;
  request.SetFloat(-std::numeric_limits<double>::infinity());
  request.SetDouble(-std::numeric_limits<double>::infinity());

  auto outcome = client.HttpRequestWithFloatLabels(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "GET";
  expectedRq.uri = "/FloatHttpLabels/-Infinity/-Infinity";
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
