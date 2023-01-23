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
  enum class ProtectionPolicy
  {
    NOT_SET,
    NoProtection,
    FullProtection
  };

namespace ProtectionPolicyMapper
{
AWS_GAMELIFT_API ProtectionPolicy GetProtectionPolicyForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForProtectionPolicy(ProtectionPolicy value);
} // namespace ProtectionPolicyMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
