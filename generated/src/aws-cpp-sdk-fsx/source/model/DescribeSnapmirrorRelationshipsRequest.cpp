/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/DescribeSnapmirrorRelationshipsRequest.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeSnapmirrorRelationshipsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_snapmirrorRelationshipIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> snapmirrorRelationshipIdsJsonList(m_snapmirrorRelationshipIds.size());
    for (unsigned snapmirrorRelationshipIdsIndex = 0; snapmirrorRelationshipIdsIndex < snapmirrorRelationshipIdsJsonList.GetLength();
         ++snapmirrorRelationshipIdsIndex) {
      snapmirrorRelationshipIdsJsonList[snapmirrorRelationshipIdsIndex].AsString(
          m_snapmirrorRelationshipIds[snapmirrorRelationshipIdsIndex]);
    }
    payload.WithArray("SnapmirrorRelationshipIds", std::move(snapmirrorRelationshipIdsJsonList));
  }

  if (m_filtersHasBeenSet) {
    Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
    for (unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex) {
      filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
    }
    payload.WithArray("Filters", std::move(filtersJsonList));
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeSnapmirrorRelationshipsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSimbaAPIService_v20180301.DescribeSnapmirrorRelationships"));
  return headers;
}
