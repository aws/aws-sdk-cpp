/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/ec2-protocol/EC2ProtocolClient.h>
#include <aws/ec2-protocol/model/RecursiveXmlShapesOutputNested1.h>
#include <aws/ec2-protocol/model/RecursiveXmlShapesOutputNested2.h>
#include <aws/ec2-protocol/model/RecursiveXmlShapesRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using RecursiveXmlShapes = AWS_PROTOCOL_TEST_SUITE;
using EC2ProtocolClient = Aws::EC2Protocol::EC2ProtocolClient;
using namespace Aws::EC2Protocol::Model;

AWS_PROTOCOL_TEST(RecursiveXmlShapes, Ec2RecursiveShapes) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml;charset=UTF-8)"}};
  mockRs.body =
      "PFJlY3Vyc2l2ZVhtbFNoYXBlc1Jlc3BvbnNlIHhtbG5zPSJodHRwczovL2V4YW1wbGUuY29tLyI+CiAgICA8bmVzdGVkPgogICAgICAgIDxmb28+"
      "Rm9vMTwvZm9vPgogICAgICAgIDxuZXN0ZWQ+CiAgICAgICAgICAgIDxiYXI+"
      "QmFyMTwvYmFyPgogICAgICAgICAgICA8cmVjdXJzaXZlTWVtYmVyPgogICAgICAgICAgICAgICAgPGZvbz5Gb28yPC9mb28+"
      "CiAgICAgICAgICAgICAgICA8bmVzdGVkPgogICAgICAgICAgICAgICAgICAgIDxiYXI+QmFyMjwvYmFyPgogICAgICAgICAgICAgICAgPC9uZXN0ZWQ+"
      "CiAgICAgICAgICAgIDwvcmVjdXJzaXZlTWVtYmVyPgogICAgICAgIDwvbmVzdGVkPgogICAgPC9uZXN0ZWQ+"
      "CiAgICA8cmVxdWVzdElkPnJlcXVlc3RpZDwvcmVxdWVzdElkPgo8L1JlY3Vyc2l2ZVhtbFNoYXBlc1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  RecursiveXmlShapesRequest request;

  auto outcome = client.RecursiveXmlShapes(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const RecursiveXmlShapesResponse& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"nested":{"foo":"Foo1","nested":{"bar":"Bar1","recursiveMember":{"foo":"Foo2","nested":{"bar":"Bar2"}}}}} )" */
    {
      const RecursiveXmlShapesOutputNested1& resultNested = result.GetNested();
      EXPECT_EQ(R"(Foo1)", resultNested.GetFoo());
      {
        const RecursiveXmlShapesOutputNested2& resultNestedNested = resultNested.GetNested();
        EXPECT_EQ(R"(Bar1)", resultNestedNested.GetBar());
        {
          const RecursiveXmlShapesOutputNested1& resultNestedNestedRecursiveMember = resultNestedNested.GetRecursiveMember();
          EXPECT_EQ(R"(Foo2)", resultNestedNestedRecursiveMember.GetFoo());
          {
            const RecursiveXmlShapesOutputNested2& resultNestedNestedRecursiveMemberNested = resultNestedNestedRecursiveMember.GetNested();
            EXPECT_EQ(R"(Bar2)", resultNestedNestedRecursiveMemberNested.GetBar());
          }
        }
      }
    }
  });
}
