/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/BillEstimateCostSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BCMPricingCalculator
{
namespace Model
{

BillEstimateCostSummary::BillEstimateCostSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

BillEstimateCostSummary& BillEstimateCostSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("totalCostDifference"))
  {
    m_totalCostDifference = jsonValue.GetObject("totalCostDifference");
    m_totalCostDifferenceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceCostDifferences"))
  {
    Aws::Map<Aws::String, JsonView> serviceCostDifferencesJsonMap = jsonValue.GetObject("serviceCostDifferences").GetAllObjects();
    for(auto& serviceCostDifferencesItem : serviceCostDifferencesJsonMap)
    {
      m_serviceCostDifferences[serviceCostDifferencesItem.first] = serviceCostDifferencesItem.second.AsObject();
    }
    m_serviceCostDifferencesHasBeenSet = true;
  }
  return *this;
}

JsonValue BillEstimateCostSummary::Jsonize() const
{
  JsonValue payload;

  if(m_totalCostDifferenceHasBeenSet)
  {
   payload.WithObject("totalCostDifference", m_totalCostDifference.Jsonize());

  }

  if(m_serviceCostDifferencesHasBeenSet)
  {
   JsonValue serviceCostDifferencesJsonMap;
   for(auto& serviceCostDifferencesItem : m_serviceCostDifferences)
   {
     serviceCostDifferencesJsonMap.WithObject(serviceCostDifferencesItem.first, serviceCostDifferencesItem.second.Jsonize());
   }
   payload.WithObject("serviceCostDifferences", std::move(serviceCostDifferencesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
