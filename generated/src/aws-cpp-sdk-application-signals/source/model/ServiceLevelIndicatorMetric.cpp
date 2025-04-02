/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/ServiceLevelIndicatorMetric.h>
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

ServiceLevelIndicatorMetric::ServiceLevelIndicatorMetric(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceLevelIndicatorMetric& ServiceLevelIndicatorMetric::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("MetricDataQueries"))
  {
    Aws::Utils::Array<JsonView> metricDataQueriesJsonList = jsonValue.GetArray("MetricDataQueries");
    for(unsigned metricDataQueriesIndex = 0; metricDataQueriesIndex < metricDataQueriesJsonList.GetLength(); ++metricDataQueriesIndex)
    {
      m_metricDataQueries.push_back(metricDataQueriesJsonList[metricDataQueriesIndex].AsObject());
    }
    m_metricDataQueriesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DependencyConfig"))
  {
    m_dependencyConfig = jsonValue.GetObject("DependencyConfig");
    m_dependencyConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceLevelIndicatorMetric::Jsonize() const
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

  if(m_metricDataQueriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricDataQueriesJsonList(m_metricDataQueries.size());
   for(unsigned metricDataQueriesIndex = 0; metricDataQueriesIndex < metricDataQueriesJsonList.GetLength(); ++metricDataQueriesIndex)
   {
     metricDataQueriesJsonList[metricDataQueriesIndex].AsObject(m_metricDataQueries[metricDataQueriesIndex].Jsonize());
   }
   payload.WithArray("MetricDataQueries", std::move(metricDataQueriesJsonList));

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
