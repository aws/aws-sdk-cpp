/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/DeleteAnomalyDetectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LookoutMetrics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAnomalyDetectorRequest::DeleteAnomalyDetectorRequest() : 
    m_anomalyDetectorArnHasBeenSet(false)
{
}

Aws::String DeleteAnomalyDetectorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_anomalyDetectorArnHasBeenSet)
  {
   payload.WithString("AnomalyDetectorArn", m_anomalyDetectorArn);

  }

  return payload.View().WriteReadable();
}




