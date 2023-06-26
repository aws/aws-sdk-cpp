/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/ProvideAnomalyFeedbackRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ProvideAnomalyFeedbackRequest::ProvideAnomalyFeedbackRequest() : 
    m_anomalyIdHasBeenSet(false),
    m_feedback(AnomalyFeedbackType::NOT_SET),
    m_feedbackHasBeenSet(false)
{
}

Aws::String ProvideAnomalyFeedbackRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_anomalyIdHasBeenSet)
  {
   payload.WithString("AnomalyId", m_anomalyId);

  }

  if(m_feedbackHasBeenSet)
  {
   payload.WithString("Feedback", AnomalyFeedbackTypeMapper::GetNameForAnomalyFeedbackType(m_feedback));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ProvideAnomalyFeedbackRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSInsightsIndexService.ProvideAnomalyFeedback"));
  return headers;

}




