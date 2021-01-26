/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class FleetCapacityReservationUsageStrategy
  {
    NOT_SET,
    use_capacity_reservations_first
  };

namespace FleetCapacityReservationUsageStrategyMapper
{
AWS_EC2_API FleetCapacityReservationUsageStrategy GetFleetCapacityReservationUsageStrategyForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForFleetCapacityReservationUsageStrategy(FleetCapacityReservationUsageStrategy value);
} // namespace FleetCapacityReservationUsageStrategyMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
