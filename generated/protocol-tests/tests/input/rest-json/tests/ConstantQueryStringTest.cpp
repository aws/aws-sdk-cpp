/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/ConstantQueryStringRequest.h>

using ConstantQueryString = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(ConstantQueryString, RestJsonConstantQueryString) {
  RestJsonProtocolClient client;
  ConstantQueryStringRequest request;
  request.SetHello(R"(hi)");

  auto outcome = client.ConstantQueryString(request);
  AWS_ASSERT_SUCCESS(outcome);
}
