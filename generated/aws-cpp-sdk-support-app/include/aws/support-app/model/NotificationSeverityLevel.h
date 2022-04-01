/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support-app/SupportApp_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SupportApp
{
namespace Model
{
  enum class NotificationSeverityLevel
  {
    NOT_SET,
    none,
    all,
    high
  };

namespace NotificationSeverityLevelMapper
{
AWS_SUPPORTAPP_API NotificationSeverityLevel GetNotificationSeverityLevelForName(const Aws::String& name);

AWS_SUPPORTAPP_API Aws::String GetNameForNotificationSeverityLevel(NotificationSeverityLevel value);
} // namespace NotificationSeverityLevelMapper
} // namespace Model
} // namespace SupportApp
} // namespace Aws
