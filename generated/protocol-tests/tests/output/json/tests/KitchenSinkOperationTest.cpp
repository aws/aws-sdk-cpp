/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/json-protocol/JsonProtocolClient.h>
#include <aws/json-protocol/model/KitchenSinkOperationRequest.h>

using KitchenSinkOperation = AWS_PROTOCOL_TEST_SUITE;
using JsonProtocolClient = Aws::JsonProtocol::JsonProtocolClient;
using namespace Aws::JsonProtocol::Model;

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_operations_with_empty_json_bodies) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "e30=";
  SetMockResponse(mockRs);

  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_string_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "eyJTdHJpbmciOiJzdHJpbmctdmFsdWUifQ==";
  SetMockResponse(mockRs);

  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_integer_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "eyJJbnRlZ2VyIjoxMjM0fQ==";
  SetMockResponse(mockRs);

  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_long_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "eyJMb25nIjoxMjM0NTY3ODkwMTIzNDU2Nzg5fQ==";
  SetMockResponse(mockRs);

  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_float_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "eyJGbG9hdCI6MTIzNC41fQ==";
  SetMockResponse(mockRs);

  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_double_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "eyJEb3VibGUiOjEyMzQ1Njc4OS4xMjM0NTY3OX0=";
  SetMockResponse(mockRs);

  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_boolean_shapes_true) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "eyJCb29sZWFuIjp0cnVlfQ==";
  SetMockResponse(mockRs);

  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_boolean_false) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "eyJCb29sZWFuIjpmYWxzZX0=";
  SetMockResponse(mockRs);

  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_blob_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "eyJCbG9iIjoiWW1sdVlYSjVMWFpoYkhWbCJ9";
  SetMockResponse(mockRs);

  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_timestamp_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "eyJUaW1lc3RhbXAiOjk0Njg0NTI5Nn0=";
  SetMockResponse(mockRs);

  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_iso8601_timestamps) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "eyJJc284NjAxVGltZXN0YW1wIjoiMjAwMC0wMS0wMlQyMDozNDo1NloifQ==";
  SetMockResponse(mockRs);

  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_httpdate_timestamps) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "eyJIdHRwZGF0ZVRpbWVzdGFtcCI6IlN1biwgMDIgSmFuIDIwMDAgMjA6MzQ6NTYgR01UIn0=";
  SetMockResponse(mockRs);

  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_list_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "eyJMaXN0T2ZTdHJpbmdzIjpbImFiYyIsIm1ubyIsInh5eiJdfQ==";
  SetMockResponse(mockRs);

  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_list_of_map_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "eyJMaXN0T2ZNYXBzT2ZTdHJpbmdzIjpbeyJzaXplIjoibGFyZ2UifSx7ImNvbG9yIjoicmVkIn1dfQ==";
  SetMockResponse(mockRs);

  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_list_of_list_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "eyJMaXN0T2ZMaXN0cyI6W1siYWJjIiwibW5vIiwieHl6Il0sWyJoamsiLCJxcnMiLCJ0dXYiXV19";
  SetMockResponse(mockRs);

  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_list_of_structure_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "eyJMaXN0T2ZTdHJ1Y3RzIjpbeyJWYWx1ZSI6InZhbHVlLTEifSx7IlZhbHVlIjoidmFsdWUtMiJ9XX0=";
  SetMockResponse(mockRs);

  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_list_of_recursive_structure_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "eyJSZWN1cnNpdmVMaXN0IjpbeyJSZWN1cnNpdmVMaXN0IjpbeyJSZWN1cnNpdmVMaXN0IjpbeyJTdHJpbmciOiJ2YWx1ZSJ9XX1dfV19";
  SetMockResponse(mockRs);

  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_map_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "eyJNYXBPZlN0cmluZ3MiOnsic2l6ZSI6ImxhcmdlIiwiY29sb3IiOiJyZWQifX0=";
  SetMockResponse(mockRs);

  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_map_of_list_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "eyJNYXBPZkxpc3RzT2ZTdHJpbmdzIjp7InNpemVzIjpbImxhcmdlIiwic21hbGwiXSwiY29sb3JzIjpbInJlZCIsImdyZWVuIl19fQ==";
  SetMockResponse(mockRs);

  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_map_of_map_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "eyJNYXBPZk1hcHMiOnsic2l6ZXMiOnsibGFyZ2UiOiJMIiwibWVkaXVtIjoiTSJ9LCJjb2xvcnMiOnsicmVkIjoiUiIsImJsdWUiOiJCIn19fQ==";
  SetMockResponse(mockRs);

  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_map_of_structure_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "eyJNYXBPZlN0cnVjdHMiOnsic2l6ZSI6eyJWYWx1ZSI6InNtYWxsIn0sImNvbG9yIjp7IlZhbHVlIjoicmVkIn19fQ==";
  SetMockResponse(mockRs);

  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_map_of_recursive_structure_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "eyJSZWN1cnNpdmVNYXAiOnsia2V5LTEiOnsiUmVjdXJzaXZlTWFwIjp7ImtleS0yIjp7IlJlY3Vyc2l2ZU1hcCI6eyJrZXktMyI6eyJTdHJpbmciOiJ2YWx1ZSJ9fX19fX19";
  SetMockResponse(mockRs);

  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_the_request_id_from_the_response) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amzn-Requestid", R"(amazon-uniq-request-id)"}};
  mockRs.body = "e30=";
  SetMockResponse(mockRs);

  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
