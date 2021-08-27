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
  enum class CapacityReservationState
  {
    NOT_SET,
    active,
    expired,
    cancelled,
    pending,
    failed
  };

namespace CapacityReservationStateMapper
{
AWS_EC2_API CapacityReservationState GetCapacityReservationStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForCapacityReservationState(CapacityReservationState value);
} // namespace CapacityReservationStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
