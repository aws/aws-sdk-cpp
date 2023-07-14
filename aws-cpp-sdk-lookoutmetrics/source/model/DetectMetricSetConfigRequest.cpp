/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/DetectMetricSetConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LookoutMetrics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DetectMetricSetConfigRequest::DetectMetricSetConfigRequest() : 
    m_anomalyDetectorArnHasBeenSet(false),
    m_autoDetectionMetricSourceHasBeenSet(false)
{
}

Aws::String DetectMetricSetConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_anomalyDetectorArnHasBeenSet)
  {
   payload.WithString("AnomalyDetectorArn", m_anomalyDetectorArn);

  }

  if(m_autoDetectionMetricSourceHasBeenSet)
  {
   payload.WithObject("AutoDetectionMetricSource", m_autoDetectionMetricSource.Jsonize());

  }

  return payload.View().WriteReadable();
}




