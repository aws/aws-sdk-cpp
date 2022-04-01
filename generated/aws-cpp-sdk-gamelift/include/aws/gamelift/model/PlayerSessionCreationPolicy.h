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
  enum class PlayerSessionCreationPolicy
  {
    NOT_SET,
    ACCEPT_ALL,
    DENY_ALL
  };

namespace PlayerSessionCreationPolicyMapper
{
AWS_GAMELIFT_API PlayerSessionCreationPolicy GetPlayerSessionCreationPolicyForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForPlayerSessionCreationPolicy(PlayerSessionCreationPolicy value);
} // namespace PlayerSessionCreationPolicyMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
