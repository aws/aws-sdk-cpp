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
  enum class FleetType
  {
    NOT_SET,
    ON_DEMAND,
    SPOT
  };

namespace FleetTypeMapper
{
AWS_GAMELIFT_API FleetType GetFleetTypeForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForFleetType(FleetType value);
} // namespace FleetTypeMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
