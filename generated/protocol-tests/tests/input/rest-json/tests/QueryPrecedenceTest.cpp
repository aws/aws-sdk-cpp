/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/QueryPrecedenceRequest.h>

using QueryPrecedence = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(QueryPrecedence, RestJsonQueryPrecedence) {
  RestJsonProtocolClient client;
  QueryPrecedenceRequest request;
  request.SetFoo(R"(named)");
  request.SetBaz({{"bar",  R"(fromMap)"}, {"qux",  R"(alsoFromMap)"}});

  auto outcome = client.QueryPrecedence(request);
  AWS_ASSERT_SUCCESS(outcome);
}
