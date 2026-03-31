/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/SparseJsonListsRequest.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SparseJsonListsRequest::SerializePayload() const {
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

  if (m_sparseShortListHasBeenSet) {
    Aws::Utils::Array<JsonValue> sparseShortListJsonList(m_sparseShortList.size());
    for (unsigned sparseShortListIndex = 0; sparseShortListIndex < sparseShortListJsonList.GetLength(); ++sparseShortListIndex) {
      if (!m_sparseShortList[sparseShortListIndex].has_value()) {
        sparseShortListJsonList[sparseShortListIndex].AsNull();
        continue;
      }
      sparseShortListJsonList[sparseShortListIndex].AsInteger(*m_sparseShortList[sparseShortListIndex]);
    }
    payload.WithArray("sparseShortList", std::move(sparseShortListJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SparseJsonListsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_requestIdHasBeenSet) {
    ss << m_requestId;
    headers.emplace("x-amzn-requestid", ss.str());
    ss.str("");
  }

  return headers;
}
