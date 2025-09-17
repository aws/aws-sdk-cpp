/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/JsonMapsRequest.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String JsonMapsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_denseStructMapHasBeenSet) {
    JsonValue denseStructMapJsonMap;
    for (auto& denseStructMapItem : m_denseStructMap) {
      denseStructMapJsonMap.WithObject(denseStructMapItem.first, denseStructMapItem.second.Jsonize());
    }
    payload.WithObject("denseStructMap", std::move(denseStructMapJsonMap));
  }

  if (m_denseNumberMapHasBeenSet) {
    JsonValue denseNumberMapJsonMap;
    for (auto& denseNumberMapItem : m_denseNumberMap) {
      denseNumberMapJsonMap.WithInteger(denseNumberMapItem.first, denseNumberMapItem.second);
    }
    payload.WithObject("denseNumberMap", std::move(denseNumberMapJsonMap));
  }

  if (m_denseBooleanMapHasBeenSet) {
    JsonValue denseBooleanMapJsonMap;
    for (auto& denseBooleanMapItem : m_denseBooleanMap) {
      denseBooleanMapJsonMap.WithBool(denseBooleanMapItem.first, denseBooleanMapItem.second);
    }
    payload.WithObject("denseBooleanMap", std::move(denseBooleanMapJsonMap));
  }

  if (m_denseStringMapHasBeenSet) {
    JsonValue denseStringMapJsonMap;
    for (auto& denseStringMapItem : m_denseStringMap) {
      denseStringMapJsonMap.WithString(denseStringMapItem.first, denseStringMapItem.second);
    }
    payload.WithObject("denseStringMap", std::move(denseStringMapJsonMap));
  }

  if (m_denseSetMapHasBeenSet) {
    JsonValue denseSetMapJsonMap;
    for (auto& denseSetMapItem : m_denseSetMap) {
      Aws::Utils::Array<JsonValue> stringSetJsonList(denseSetMapItem.second.size());
      for (unsigned stringSetIndex = 0; stringSetIndex < stringSetJsonList.GetLength(); ++stringSetIndex) {
        stringSetJsonList[stringSetIndex].AsString(denseSetMapItem.second[stringSetIndex]);
      }
      denseSetMapJsonMap.WithArray(denseSetMapItem.first, std::move(stringSetJsonList));
    }
    payload.WithObject("denseSetMap", std::move(denseSetMapJsonMap));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection JsonMapsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_requestIdHasBeenSet) {
    ss << m_requestId;
    headers.emplace("x-amzn-requestid", ss.str());
    ss.str("");
  }

  return headers;
}
