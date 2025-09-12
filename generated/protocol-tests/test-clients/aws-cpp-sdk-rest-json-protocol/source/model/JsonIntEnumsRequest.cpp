/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/JsonIntEnumsRequest.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String JsonIntEnumsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_integerEnum1HasBeenSet) {
    payload.WithInteger("integerEnum1", m_integerEnum1);
  }

  if (m_integerEnum2HasBeenSet) {
    payload.WithInteger("integerEnum2", m_integerEnum2);
  }

  if (m_integerEnum3HasBeenSet) {
    payload.WithInteger("integerEnum3", m_integerEnum3);
  }

  if (m_integerEnumListHasBeenSet) {
    Aws::Utils::Array<JsonValue> integerEnumListJsonList(m_integerEnumList.size());
    for (unsigned integerEnumListIndex = 0; integerEnumListIndex < integerEnumListJsonList.GetLength(); ++integerEnumListIndex) {
      integerEnumListJsonList[integerEnumListIndex].AsInteger(m_integerEnumList[integerEnumListIndex]);
    }
    payload.WithArray("integerEnumList", std::move(integerEnumListJsonList));
  }

  if (m_integerEnumSetHasBeenSet) {
    Aws::Utils::Array<JsonValue> integerEnumSetJsonList(m_integerEnumSet.size());
    for (unsigned integerEnumSetIndex = 0; integerEnumSetIndex < integerEnumSetJsonList.GetLength(); ++integerEnumSetIndex) {
      integerEnumSetJsonList[integerEnumSetIndex].AsInteger(m_integerEnumSet[integerEnumSetIndex]);
    }
    payload.WithArray("integerEnumSet", std::move(integerEnumSetJsonList));
  }

  if (m_integerEnumMapHasBeenSet) {
    JsonValue integerEnumMapJsonMap;
    for (auto& integerEnumMapItem : m_integerEnumMap) {
      integerEnumMapJsonMap.WithInteger(integerEnumMapItem.first, integerEnumMapItem.second);
    }
    payload.WithObject("integerEnumMap", std::move(integerEnumMapJsonMap));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection JsonIntEnumsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_requestIdHasBeenSet) {
    ss << m_requestId;
    headers.emplace("x-amzn-requestid", ss.str());
    ss.str("");
  }

  return headers;
}
