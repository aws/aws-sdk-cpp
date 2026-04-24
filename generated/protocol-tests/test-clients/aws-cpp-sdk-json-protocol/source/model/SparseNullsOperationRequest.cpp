/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/json-protocol/model/SparseNullsOperationRequest.h>

#include <utility>

using namespace Aws::JsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SparseNullsOperationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_sparseStringListHasBeenSet) {
    Aws::Utils::Array<JsonValue> sparseStringListJsonList(m_sparseStringList.size());
    for (unsigned sparseStringListIndex = 0; sparseStringListIndex < sparseStringListJsonList.GetLength(); ++sparseStringListIndex) {
      if (!m_sparseStringList[sparseStringListIndex].has_value()) {
        sparseStringListJsonList[sparseStringListIndex].AsNull();
        continue;
      }
      sparseStringListJsonList[sparseStringListIndex].AsString(*m_sparseStringList[sparseStringListIndex]);
    }
    payload.WithArray("sparseStringList", std::move(sparseStringListJsonList));
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SparseNullsOperationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "JsonProtocol.SparseNullsOperation"));
  Aws::StringStream ss;
  if (m_requestIdHasBeenSet) {
    ss << m_requestId;
    headers.emplace("x-amzn-requestid", ss.str());
    ss.str("");
  }

  return headers;
}
