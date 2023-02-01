/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/SpotProvisioningSpecification.h>
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

SpotProvisioningSpecification::SpotProvisioningSpecification() : 
    m_timeoutDurationMinutes(0),
    m_timeoutDurationMinutesHasBeenSet(false),
    m_timeoutAction(SpotProvisioningTimeoutAction::NOT_SET),
    m_timeoutActionHasBeenSet(false),
    m_blockDurationMinutes(0),
    m_blockDurationMinutesHasBeenSet(false),
    m_allocationStrategy(SpotProvisioningAllocationStrategy::NOT_SET),
    m_allocationStrategyHasBeenSet(false)
{
}

SpotProvisioningSpecification::SpotProvisioningSpecification(JsonView jsonValue) : 
    m_timeoutDurationMinutes(0),
    m_timeoutDurationMinutesHasBeenSet(false),
    m_timeoutAction(SpotProvisioningTimeoutAction::NOT_SET),
    m_timeoutActionHasBeenSet(false),
    m_blockDurationMinutes(0),
    m_blockDurationMinutesHasBeenSet(false),
    m_allocationStrategy(SpotProvisioningAllocationStrategy::NOT_SET),
    m_allocationStrategyHasBeenSet(false)
{
  *this = jsonValue;
}

SpotProvisioningSpecification& SpotProvisioningSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TimeoutDurationMinutes"))
  {
    m_timeoutDurationMinutes = jsonValue.GetInteger("TimeoutDurationMinutes");

    m_timeoutDurationMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeoutAction"))
  {
    m_timeoutAction = SpotProvisioningTimeoutActionMapper::GetSpotProvisioningTimeoutActionForName(jsonValue.GetString("TimeoutAction"));

    m_timeoutActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BlockDurationMinutes"))
  {
    m_blockDurationMinutes = jsonValue.GetInteger("BlockDurationMinutes");

    m_blockDurationMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllocationStrategy"))
  {
    m_allocationStrategy = SpotProvisioningAllocationStrategyMapper::GetSpotProvisioningAllocationStrategyForName(jsonValue.GetString("AllocationStrategy"));

    m_allocationStrategyHasBeenSet = true;
  }

  return *this;
}

JsonValue SpotProvisioningSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_timeoutDurationMinutesHasBeenSet)
  {
   payload.WithInteger("TimeoutDurationMinutes", m_timeoutDurationMinutes);

  }

  if(m_timeoutActionHasBeenSet)
  {
   payload.WithString("TimeoutAction", SpotProvisioningTimeoutActionMapper::GetNameForSpotProvisioningTimeoutAction(m_timeoutAction));
  }

  if(m_blockDurationMinutesHasBeenSet)
  {
   payload.WithInteger("BlockDurationMinutes", m_blockDurationMinutes);

  }

  if(m_allocationStrategyHasBeenSet)
  {
   payload.WithString("AllocationStrategy", SpotProvisioningAllocationStrategyMapper::GetNameForSpotProvisioningAllocationStrategy(m_allocationStrategy));
  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
