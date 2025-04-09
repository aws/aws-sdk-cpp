/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/ConstantAndVariableQueryStringRequest.h>

using ConstantAndVariableQueryString = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(ConstantAndVariableQueryString, RestJsonConstantAndVariableQueryStringMissingOneValue) {
  RestJsonProtocolClient client;
  ConstantAndVariableQueryStringRequest request;
  request.SetBaz(R"(bam)");

  auto outcome = client.ConstantAndVariableQueryString(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(ConstantAndVariableQueryString, RestJsonConstantAndVariableQueryStringAllValues) {
  RestJsonProtocolClient client;
  ConstantAndVariableQueryStringRequest request;
  request.SetBaz(R"(bam)");
  request.SetMaybeSet(R"(yes)");

  auto outcome = client.ConstantAndVariableQueryString(request);
  AWS_ASSERT_SUCCESS(outcome);
}
