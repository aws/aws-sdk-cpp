/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/CoverageCost.h>
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

CoverageCost::CoverageCost() : 
    m_onDemandCostHasBeenSet(false)
{
}

CoverageCost::CoverageCost(JsonView jsonValue) : 
    m_onDemandCostHasBeenSet(false)
{
  *this = jsonValue;
}

CoverageCost& CoverageCost::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OnDemandCost"))
  {
    m_onDemandCost = jsonValue.GetString("OnDemandCost");

    m_onDemandCostHasBeenSet = true;
  }

  return *this;
}

JsonValue CoverageCost::Jsonize() const
{
  JsonValue payload;

  if(m_onDemandCostHasBeenSet)
  {
   payload.WithString("OnDemandCost", m_onDemandCost);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
