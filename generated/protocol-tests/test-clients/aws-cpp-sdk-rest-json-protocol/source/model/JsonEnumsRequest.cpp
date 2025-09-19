/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/JsonEnumsRequest.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String JsonEnumsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_fooEnum1HasBeenSet) {
    payload.WithString("fooEnum1", FooEnumMapper::GetNameForFooEnum(m_fooEnum1));
  }

  if (m_fooEnum2HasBeenSet) {
    payload.WithString("fooEnum2", FooEnumMapper::GetNameForFooEnum(m_fooEnum2));
  }

  if (m_fooEnum3HasBeenSet) {
    payload.WithString("fooEnum3", FooEnumMapper::GetNameForFooEnum(m_fooEnum3));
  }

  if (m_fooEnumListHasBeenSet) {
    Aws::Utils::Array<JsonValue> fooEnumListJsonList(m_fooEnumList.size());
    for (unsigned fooEnumListIndex = 0; fooEnumListIndex < fooEnumListJsonList.GetLength(); ++fooEnumListIndex) {
      fooEnumListJsonList[fooEnumListIndex].AsString(FooEnumMapper::GetNameForFooEnum(m_fooEnumList[fooEnumListIndex]));
    }
    payload.WithArray("fooEnumList", std::move(fooEnumListJsonList));
  }

  if (m_fooEnumSetHasBeenSet) {
    Aws::Utils::Array<JsonValue> fooEnumSetJsonList(m_fooEnumSet.size());
    for (unsigned fooEnumSetIndex = 0; fooEnumSetIndex < fooEnumSetJsonList.GetLength(); ++fooEnumSetIndex) {
      fooEnumSetJsonList[fooEnumSetIndex].AsString(FooEnumMapper::GetNameForFooEnum(m_fooEnumSet[fooEnumSetIndex]));
    }
    payload.WithArray("fooEnumSet", std::move(fooEnumSetJsonList));
  }

  if (m_fooEnumMapHasBeenSet) {
    JsonValue fooEnumMapJsonMap;
    for (auto& fooEnumMapItem : m_fooEnumMap) {
      fooEnumMapJsonMap.WithString(fooEnumMapItem.first, FooEnumMapper::GetNameForFooEnum(fooEnumMapItem.second));
    }
    payload.WithObject("fooEnumMap", std::move(fooEnumMapJsonMap));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection JsonEnumsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_requestIdHasBeenSet) {
    ss << m_requestId;
    headers.emplace("x-amzn-requestid", ss.str());
    ss.str("");
  }

  return headers;
}
