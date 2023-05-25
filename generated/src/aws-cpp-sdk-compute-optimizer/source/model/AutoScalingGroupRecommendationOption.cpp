/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/AutoScalingGroupRecommendationOption.h>
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

AutoScalingGroupRecommendationOption::AutoScalingGroupRecommendationOption() : 
    m_configurationHasBeenSet(false),
    m_projectedUtilizationMetricsHasBeenSet(false),
    m_performanceRisk(0.0),
    m_performanceRiskHasBeenSet(false),
    m_rank(0),
    m_rankHasBeenSet(false),
    m_savingsOpportunityHasBeenSet(false),
    m_migrationEffort(MigrationEffort::NOT_SET),
    m_migrationEffortHasBeenSet(false)
{
}

AutoScalingGroupRecommendationOption::AutoScalingGroupRecommendationOption(JsonView jsonValue) : 
    m_configurationHasBeenSet(false),
    m_projectedUtilizationMetricsHasBeenSet(false),
    m_performanceRisk(0.0),
    m_performanceRiskHasBeenSet(false),
    m_rank(0),
    m_rankHasBeenSet(false),
    m_savingsOpportunityHasBeenSet(false),
    m_migrationEffort(MigrationEffort::NOT_SET),
    m_migrationEffortHasBeenSet(false)
{
  *this = jsonValue;
}

AutoScalingGroupRecommendationOption& AutoScalingGroupRecommendationOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("configuration"))
  {
    m_configuration = jsonValue.GetObject("configuration");

    m_configurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("projectedUtilizationMetrics"))
  {
    Aws::Utils::Array<JsonView> projectedUtilizationMetricsJsonList = jsonValue.GetArray("projectedUtilizationMetrics");
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

  if(jsonValue.ValueExists("savingsOpportunity"))
  {
    m_savingsOpportunity = jsonValue.GetObject("savingsOpportunity");

    m_savingsOpportunityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("migrationEffort"))
  {
    m_migrationEffort = MigrationEffortMapper::GetMigrationEffortForName(jsonValue.GetString("migrationEffort"));

    m_migrationEffortHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoScalingGroupRecommendationOption::Jsonize() const
{
  JsonValue payload;

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("configuration", m_configuration.Jsonize());

  }

  if(m_projectedUtilizationMetricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> projectedUtilizationMetricsJsonList(m_projectedUtilizationMetrics.size());
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

  if(m_savingsOpportunityHasBeenSet)
  {
   payload.WithObject("savingsOpportunity", m_savingsOpportunity.Jsonize());

  }

  if(m_migrationEffortHasBeenSet)
  {
   payload.WithString("migrationEffort", MigrationEffortMapper::GetNameForMigrationEffort(m_migrationEffort));
  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
