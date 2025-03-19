/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-autoscaling/model/PredictiveScalingCustomizedMetricSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationAutoScaling
{
namespace Model
{

PredictiveScalingCustomizedMetricSpecification::PredictiveScalingCustomizedMetricSpecification(JsonView jsonValue)
{
  *this = jsonValue;
}

PredictiveScalingCustomizedMetricSpecification& PredictiveScalingCustomizedMetricSpecification::operator =(JsonView jsonValue)
{
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

JsonValue PredictiveScalingCustomizedMetricSpecification::Jsonize() const
{
  JsonValue payload;

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
} // namespace ApplicationAutoScaling
} // namespace Aws
