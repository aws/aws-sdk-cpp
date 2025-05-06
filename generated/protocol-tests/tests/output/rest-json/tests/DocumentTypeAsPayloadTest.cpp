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
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
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
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
