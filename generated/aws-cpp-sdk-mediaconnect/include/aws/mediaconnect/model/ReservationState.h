/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{
  enum class ReservationState
  {
    NOT_SET,
    ACTIVE,
    EXPIRED,
    PROCESSING,
    CANCELED
  };

namespace ReservationStateMapper
{
AWS_MEDIACONNECT_API ReservationState GetReservationStateForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForReservationState(ReservationState value);
} // namespace ReservationStateMapper
} // namespace Model
} // namespace MediaConnect
} // namespace Aws
