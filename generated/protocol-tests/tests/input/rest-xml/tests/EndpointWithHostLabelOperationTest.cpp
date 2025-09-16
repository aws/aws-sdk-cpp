/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/EndpointWithHostLabelOperationRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using EndpointWithHostLabelOperation = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(EndpointWithHostLabelOperation, RestXmlEndpointTraitWithHostLabel) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  EndpointWithHostLabelOperationRequest request;
  request.SetLabel(R"(bar)");

  auto outcome = client.EndpointWithHostLabelOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "PEVuZHBvaW50V2l0aEhvc3RMYWJlbE9wZXJhdGlvblJlcXVlc3Q+CiAgICA8bGFiZWw+"
      "YmFyPC9sYWJlbD4KPC9FbmRwb2ludFdpdGhIb3N0TGFiZWxPcGVyYXRpb25SZXF1ZXN0Pgo=";
  expectedRq.uri = "/EndpointWithHostLabelOperation";
  expectedRq.host = "foo.bar.example.com";
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
