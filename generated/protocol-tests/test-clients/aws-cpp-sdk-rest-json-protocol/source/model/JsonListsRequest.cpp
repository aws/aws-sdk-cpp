/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/JsonListsRequest.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String JsonListsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_stringListHasBeenSet) {
    Aws::Utils::Array<JsonValue> stringListJsonList(m_stringList.size());
    for (unsigned stringListIndex = 0; stringListIndex < stringListJsonList.GetLength(); ++stringListIndex) {
      stringListJsonList[stringListIndex].AsString(m_stringList[stringListIndex]);
    }
    payload.WithArray("stringList", std::move(stringListJsonList));
  }

  if (m_stringSetHasBeenSet) {
    Aws::Utils::Array<JsonValue> stringSetJsonList(m_stringSet.size());
    for (unsigned stringSetIndex = 0; stringSetIndex < stringSetJsonList.GetLength(); ++stringSetIndex) {
      stringSetJsonList[stringSetIndex].AsString(m_stringSet[stringSetIndex]);
    }
    payload.WithArray("stringSet", std::move(stringSetJsonList));
  }

  if (m_integerListHasBeenSet) {
    Aws::Utils::Array<JsonValue> integerListJsonList(m_integerList.size());
    for (unsigned integerListIndex = 0; integerListIndex < integerListJsonList.GetLength(); ++integerListIndex) {
      integerListJsonList[integerListIndex].AsInteger(m_integerList[integerListIndex]);
    }
    payload.WithArray("integerList", std::move(integerListJsonList));
  }

  if (m_booleanListHasBeenSet) {
    Aws::Utils::Array<JsonValue> booleanListJsonList(m_booleanList.size());
    for (unsigned booleanListIndex = 0; booleanListIndex < booleanListJsonList.GetLength(); ++booleanListIndex) {
      booleanListJsonList[booleanListIndex].AsBool(m_booleanList[booleanListIndex]);
    }
    payload.WithArray("booleanList", std::move(booleanListJsonList));
  }

  if (m_timestampListHasBeenSet) {
    Aws::Utils::Array<JsonValue> timestampListJsonList(m_timestampList.size());
    for (unsigned timestampListIndex = 0; timestampListIndex < timestampListJsonList.GetLength(); ++timestampListIndex) {
      timestampListJsonList[timestampListIndex].AsDouble(m_timestampList[timestampListIndex].SecondsWithMSPrecision());
    }
    payload.WithArray("timestampList", std::move(timestampListJsonList));
  }

  if (m_enumListHasBeenSet) {
    Aws::Utils::Array<JsonValue> enumListJsonList(m_enumList.size());
    for (unsigned enumListIndex = 0; enumListIndex < enumListJsonList.GetLength(); ++enumListIndex) {
      enumListJsonList[enumListIndex].AsString(FooEnumMapper::GetNameForFooEnum(m_enumList[enumListIndex]));
    }
    payload.WithArray("enumList", std::move(enumListJsonList));
  }

  if (m_intEnumListHasBeenSet) {
    Aws::Utils::Array<JsonValue> intEnumListJsonList(m_intEnumList.size());
    for (unsigned intEnumListIndex = 0; intEnumListIndex < intEnumListJsonList.GetLength(); ++intEnumListIndex) {
      intEnumListJsonList[intEnumListIndex].AsInteger(m_intEnumList[intEnumListIndex]);
    }
    payload.WithArray("intEnumList", std::move(intEnumListJsonList));
  }

  if (m_nestedStringListHasBeenSet) {
    Aws::Utils::Array<JsonValue> nestedStringListJsonList(m_nestedStringList.size());
    for (unsigned nestedStringListIndex = 0; nestedStringListIndex < nestedStringListJsonList.GetLength(); ++nestedStringListIndex) {
      Aws::Utils::Array<JsonValue> stringListJsonList(m_nestedStringList[nestedStringListIndex].size());
      for (unsigned stringListIndex = 0; stringListIndex < stringListJsonList.GetLength(); ++stringListIndex) {
        stringListJsonList[stringListIndex].AsString(m_nestedStringList[nestedStringListIndex][stringListIndex]);
      }
      nestedStringListJsonList[nestedStringListIndex].AsArray(std::move(stringListJsonList));
    }
    payload.WithArray("nestedStringList", std::move(nestedStringListJsonList));
  }

  if (m_structureListHasBeenSet) {
    Aws::Utils::Array<JsonValue> myStructureListJsonList(m_structureList.size());
    for (unsigned myStructureListIndex = 0; myStructureListIndex < myStructureListJsonList.GetLength(); ++myStructureListIndex) {
      myStructureListJsonList[myStructureListIndex].AsObject(m_structureList[myStructureListIndex].Jsonize());
    }
    payload.WithArray("myStructureList", std::move(myStructureListJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection JsonListsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_requestIdHasBeenSet) {
    ss << m_requestId;
    headers.emplace("x-amzn-requestid", ss.str());
    ss.str("");
  }

  return headers;
}
