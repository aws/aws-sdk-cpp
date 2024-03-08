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
  enum class LandingZoneDriftStatus
  {
    NOT_SET,
    DRIFTED,
    IN_SYNC
  };

namespace LandingZoneDriftStatusMapper
{
AWS_CONTROLTOWER_API LandingZoneDriftStatus GetLandingZoneDriftStatusForName(const Aws::String& name);

AWS_CONTROLTOWER_API Aws::String GetNameForLandingZoneDriftStatus(LandingZoneDriftStatus value);
} // namespace LandingZoneDriftStatusMapper
} // namespace Model
} // namespace ControlTower
} // namespace Aws
