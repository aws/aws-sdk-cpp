/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/ServiceResourceCost.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

ServiceResourceCost::ServiceResourceCost() : 
    m_typeHasBeenSet(false),
    m_state(CostEstimationServiceResourceState::NOT_SET),
    m_stateHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_unitCost(0.0),
    m_unitCostHasBeenSet(false),
    m_cost(0.0),
    m_costHasBeenSet(false)
{
}

ServiceResourceCost::ServiceResourceCost(JsonView jsonValue) : 
    m_typeHasBeenSet(false),
    m_state(CostEstimationServiceResourceState::NOT_SET),
    m_stateHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_unitCost(0.0),
    m_unitCostHasBeenSet(false),
    m_cost(0.0),
    m_costHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceResourceCost& ServiceResourceCost::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = CostEstimationServiceResourceStateMapper::GetCostEstimationServiceResourceStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Count"))
  {
    m_count = jsonValue.GetInteger("Count");

    m_countHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UnitCost"))
  {
    m_unitCost = jsonValue.GetDouble("UnitCost");

    m_unitCostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Cost"))
  {
    m_cost = jsonValue.GetDouble("Cost");

    m_costHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceResourceCost::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", CostEstimationServiceResourceStateMapper::GetNameForCostEstimationServiceResourceState(m_state));
  }

  if(m_countHasBeenSet)
  {
   payload.WithInteger("Count", m_count);

  }

  if(m_unitCostHasBeenSet)
  {
   payload.WithDouble("UnitCost", m_unitCost);

  }

  if(m_costHasBeenSet)
  {
   payload.WithDouble("Cost", m_cost);

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
