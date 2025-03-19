/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/RDSDBInstanceRecommendationOption.h>
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

RDSDBInstanceRecommendationOption::RDSDBInstanceRecommendationOption(JsonView jsonValue)
{
  *this = jsonValue;
}

RDSDBInstanceRecommendationOption& RDSDBInstanceRecommendationOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dbInstanceClass"))
  {
    m_dbInstanceClass = jsonValue.GetString("dbInstanceClass");
    m_dbInstanceClassHasBeenSet = true;
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
  if(jsonValue.ValueExists("savingsOpportunityAfterDiscounts"))
  {
    m_savingsOpportunityAfterDiscounts = jsonValue.GetObject("savingsOpportunityAfterDiscounts");
    m_savingsOpportunityAfterDiscountsHasBeenSet = true;
  }
  return *this;
}

JsonValue RDSDBInstanceRecommendationOption::Jsonize() const
{
  JsonValue payload;

  if(m_dbInstanceClassHasBeenSet)
  {
   payload.WithString("dbInstanceClass", m_dbInstanceClass);

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

  if(m_savingsOpportunityAfterDiscountsHasBeenSet)
  {
   payload.WithObject("savingsOpportunityAfterDiscounts", m_savingsOpportunityAfterDiscounts.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
