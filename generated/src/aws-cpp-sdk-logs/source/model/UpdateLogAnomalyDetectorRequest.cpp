/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/UpdateLogAnomalyDetectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateLogAnomalyDetectorRequest::UpdateLogAnomalyDetectorRequest() : 
    m_anomalyDetectorArnHasBeenSet(false),
    m_evaluationFrequency(EvaluationFrequency::NOT_SET),
    m_evaluationFrequencyHasBeenSet(false),
    m_filterPatternHasBeenSet(false),
    m_anomalyVisibilityTime(0),
    m_anomalyVisibilityTimeHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
}

Aws::String UpdateLogAnomalyDetectorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_anomalyDetectorArnHasBeenSet)
  {
   payload.WithString("anomalyDetectorArn", m_anomalyDetectorArn);

  }

  if(m_evaluationFrequencyHasBeenSet)
  {
   payload.WithString("evaluationFrequency", EvaluationFrequencyMapper::GetNameForEvaluationFrequency(m_evaluationFrequency));
  }

  if(m_filterPatternHasBeenSet)
  {
   payload.WithString("filterPattern", m_filterPattern);

  }

  if(m_anomalyVisibilityTimeHasBeenSet)
  {
   payload.WithInt64("anomalyVisibilityTime", m_anomalyVisibilityTime);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateLogAnomalyDetectorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.UpdateLogAnomalyDetector"));
  return headers;

}




