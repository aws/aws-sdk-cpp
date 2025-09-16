/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/QueryPrecedenceRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using QueryPrecedence = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(QueryPrecedence, RestJsonQueryPrecedence) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  QueryPrecedenceRequest request;
  request.SetFoo(R"(named)");
  request.SetBaz({{"bar", R"(fromMap)"}, {"qux", R"(alsoFromMap)"}});

  auto outcome = client.QueryPrecedence(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.uri = "/Precedence?bar=named&qux=alsoFromMap";
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
