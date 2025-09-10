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

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body =
      "PFJlY3Vyc2l2ZVNoYXBlc1Jlc3BvbnNlPgogICAgPG5lc3RlZD4KICAgICAgICA8Zm9vPkZvbzE8L2Zvbz4KICAgICAgICA8bmVzdGVkPgogICAgICAgICAgICA8YmFyPkJh"
      "cjE8L2Jhcj4KICAgICAgICAgICAgPHJlY3Vyc2l2ZU1lbWJlcj4KICAgICAgICAgICAgICAgIDxmb28+"
      "Rm9vMjwvZm9vPgogICAgICAgICAgICAgICAgPG5lc3RlZD4KICAgICAgICAgICAgICAgICAgICA8YmFyPkJhcjI8L2Jhcj4KICAgICAgICAgICAgICAgIDwvbmVzdGVkPgog"
      "ICAgICAgICAgICA8L3JlY3Vyc2l2ZU1lbWJlcj4KICAgICAgICA8L25lc3RlZD4KICAgIDwvbmVzdGVkPgo8L1JlY3Vyc2l2ZVNoYXBlc1Jlc3BvbnNlPgo=";
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
