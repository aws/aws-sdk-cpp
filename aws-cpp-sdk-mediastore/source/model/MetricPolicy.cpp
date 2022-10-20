/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediastore/model/MetricPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaStore
{
namespace Model
{

MetricPolicy::MetricPolicy() : 
    m_containerLevelMetrics(ContainerLevelMetrics::NOT_SET),
    m_containerLevelMetricsHasBeenSet(false),
    m_metricPolicyRulesHasBeenSet(false)
{
}

MetricPolicy::MetricPolicy(JsonView jsonValue) : 
    m_containerLevelMetrics(ContainerLevelMetrics::NOT_SET),
    m_containerLevelMetricsHasBeenSet(false),
    m_metricPolicyRulesHasBeenSet(false)
{
  *this = jsonValue;
}

MetricPolicy& MetricPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContainerLevelMetrics"))
  {
    m_containerLevelMetrics = ContainerLevelMetricsMapper::GetContainerLevelMetricsForName(jsonValue.GetString("ContainerLevelMetrics"));

    m_containerLevelMetricsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricPolicyRules"))
  {
    Aws::Utils::Array<JsonView> metricPolicyRulesJsonList = jsonValue.GetArray("MetricPolicyRules");
    for(unsigned metricPolicyRulesIndex = 0; metricPolicyRulesIndex < metricPolicyRulesJsonList.GetLength(); ++metricPolicyRulesIndex)
    {
      m_metricPolicyRules.push_back(metricPolicyRulesJsonList[metricPolicyRulesIndex].AsObject());
    }
    m_metricPolicyRulesHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_containerLevelMetricsHasBeenSet)
  {
   payload.WithString("ContainerLevelMetrics", ContainerLevelMetricsMapper::GetNameForContainerLevelMetrics(m_containerLevelMetrics));
  }

  if(m_metricPolicyRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricPolicyRulesJsonList(m_metricPolicyRules.size());
   for(unsigned metricPolicyRulesIndex = 0; metricPolicyRulesIndex < metricPolicyRulesJsonList.GetLength(); ++metricPolicyRulesIndex)
   {
     metricPolicyRulesJsonList[metricPolicyRulesIndex].AsObject(m_metricPolicyRules[metricPolicyRulesIndex].Jsonize());
   }
   payload.WithArray("MetricPolicyRules", std::move(metricPolicyRulesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaStore
} // namespace Aws
