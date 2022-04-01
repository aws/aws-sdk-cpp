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
  enum class ReservationMaximumFramerate
  {
    NOT_SET,
    MAX_30_FPS,
    MAX_60_FPS
  };

namespace ReservationMaximumFramerateMapper
{
AWS_MEDIALIVE_API ReservationMaximumFramerate GetReservationMaximumFramerateForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForReservationMaximumFramerate(ReservationMaximumFramerate value);
} // namespace ReservationMaximumFramerateMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
