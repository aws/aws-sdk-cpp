/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/RecommendationDetailHourlyMetrics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

RecommendationDetailHourlyMetrics::RecommendationDetailHourlyMetrics() : 
    m_startTimeHasBeenSet(false),
    m_estimatedOnDemandCostHasBeenSet(false),
    m_currentCoverageHasBeenSet(false),
    m_estimatedCoverageHasBeenSet(false),
    m_estimatedNewCommitmentUtilizationHasBeenSet(false)
{
}

RecommendationDetailHourlyMetrics::RecommendationDetailHourlyMetrics(JsonView jsonValue) : 
    m_startTimeHasBeenSet(false),
    m_estimatedOnDemandCostHasBeenSet(false),
    m_currentCoverageHasBeenSet(false),
    m_estimatedCoverageHasBeenSet(false),
    m_estimatedNewCommitmentUtilizationHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendationDetailHourlyMetrics& RecommendationDetailHourlyMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetString("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EstimatedOnDemandCost"))
  {
    m_estimatedOnDemandCost = jsonValue.GetString("EstimatedOnDemandCost");

    m_estimatedOnDemandCostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentCoverage"))
  {
    m_currentCoverage = jsonValue.GetString("CurrentCoverage");

    m_currentCoverageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EstimatedCoverage"))
  {
    m_estimatedCoverage = jsonValue.GetString("EstimatedCoverage");

    m_estimatedCoverageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EstimatedNewCommitmentUtilization"))
  {
    m_estimatedNewCommitmentUtilization = jsonValue.GetString("EstimatedNewCommitmentUtilization");

    m_estimatedNewCommitmentUtilizationHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommendationDetailHourlyMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("StartTime", m_startTime);

  }

  if(m_estimatedOnDemandCostHasBeenSet)
  {
   payload.WithString("EstimatedOnDemandCost", m_estimatedOnDemandCost);

  }

  if(m_currentCoverageHasBeenSet)
  {
   payload.WithString("CurrentCoverage", m_currentCoverage);

  }

  if(m_estimatedCoverageHasBeenSet)
  {
   payload.WithString("EstimatedCoverage", m_estimatedCoverage);

  }

  if(m_estimatedNewCommitmentUtilizationHasBeenSet)
  {
   payload.WithString("EstimatedNewCommitmentUtilization", m_estimatedNewCommitmentUtilization);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
