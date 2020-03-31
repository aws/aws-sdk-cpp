/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    Array<JsonView> metricPolicyRulesJsonList = jsonValue.GetArray("MetricPolicyRules");
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
   Array<JsonValue> metricPolicyRulesJsonList(m_metricPolicyRules.size());
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
