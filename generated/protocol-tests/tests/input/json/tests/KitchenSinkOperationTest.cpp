/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/json-protocol/JsonProtocolClient.h>
#include <aws/json-protocol/model/KitchenSinkOperationRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using KitchenSinkOperation = AWS_PROTOCOL_TEST_SUITE;
using JsonProtocolClient = Aws::JsonProtocol::JsonProtocolClient;
using namespace Aws::JsonProtocol::Model;

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_string_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  KitchenSinkOperationRequest request;
  request.SetString(R"(abc xyz)");

  auto outcome = client.KitchenSinkOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "eyJTdHJpbmciOiJhYmMgeHl6In0=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.KitchenSinkOperation)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_string_shapes_with_jsonvalue_trait) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  KitchenSinkOperationRequest request;
  request.SetJsonValue(
      R"({"string":"value","number":1234.5,"boolTrue":true,"boolFalse":false,"array":[1,2,3,4],"object":{"key":"value"},"null":null})");

  auto outcome = client.KitchenSinkOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "eyJKc29uVmFsdWUiOiJ7XCJzdHJpbmdcIjpcInZhbHVlXCIsXCJudW1iZXJcIjoxMjM0LjUsXCJib29sVHJ1ZVwiOnRydWUsXCJib29sRmFsc2VcIjpmYWxzZSxcImFycmF5"
      "XCI6WzEsMiwzLDRdLFwib2JqZWN0XCI6e1wia2V5XCI6XCJ2YWx1ZVwifSxcIm51bGxcIjpudWxsfSJ9";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.KitchenSinkOperation)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_integer_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  KitchenSinkOperationRequest request;
  request.SetInteger(1234);

  auto outcome = client.KitchenSinkOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "eyJJbnRlZ2VyIjoxMjM0fQ==";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.KitchenSinkOperation)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_long_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  KitchenSinkOperationRequest request;
  request.SetLong(999999999999);

  auto outcome = client.KitchenSinkOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "eyJMb25nIjo5OTk5OTk5OTk5OTl9";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.KitchenSinkOperation)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_float_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  KitchenSinkOperationRequest request;
  request.SetFloat(1234.5);

  auto outcome = client.KitchenSinkOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "eyJGbG9hdCI6MTIzNC41fQ==";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.KitchenSinkOperation)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_double_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  KitchenSinkOperationRequest request;
  request.SetDouble(1234.5);

  auto outcome = client.KitchenSinkOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "eyJEb3VibGUiOjEyMzQuNX0=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.KitchenSinkOperation)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_blob_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  KitchenSinkOperationRequest request;
  request.SetBlob(Aws::String(R"(binary-value)"));

  auto outcome = client.KitchenSinkOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "eyJCbG9iIjoiWW1sdVlYSjVMWFpoYkhWbCJ9";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.KitchenSinkOperation)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_boolean_shapes_true) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  KitchenSinkOperationRequest request;
  request.SetBoolean(true);

  auto outcome = client.KitchenSinkOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "eyJCb29sZWFuIjp0cnVlfQ==";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.KitchenSinkOperation)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_boolean_shapes_false) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  KitchenSinkOperationRequest request;
  request.SetBoolean(false);

  auto outcome = client.KitchenSinkOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "eyJCb29sZWFuIjpmYWxzZX0=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.KitchenSinkOperation)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_timestamp_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  KitchenSinkOperationRequest request;
  request.SetTimestamp(Aws::Utils::DateTime(static_cast<int64_t>(946845296)));

  auto outcome = client.KitchenSinkOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "eyJUaW1lc3RhbXAiOjk0Njg0NTI5Nn0=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.KitchenSinkOperation)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_timestamp_shapes_with_iso8601_timestampformat) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  KitchenSinkOperationRequest request;
  request.SetIso8601Timestamp(Aws::Utils::DateTime(static_cast<int64_t>(946845296)));

  auto outcome = client.KitchenSinkOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "eyJJc284NjAxVGltZXN0YW1wIjoiMjAwMC0wMS0wMlQyMDozNDo1NloifQ==";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.KitchenSinkOperation)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_timestamp_shapes_with_httpdate_timestampformat) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  KitchenSinkOperationRequest request;
  request.SetHttpdateTimestamp(Aws::Utils::DateTime(static_cast<int64_t>(946845296)));

  auto outcome = client.KitchenSinkOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "eyJIdHRwZGF0ZVRpbWVzdGFtcCI6IlN1biwgMDIgSmFuIDIwMDAgMjA6MzQ6NTYgR01UIn0=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.KitchenSinkOperation)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_timestamp_shapes_with_unixtimestamp_timestampformat) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  KitchenSinkOperationRequest request;
  request.SetUnixTimestamp(Aws::Utils::DateTime(static_cast<int64_t>(946845296)));

  auto outcome = client.KitchenSinkOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "eyJVbml4VGltZXN0YW1wIjo5NDY4NDUyOTZ9";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.KitchenSinkOperation)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_list_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  KitchenSinkOperationRequest request;
  request.SetListOfStrings({R"(abc)", R"(mno)", R"(xyz)"});

  auto outcome = client.KitchenSinkOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "eyJMaXN0T2ZTdHJpbmdzIjpbImFiYyIsIm1ubyIsInh5eiJdfQ==";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.KitchenSinkOperation)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_empty_list_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  KitchenSinkOperationRequest request;
  request.SetListOfStrings({});

  auto outcome = client.KitchenSinkOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "eyJMaXN0T2ZTdHJpbmdzIjpbXX0=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.KitchenSinkOperation)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_list_of_map_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  KitchenSinkOperationRequest request;
  {
    Aws::Map<Aws::String, Aws::String> requestListOfMapsOfStringsItem;
    requestListOfMapsOfStringsItem["foo"] = R"(bar)";
    request.AddListOfMapsOfStrings(requestListOfMapsOfStringsItem);
  }
  {
    Aws::Map<Aws::String, Aws::String> requestListOfMapsOfStringsItem;
    requestListOfMapsOfStringsItem["abc"] = R"(xyz)";
    request.AddListOfMapsOfStrings(requestListOfMapsOfStringsItem);
  }
  {
    Aws::Map<Aws::String, Aws::String> requestListOfMapsOfStringsItem;
    requestListOfMapsOfStringsItem["red"] = R"(blue)";
    request.AddListOfMapsOfStrings(requestListOfMapsOfStringsItem);
  }

  auto outcome = client.KitchenSinkOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "eyJMaXN0T2ZNYXBzT2ZTdHJpbmdzIjpbeyJmb28iOiJiYXIifSx7ImFiYyI6Inh5eiJ9LHsicmVkIjoiYmx1ZSJ9XX0=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.KitchenSinkOperation)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_list_of_structure_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  KitchenSinkOperationRequest request;
  {
    SimpleStruct requestListOfStructsItem;
    requestListOfStructsItem.SetValue(R"(abc)");
    request.AddListOfStructs(requestListOfStructsItem);
  }
  {
    SimpleStruct requestListOfStructsItem;
    requestListOfStructsItem.SetValue(R"(mno)");
    request.AddListOfStructs(requestListOfStructsItem);
  }
  {
    SimpleStruct requestListOfStructsItem;
    requestListOfStructsItem.SetValue(R"(xyz)");
    request.AddListOfStructs(requestListOfStructsItem);
  }

  auto outcome = client.KitchenSinkOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "eyJMaXN0T2ZTdHJ1Y3RzIjpbeyJWYWx1ZSI6ImFiYyJ9LHsiVmFsdWUiOiJtbm8ifSx7IlZhbHVlIjoieHl6In1dfQ==";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.KitchenSinkOperation)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_list_of_recursive_structure_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  KitchenSinkOperationRequest request;
  {
    KitchenSink requestRecursiveListItem;
    {
      KitchenSink requestRecursiveListItemRecursiveListItem;
      {
        KitchenSink requestRecursiveListItemRecursiveListItemRecursiveListItem;
        requestRecursiveListItemRecursiveListItemRecursiveListItem.SetInteger(123);
        requestRecursiveListItemRecursiveListItem.AddRecursiveList(requestRecursiveListItemRecursiveListItemRecursiveListItem);
      }
      requestRecursiveListItem.AddRecursiveList(requestRecursiveListItemRecursiveListItem);
    }
    request.AddRecursiveList(requestRecursiveListItem);
  }

  auto outcome = client.KitchenSinkOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "eyJSZWN1cnNpdmVMaXN0IjpbeyJSZWN1cnNpdmVMaXN0IjpbeyJSZWN1cnNpdmVMaXN0IjpbeyJJbnRlZ2VyIjoxMjN9XX1dfV19";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.KitchenSinkOperation)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_map_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  KitchenSinkOperationRequest request;
  request.SetMapOfStrings({{"abc", R"(xyz)"}, {"mno", R"(hjk)"}});

  auto outcome = client.KitchenSinkOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "eyJNYXBPZlN0cmluZ3MiOnsiYWJjIjoieHl6IiwibW5vIjoiaGprIn19";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.KitchenSinkOperation)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_empty_map_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  KitchenSinkOperationRequest request;
  request.SetMapOfStrings({});

  auto outcome = client.KitchenSinkOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "eyJNYXBPZlN0cmluZ3MiOnt9fQ==";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.KitchenSinkOperation)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_map_of_list_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  KitchenSinkOperationRequest request;
  request.SetMapOfListsOfStrings({{"abc", {R"(abc)", R"(xyz)"}}, {"mno", {R"(xyz)", R"(abc)"}}});

  auto outcome = client.KitchenSinkOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "eyJNYXBPZkxpc3RzT2ZTdHJpbmdzIjp7ImFiYyI6WyJhYmMiLCJ4eXoiXSwibW5vIjpbInh5eiIsImFiYyJdfX0=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.KitchenSinkOperation)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_map_of_structure_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  KitchenSinkOperationRequest request;
  {
    SimpleStruct requestMapOfStructsItem;
    requestMapOfStructsItem.SetValue(R"(value-1)");
    request.AddMapOfStructs("key1", requestMapOfStructsItem);
  }
  {
    SimpleStruct requestMapOfStructsItem;
    requestMapOfStructsItem.SetValue(R"(value-2)");
    request.AddMapOfStructs("key2", requestMapOfStructsItem);
  }

  auto outcome = client.KitchenSinkOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "eyJNYXBPZlN0cnVjdHMiOnsia2V5MSI6eyJWYWx1ZSI6InZhbHVlLTEifSwia2V5MiI6eyJWYWx1ZSI6InZhbHVlLTIifX19";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.KitchenSinkOperation)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_map_of_recursive_structure_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  KitchenSinkOperationRequest request;
  {
    KitchenSink requestRecursiveMapItem;
    {
      KitchenSink requestRecursiveMapItemRecursiveMapItem;
      {
        KitchenSink requestRecursiveMapItemRecursiveMapItemRecursiveMapItem;
        requestRecursiveMapItemRecursiveMapItemRecursiveMapItem.SetBoolean(false);
        requestRecursiveMapItemRecursiveMapItem.AddRecursiveMap("key3", requestRecursiveMapItemRecursiveMapItemRecursiveMapItem);
      }
      requestRecursiveMapItem.AddRecursiveMap("key2", requestRecursiveMapItemRecursiveMapItem);
    }
    request.AddRecursiveMap("key1", requestRecursiveMapItem);
  }

  auto outcome = client.KitchenSinkOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "eyJSZWN1cnNpdmVNYXAiOnsia2V5MSI6eyJSZWN1cnNpdmVNYXAiOnsia2V5MiI6eyJSZWN1cnNpdmVNYXAiOnsia2V5MyI6eyJCb29sZWFuIjpmYWxzZX19fX19fX0=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.KitchenSinkOperation)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_structure_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  KitchenSinkOperationRequest request;
  {
    SimpleStruct requestSimpleStruct;
    requestSimpleStruct.SetValue(R"(abc)");
    request.SetSimpleStruct(requestSimpleStruct);
  }

  auto outcome = client.KitchenSinkOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "eyJTaW1wbGVTdHJ1Y3QiOnsiVmFsdWUiOiJhYmMifX0=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.KitchenSinkOperation)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_structure_members_with_locationname_traits) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  KitchenSinkOperationRequest request;
  {
    StructWithJsonName requestStructWithJsonName;
    requestStructWithJsonName.SetValue(R"(some-value)");
    request.SetStructWithJsonName(requestStructWithJsonName);
  }

  auto outcome = client.KitchenSinkOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "eyJTdHJ1Y3RXaXRoSnNvbk5hbWUiOnsiVmFsdWUiOiJzb21lLXZhbHVlIn19";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.KitchenSinkOperation)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_empty_structure_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  KitchenSinkOperationRequest request;
  {
    SimpleStruct requestSimpleStruct;
    request.SetSimpleStruct(requestSimpleStruct);
  }

  auto outcome = client.KitchenSinkOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "eyJTaW1wbGVTdHJ1Y3QiOnt9fQ==";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.KitchenSinkOperation)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_structure_which_have_no_members) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  KitchenSinkOperationRequest request;
  {
    EmptyStruct requestEmptyStruct;
    request.SetEmptyStruct(requestEmptyStruct);
  }

  auto outcome = client.KitchenSinkOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "eyJFbXB0eVN0cnVjdCI6e319";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.KitchenSinkOperation)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_recursive_structure_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  KitchenSinkOperationRequest request;
  request.SetString(R"(top-value)");
  request.SetBoolean(false);
  {
    KitchenSink requestRecursiveStruct;
    requestRecursiveStruct.SetString(R"(nested-value)");
    requestRecursiveStruct.SetBoolean(true);
    {
      KitchenSink requestRecursiveStructRecursiveListItem;
      requestRecursiveStructRecursiveListItem.SetString(R"(string-only)");
      requestRecursiveStruct.AddRecursiveList(requestRecursiveStructRecursiveListItem);
    }
    {
      KitchenSink requestRecursiveStructRecursiveListItem;
      {
        KitchenSink requestRecursiveStructRecursiveListItemRecursiveStruct;
        requestRecursiveStructRecursiveListItemRecursiveStruct.SetMapOfStrings({{"color", R"(red)"}, {"size", R"(large)"}});
        requestRecursiveStructRecursiveListItem.SetRecursiveStruct(requestRecursiveStructRecursiveListItemRecursiveStruct);
      }
      requestRecursiveStruct.AddRecursiveList(requestRecursiveStructRecursiveListItem);
    }
    request.SetRecursiveStruct(requestRecursiveStruct);
  }

  auto outcome = client.KitchenSinkOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "eyJTdHJpbmciOiJ0b3AtdmFsdWUiLCJCb29sZWFuIjpmYWxzZSwiUmVjdXJzaXZlU3RydWN0Ijp7IlN0cmluZyI6Im5lc3RlZC12YWx1ZSIsIkJvb2xlYW4iOnRydWUsIlJl"
      "Y3Vyc2l2ZUxpc3QiOlt7IlN0cmluZyI6InN0cmluZy1vbmx5In0seyJSZWN1cnNpdmVTdHJ1Y3QiOnsiTWFwT2ZTdHJpbmdzIjp7ImNvbG9yIjoicmVkIiwic2l6ZSI6Imxh"
      "cmdlIn19fV19fQ==";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}, {"X-Amz-Target", R"(JsonProtocol.KitchenSinkOperation)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
