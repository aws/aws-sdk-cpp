/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/BillScenarioCommitmentModificationAction.h>
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

BillScenarioCommitmentModificationAction::BillScenarioCommitmentModificationAction(JsonView jsonValue)
{
  *this = jsonValue;
}

BillScenarioCommitmentModificationAction& BillScenarioCommitmentModificationAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("addReservedInstanceAction"))
  {
    m_addReservedInstanceAction = jsonValue.GetObject("addReservedInstanceAction");
    m_addReservedInstanceActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("addSavingsPlanAction"))
  {
    m_addSavingsPlanAction = jsonValue.GetObject("addSavingsPlanAction");
    m_addSavingsPlanActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("negateReservedInstanceAction"))
  {
    m_negateReservedInstanceAction = jsonValue.GetObject("negateReservedInstanceAction");
    m_negateReservedInstanceActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("negateSavingsPlanAction"))
  {
    m_negateSavingsPlanAction = jsonValue.GetObject("negateSavingsPlanAction");
    m_negateSavingsPlanActionHasBeenSet = true;
  }
  return *this;
}

JsonValue BillScenarioCommitmentModificationAction::Jsonize() const
{
  JsonValue payload;

  if(m_addReservedInstanceActionHasBeenSet)
  {
   payload.WithObject("addReservedInstanceAction", m_addReservedInstanceAction.Jsonize());

  }

  if(m_addSavingsPlanActionHasBeenSet)
  {
   payload.WithObject("addSavingsPlanAction", m_addSavingsPlanAction.Jsonize());

  }

  if(m_negateReservedInstanceActionHasBeenSet)
  {
   payload.WithObject("negateReservedInstanceAction", m_negateReservedInstanceAction.Jsonize());

  }

  if(m_negateSavingsPlanActionHasBeenSet)
  {
   payload.WithObject("negateSavingsPlanAction", m_negateSavingsPlanAction.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
