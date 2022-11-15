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
  enum class ReservationAutomaticRenewal
  {
    NOT_SET,
    DISABLED,
    ENABLED,
    UNAVAILABLE
  };

namespace ReservationAutomaticRenewalMapper
{
AWS_MEDIALIVE_API ReservationAutomaticRenewal GetReservationAutomaticRenewalForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForReservationAutomaticRenewal(ReservationAutomaticRenewal value);
} // namespace ReservationAutomaticRenewalMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
