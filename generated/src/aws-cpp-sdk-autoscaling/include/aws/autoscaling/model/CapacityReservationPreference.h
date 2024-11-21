/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{
  enum class CapacityReservationPreference
  {
    NOT_SET,
    capacity_reservations_only,
    capacity_reservations_first,
    none,
    default_
  };

namespace CapacityReservationPreferenceMapper
{
AWS_AUTOSCALING_API CapacityReservationPreference GetCapacityReservationPreferenceForName(const Aws::String& name);

AWS_AUTOSCALING_API Aws::String GetNameForCapacityReservationPreference(CapacityReservationPreference value);
} // namespace CapacityReservationPreferenceMapper
} // namespace Model
} // namespace AutoScaling
} // namespace Aws
