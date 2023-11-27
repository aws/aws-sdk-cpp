/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ControlTower
{
namespace Model
{
  enum class LandingZoneStatus
  {
    NOT_SET,
    ACTIVE,
    PROCESSING,
    FAILED
  };

namespace LandingZoneStatusMapper
{
AWS_CONTROLTOWER_API LandingZoneStatus GetLandingZoneStatusForName(const Aws::String& name);

AWS_CONTROLTOWER_API Aws::String GetNameForLandingZoneStatus(LandingZoneStatus value);
} // namespace LandingZoneStatusMapper
} // namespace Model
} // namespace ControlTower
} // namespace Aws
