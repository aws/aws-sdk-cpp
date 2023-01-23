/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMR
{
namespace Model
{
  enum class OnDemandCapacityReservationUsageStrategy
  {
    NOT_SET,
    use_capacity_reservations_first
  };

namespace OnDemandCapacityReservationUsageStrategyMapper
{
AWS_EMR_API OnDemandCapacityReservationUsageStrategy GetOnDemandCapacityReservationUsageStrategyForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForOnDemandCapacityReservationUsageStrategy(OnDemandCapacityReservationUsageStrategy value);
} // namespace OnDemandCapacityReservationUsageStrategyMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
