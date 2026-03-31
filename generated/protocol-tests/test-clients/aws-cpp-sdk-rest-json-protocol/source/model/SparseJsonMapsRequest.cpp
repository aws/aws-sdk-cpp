/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/SparseJsonMapsRequest.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SparseJsonMapsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_sparseStructMapHasBeenSet) {
    JsonValue sparseStructMapJsonMap;
    for (auto& sparseStructMapItem : m_sparseStructMap) {
      if (!sparseStructMapItem.second.has_value()) {
        sparseStructMapJsonMap.WithNull(sparseStructMapItem.first);
        continue;
      }
      sparseStructMapJsonMap.WithObject(sparseStructMapItem.first, sparseStructMapItem.second->Jsonize());
    }
    payload.WithObject("sparseStructMap", std::move(sparseStructMapJsonMap));
  }

  if (m_sparseNumberMapHasBeenSet) {
    JsonValue sparseNumberMapJsonMap;
    for (auto& sparseNumberMapItem : m_sparseNumberMap) {
      if (!sparseNumberMapItem.second.has_value()) {
        sparseNumberMapJsonMap.WithNull(sparseNumberMapItem.first);
        continue;
      }
      sparseNumberMapJsonMap.WithInteger(sparseNumberMapItem.first, *sparseNumberMapItem.second);
    }
    payload.WithObject("sparseNumberMap", std::move(sparseNumberMapJsonMap));
  }

  if (m_sparseBooleanMapHasBeenSet) {
    JsonValue sparseBooleanMapJsonMap;
    for (auto& sparseBooleanMapItem : m_sparseBooleanMap) {
      if (!sparseBooleanMapItem.second.has_value()) {
        sparseBooleanMapJsonMap.WithNull(sparseBooleanMapItem.first);
        continue;
      }
      sparseBooleanMapJsonMap.WithBool(sparseBooleanMapItem.first, *sparseBooleanMapItem.second);
    }
    payload.WithObject("sparseBooleanMap", std::move(sparseBooleanMapJsonMap));
  }

  if (m_sparseStringMapHasBeenSet) {
    JsonValue sparseStringMapJsonMap;
    for (auto& sparseStringMapItem : m_sparseStringMap) {
      if (!sparseStringMapItem.second.has_value()) {
        sparseStringMapJsonMap.WithNull(sparseStringMapItem.first);
        continue;
      }
      sparseStringMapJsonMap.WithString(sparseStringMapItem.first, *sparseStringMapItem.second);
    }
    payload.WithObject("sparseStringMap", std::move(sparseStringMapJsonMap));
  }

  if (m_sparseSetMapHasBeenSet) {
    JsonValue sparseSetMapJsonMap;
    for (auto& sparseSetMapItem : m_sparseSetMap) {
      if (!sparseSetMapItem.second.has_value()) {
        sparseSetMapJsonMap.WithNull(sparseSetMapItem.first);
        continue;
      }
      Aws::Utils::Array<JsonValue> stringSetJsonList((*sparseSetMapItem.second).size());
      for (unsigned stringSetIndex = 0; stringSetIndex < stringSetJsonList.GetLength(); ++stringSetIndex) {
        stringSetJsonList[stringSetIndex].AsString((*sparseSetMapItem.second)[stringSetIndex]);
      }
      sparseSetMapJsonMap.WithArray(sparseSetMapItem.first, std::move(stringSetJsonList));
    }
    payload.WithObject("sparseSetMap", std::move(sparseSetMapJsonMap));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SparseJsonMapsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_requestIdHasBeenSet) {
    ss << m_requestId;
    headers.emplace("x-amzn-requestid", ss.str());
    ss.str("");
  }

  return headers;
}
