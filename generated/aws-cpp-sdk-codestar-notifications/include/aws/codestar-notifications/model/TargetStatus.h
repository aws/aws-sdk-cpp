/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-notifications/CodeStarNotifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeStarNotifications
{
namespace Model
{
  enum class TargetStatus
  {
    NOT_SET,
    PENDING,
    ACTIVE,
    UNREACHABLE,
    INACTIVE,
    DEACTIVATED
  };

namespace TargetStatusMapper
{
AWS_CODESTARNOTIFICATIONS_API TargetStatus GetTargetStatusForName(const Aws::String& name);

AWS_CODESTARNOTIFICATIONS_API Aws::String GetNameForTargetStatus(TargetStatus value);
} // namespace TargetStatusMapper
} // namespace Model
} // namespace CodeStarNotifications
} // namespace Aws
