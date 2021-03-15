/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/OnDemandCapacityReservationOptions.h>
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

OnDemandCapacityReservationOptions::OnDemandCapacityReservationOptions() : 
    m_usageStrategy(OnDemandCapacityReservationUsageStrategy::NOT_SET),
    m_usageStrategyHasBeenSet(false),
    m_capacityReservationPreference(OnDemandCapacityReservationPreference::NOT_SET),
    m_capacityReservationPreferenceHasBeenSet(false),
    m_capacityReservationResourceGroupArnHasBeenSet(false)
{
}

OnDemandCapacityReservationOptions::OnDemandCapacityReservationOptions(JsonView jsonValue) : 
    m_usageStrategy(OnDemandCapacityReservationUsageStrategy::NOT_SET),
    m_usageStrategyHasBeenSet(false),
    m_capacityReservationPreference(OnDemandCapacityReservationPreference::NOT_SET),
    m_capacityReservationPreferenceHasBeenSet(false),
    m_capacityReservationResourceGroupArnHasBeenSet(false)
{
  *this = jsonValue;
}

OnDemandCapacityReservationOptions& OnDemandCapacityReservationOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UsageStrategy"))
  {
    m_usageStrategy = OnDemandCapacityReservationUsageStrategyMapper::GetOnDemandCapacityReservationUsageStrategyForName(jsonValue.GetString("UsageStrategy"));

    m_usageStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CapacityReservationPreference"))
  {
    m_capacityReservationPreference = OnDemandCapacityReservationPreferenceMapper::GetOnDemandCapacityReservationPreferenceForName(jsonValue.GetString("CapacityReservationPreference"));

    m_capacityReservationPreferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CapacityReservationResourceGroupArn"))
  {
    m_capacityReservationResourceGroupArn = jsonValue.GetString("CapacityReservationResourceGroupArn");

    m_capacityReservationResourceGroupArnHasBeenSet = true;
  }

  return *this;
}

JsonValue OnDemandCapacityReservationOptions::Jsonize() const
{
  JsonValue payload;

  if(m_usageStrategyHasBeenSet)
  {
   payload.WithString("UsageStrategy", OnDemandCapacityReservationUsageStrategyMapper::GetNameForOnDemandCapacityReservationUsageStrategy(m_usageStrategy));
  }

  if(m_capacityReservationPreferenceHasBeenSet)
  {
   payload.WithString("CapacityReservationPreference", OnDemandCapacityReservationPreferenceMapper::GetNameForOnDemandCapacityReservationPreference(m_capacityReservationPreference));
  }

  if(m_capacityReservationResourceGroupArnHasBeenSet)
  {
   payload.WithString("CapacityReservationResourceGroupArn", m_capacityReservationResourceGroupArn);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
