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

  SetMockResponse();

  PutAndGetInlineDocumentsRequest request;
  {
    Aws::Utils::Document requestInlineDocument(R"j({"foo":"bar"})j");
    request.SetInlineDocument(requestInlineDocument);
  }

  auto outcome = client.PutAndGetInlineDocuments(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "ewogICAgImlubGluZURvY3VtZW50IjogeyJmb28iOiAiYmFyIn0KfQ==";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.PutAndGetInlineDocuments)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
