/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/ListInsightsDataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListInsightsDataRequest::SerializePayload() const {
  JsonValue payload;

  if (m_insightSourceHasBeenSet) {
    payload.WithString("InsightSource", m_insightSource);
  }

  if (m_dataTypeHasBeenSet) {
    payload.WithString("DataType", ListInsightsDataTypeMapper::GetNameForListInsightsDataType(m_dataType));
  }

  if (m_dimensionsHasBeenSet) {
    JsonValue dimensionsJsonMap;
    for (auto& dimensionsItem : m_dimensions) {
      dimensionsJsonMap.WithString(ListInsightsDataDimensionKeyMapper::GetNameForListInsightsDataDimensionKey(dimensionsItem.first),
                                   dimensionsItem.second);
    }
    payload.WithObject("Dimensions", std::move(dimensionsJsonMap));
  }

  if (m_startTimeHasBeenSet) {
    payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if (m_endTimeHasBeenSet) {
    payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListInsightsDataRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.cloudtrail.v20131101.CloudTrail_20131101.ListInsightsData"));
  return headers;
}
