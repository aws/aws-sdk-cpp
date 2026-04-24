/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/ConstantAndVariableQueryStringRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using ConstantAndVariableQueryString = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(ConstantAndVariableQueryString, RestJsonConstantAndVariableQueryStringMissingOneValue) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  ConstantAndVariableQueryStringRequest request;
  request.SetBaz(R"(bam)");

  auto outcome = client.ConstantAndVariableQueryString(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "GET";
  expectedRq.uri = "/ConstantAndVariableQueryString?foo=bar&baz=bam";
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(ConstantAndVariableQueryString, RestJsonConstantAndVariableQueryStringAllValues) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  ConstantAndVariableQueryStringRequest request;
  request.SetBaz(R"(bam)");
  request.SetMaybeSet(R"(yes)");

  auto outcome = client.ConstantAndVariableQueryString(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "GET";
  expectedRq.uri = "/ConstantAndVariableQueryString?foo=bar&baz=bam&maybeSet=yes";
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
