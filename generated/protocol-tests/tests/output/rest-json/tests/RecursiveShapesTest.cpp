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

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body =
      "ewogICAgIm5lc3RlZCI6IHsKICAgICAgICAiZm9vIjogIkZvbzEiLAogICAgICAgICJuZXN0ZWQiOiB7CiAgICAgICAgICAgICJiYXIiOiAiQmFyMSIsCiAgICAgICAgICAg"
      "ICJyZWN1cnNpdmVNZW1iZXIiOiB7CiAgICAgICAgICAgICAgICAiZm9vIjogIkZvbzIiLAogICAgICAgICAgICAgICAgIm5lc3RlZCI6IHsKICAgICAgICAgICAgICAgICAg"
      "ICAiYmFyIjogIkJhcjIiCiAgICAgICAgICAgICAgICB9CiAgICAgICAgICAgIH0KICAgICAgICB9CiAgICB9Cn0=";
  SetMockResponse(mockRs);

  RecursiveShapesRequest request;

  auto outcome = client.RecursiveShapes(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const RecursiveShapesResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"nested":{"foo":"Foo1","nested":{"bar":"Bar1","recursiveMember":{"foo":"Foo2","nested":{"bar":"Bar2"}}}}} )" */
    {
      const RecursiveShapesInputOutputNested1& resultNested = result.GetNested();
      EXPECT_EQ(R"(Foo1)", resultNested.GetFoo());
      {
        const RecursiveShapesInputOutputNested2& resultNestedNested = resultNested.GetNested();
        EXPECT_EQ(R"(Bar1)", resultNestedNested.GetBar());
        {
          const RecursiveShapesInputOutputNested1& resultNestedNestedRecursiveMember = resultNestedNested.GetRecursiveMember();
          EXPECT_EQ(R"(Foo2)", resultNestedNestedRecursiveMember.GetFoo());
          {
            const RecursiveShapesInputOutputNested2& resultNestedNestedRecursiveMemberNested =
                resultNestedNestedRecursiveMember.GetNested();
            EXPECT_EQ(R"(Bar2)", resultNestedNestedRecursiveMemberNested.GetBar());
          }
        }
      }
    }
  });
}
