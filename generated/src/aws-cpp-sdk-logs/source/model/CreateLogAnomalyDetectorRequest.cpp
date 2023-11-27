/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/CreateLogAnomalyDetectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLogAnomalyDetectorRequest::CreateLogAnomalyDetectorRequest() : 
    m_logGroupArnListHasBeenSet(false),
    m_detectorNameHasBeenSet(false),
    m_evaluationFrequency(EvaluationFrequency::NOT_SET),
    m_evaluationFrequencyHasBeenSet(false),
    m_filterPatternHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_anomalyVisibilityTime(0),
    m_anomalyVisibilityTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateLogAnomalyDetectorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_logGroupArnListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logGroupArnListJsonList(m_logGroupArnList.size());
   for(unsigned logGroupArnListIndex = 0; logGroupArnListIndex < logGroupArnListJsonList.GetLength(); ++logGroupArnListIndex)
   {
     logGroupArnListJsonList[logGroupArnListIndex].AsString(m_logGroupArnList[logGroupArnListIndex]);
   }
   payload.WithArray("logGroupArnList", std::move(logGroupArnListJsonList));

  }

  if(m_detectorNameHasBeenSet)
  {
   payload.WithString("detectorName", m_detectorName);

  }

  if(m_evaluationFrequencyHasBeenSet)
  {
   payload.WithString("evaluationFrequency", EvaluationFrequencyMapper::GetNameForEvaluationFrequency(m_evaluationFrequency));
  }

  if(m_filterPatternHasBeenSet)
  {
   payload.WithString("filterPattern", m_filterPattern);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  if(m_anomalyVisibilityTimeHasBeenSet)
  {
   payload.WithInt64("anomalyVisibilityTime", m_anomalyVisibilityTime);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateLogAnomalyDetectorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.CreateLogAnomalyDetector"));
  return headers;

}




