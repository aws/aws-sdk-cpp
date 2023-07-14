/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/SavingsPlansSavings.h>
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

SavingsPlansSavings::SavingsPlansSavings() : 
    m_netSavingsHasBeenSet(false),
    m_onDemandCostEquivalentHasBeenSet(false)
{
}

SavingsPlansSavings::SavingsPlansSavings(JsonView jsonValue) : 
    m_netSavingsHasBeenSet(false),
    m_onDemandCostEquivalentHasBeenSet(false)
{
  *this = jsonValue;
}

SavingsPlansSavings& SavingsPlansSavings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NetSavings"))
  {
    m_netSavings = jsonValue.GetString("NetSavings");

    m_netSavingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OnDemandCostEquivalent"))
  {
    m_onDemandCostEquivalent = jsonValue.GetString("OnDemandCostEquivalent");

    m_onDemandCostEquivalentHasBeenSet = true;
  }

  return *this;
}

JsonValue SavingsPlansSavings::Jsonize() const
{
  JsonValue payload;

  if(m_netSavingsHasBeenSet)
  {
   payload.WithString("NetSavings", m_netSavings);

  }

  if(m_onDemandCostEquivalentHasBeenSet)
  {
   payload.WithString("OnDemandCostEquivalent", m_onDemandCostEquivalent);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
