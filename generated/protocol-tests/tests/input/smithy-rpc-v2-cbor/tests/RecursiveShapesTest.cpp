/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rpcv2protocol/RpcV2ProtocolClient.h>
#include <aws/rpcv2protocol/model/RecursiveShapesInputOutputNested1.h>
#include <aws/rpcv2protocol/model/RecursiveShapesInputOutputNested2.h>
#include <aws/rpcv2protocol/model/RecursiveShapesRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using RecursiveShapes = AWS_PROTOCOL_TEST_SUITE;
using RpcV2ProtocolClient = Aws::RpcV2Protocol::RpcV2ProtocolClient;
using namespace Aws::RpcV2Protocol::Model;

AWS_PROTOCOL_TEST(RecursiveShapes, RpcV2CborRecursiveShapes) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  // Cbor specific
  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.body = "v2ZuZXN0ZWS/Y2Zvb2RGb28xZm5lc3RlZL9jYmFyZEJhcjFvcmVjdXJzaXZlTWVtYmVyv2Nmb29kRm9vMmZuZXN0ZWS/Y2JhcmRCYXIy//////8=";
  SetMockResponse(mockRs);

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
  expectedRq.method = "POST";
  expectedRq.body = "v2ZuZXN0ZWS/Y2Zvb2RGb28xZm5lc3RlZL9jYmFyZEJhcjFvcmVjdXJzaXZlTWVtYmVyv2Nmb29kRm9vMmZuZXN0ZWS/Y2JhcmRCYXIy//////8=";
  expectedRq.uri = "/service/RpcV2Protocol/operation/RecursiveShapes";
  expectedRq.headers = {{"Accept", R"(application/cbor)"}, {"Content-Type", R"(application/cbor)"}, {"smithy-protocol", R"(rpc-v2-cbor)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const RecursiveShapesResult& result = outcome.GetResult();
  ValidateRequestSent(expectedRq, [&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
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
