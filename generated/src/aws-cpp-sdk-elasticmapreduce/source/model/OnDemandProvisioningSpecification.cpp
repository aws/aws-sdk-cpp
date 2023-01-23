/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/OnDemandProvisioningSpecification.h>
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

OnDemandProvisioningSpecification::OnDemandProvisioningSpecification() : 
    m_allocationStrategy(OnDemandProvisioningAllocationStrategy::NOT_SET),
    m_allocationStrategyHasBeenSet(false),
    m_capacityReservationOptionsHasBeenSet(false)
{
}

OnDemandProvisioningSpecification::OnDemandProvisioningSpecification(JsonView jsonValue) : 
    m_allocationStrategy(OnDemandProvisioningAllocationStrategy::NOT_SET),
    m_allocationStrategyHasBeenSet(false),
    m_capacityReservationOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

OnDemandProvisioningSpecification& OnDemandProvisioningSpecification::operator =(JsonView jsonValue)
{
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

JsonValue OnDemandProvisioningSpecification::Jsonize() const
{
  JsonValue payload;

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
