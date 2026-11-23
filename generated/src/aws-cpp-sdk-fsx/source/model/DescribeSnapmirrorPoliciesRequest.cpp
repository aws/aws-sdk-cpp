/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/DescribeSnapmirrorPoliciesRequest.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeSnapmirrorPoliciesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_snapmirrorPolicyIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> snapmirrorPolicyIdsJsonList(m_snapmirrorPolicyIds.size());
    for (unsigned snapmirrorPolicyIdsIndex = 0; snapmirrorPolicyIdsIndex < snapmirrorPolicyIdsJsonList.GetLength();
         ++snapmirrorPolicyIdsIndex) {
      snapmirrorPolicyIdsJsonList[snapmirrorPolicyIdsIndex].AsString(m_snapmirrorPolicyIds[snapmirrorPolicyIdsIndex]);
    }
    payload.WithArray("SnapmirrorPolicyIds", std::move(snapmirrorPolicyIdsJsonList));
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

Aws::Http::HeaderValueCollection DescribeSnapmirrorPoliciesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSimbaAPIService_v20180301.DescribeSnapmirrorPolicies"));
  return headers;
}
