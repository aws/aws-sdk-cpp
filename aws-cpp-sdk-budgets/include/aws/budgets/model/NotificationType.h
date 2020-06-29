/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Budgets
{
namespace Model
{
  enum class NotificationType
  {
    NOT_SET,
    ACTUAL,
    FORECASTED
  };

namespace NotificationTypeMapper
{
AWS_BUDGETS_API NotificationType GetNotificationTypeForName(const Aws::String& name);

AWS_BUDGETS_API Aws::String GetNameForNotificationType(NotificationType value);
} // namespace NotificationTypeMapper
} // namespace Model
} // namespace Budgets
} // namespace Aws
