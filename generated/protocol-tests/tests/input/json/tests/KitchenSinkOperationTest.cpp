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

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_string_shapes) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;
  request.SetString(R"(abc xyz)");

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_string_shapes_with_jsonvalue_trait) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;
  request.SetJsonValue(R"({"string":"value","number":1234.5,"boolTrue":true,"boolFalse":false,"array":[1,2,3,4],"object":{"key":"value"},"null":null})");

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_integer_shapes) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;
  request.SetInteger(1234);

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_long_shapes) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;
  request.SetLong(999999999999);

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_float_shapes) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;
  request.SetFloat(1234.5);

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_double_shapes) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;
  request.SetDouble(1234.5);

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_blob_shapes) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;
  request.SetBlob(Aws::String(R"(binary-value)"));

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_boolean_shapes_true) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;
  request.SetBoolean(true);

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_boolean_shapes_false) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;
  request.SetBoolean(false);

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_timestamp_shapes) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;
  request.SetTimestamp(Aws::Utils::DateTime(946845296L));

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_timestamp_shapes_with_iso8601_timestampformat) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;
  request.SetIso8601Timestamp(Aws::Utils::DateTime(946845296L));

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_timestamp_shapes_with_httpdate_timestampformat) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;
  request.SetHttpdateTimestamp(Aws::Utils::DateTime(946845296L));

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_timestamp_shapes_with_unixtimestamp_timestampformat) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;
  request.SetUnixTimestamp(Aws::Utils::DateTime(946845296L));

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_list_shapes) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;
  request.SetListOfStrings({R"(abc)", R"(mno)", R"(xyz)"});

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_empty_list_shapes) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;
  request.SetListOfStrings({});

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_list_of_map_shapes) {
  JsonProtocolClient client;
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
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_list_of_structure_shapes) {
  JsonProtocolClient client;
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
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_list_of_recursive_structure_shapes) {
  JsonProtocolClient client;
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
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_map_shapes) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;
  request.SetMapOfStrings({{"abc",  R"(xyz)"}, {"mno",  R"(hjk)"}});

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_empty_map_shapes) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;
  request.SetMapOfStrings({});

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_map_of_list_shapes) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;
  request.SetMapOfListsOfStrings({{"abc",  {R"(abc)", R"(xyz)"}}, {"mno",  {R"(xyz)", R"(abc)"}}});

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_map_of_structure_shapes) {
  JsonProtocolClient client;
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
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_map_of_recursive_structure_shapes) {
  JsonProtocolClient client;
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
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_structure_shapes) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;
  {
    SimpleStruct requestSimpleStruct;
    requestSimpleStruct.SetValue(R"(abc)");
    request.SetSimpleStruct(requestSimpleStruct);
  }

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_structure_members_with_locationname_traits) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;
  {
    StructWithJsonName requestStructWithJsonName;
    requestStructWithJsonName.SetValue(R"(some-value)");
    request.SetStructWithJsonName(requestStructWithJsonName);
  }

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_empty_structure_shapes) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;
  {
    SimpleStruct requestSimpleStruct;
    request.SetSimpleStruct(requestSimpleStruct);
  }

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_structure_which_have_no_members) {
  JsonProtocolClient client;
  KitchenSinkOperationRequest request;
  {
    EmptyStruct requestEmptyStruct;
    request.SetEmptyStruct(requestEmptyStruct);
  }

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(KitchenSinkOperation, serializes_recursive_structure_shapes) {
  JsonProtocolClient client;
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
        requestRecursiveStructRecursiveListItemRecursiveStruct.SetMapOfStrings({{"color",  R"(red)"}, {"size",  R"(large)"}});
        requestRecursiveStructRecursiveListItem.SetRecursiveStruct(requestRecursiveStructRecursiveListItemRecursiveStruct);
      }
      requestRecursiveStruct.AddRecursiveList(requestRecursiveStructRecursiveListItem);
    }
    request.SetRecursiveStruct(requestRecursiveStruct);
  }

  auto outcome = client.KitchenSinkOperation(request);
  AWS_ASSERT_SUCCESS(outcome);
}
