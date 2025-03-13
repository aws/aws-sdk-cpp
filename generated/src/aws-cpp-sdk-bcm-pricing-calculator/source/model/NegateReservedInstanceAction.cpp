/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/NegateReservedInstanceAction.h>
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

NegateReservedInstanceAction::NegateReservedInstanceAction(JsonView jsonValue)
{
  *this = jsonValue;
}

NegateReservedInstanceAction& NegateReservedInstanceAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("reservedInstancesId"))
  {
    m_reservedInstancesId = jsonValue.GetString("reservedInstancesId");
    m_reservedInstancesIdHasBeenSet = true;
  }
  return *this;
}

JsonValue NegateReservedInstanceAction::Jsonize() const
{
  JsonValue payload;

  if(m_reservedInstancesIdHasBeenSet)
  {
   payload.WithString("reservedInstancesId", m_reservedInstancesId);

  }

  return payload;
}

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
