/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/DocumentTypeAsMapValueRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using DocumentTypeAsMapValue = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(DocumentTypeAsMapValue, DocumentTypeAsMapValueOutput) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body =
      "ewogICAgImRvY1ZhbHVlZE1hcCI6IHsKICAgICAgICAiZm9vIjogeyAiZiI6IDEsICJvIjogMiB9LAogICAgICAgICJiYXIiOiBbICJiIiwgImEiLCAiciIgXSwKICAgICAg"
      "ICAiYmF6IjogIkJBWiIKICAgIH0KfQ==";
  SetMockResponse(mockRs);

  DocumentTypeAsMapValueRequest request;

  auto outcome = client.DocumentTypeAsMapValue(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const DocumentTypeAsMapValueResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"docValuedMap":{"foo":{"f":1,"o":2},"bar":["b","a","r"],"baz":"BAZ"}} )" */
    const Aws::Map<Aws::String, Aws::Utils::Document>& resultDocValuedMap = result.GetDocValuedMap();
    EXPECT_EQ(3U, resultDocValuedMap.size());
    EXPECT_STREQ(R"j({"f":1,"o":2})j", resultDocValuedMap.at("foo").View().WriteCompact().c_str());
    EXPECT_STREQ(R"j(["b","a","r"])j", resultDocValuedMap.at("bar").View().WriteCompact().c_str());
    EXPECT_STREQ(R"j("BAZ")j", resultDocValuedMap.at("baz").View().WriteCompact().c_str());
  });
}
