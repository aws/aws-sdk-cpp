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
  enum class NotificationRuleStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace NotificationRuleStatusMapper
{
AWS_CODESTARNOTIFICATIONS_API NotificationRuleStatus GetNotificationRuleStatusForName(const Aws::String& name);

AWS_CODESTARNOTIFICATIONS_API Aws::String GetNameForNotificationRuleStatus(NotificationRuleStatus value);
} // namespace NotificationRuleStatusMapper
} // namespace Model
} // namespace CodeStarNotifications
} // namespace Aws
