/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/QueryParamsAsStringListMapRequest.h>

using QueryParamsAsStringListMap = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(QueryParamsAsStringListMap, RestXmlQueryParamsStringListMap) {
  RestXmlProtocolClient client;
  QueryParamsAsStringListMapRequest request;
  request.SetQux(R"(named)");
  request.SetFoo({{"baz",  {R"(bar)", R"(qux)"}}});

  auto outcome = client.QueryParamsAsStringListMap(request);
  AWS_ASSERT_SUCCESS(outcome);
}
