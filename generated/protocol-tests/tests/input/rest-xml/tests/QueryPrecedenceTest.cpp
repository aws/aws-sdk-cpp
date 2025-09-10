/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/QueryPrecedenceRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using QueryPrecedence = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(QueryPrecedence, RestXmlQueryPrecedence) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

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
