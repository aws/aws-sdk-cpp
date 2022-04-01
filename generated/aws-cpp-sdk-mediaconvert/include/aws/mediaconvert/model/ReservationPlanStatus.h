/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class ReservationPlanStatus
  {
    NOT_SET,
    ACTIVE,
    EXPIRED
  };

namespace ReservationPlanStatusMapper
{
AWS_MEDIACONVERT_API ReservationPlanStatus GetReservationPlanStatusForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForReservationPlanStatus(ReservationPlanStatus value);
} // namespace ReservationPlanStatusMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
