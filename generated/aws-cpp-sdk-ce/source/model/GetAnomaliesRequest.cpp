/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/GetAnomaliesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAnomaliesRequest::GetAnomaliesRequest() : 
    m_monitorArnHasBeenSet(false),
    m_dateIntervalHasBeenSet(false),
    m_feedback(AnomalyFeedbackType::NOT_SET),
    m_feedbackHasBeenSet(false),
    m_totalImpactHasBeenSet(false),
    m_nextPageTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String GetAnomaliesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_monitorArnHasBeenSet)
  {
   payload.WithString("MonitorArn", m_monitorArn);

  }

  if(m_dateIntervalHasBeenSet)
  {
   payload.WithObject("DateInterval", m_dateInterval.Jsonize());

  }

  if(m_feedbackHasBeenSet)
  {
   payload.WithString("Feedback", AnomalyFeedbackTypeMapper::GetNameForAnomalyFeedbackType(m_feedback));
  }

  if(m_totalImpactHasBeenSet)
  {
   payload.WithObject("TotalImpact", m_totalImpact.Jsonize());

  }

  if(m_nextPageTokenHasBeenSet)
  {
   payload.WithString("NextPageToken", m_nextPageToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetAnomaliesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSInsightsIndexService.GetAnomalies"));
  return headers;

}




