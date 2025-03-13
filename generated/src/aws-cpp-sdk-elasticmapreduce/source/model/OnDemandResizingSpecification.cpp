/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/OnDemandResizingSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

OnDemandResizingSpecification::OnDemandResizingSpecification(JsonView jsonValue)
{
  *this = jsonValue;
}

OnDemandResizingSpecification& OnDemandResizingSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TimeoutDurationMinutes"))
  {
    m_timeoutDurationMinutes = jsonValue.GetInteger("TimeoutDurationMinutes");
    m_timeoutDurationMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AllocationStrategy"))
  {
    m_allocationStrategy = OnDemandProvisioningAllocationStrategyMapper::GetOnDemandProvisioningAllocationStrategyForName(jsonValue.GetString("AllocationStrategy"));
    m_allocationStrategyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CapacityReservationOptions"))
  {
    m_capacityReservationOptions = jsonValue.GetObject("CapacityReservationOptions");
    m_capacityReservationOptionsHasBeenSet = true;
  }
  return *this;
}

JsonValue OnDemandResizingSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_timeoutDurationMinutesHasBeenSet)
  {
   payload.WithInteger("TimeoutDurationMinutes", m_timeoutDurationMinutes);

  }

  if(m_allocationStrategyHasBeenSet)
  {
   payload.WithString("AllocationStrategy", OnDemandProvisioningAllocationStrategyMapper::GetNameForOnDemandProvisioningAllocationStrategy(m_allocationStrategy));
  }

  if(m_capacityReservationOptionsHasBeenSet)
  {
   payload.WithObject("CapacityReservationOptions", m_capacityReservationOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
