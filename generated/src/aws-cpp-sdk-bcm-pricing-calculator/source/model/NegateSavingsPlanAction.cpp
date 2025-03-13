/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/NegateSavingsPlanAction.h>
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

NegateSavingsPlanAction::NegateSavingsPlanAction(JsonView jsonValue)
{
  *this = jsonValue;
}

NegateSavingsPlanAction& NegateSavingsPlanAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("savingsPlanId"))
  {
    m_savingsPlanId = jsonValue.GetString("savingsPlanId");
    m_savingsPlanIdHasBeenSet = true;
  }
  return *this;
}

JsonValue NegateSavingsPlanAction::Jsonize() const
{
  JsonValue payload;

  if(m_savingsPlanIdHasBeenSet)
  {
   payload.WithString("savingsPlanId", m_savingsPlanId);

  }

  return payload;
}

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
