/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/ResourcePricing.h>
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

ResourcePricing::ResourcePricing(JsonView jsonValue)
{
  *this = jsonValue;
}

ResourcePricing& ResourcePricing::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("estimatedCostBeforeDiscounts"))
  {
    m_estimatedCostBeforeDiscounts = jsonValue.GetDouble("estimatedCostBeforeDiscounts");
    m_estimatedCostBeforeDiscountsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("estimatedNetUnusedAmortizedCommitments"))
  {
    m_estimatedNetUnusedAmortizedCommitments = jsonValue.GetDouble("estimatedNetUnusedAmortizedCommitments");
    m_estimatedNetUnusedAmortizedCommitmentsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("estimatedDiscounts"))
  {
    m_estimatedDiscounts = jsonValue.GetObject("estimatedDiscounts");
    m_estimatedDiscountsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("estimatedCostAfterDiscounts"))
  {
    m_estimatedCostAfterDiscounts = jsonValue.GetDouble("estimatedCostAfterDiscounts");
    m_estimatedCostAfterDiscountsHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourcePricing::Jsonize() const
{
  JsonValue payload;

  if(m_estimatedCostBeforeDiscountsHasBeenSet)
  {
   payload.WithDouble("estimatedCostBeforeDiscounts", m_estimatedCostBeforeDiscounts);

  }

  if(m_estimatedNetUnusedAmortizedCommitmentsHasBeenSet)
  {
   payload.WithDouble("estimatedNetUnusedAmortizedCommitments", m_estimatedNetUnusedAmortizedCommitments);

  }

  if(m_estimatedDiscountsHasBeenSet)
  {
   payload.WithObject("estimatedDiscounts", m_estimatedDiscounts.Jsonize());

  }

  if(m_estimatedCostAfterDiscountsHasBeenSet)
  {
   payload.WithDouble("estimatedCostAfterDiscounts", m_estimatedCostAfterDiscounts);

  }

  return payload;
}

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
