﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/CreateMetricSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LookoutMetrics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateMetricSetRequest::CreateMetricSetRequest() : 
    m_anomalyDetectorArnHasBeenSet(false),
    m_metricSetNameHasBeenSet(false),
    m_metricSetDescriptionHasBeenSet(false),
    m_metricListHasBeenSet(false),
    m_offset(0),
    m_offsetHasBeenSet(false),
    m_timestampColumnHasBeenSet(false),
    m_dimensionListHasBeenSet(false),
    m_metricSetFrequency(Frequency::NOT_SET),
    m_metricSetFrequencyHasBeenSet(false),
    m_metricSourceHasBeenSet(false),
    m_timezoneHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateMetricSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_anomalyDetectorArnHasBeenSet)
  {
   payload.WithString("AnomalyDetectorArn", m_anomalyDetectorArn);

  }

  if(m_metricSetNameHasBeenSet)
  {
   payload.WithString("MetricSetName", m_metricSetName);

  }

  if(m_metricSetDescriptionHasBeenSet)
  {
   payload.WithString("MetricSetDescription", m_metricSetDescription);

  }

  if(m_metricListHasBeenSet)
  {
   Array<JsonValue> metricListJsonList(m_metricList.size());
   for(unsigned metricListIndex = 0; metricListIndex < metricListJsonList.GetLength(); ++metricListIndex)
   {
     metricListJsonList[metricListIndex].AsObject(m_metricList[metricListIndex].Jsonize());
   }
   payload.WithArray("MetricList", std::move(metricListJsonList));

  }

  if(m_offsetHasBeenSet)
  {
   payload.WithInteger("Offset", m_offset);

  }

  if(m_timestampColumnHasBeenSet)
  {
   payload.WithObject("TimestampColumn", m_timestampColumn.Jsonize());

  }

  if(m_dimensionListHasBeenSet)
  {
   Array<JsonValue> dimensionListJsonList(m_dimensionList.size());
   for(unsigned dimensionListIndex = 0; dimensionListIndex < dimensionListJsonList.GetLength(); ++dimensionListIndex)
   {
     dimensionListJsonList[dimensionListIndex].AsString(m_dimensionList[dimensionListIndex]);
   }
   payload.WithArray("DimensionList", std::move(dimensionListJsonList));

  }

  if(m_metricSetFrequencyHasBeenSet)
  {
   payload.WithString("MetricSetFrequency", FrequencyMapper::GetNameForFrequency(m_metricSetFrequency));
  }

  if(m_metricSourceHasBeenSet)
  {
   payload.WithObject("MetricSource", m_metricSource.Jsonize());

  }

  if(m_timezoneHasBeenSet)
  {
   payload.WithString("Timezone", m_timezone);

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




