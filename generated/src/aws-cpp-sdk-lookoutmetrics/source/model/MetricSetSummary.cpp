/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/MetricSetSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

MetricSetSummary::MetricSetSummary() : 
    m_metricSetArnHasBeenSet(false),
    m_anomalyDetectorArnHasBeenSet(false),
    m_metricSetDescriptionHasBeenSet(false),
    m_metricSetNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModificationTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

MetricSetSummary::MetricSetSummary(JsonView jsonValue) : 
    m_metricSetArnHasBeenSet(false),
    m_anomalyDetectorArnHasBeenSet(false),
    m_metricSetDescriptionHasBeenSet(false),
    m_metricSetNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModificationTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

MetricSetSummary& MetricSetSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetricSetArn"))
  {
    m_metricSetArn = jsonValue.GetString("MetricSetArn");

    m_metricSetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AnomalyDetectorArn"))
  {
    m_anomalyDetectorArn = jsonValue.GetString("AnomalyDetectorArn");

    m_anomalyDetectorArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricSetDescription"))
  {
    m_metricSetDescription = jsonValue.GetString("MetricSetDescription");

    m_metricSetDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricSetName"))
  {
    m_metricSetName = jsonValue.GetString("MetricSetName");

    m_metricSetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModificationTime"))
  {
    m_lastModificationTime = jsonValue.GetDouble("LastModificationTime");

    m_lastModificationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricSetSummary::Jsonize() const
{
  JsonValue payload;

  if(m_metricSetArnHasBeenSet)
  {
   payload.WithString("MetricSetArn", m_metricSetArn);

  }

  if(m_anomalyDetectorArnHasBeenSet)
  {
   payload.WithString("AnomalyDetectorArn", m_anomalyDetectorArn);

  }

  if(m_metricSetDescriptionHasBeenSet)
  {
   payload.WithString("MetricSetDescription", m_metricSetDescription);

  }

  if(m_metricSetNameHasBeenSet)
  {
   payload.WithString("MetricSetName", m_metricSetName);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModificationTimeHasBeenSet)
  {
   payload.WithDouble("LastModificationTime", m_lastModificationTime.SecondsWithMSPrecision());
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

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
