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
  enum class FleetAction
  {
    NOT_SET,
    AUTO_SCALING
  };

namespace FleetActionMapper
{
AWS_GAMELIFT_API FleetAction GetFleetActionForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForFleetAction(FleetAction value);
} // namespace FleetActionMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
