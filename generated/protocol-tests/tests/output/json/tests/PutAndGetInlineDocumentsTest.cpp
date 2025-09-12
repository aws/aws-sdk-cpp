/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/json-protocol/JsonProtocolClient.h>
#include <aws/json-protocol/model/PutAndGetInlineDocumentsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using PutAndGetInlineDocuments = AWS_PROTOCOL_TEST_SUITE;
using JsonProtocolClient = Aws::JsonProtocol::JsonProtocolClient;
using namespace Aws::JsonProtocol::Model;

AWS_PROTOCOL_TEST(PutAndGetInlineDocuments, PutAndGetInlineDocumentsInput) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "ewogICAgImlubGluZURvY3VtZW50IjogeyJmb28iOiAiYmFyIn0KfQ==";
  SetMockResponse(mockRs);

  PutAndGetInlineDocumentsRequest request;

  auto outcome = client.PutAndGetInlineDocuments(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const PutAndGetInlineDocumentsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"inlineDocument":{"foo":"bar"}} )" */
    {
      const Aws::Utils::DocumentView& resultInlineDocument = result.GetInlineDocument();
      EXPECT_STREQ(R"j({"foo":"bar"})j", resultInlineDocument.WriteCompact().c_str());
    }
  });
}
