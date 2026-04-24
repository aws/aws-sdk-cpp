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
  ValidateRequestSent([](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {} )" */
  });
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
  const KitchenSinkOperationResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"String":"string-value"} )" */
    EXPECT_EQ(R"(string-value)", result.GetString());
  });
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
  const KitchenSinkOperationResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"Integer":1234} )" */
    EXPECT_EQ(1234, result.GetInteger());
  });
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
  const KitchenSinkOperationResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"Long":1234567890123456789} )" */
    EXPECT_EQ(1234567890123456789, result.GetLong());
  });
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
  const KitchenSinkOperationResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"Float":1234.5} )" */
    EXPECT_EQ(1234.5, result.GetFloat());
  });
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
  const KitchenSinkOperationResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"Double":1.2345678912345679E8} )" */
    EXPECT_EQ(1.2345678912345679E8, result.GetDouble());
  });
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
  const KitchenSinkOperationResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"Boolean":true} )" */
    EXPECT_EQ(true, result.GetBoolean());
  });
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
  const KitchenSinkOperationResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"Boolean":false} )" */
    EXPECT_EQ(false, result.GetBoolean());
  });
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
  const KitchenSinkOperationResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"Blob":"binary-value"} )" */
    EXPECT_EQ(Aws::Utils::ByteBuffer(R"(binary-value)"), result.GetBlob());
  });
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
  const KitchenSinkOperationResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"Timestamp":946845296} )" */
    EXPECT_EQ(Aws::Utils::DateTime(static_cast<int64_t>(946845296)), result.GetTimestamp());
  });
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
  const KitchenSinkOperationResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"Iso8601Timestamp":946845296} )" */
    EXPECT_EQ(Aws::Utils::DateTime(static_cast<int64_t>(946845296)), result.GetIso8601Timestamp());
  });
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
  const KitchenSinkOperationResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"HttpdateTimestamp":946845296} )" */
    EXPECT_EQ(Aws::Utils::DateTime(static_cast<int64_t>(946845296)), result.GetHttpdateTimestamp());
  });
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
  const KitchenSinkOperationResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"ListOfStrings":["abc","mno","xyz"]} )" */
    const Aws::Vector<Aws::String>& resultListOfStringsItem = result.GetListOfStrings();
    EXPECT_EQ(3U, resultListOfStringsItem.size());
    EXPECT_EQ(R"(abc)", resultListOfStringsItem.at(0));
    EXPECT_EQ(R"(mno)", resultListOfStringsItem.at(1));
    EXPECT_EQ(R"(xyz)", resultListOfStringsItem.at(2));
  });
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
  const KitchenSinkOperationResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"ListOfMapsOfStrings":[{"size":"large"},{"color":"red"}]} )" */
    EXPECT_EQ(2U, result.GetListOfMapsOfStrings().size());
    {
      const Aws::Map<Aws::String, Aws::String>& resultListOfMapsOfStringsItem = result.GetListOfMapsOfStrings().at(0);
      EXPECT_EQ(1U, resultListOfMapsOfStringsItem.size());
      EXPECT_TRUE(resultListOfMapsOfStringsItem.find("size") != resultListOfMapsOfStringsItem.end());
      EXPECT_EQ(resultListOfMapsOfStringsItem.at("size"), R"(large)");
    }
    {
      const Aws::Map<Aws::String, Aws::String>& resultListOfMapsOfStringsItem = result.GetListOfMapsOfStrings().at(1);
      EXPECT_EQ(1U, resultListOfMapsOfStringsItem.size());
      EXPECT_TRUE(resultListOfMapsOfStringsItem.find("color") != resultListOfMapsOfStringsItem.end());
      EXPECT_EQ(resultListOfMapsOfStringsItem.at("color"), R"(red)");
    }
  });
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
  const KitchenSinkOperationResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"ListOfLists":[["abc","mno","xyz"],["hjk","qrs","tuv"]]} )" */
    EXPECT_EQ(2U, result.GetListOfLists().size());
    {
      const Aws::Vector<Aws::String>& resultListOfListsItem = result.GetListOfLists().at(0);
      EXPECT_EQ(3U, resultListOfListsItem.size());
      EXPECT_EQ(R"(abc)", resultListOfListsItem.at(0));
      EXPECT_EQ(R"(mno)", resultListOfListsItem.at(1));
      EXPECT_EQ(R"(xyz)", resultListOfListsItem.at(2));
    }
    {
      const Aws::Vector<Aws::String>& resultListOfListsItem = result.GetListOfLists().at(1);
      EXPECT_EQ(3U, resultListOfListsItem.size());
      EXPECT_EQ(R"(hjk)", resultListOfListsItem.at(0));
      EXPECT_EQ(R"(qrs)", resultListOfListsItem.at(1));
      EXPECT_EQ(R"(tuv)", resultListOfListsItem.at(2));
    }
  });
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
  const KitchenSinkOperationResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"ListOfStructs":[{"Value":"value-1"},{"Value":"value-2"}]} )" */
    EXPECT_EQ(2U, result.GetListOfStructs().size());
    {
      const SimpleStruct& resultListOfStructsItem = result.GetListOfStructs().at(0);
      EXPECT_EQ(R"(value-1)", resultListOfStructsItem.GetValue());
    }
    {
      const SimpleStruct& resultListOfStructsItem = result.GetListOfStructs().at(1);
      EXPECT_EQ(R"(value-2)", resultListOfStructsItem.GetValue());
    }
  });
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
  const KitchenSinkOperationResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"RecursiveList":[{"RecursiveList":[{"RecursiveList":[{"String":"value"}]}]}]} )" */
    EXPECT_EQ(1U, result.GetRecursiveList().size());
    {
      const KitchenSink& resultRecursiveListItem = result.GetRecursiveList().at(0);
      EXPECT_EQ(1U, resultRecursiveListItem.GetRecursiveList().size());
      {
        const KitchenSink& resultRecursiveListItemRecursiveListItem = resultRecursiveListItem.GetRecursiveList().at(0);
        EXPECT_EQ(1U, resultRecursiveListItemRecursiveListItem.GetRecursiveList().size());
        {
          const KitchenSink& resultRecursiveListItemRecursiveListItemRecursiveListItem =
              resultRecursiveListItemRecursiveListItem.GetRecursiveList().at(0);
          EXPECT_EQ(R"(value)", resultRecursiveListItemRecursiveListItemRecursiveListItem.GetString());
        }
      }
    }
  });
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
  const KitchenSinkOperationResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"MapOfStrings":{"size":"large","color":"red"}} )" */
    const Aws::Map<Aws::String, Aws::String>& resultMapOfStrings = result.GetMapOfStrings();
    EXPECT_EQ(2U, resultMapOfStrings.size());
    EXPECT_TRUE(resultMapOfStrings.find("size") != resultMapOfStrings.end());
    EXPECT_EQ(R"(large)", resultMapOfStrings.at("size"));
    EXPECT_TRUE(resultMapOfStrings.find("color") != resultMapOfStrings.end());
    EXPECT_EQ(R"(red)", resultMapOfStrings.at("color"));
  });
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
  const KitchenSinkOperationResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"MapOfListsOfStrings":{"sizes":["large","small"],"colors":["red","green"]}} )" */
    const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& resultMapOfListsOfStrings = result.GetMapOfListsOfStrings();
    EXPECT_EQ(2U, resultMapOfListsOfStrings.size());
    EXPECT_TRUE(resultMapOfListsOfStrings.find("sizes") != resultMapOfListsOfStrings.end());
    {
      const Aws::Vector<Aws::String>& resultMapOfListsOfStringsItem = resultMapOfListsOfStrings.at("sizes");
      EXPECT_EQ(2U, resultMapOfListsOfStringsItem.size());
      EXPECT_EQ(R"(large)", resultMapOfListsOfStringsItem.at(0));
      EXPECT_EQ(R"(small)", resultMapOfListsOfStringsItem.at(1));
    }
    EXPECT_TRUE(resultMapOfListsOfStrings.find("colors") != resultMapOfListsOfStrings.end());
    {
      const Aws::Vector<Aws::String>& resultMapOfListsOfStringsItem = resultMapOfListsOfStrings.at("colors");
      EXPECT_EQ(2U, resultMapOfListsOfStringsItem.size());
      EXPECT_EQ(R"(red)", resultMapOfListsOfStringsItem.at(0));
      EXPECT_EQ(R"(green)", resultMapOfListsOfStringsItem.at(1));
    }
  });
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
  const KitchenSinkOperationResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"MapOfMaps":{"sizes":{"large":"L","medium":"M"},"colors":{"red":"R","blue":"B"}}} )" */
    const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& resultMapOfMaps = result.GetMapOfMaps();
    EXPECT_EQ(2U, resultMapOfMaps.size());
    EXPECT_TRUE(resultMapOfMaps.find("sizes") != resultMapOfMaps.end());
    {
      const Aws::Map<Aws::String, Aws::String>& resultMapOfMapsNestedMap = resultMapOfMaps.at("sizes");
      EXPECT_EQ(2U, resultMapOfMapsNestedMap.size());
      EXPECT_TRUE(resultMapOfMapsNestedMap.find("large") != resultMapOfMapsNestedMap.end());
      EXPECT_EQ(R"(L)", resultMapOfMapsNestedMap.at("large"));
      EXPECT_TRUE(resultMapOfMapsNestedMap.find("medium") != resultMapOfMapsNestedMap.end());
      EXPECT_EQ(R"(M)", resultMapOfMapsNestedMap.at("medium"));
    }
    EXPECT_TRUE(resultMapOfMaps.find("colors") != resultMapOfMaps.end());
    {
      const Aws::Map<Aws::String, Aws::String>& resultMapOfMapsNestedMap = resultMapOfMaps.at("colors");
      EXPECT_EQ(2U, resultMapOfMapsNestedMap.size());
      EXPECT_TRUE(resultMapOfMapsNestedMap.find("red") != resultMapOfMapsNestedMap.end());
      EXPECT_EQ(R"(R)", resultMapOfMapsNestedMap.at("red"));
      EXPECT_TRUE(resultMapOfMapsNestedMap.find("blue") != resultMapOfMapsNestedMap.end());
      EXPECT_EQ(R"(B)", resultMapOfMapsNestedMap.at("blue"));
    }
  });
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
  const KitchenSinkOperationResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"MapOfStructs":{"size":{"Value":"small"},"color":{"Value":"red"}}} )" */
    const Aws::Map<Aws::String, SimpleStruct>& resultMapOfStructs = result.GetMapOfStructs();
    EXPECT_EQ(2U, resultMapOfStructs.size());
    {
      EXPECT_TRUE(resultMapOfStructs.find("size") != resultMapOfStructs.end());
      const SimpleStruct& resultMapOfStructsItem = resultMapOfStructs.at("size");
      EXPECT_EQ(R"(small)", resultMapOfStructsItem.GetValue());
    }
    {
      EXPECT_TRUE(resultMapOfStructs.find("color") != resultMapOfStructs.end());
      const SimpleStruct& resultMapOfStructsItem = resultMapOfStructs.at("color");
      EXPECT_EQ(R"(red)", resultMapOfStructsItem.GetValue());
    }
  });
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, parses_map_of_recursive_structure_shapes) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body =
      "eyJSZWN1cnNpdmVNYXAiOnsia2V5LTEiOnsiUmVjdXJzaXZlTWFwIjp7ImtleS0yIjp7IlJlY3Vyc2l2ZU1hcCI6eyJrZXktMyI6eyJTdHJpbmciOiJ2YWx1ZSJ9fX19fX1"
      "9";
  SetMockResponse(mockRs);

  KitchenSinkOperationRequest request;

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const KitchenSinkOperationResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"RecursiveMap":{"key-1":{"RecursiveMap":{"key-2":{"RecursiveMap":{"key-3":{"String":"value"}}}}}}} )" */
    const Aws::Map<Aws::String, KitchenSink>& resultRecursiveMap = result.GetRecursiveMap();
    EXPECT_EQ(1U, resultRecursiveMap.size());
    {
      EXPECT_TRUE(resultRecursiveMap.find("key-1") != resultRecursiveMap.end());
      const KitchenSink& resultRecursiveMapItem = resultRecursiveMap.at("key-1");
      const Aws::Map<Aws::String, KitchenSink>& resultRecursiveMapItemRecursiveMap = resultRecursiveMapItem.GetRecursiveMap();
      EXPECT_EQ(1U, resultRecursiveMapItemRecursiveMap.size());
      {
        EXPECT_TRUE(resultRecursiveMapItemRecursiveMap.find("key-2") != resultRecursiveMapItemRecursiveMap.end());
        const KitchenSink& resultRecursiveMapItemRecursiveMapItem = resultRecursiveMapItemRecursiveMap.at("key-2");
        const Aws::Map<Aws::String, KitchenSink>& resultRecursiveMapItemRecursiveMapItemRecursiveMap =
            resultRecursiveMapItemRecursiveMapItem.GetRecursiveMap();
        EXPECT_EQ(1U, resultRecursiveMapItemRecursiveMapItemRecursiveMap.size());
        {
          EXPECT_TRUE(resultRecursiveMapItemRecursiveMapItemRecursiveMap.find("key-3") !=
                      resultRecursiveMapItemRecursiveMapItemRecursiveMap.end());
          const KitchenSink& resultRecursiveMapItemRecursiveMapItemRecursiveMapItem =
              resultRecursiveMapItemRecursiveMapItemRecursiveMap.at("key-3");
          EXPECT_EQ(R"(value)", resultRecursiveMapItemRecursiveMapItemRecursiveMapItem.GetString());
        }
      }
    }
  });
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
  ValidateRequestSent([](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {} )" */
  });
}
