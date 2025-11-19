/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cost-optimization-hub/model/ListEfficiencyMetricsRequest.h>

#include <utility>

using namespace Aws::CostOptimizationHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListEfficiencyMetricsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_groupByHasBeenSet) {
    payload.WithString("groupBy", m_groupBy);
  }

  if (m_granularityHasBeenSet) {
    payload.WithString("granularity", GranularityTypeMapper::GetNameForGranularityType(m_granularity));
  }

  if (m_timePeriodHasBeenSet) {
    payload.WithObject("timePeriod", m_timePeriod.Jsonize());
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_orderByHasBeenSet) {
    payload.WithObject("orderBy", m_orderBy.Jsonize());
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListEfficiencyMetricsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CostOptimizationHubService.ListEfficiencyMetrics"));
  return headers;
}
