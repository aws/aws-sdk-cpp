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
  enum class GameServerProtectionPolicy
  {
    NOT_SET,
    NO_PROTECTION,
    FULL_PROTECTION
  };

namespace GameServerProtectionPolicyMapper
{
AWS_GAMELIFT_API GameServerProtectionPolicy GetGameServerProtectionPolicyForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForGameServerProtectionPolicy(GameServerProtectionPolicy value);
} // namespace GameServerProtectionPolicyMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
