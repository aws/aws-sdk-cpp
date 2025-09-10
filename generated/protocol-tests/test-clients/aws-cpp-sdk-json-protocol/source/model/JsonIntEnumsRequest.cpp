/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/json-protocol/model/JsonIntEnumsRequest.h>

#include <utility>

using namespace Aws::JsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String JsonIntEnumsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_intEnum1HasBeenSet) {
    payload.WithInteger("intEnum1", m_intEnum1);
  }

  if (m_intEnum2HasBeenSet) {
    payload.WithInteger("intEnum2", m_intEnum2);
  }

  if (m_intEnum3HasBeenSet) {
    payload.WithInteger("intEnum3", m_intEnum3);
  }

  if (m_intEnumListHasBeenSet) {
    Aws::Utils::Array<JsonValue> intEnumListJsonList(m_intEnumList.size());
    for (unsigned intEnumListIndex = 0; intEnumListIndex < intEnumListJsonList.GetLength(); ++intEnumListIndex) {
      intEnumListJsonList[intEnumListIndex].AsInteger(m_intEnumList[intEnumListIndex]);
    }
    payload.WithArray("intEnumList", std::move(intEnumListJsonList));
  }

  if (m_intEnumSetHasBeenSet) {
    Aws::Utils::Array<JsonValue> intEnumSetJsonList(m_intEnumSet.size());
    for (unsigned intEnumSetIndex = 0; intEnumSetIndex < intEnumSetJsonList.GetLength(); ++intEnumSetIndex) {
      intEnumSetJsonList[intEnumSetIndex].AsInteger(m_intEnumSet[intEnumSetIndex]);
    }
    payload.WithArray("intEnumSet", std::move(intEnumSetJsonList));
  }

  if (m_intEnumMapHasBeenSet) {
    JsonValue intEnumMapJsonMap;
    for (auto& intEnumMapItem : m_intEnumMap) {
      intEnumMapJsonMap.WithInteger(intEnumMapItem.first, intEnumMapItem.second);
    }
    payload.WithObject("intEnumMap", std::move(intEnumMapJsonMap));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection JsonIntEnumsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "JsonProtocol.JsonIntEnums"));
  Aws::StringStream ss;
  if (m_requestIdHasBeenSet) {
    ss << m_requestId;
    headers.emplace("x-amzn-requestid", ss.str());
    ss.str("");
  }

  return headers;
}
