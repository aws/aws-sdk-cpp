﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/ServiceLevelIndicatorMetricConfig.h>
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

ServiceLevelIndicatorMetricConfig::ServiceLevelIndicatorMetricConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceLevelIndicatorMetricConfig& ServiceLevelIndicatorMetricConfig::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("Statistic"))
  {
    m_statistic = jsonValue.GetString("Statistic");
    m_statisticHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PeriodSeconds"))
  {
    m_periodSeconds = jsonValue.GetInteger("PeriodSeconds");
    m_periodSecondsHasBeenSet = true;
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
  return *this;
}

JsonValue ServiceLevelIndicatorMetricConfig::Jsonize() const
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

  if(m_statisticHasBeenSet)
  {
   payload.WithString("Statistic", m_statistic);

  }

  if(m_periodSecondsHasBeenSet)
  {
   payload.WithInteger("PeriodSeconds", m_periodSeconds);

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

  return payload;
}

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
