/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class ReservationVideoQuality
  {
    NOT_SET,
    STANDARD,
    ENHANCED,
    PREMIUM
  };

namespace ReservationVideoQualityMapper
{
AWS_MEDIALIVE_API ReservationVideoQuality GetReservationVideoQualityForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForReservationVideoQuality(ReservationVideoQuality value);
} // namespace ReservationVideoQualityMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
