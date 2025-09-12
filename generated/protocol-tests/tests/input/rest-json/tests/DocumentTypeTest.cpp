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

AWS_PROTOCOL_TEST(DocumentType, DocumentTypeInputWithObject) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  DocumentTypeRequest request;
  request.SetStringValue(R"(string)");
  {
    Aws::Utils::Document requestDocumentValue(R"j({"foo":"bar"})j");
    request.SetDocumentValue(requestDocumentValue);
  }

  auto outcome = client.DocumentType(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body = "ewogICAgInN0cmluZ1ZhbHVlIjogInN0cmluZyIsCiAgICAiZG9jdW1lbnRWYWx1ZSI6IHsKICAgICAgICAiZm9vIjogImJhciIKICAgIH0KfQ==";
  expectedRq.uri = "/DocumentType";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(DocumentType, DocumentInputWithString) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  DocumentTypeRequest request;
  request.SetStringValue(R"(string)");
  {
    Aws::Utils::Document requestDocumentValue(R"j("hello")j");
    request.SetDocumentValue(requestDocumentValue);
  }

  auto outcome = client.DocumentType(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body = "ewogICAgInN0cmluZ1ZhbHVlIjogInN0cmluZyIsCiAgICAiZG9jdW1lbnRWYWx1ZSI6ICJoZWxsbyIKfQ==";
  expectedRq.uri = "/DocumentType";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(DocumentType, DocumentInputWithNumber) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  DocumentTypeRequest request;
  request.SetStringValue(R"(string)");
  {
    Aws::Utils::Document requestDocumentValue(R"j(10)j");
    request.SetDocumentValue(requestDocumentValue);
  }

  auto outcome = client.DocumentType(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body = "ewogICAgInN0cmluZ1ZhbHVlIjogInN0cmluZyIsCiAgICAiZG9jdW1lbnRWYWx1ZSI6IDEwCn0=";
  expectedRq.uri = "/DocumentType";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(DocumentType, DocumentInputWithBoolean) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  DocumentTypeRequest request;
  request.SetStringValue(R"(string)");
  {
    Aws::Utils::Document requestDocumentValue(R"j(true)j");
    request.SetDocumentValue(requestDocumentValue);
  }

  auto outcome = client.DocumentType(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body = "ewogICAgInN0cmluZ1ZhbHVlIjogInN0cmluZyIsCiAgICAiZG9jdW1lbnRWYWx1ZSI6IHRydWUKfQ==";
  expectedRq.uri = "/DocumentType";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(DocumentType, DocumentInputWithList) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  DocumentTypeRequest request;
  request.SetStringValue(R"(string)");
  {
    Aws::Utils::Document requestDocumentValue(R"j([true,"hi",[1,2],{"foo":{"baz":[3,4]}}])j");
    request.SetDocumentValue(requestDocumentValue);
  }

  auto outcome = client.DocumentType(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body =
      "ewogICAgInN0cmluZ1ZhbHVlIjogInN0cmluZyIsCiAgICAiZG9jdW1lbnRWYWx1ZSI6IFsKICAgICAgICB0cnVlLAogICAgICAgICJoaSIsCiAgICAgICAgWwogICAgICAg"
      "ICAgICAxLAogICAgICAgICAgICAyCiAgICAgICAgXSwKICAgICAgICB7CiAgICAgICAgICAgICJmb28iOiB7CiAgICAgICAgICAgICAgICAiYmF6IjogWwogICAgICAgICAg"
      "ICAgICAgICAgIDMsCiAgICAgICAgICAgICAgICAgICAgNAogICAgICAgICAgICAgICAgXQogICAgICAgICAgICB9CiAgICAgICAgfQogICAgXQp9";
  expectedRq.uri = "/DocumentType";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
