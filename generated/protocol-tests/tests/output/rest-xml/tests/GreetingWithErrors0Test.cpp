/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/GreetingWithErrorsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using GreetingWithErrors0 = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(GreetingWithErrors0, InvalidGreetingError) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 400;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body =
      "PEVycm9yUmVzcG9uc2U+CiAgIDxFcnJvcj4KICAgICAgPFR5cGU+U2VuZGVyPC9UeXBlPgogICAgICA8Q29kZT5JbnZhbGlkR3JlZXRpbmc8L0NvZGU+"
      "CiAgICAgIDxNZXNzYWdlPkhpPC9NZXNzYWdlPgogICAgICA8QW5vdGhlclNldHRpbmc+c2V0dGluZzwvQW5vdGhlclNldHRpbmc+CiAgIDwvRXJyb3I+"
      "CiAgIDxSZXF1ZXN0SWQ+Zm9vLWlkPC9SZXF1ZXN0SWQ+CjwvRXJyb3JSZXNwb25zZT4K";
  SetMockResponse(mockRs);

  GreetingWithErrorsRequest request;

  auto outcome = client.GreetingWithErrors(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
