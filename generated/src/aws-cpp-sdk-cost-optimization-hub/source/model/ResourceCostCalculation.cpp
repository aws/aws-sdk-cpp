/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/ResourceCostCalculation.h>
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

ResourceCostCalculation::ResourceCostCalculation() : 
    m_pricingHasBeenSet(false),
    m_usagesHasBeenSet(false)
{
}

ResourceCostCalculation::ResourceCostCalculation(JsonView jsonValue) : 
    m_pricingHasBeenSet(false),
    m_usagesHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceCostCalculation& ResourceCostCalculation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pricing"))
  {
    m_pricing = jsonValue.GetObject("pricing");

    m_pricingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("usages"))
  {
    Aws::Utils::Array<JsonView> usagesJsonList = jsonValue.GetArray("usages");
    for(unsigned usagesIndex = 0; usagesIndex < usagesJsonList.GetLength(); ++usagesIndex)
    {
      m_usages.push_back(usagesJsonList[usagesIndex].AsObject());
    }
    m_usagesHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceCostCalculation::Jsonize() const
{
  JsonValue payload;

  if(m_pricingHasBeenSet)
  {
   payload.WithObject("pricing", m_pricing.Jsonize());

  }

  if(m_usagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> usagesJsonList(m_usages.size());
   for(unsigned usagesIndex = 0; usagesIndex < usagesJsonList.GetLength(); ++usagesIndex)
   {
     usagesJsonList[usagesIndex].AsObject(m_usages[usagesIndex].Jsonize());
   }
   payload.WithArray("usages", std::move(usagesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
