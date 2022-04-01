/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/RightsizingRecommendationConfiguration.h>
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

RightsizingRecommendationConfiguration::RightsizingRecommendationConfiguration() : 
    m_recommendationTarget(RecommendationTarget::NOT_SET),
    m_recommendationTargetHasBeenSet(false),
    m_benefitsConsidered(false),
    m_benefitsConsideredHasBeenSet(false)
{
}

RightsizingRecommendationConfiguration::RightsizingRecommendationConfiguration(JsonView jsonValue) : 
    m_recommendationTarget(RecommendationTarget::NOT_SET),
    m_recommendationTargetHasBeenSet(false),
    m_benefitsConsidered(false),
    m_benefitsConsideredHasBeenSet(false)
{
  *this = jsonValue;
}

RightsizingRecommendationConfiguration& RightsizingRecommendationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RecommendationTarget"))
  {
    m_recommendationTarget = RecommendationTargetMapper::GetRecommendationTargetForName(jsonValue.GetString("RecommendationTarget"));

    m_recommendationTargetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BenefitsConsidered"))
  {
    m_benefitsConsidered = jsonValue.GetBool("BenefitsConsidered");

    m_benefitsConsideredHasBeenSet = true;
  }

  return *this;
}

JsonValue RightsizingRecommendationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_recommendationTargetHasBeenSet)
  {
   payload.WithString("RecommendationTarget", RecommendationTargetMapper::GetNameForRecommendationTarget(m_recommendationTarget));
  }

  if(m_benefitsConsideredHasBeenSet)
  {
   payload.WithBool("BenefitsConsidered", m_benefitsConsidered);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
