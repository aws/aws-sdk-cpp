/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/DocumentTypeAsPayloadRequest.h>

using DocumentTypeAsPayload = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(DocumentTypeAsPayload, DocumentTypeAsPayloadOutput) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgImZvbyI6ICJiYXIiCn0=";
  SetMockResponse(mockRs);

  DocumentTypeAsPayloadRequest request;

  auto outcome = client.DocumentTypeAsPayload(request);
  ValidateRequestSent();
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const DocumentTypeAsPayloadResult& result = outcome.GetResult();
  /* expectedResult = R"( {"documentValue":{"foo":"bar"}} )" */
  {
    const Aws::Utils::DocumentView& resultDocumentValue = result.GetDocumentValue();
    EXPECT_STREQ(R"j({"foo":"bar"})j", resultDocumentValue.WriteCompact().c_str());
  }
}

AWS_PROTOCOL_TEST(DocumentTypeAsPayload, DocumentTypeAsPayloadOutputString) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ImhlbGxvIg==";
  SetMockResponse(mockRs);

  DocumentTypeAsPayloadRequest request;

  auto outcome = client.DocumentTypeAsPayload(request);
  ValidateRequestSent();
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const DocumentTypeAsPayloadResult& result = outcome.GetResult();
  /* expectedResult = R"( {"documentValue":"hello"} )" */
  {
    const Aws::Utils::DocumentView& resultDocumentValue = result.GetDocumentValue();
    EXPECT_STREQ(R"j("hello")j", resultDocumentValue.WriteCompact().c_str());
  }
}
