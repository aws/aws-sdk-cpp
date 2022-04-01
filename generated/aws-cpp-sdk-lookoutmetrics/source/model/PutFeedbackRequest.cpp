/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/PutFeedbackRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LookoutMetrics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutFeedbackRequest::PutFeedbackRequest() : 
    m_anomalyDetectorArnHasBeenSet(false),
    m_anomalyGroupTimeSeriesFeedbackHasBeenSet(false)
{
}

Aws::String PutFeedbackRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_anomalyDetectorArnHasBeenSet)
  {
   payload.WithString("AnomalyDetectorArn", m_anomalyDetectorArn);

  }

  if(m_anomalyGroupTimeSeriesFeedbackHasBeenSet)
  {
   payload.WithObject("AnomalyGroupTimeSeriesFeedback", m_anomalyGroupTimeSeriesFeedback.Jsonize());

  }

  return payload.View().WriteReadable();
}




