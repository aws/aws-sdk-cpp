/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Shield
{
namespace Model
{
  enum class ProactiveEngagementStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED,
    PENDING
  };

namespace ProactiveEngagementStatusMapper
{
AWS_SHIELD_API ProactiveEngagementStatus GetProactiveEngagementStatusForName(const Aws::String& name);

AWS_SHIELD_API Aws::String GetNameForProactiveEngagementStatus(ProactiveEngagementStatus value);
} // namespace ProactiveEngagementStatusMapper
} // namespace Model
} // namespace Shield
} // namespace Aws
