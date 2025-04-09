/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/RecursiveShapesRequest.h>

using RecursiveShapes = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(RecursiveShapes, RestJsonRecursiveShapes) {
  RestJsonProtocolClient client;
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
  AWS_ASSERT_SUCCESS(outcome);
}
