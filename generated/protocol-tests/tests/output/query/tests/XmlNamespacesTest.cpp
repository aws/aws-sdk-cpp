/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/XmlNamespacesRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlNamespaces = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(XmlNamespaces, QueryXmlNamespaces) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body =
      "PFhtbE5hbWVzcGFjZXNSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogICAgPFhtbE5hbWVzcGFjZXNSZXN1bHQ+"
      "CiAgICAgICAgPG5lc3RlZD4KICAgICAgICAgICAgPGZvbyB4bWxuczpiYXo9Imh0dHA6Ly9iYXouY29tIj5Gb288L2Zvbz4KICAgICAgICAgICAgPHZhbHVlcyB4bWxucz0i"
      "aHR0cDovL3F1eC5jb20iPgogICAgICAgICAgICAgICAgPG1lbWJlciB4bWxucz0iaHR0cDovL2J1eC5jb20iPkJhcjwvbWVtYmVyPgogICAgICAgICAgICAgICAgPG1lbWJl"
      "ciB4bWxucz0iaHR0cDovL2J1eC5jb20iPkJhejwvbWVtYmVyPgogICAgICAgICAgICA8L3ZhbHVlcz4KICAgICAgICA8L25lc3RlZD4KICAgIDwvWG1sTmFtZXNwYWNlc1Jl"
      "c3VsdD4KPC9YbWxOYW1lc3BhY2VzUmVzcG9uc2U+Cg==";
  SetMockResponse(mockRs);

  XmlNamespacesRequest request;

  auto outcome = client.XmlNamespaces(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlNamespacesResult& result = outcome.GetResult();
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
