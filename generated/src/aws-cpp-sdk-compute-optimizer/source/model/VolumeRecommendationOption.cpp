/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/VolumeRecommendationOption.h>
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

VolumeRecommendationOption::VolumeRecommendationOption() : 
    m_configurationHasBeenSet(false),
    m_performanceRisk(0.0),
    m_performanceRiskHasBeenSet(false),
    m_rank(0),
    m_rankHasBeenSet(false),
    m_savingsOpportunityHasBeenSet(false),
    m_savingsOpportunityAfterDiscountsHasBeenSet(false)
{
}

VolumeRecommendationOption::VolumeRecommendationOption(JsonView jsonValue) : 
    m_configurationHasBeenSet(false),
    m_performanceRisk(0.0),
    m_performanceRiskHasBeenSet(false),
    m_rank(0),
    m_rankHasBeenSet(false),
    m_savingsOpportunityHasBeenSet(false),
    m_savingsOpportunityAfterDiscountsHasBeenSet(false)
{
  *this = jsonValue;
}

VolumeRecommendationOption& VolumeRecommendationOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("configuration"))
  {
    m_configuration = jsonValue.GetObject("configuration");

    m_configurationHasBeenSet = true;
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

JsonValue VolumeRecommendationOption::Jsonize() const
{
  JsonValue payload;

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("configuration", m_configuration.Jsonize());

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
