/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/GreetingWithErrorsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using GreetingWithErrors1 = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(GreetingWithErrors1, ComplexError) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 403;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}, {"X-Header", R"(Header)"}};
  mockRs.body =
      "PEVycm9yUmVzcG9uc2U+CiAgIDxFcnJvcj4KICAgICAgPFR5cGU+U2VuZGVyPC9UeXBlPgogICAgICA8Q29kZT5Db21wbGV4RXJyb3I8L0NvZGU+"
      "CiAgICAgIDxNZXNzYWdlPkhpPC9NZXNzYWdlPgogICAgICA8VG9wTGV2ZWw+VG9wIGxldmVsPC9Ub3BMZXZlbD4KICAgICAgPE5lc3RlZD4KICAgICAgICAgIDxGb28+"
      "YmFyPC9Gb28+CiAgICAgIDwvTmVzdGVkPgogICA8L0Vycm9yPgogICA8UmVxdWVzdElkPmZvby1pZDwvUmVxdWVzdElkPgo8L0Vycm9yUmVzcG9uc2U+Cg==";
  SetMockResponse(mockRs);

  GreetingWithErrorsRequest request;

  auto outcome = client.GreetingWithErrors(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
