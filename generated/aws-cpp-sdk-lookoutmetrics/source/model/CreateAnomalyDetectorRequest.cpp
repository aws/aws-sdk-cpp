/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/CreateAnomalyDetectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LookoutMetrics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAnomalyDetectorRequest::CreateAnomalyDetectorRequest() : 
    m_anomalyDetectorNameHasBeenSet(false),
    m_anomalyDetectorDescriptionHasBeenSet(false),
    m_anomalyDetectorConfigHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateAnomalyDetectorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_anomalyDetectorNameHasBeenSet)
  {
   payload.WithString("AnomalyDetectorName", m_anomalyDetectorName);

  }

  if(m_anomalyDetectorDescriptionHasBeenSet)
  {
   payload.WithString("AnomalyDetectorDescription", m_anomalyDetectorDescription);

  }

  if(m_anomalyDetectorConfigHasBeenSet)
  {
   payload.WithObject("AnomalyDetectorConfig", m_anomalyDetectorConfig.Jsonize());

  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("KmsKeyArn", m_kmsKeyArn);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




