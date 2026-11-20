/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-discovery/model/SearchPublicRecordsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AgentDiscovery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SearchPublicRecordsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_searchQueryHasBeenSet) {
    payload.WithString("query", m_searchQuery);
  }

  if (m_filtersHasBeenSet) {
    if (!m_filters.View().IsNull()) {
      payload.WithObject("filters", JsonValue(m_filters.View()));
    }
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}
