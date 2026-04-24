/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/ec2-protocol/EC2ProtocolClient.h>
#include <aws/ec2-protocol/model/XmlNamespacesRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlNamespaces = AWS_PROTOCOL_TEST_SUITE;
using EC2ProtocolClient = Aws::EC2Protocol::EC2ProtocolClient;
using namespace Aws::EC2Protocol::Model;

AWS_PROTOCOL_TEST(XmlNamespaces, Ec2XmlNamespaces) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml;charset=UTF-8)"}};
  mockRs.body =
      "PFhtbE5hbWVzcGFjZXNSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogICAgPG5lc3RlZD4KICAgICAgICA8Zm9vIHhtbG5zOmJhej0iaHR0cDovL2Jh"
      "ei5jb20iPkZvbzwvZm9vPgogICAgICAgIDx2YWx1ZXMgeG1sbnM9Imh0dHA6Ly9xdXguY29tIj4KICAgICAgICAgICAgPG1lbWJlciB4bWxucz0iaHR0cDovL2J1eC5jb20i"
      "PkJhcjwvbWVtYmVyPgogICAgICAgICAgICA8bWVtYmVyIHhtbG5zPSJodHRwOi8vYnV4LmNvbSI+QmF6PC9tZW1iZXI+CiAgICAgICAgPC92YWx1ZXM+"
      "CiAgICA8L25lc3RlZD4KICAgIDxyZXF1ZXN0SWQ+cmVxdWVzdGlkPC9yZXF1ZXN0SWQ+CjwvWG1sTmFtZXNwYWNlc1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  XmlNamespacesRequest request;

  auto outcome = client.XmlNamespaces(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlNamespacesResponse& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"nested":{"foo":"Foo","values":["Bar","Baz"]}} )" */
    {
      const XmlNamespaceNested& resultNested = result.GetNested();
      EXPECT_EQ(R"(Foo)", resultNested.GetFoo());
      const Aws::Vector<Aws::String>& resultNestedValuesItem = resultNested.GetValues();
      EXPECT_EQ(2U, resultNestedValuesItem.size());
      EXPECT_EQ(R"(Bar)", resultNestedValuesItem.at(0));
      EXPECT_EQ(R"(Baz)", resultNestedValuesItem.at(1));
    }
  });
}
