/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/SearchRegistryRecordsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SearchRegistryRecordsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_searchQueryHasBeenSet) {
    payload.WithString("searchQuery", m_searchQuery);
  }

  if (m_registryIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> registryIdsJsonList(m_registryIds.size());
    for (unsigned registryIdsIndex = 0; registryIdsIndex < registryIdsJsonList.GetLength(); ++registryIdsIndex) {
      registryIdsJsonList[registryIdsIndex].AsString(m_registryIds[registryIdsIndex]);
    }
    payload.WithArray("registryIds", std::move(registryIdsJsonList));
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_filtersHasBeenSet) {
    if (!m_filters.View().IsNull()) {
      payload.WithObject("filters", JsonValue(m_filters.View()));
    }
  }

  return payload.View().WriteReadable();
}
