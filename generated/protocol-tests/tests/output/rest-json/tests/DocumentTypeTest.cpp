/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/DocumentTypeRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using DocumentType = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(DocumentType, DocumentOutput) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgInN0cmluZ1ZhbHVlIjogInN0cmluZyIsCiAgICAiZG9jdW1lbnRWYWx1ZSI6IHsKICAgICAgICAiZm9vIjogImJhciIKICAgIH0KfQ==";
  SetMockResponse(mockRs);

  DocumentTypeRequest request;

  auto outcome = client.DocumentType(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const DocumentTypeResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"stringValue":"string","documentValue":{"foo":"bar"}} )" */
    EXPECT_EQ(R"(string)", result.GetStringValue());
    {
      const Aws::Utils::DocumentView& resultDocumentValue = result.GetDocumentValue();
      EXPECT_STREQ(R"j({"foo":"bar"})j", resultDocumentValue.WriteCompact().c_str());
    }
  });
}

AWS_PROTOCOL_TEST(DocumentType, DocumentOutputString) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgInN0cmluZ1ZhbHVlIjogInN0cmluZyIsCiAgICAiZG9jdW1lbnRWYWx1ZSI6ICJoZWxsbyIKfQ==";
  SetMockResponse(mockRs);

  DocumentTypeRequest request;

  auto outcome = client.DocumentType(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const DocumentTypeResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"stringValue":"string","documentValue":"hello"} )" */
    EXPECT_EQ(R"(string)", result.GetStringValue());
    {
      const Aws::Utils::DocumentView& resultDocumentValue = result.GetDocumentValue();
      EXPECT_STREQ(R"j("hello")j", resultDocumentValue.WriteCompact().c_str());
    }
  });
}

AWS_PROTOCOL_TEST(DocumentType, DocumentOutputNumber) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgInN0cmluZ1ZhbHVlIjogInN0cmluZyIsCiAgICAiZG9jdW1lbnRWYWx1ZSI6IDEwCn0=";
  SetMockResponse(mockRs);

  DocumentTypeRequest request;

  auto outcome = client.DocumentType(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const DocumentTypeResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"stringValue":"string","documentValue":10} )" */
    EXPECT_EQ(R"(string)", result.GetStringValue());
    {
      const Aws::Utils::DocumentView& resultDocumentValue = result.GetDocumentValue();
      EXPECT_STREQ(R"j(10)j", resultDocumentValue.WriteCompact().c_str());
    }
  });
}

AWS_PROTOCOL_TEST(DocumentType, DocumentOutputBoolean) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgInN0cmluZ1ZhbHVlIjogInN0cmluZyIsCiAgICAiZG9jdW1lbnRWYWx1ZSI6IGZhbHNlCn0=";
  SetMockResponse(mockRs);

  DocumentTypeRequest request;

  auto outcome = client.DocumentType(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const DocumentTypeResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"stringValue":"string","documentValue":false} )" */
    EXPECT_EQ(R"(string)", result.GetStringValue());
    {
      const Aws::Utils::DocumentView& resultDocumentValue = result.GetDocumentValue();
      EXPECT_STREQ(R"j(false)j", resultDocumentValue.WriteCompact().c_str());
    }
  });
}

AWS_PROTOCOL_TEST(DocumentType, DocumentOutputArray) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgInN0cmluZ1ZhbHVlIjogInN0cmluZyIsCiAgICAiZG9jdW1lbnRWYWx1ZSI6IFsKICAgICAgICB0cnVlLAogICAgICAgIGZhbHNlCiAgICBdCn0=";
  SetMockResponse(mockRs);

  DocumentTypeRequest request;

  auto outcome = client.DocumentType(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const DocumentTypeResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"stringValue":"string","documentValue":[true,false]} )" */
    EXPECT_EQ(R"(string)", result.GetStringValue());
    {
      const Aws::Utils::DocumentView& resultDocumentValue = result.GetDocumentValue();
      EXPECT_STREQ(R"j([true,false])j", resultDocumentValue.WriteCompact().c_str());
    }
  });
}
