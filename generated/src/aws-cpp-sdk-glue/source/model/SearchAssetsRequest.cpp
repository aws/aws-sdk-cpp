/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/SearchAssetsRequest.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SearchAssetsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_searchTextHasBeenSet) {
    payload.WithString("SearchText", m_searchText);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  if (m_sortHasBeenSet) {
    payload.WithObject("Sort", m_sort.Jsonize());
  }

  if (m_filterClauseHasBeenSet) {
    payload.WithObject("FilterClause", m_filterClause.Jsonize());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SearchAssetsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.SearchAssets"));
  return headers;
}
