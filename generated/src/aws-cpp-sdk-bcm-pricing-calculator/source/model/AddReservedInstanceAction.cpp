/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/AddReservedInstanceAction.h>
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

AddReservedInstanceAction::AddReservedInstanceAction(JsonView jsonValue)
{
  *this = jsonValue;
}

AddReservedInstanceAction& AddReservedInstanceAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("reservedInstancesOfferingId"))
  {
    m_reservedInstancesOfferingId = jsonValue.GetString("reservedInstancesOfferingId");
    m_reservedInstancesOfferingIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("instanceCount"))
  {
    m_instanceCount = jsonValue.GetInteger("instanceCount");
    m_instanceCountHasBeenSet = true;
  }
  return *this;
}

JsonValue AddReservedInstanceAction::Jsonize() const
{
  JsonValue payload;

  if(m_reservedInstancesOfferingIdHasBeenSet)
  {
   payload.WithString("reservedInstancesOfferingId", m_reservedInstancesOfferingId);

  }

  if(m_instanceCountHasBeenSet)
  {
   payload.WithInteger("instanceCount", m_instanceCount);

  }

  return payload;
}

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
