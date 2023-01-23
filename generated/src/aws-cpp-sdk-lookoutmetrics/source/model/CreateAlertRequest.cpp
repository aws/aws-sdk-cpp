/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/CreateAlertRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LookoutMetrics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAlertRequest::CreateAlertRequest() : 
    m_alertNameHasBeenSet(false),
    m_alertSensitivityThreshold(0),
    m_alertSensitivityThresholdHasBeenSet(false),
    m_alertDescriptionHasBeenSet(false),
    m_anomalyDetectorArnHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_alertFiltersHasBeenSet(false)
{
}

Aws::String CreateAlertRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_alertNameHasBeenSet)
  {
   payload.WithString("AlertName", m_alertName);

  }

  if(m_alertSensitivityThresholdHasBeenSet)
  {
   payload.WithInteger("AlertSensitivityThreshold", m_alertSensitivityThreshold);

  }

  if(m_alertDescriptionHasBeenSet)
  {
   payload.WithString("AlertDescription", m_alertDescription);

  }

  if(m_anomalyDetectorArnHasBeenSet)
  {
   payload.WithString("AnomalyDetectorArn", m_anomalyDetectorArn);

  }

  if(m_actionHasBeenSet)
  {
   payload.WithObject("Action", m_action.Jsonize());

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

  if(m_alertFiltersHasBeenSet)
  {
   payload.WithObject("AlertFilters", m_alertFilters.Jsonize());

  }

  return payload.View().WriteReadable();
}




