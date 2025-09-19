/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/RecursiveShapesInputOutputNested1.h>
#include <aws/rest-xml-protocol/model/RecursiveShapesInputOutputNested2.h>
#include <aws/rest-xml-protocol/model/RecursiveShapesRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using RecursiveShapes = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(RecursiveShapes, RecursiveShapes) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  RecursiveShapesRequest request;
  {
    RecursiveShapesInputOutputNested1 requestNested;
    requestNested.SetFoo(R"(Foo1)");
    {
      RecursiveShapesInputOutputNested2 requestNestedNested;
      requestNestedNested.SetBar(R"(Bar1)");
      {
        RecursiveShapesInputOutputNested1 requestNestedNestedRecursiveMember;
        requestNestedNestedRecursiveMember.SetFoo(R"(Foo2)");
        {
          RecursiveShapesInputOutputNested2 requestNestedNestedRecursiveMemberNested;
          requestNestedNestedRecursiveMemberNested.SetBar(R"(Bar2)");
          requestNestedNestedRecursiveMember.SetNested(requestNestedNestedRecursiveMemberNested);
        }
        requestNestedNested.SetRecursiveMember(requestNestedNestedRecursiveMember);
      }
      requestNested.SetNested(requestNestedNested);
    }
    request.SetNested(requestNested);
  }

  auto outcome = client.RecursiveShapes(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body =
      "PFJlY3Vyc2l2ZVNoYXBlc1JlcXVlc3Q+CiAgICA8bmVzdGVkPgogICAgICAgIDxmb28+Rm9vMTwvZm9vPgogICAgICAgIDxuZXN0ZWQ+CiAgICAgICAgICAgIDxiYXI+"
      "QmFyMTwvYmFyPgogICAgICAgICAgICA8cmVjdXJzaXZlTWVtYmVyPgogICAgICAgICAgICAgICAgPGZvbz5Gb28yPC9mb28+"
      "CiAgICAgICAgICAgICAgICA8bmVzdGVkPgogICAgICAgICAgICAgICAgICAgIDxiYXI+QmFyMjwvYmFyPgogICAgICAgICAgICAgICAgPC9uZXN0ZWQ+"
      "CiAgICAgICAgICAgIDwvcmVjdXJzaXZlTWVtYmVyPgogICAgICAgIDwvbmVzdGVkPgogICAgPC9uZXN0ZWQ+CjwvUmVjdXJzaXZlU2hhcGVzUmVxdWVzdD4K";
  expectedRq.uri = "/RecursiveShapes";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
