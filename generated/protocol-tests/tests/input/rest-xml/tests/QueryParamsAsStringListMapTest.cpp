/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/QueryParamsAsStringListMapRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using QueryParamsAsStringListMap = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(QueryParamsAsStringListMap, RestXmlQueryParamsStringListMap) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  QueryParamsAsStringListMapRequest request;
  request.SetQux(R"(named)");
  request.SetFoo({{"baz", {R"(bar)", R"(qux)"}}});

  auto outcome = client.QueryParamsAsStringListMap(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.uri = "/StringListMap?corge=named&baz=bar&baz=qux";
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
