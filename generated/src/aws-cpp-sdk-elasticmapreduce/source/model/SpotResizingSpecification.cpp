/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/SpotResizingSpecification.h>
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

SpotResizingSpecification::SpotResizingSpecification(JsonView jsonValue)
{
  *this = jsonValue;
}

SpotResizingSpecification& SpotResizingSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TimeoutDurationMinutes"))
  {
    m_timeoutDurationMinutes = jsonValue.GetInteger("TimeoutDurationMinutes");
    m_timeoutDurationMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AllocationStrategy"))
  {
    m_allocationStrategy = SpotProvisioningAllocationStrategyMapper::GetSpotProvisioningAllocationStrategyForName(jsonValue.GetString("AllocationStrategy"));
    m_allocationStrategyHasBeenSet = true;
  }
  return *this;
}

JsonValue SpotResizingSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_timeoutDurationMinutesHasBeenSet)
  {
   payload.WithInteger("TimeoutDurationMinutes", m_timeoutDurationMinutes);

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
