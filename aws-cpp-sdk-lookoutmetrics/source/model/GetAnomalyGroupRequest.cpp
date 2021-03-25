/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/GetAnomalyGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LookoutMetrics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAnomalyGroupRequest::GetAnomalyGroupRequest() : 
    m_anomalyGroupIdHasBeenSet(false),
    m_anomalyDetectorArnHasBeenSet(false)
{
}

Aws::String GetAnomalyGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_anomalyGroupIdHasBeenSet)
  {
   payload.WithString("AnomalyGroupId", m_anomalyGroupId);

  }

  if(m_anomalyDetectorArnHasBeenSet)
  {
   payload.WithString("AnomalyDetectorArn", m_anomalyDetectorArn);

  }

  return payload.View().WriteReadable();
}




