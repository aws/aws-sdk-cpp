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
  enum class CapacityReservationFleetState
  {
    NOT_SET,
    submitted,
    modifying,
    active,
    partially_fulfilled,
    expiring,
    expired,
    cancelling,
    cancelled,
    failed
  };

namespace CapacityReservationFleetStateMapper
{
AWS_EC2_API CapacityReservationFleetState GetCapacityReservationFleetStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForCapacityReservationFleetState(CapacityReservationFleetState value);
} // namespace CapacityReservationFleetStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
