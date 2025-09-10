/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/RecursiveShapesInputOutputNested1.h>
#include <aws/rest-json-protocol/model/RecursiveShapesInputOutputNested2.h>
#include <aws/rest-json-protocol/model/RecursiveShapesRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using RecursiveShapes = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(RecursiveShapes, RestJsonRecursiveShapes) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

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
      "ewogICAgIm5lc3RlZCI6IHsKICAgICAgICAiZm9vIjogIkZvbzEiLAogICAgICAgICJuZXN0ZWQiOiB7CiAgICAgICAgICAgICJiYXIiOiAiQmFyMSIsCiAgICAgICAgICAg"
      "ICJyZWN1cnNpdmVNZW1iZXIiOiB7CiAgICAgICAgICAgICAgICAiZm9vIjogIkZvbzIiLAogICAgICAgICAgICAgICAgIm5lc3RlZCI6IHsKICAgICAgICAgICAgICAgICAg"
      "ICAiYmFyIjogIkJhcjIiCiAgICAgICAgICAgICAgICB9CiAgICAgICAgICAgIH0KICAgICAgICB9CiAgICB9Cn0=";
  expectedRq.uri = "/RecursiveShapes";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
