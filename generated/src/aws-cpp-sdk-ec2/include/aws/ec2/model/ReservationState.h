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
  enum class ReservationState
  {
    NOT_SET,
    active,
    expired,
    cancelled,
    scheduled,
    pending,
    failed,
    delayed,
    unsupported,
    payment_pending,
    payment_failed,
    retired
  };

namespace ReservationStateMapper
{
AWS_EC2_API ReservationState GetReservationStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForReservationState(ReservationState value);
} // namespace ReservationStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
