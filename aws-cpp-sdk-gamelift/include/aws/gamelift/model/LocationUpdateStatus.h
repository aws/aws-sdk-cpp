/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GameLift
{
namespace Model
{
  enum class LocationUpdateStatus
  {
    NOT_SET,
    PENDING_UPDATE
  };

namespace LocationUpdateStatusMapper
{
AWS_GAMELIFT_API LocationUpdateStatus GetLocationUpdateStatusForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForLocationUpdateStatus(LocationUpdateStatus value);
} // namespace LocationUpdateStatusMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
