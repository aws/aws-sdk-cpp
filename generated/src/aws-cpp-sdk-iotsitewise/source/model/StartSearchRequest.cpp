/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/StartSearchRequest.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartSearchRequest::SerializePayload() const {
  JsonValue payload;

  if (m_queryStatementHasBeenSet) {
    payload.WithString("queryStatement", m_queryStatement);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_searchTypeHasBeenSet) {
    payload.WithString("searchType", SearchTypeMapper::GetNameForSearchType(m_searchType));
  }

  if (m_searchFiltersHasBeenSet) {
    payload.WithObject("searchFilters", m_searchFilters.Jsonize());
  }

  if (m_groupIdHasBeenSet) {
    payload.WithString("groupId", m_groupId);
  }

  return payload.View().WriteReadable();
}
