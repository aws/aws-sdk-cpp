/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/UpdateAnomalyDetectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LookoutMetrics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAnomalyDetectorRequest::UpdateAnomalyDetectorRequest() : 
    m_anomalyDetectorArnHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false),
    m_anomalyDetectorDescriptionHasBeenSet(false),
    m_anomalyDetectorConfigHasBeenSet(false)
{
}

Aws::String UpdateAnomalyDetectorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_anomalyDetectorArnHasBeenSet)
  {
   payload.WithString("AnomalyDetectorArn", m_anomalyDetectorArn);

  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("KmsKeyArn", m_kmsKeyArn);

  }

  if(m_anomalyDetectorDescriptionHasBeenSet)
  {
   payload.WithString("AnomalyDetectorDescription", m_anomalyDetectorDescription);

  }

  if(m_anomalyDetectorConfigHasBeenSet)
  {
   payload.WithObject("AnomalyDetectorConfig", m_anomalyDetectorConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




