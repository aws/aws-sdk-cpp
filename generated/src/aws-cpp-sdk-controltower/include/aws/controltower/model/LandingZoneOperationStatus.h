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
  enum class LandingZoneOperationStatus
  {
    NOT_SET,
    SUCCEEDED,
    FAILED,
    IN_PROGRESS
  };

namespace LandingZoneOperationStatusMapper
{
AWS_CONTROLTOWER_API LandingZoneOperationStatus GetLandingZoneOperationStatusForName(const Aws::String& name);

AWS_CONTROLTOWER_API Aws::String GetNameForLandingZoneOperationStatus(LandingZoneOperationStatus value);
} // namespace LandingZoneOperationStatusMapper
} // namespace Model
} // namespace ControlTower
} // namespace Aws
