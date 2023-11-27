/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/RecommendationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostOptimizationHub
{
namespace Model
{

RecommendationSummary::RecommendationSummary() : 
    m_estimatedMonthlySavings(0.0),
    m_estimatedMonthlySavingsHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_recommendationCount(0),
    m_recommendationCountHasBeenSet(false)
{
}

RecommendationSummary::RecommendationSummary(JsonView jsonValue) : 
    m_estimatedMonthlySavings(0.0),
    m_estimatedMonthlySavingsHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_recommendationCount(0),
    m_recommendationCountHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendationSummary& RecommendationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("estimatedMonthlySavings"))
  {
    m_estimatedMonthlySavings = jsonValue.GetDouble("estimatedMonthlySavings");

    m_estimatedMonthlySavingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("group"))
  {
    m_group = jsonValue.GetString("group");

    m_groupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recommendationCount"))
  {
    m_recommendationCount = jsonValue.GetInteger("recommendationCount");

    m_recommendationCountHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommendationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_estimatedMonthlySavingsHasBeenSet)
  {
   payload.WithDouble("estimatedMonthlySavings", m_estimatedMonthlySavings);

  }

  if(m_groupHasBeenSet)
  {
   payload.WithString("group", m_group);

  }

  if(m_recommendationCountHasBeenSet)
  {
   payload.WithInteger("recommendationCount", m_recommendationCount);

  }

  return payload;
}

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
