/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/PutMetricFilterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutMetricFilterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_logGroupNameHasBeenSet)
  {
   payload.WithString("logGroupName", m_logGroupName);

  }

  if(m_filterNameHasBeenSet)
  {
   payload.WithString("filterName", m_filterName);

  }

  if(m_filterPatternHasBeenSet)
  {
   payload.WithString("filterPattern", m_filterPattern);

  }

  if(m_metricTransformationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricTransformationsJsonList(m_metricTransformations.size());
   for(unsigned metricTransformationsIndex = 0; metricTransformationsIndex < metricTransformationsJsonList.GetLength(); ++metricTransformationsIndex)
   {
     metricTransformationsJsonList[metricTransformationsIndex].AsObject(m_metricTransformations[metricTransformationsIndex].Jsonize());
   }
   payload.WithArray("metricTransformations", std::move(metricTransformationsJsonList));

  }

  if(m_applyOnTransformedLogsHasBeenSet)
  {
   payload.WithBool("applyOnTransformedLogs", m_applyOnTransformedLogs);

  }

  if(m_fieldSelectionCriteriaHasBeenSet)
  {
   payload.WithString("fieldSelectionCriteria", m_fieldSelectionCriteria);

  }

  if(m_emitSystemFieldDimensionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> emitSystemFieldDimensionsJsonList(m_emitSystemFieldDimensions.size());
   for(unsigned emitSystemFieldDimensionsIndex = 0; emitSystemFieldDimensionsIndex < emitSystemFieldDimensionsJsonList.GetLength(); ++emitSystemFieldDimensionsIndex)
   {
     emitSystemFieldDimensionsJsonList[emitSystemFieldDimensionsIndex].AsString(m_emitSystemFieldDimensions[emitSystemFieldDimensionsIndex]);
   }
   payload.WithArray("emitSystemFieldDimensions", std::move(emitSystemFieldDimensionsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutMetricFilterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.PutMetricFilter"));
  return headers;

}




