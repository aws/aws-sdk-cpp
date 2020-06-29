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
  enum class ReservationSpecialFeature
  {
    NOT_SET,
    ADVANCED_AUDIO,
    AUDIO_NORMALIZATION
  };

namespace ReservationSpecialFeatureMapper
{
AWS_MEDIALIVE_API ReservationSpecialFeature GetReservationSpecialFeatureForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForReservationSpecialFeature(ReservationSpecialFeature value);
} // namespace ReservationSpecialFeatureMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
