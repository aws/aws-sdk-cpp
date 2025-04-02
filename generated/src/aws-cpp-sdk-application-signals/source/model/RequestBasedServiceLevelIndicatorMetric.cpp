/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/RequestBasedServiceLevelIndicatorMetric.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationSignals
{
namespace Model
{

RequestBasedServiceLevelIndicatorMetric::RequestBasedServiceLevelIndicatorMetric(JsonView jsonValue)
{
  *this = jsonValue;
}

RequestBasedServiceLevelIndicatorMetric& RequestBasedServiceLevelIndicatorMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeyAttributes"))
  {
    Aws::Map<Aws::String, JsonView> keyAttributesJsonMap = jsonValue.GetObject("KeyAttributes").GetAllObjects();
    for(auto& keyAttributesItem : keyAttributesJsonMap)
    {
      m_keyAttributes[keyAttributesItem.first] = keyAttributesItem.second.AsString();
    }
    m_keyAttributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OperationName"))
  {
    m_operationName = jsonValue.GetString("OperationName");
    m_operationNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MetricType"))
  {
    m_metricType = ServiceLevelIndicatorMetricTypeMapper::GetServiceLevelIndicatorMetricTypeForName(jsonValue.GetString("MetricType"));
    m_metricTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalRequestCountMetric"))
  {
    Aws::Utils::Array<JsonView> totalRequestCountMetricJsonList = jsonValue.GetArray("TotalRequestCountMetric");
    for(unsigned totalRequestCountMetricIndex = 0; totalRequestCountMetricIndex < totalRequestCountMetricJsonList.GetLength(); ++totalRequestCountMetricIndex)
    {
      m_totalRequestCountMetric.push_back(totalRequestCountMetricJsonList[totalRequestCountMetricIndex].AsObject());
    }
    m_totalRequestCountMetricHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MonitoredRequestCountMetric"))
  {
    m_monitoredRequestCountMetric = jsonValue.GetObject("MonitoredRequestCountMetric");
    m_monitoredRequestCountMetricHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DependencyConfig"))
  {
    m_dependencyConfig = jsonValue.GetObject("DependencyConfig");
    m_dependencyConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue RequestBasedServiceLevelIndicatorMetric::Jsonize() const
{
  JsonValue payload;

  if(m_keyAttributesHasBeenSet)
  {
   JsonValue keyAttributesJsonMap;
   for(auto& keyAttributesItem : m_keyAttributes)
   {
     keyAttributesJsonMap.WithString(keyAttributesItem.first, keyAttributesItem.second);
   }
   payload.WithObject("KeyAttributes", std::move(keyAttributesJsonMap));

  }

  if(m_operationNameHasBeenSet)
  {
   payload.WithString("OperationName", m_operationName);

  }

  if(m_metricTypeHasBeenSet)
  {
   payload.WithString("MetricType", ServiceLevelIndicatorMetricTypeMapper::GetNameForServiceLevelIndicatorMetricType(m_metricType));
  }

  if(m_totalRequestCountMetricHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> totalRequestCountMetricJsonList(m_totalRequestCountMetric.size());
   for(unsigned totalRequestCountMetricIndex = 0; totalRequestCountMetricIndex < totalRequestCountMetricJsonList.GetLength(); ++totalRequestCountMetricIndex)
   {
     totalRequestCountMetricJsonList[totalRequestCountMetricIndex].AsObject(m_totalRequestCountMetric[totalRequestCountMetricIndex].Jsonize());
   }
   payload.WithArray("TotalRequestCountMetric", std::move(totalRequestCountMetricJsonList));

  }

  if(m_monitoredRequestCountMetricHasBeenSet)
  {
   payload.WithObject("MonitoredRequestCountMetric", m_monitoredRequestCountMetric.Jsonize());

  }

  if(m_dependencyConfigHasBeenSet)
  {
   payload.WithObject("DependencyConfig", m_dependencyConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
