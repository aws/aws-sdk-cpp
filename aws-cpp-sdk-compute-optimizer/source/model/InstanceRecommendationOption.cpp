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

#include <aws/compute-optimizer/model/InstanceRecommendationOption.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

InstanceRecommendationOption::InstanceRecommendationOption() : 
    m_instanceTypeHasBeenSet(false),
    m_projectedUtilizationMetricsHasBeenSet(false),
    m_performanceRisk(0.0),
    m_performanceRiskHasBeenSet(false),
    m_rank(0),
    m_rankHasBeenSet(false)
{
}

InstanceRecommendationOption::InstanceRecommendationOption(JsonView jsonValue) : 
    m_instanceTypeHasBeenSet(false),
    m_projectedUtilizationMetricsHasBeenSet(false),
    m_performanceRisk(0.0),
    m_performanceRiskHasBeenSet(false),
    m_rank(0),
    m_rankHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceRecommendationOption& InstanceRecommendationOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("instanceType"))
  {
    m_instanceType = jsonValue.GetString("instanceType");

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("projectedUtilizationMetrics"))
  {
    Array<JsonView> projectedUtilizationMetricsJsonList = jsonValue.GetArray("projectedUtilizationMetrics");
    for(unsigned projectedUtilizationMetricsIndex = 0; projectedUtilizationMetricsIndex < projectedUtilizationMetricsJsonList.GetLength(); ++projectedUtilizationMetricsIndex)
    {
      m_projectedUtilizationMetrics.push_back(projectedUtilizationMetricsJsonList[projectedUtilizationMetricsIndex].AsObject());
    }
    m_projectedUtilizationMetricsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("performanceRisk"))
  {
    m_performanceRisk = jsonValue.GetDouble("performanceRisk");

    m_performanceRiskHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rank"))
  {
    m_rank = jsonValue.GetInteger("rank");

    m_rankHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceRecommendationOption::Jsonize() const
{
  JsonValue payload;

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", m_instanceType);

  }

  if(m_projectedUtilizationMetricsHasBeenSet)
  {
   Array<JsonValue> projectedUtilizationMetricsJsonList(m_projectedUtilizationMetrics.size());
   for(unsigned projectedUtilizationMetricsIndex = 0; projectedUtilizationMetricsIndex < projectedUtilizationMetricsJsonList.GetLength(); ++projectedUtilizationMetricsIndex)
   {
     projectedUtilizationMetricsJsonList[projectedUtilizationMetricsIndex].AsObject(m_projectedUtilizationMetrics[projectedUtilizationMetricsIndex].Jsonize());
   }
   payload.WithArray("projectedUtilizationMetrics", std::move(projectedUtilizationMetricsJsonList));

  }

  if(m_performanceRiskHasBeenSet)
  {
   payload.WithDouble("performanceRisk", m_performanceRisk);

  }

  if(m_rankHasBeenSet)
  {
   payload.WithInteger("rank", m_rank);

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
