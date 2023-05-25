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
  enum class NotificationState
  {
    NOT_SET,
    OK,
    ALARM
  };

namespace NotificationStateMapper
{
AWS_BUDGETS_API NotificationState GetNotificationStateForName(const Aws::String& name);

AWS_BUDGETS_API Aws::String GetNameForNotificationState(NotificationState value);
} // namespace NotificationStateMapper
} // namespace Model
} // namespace Budgets
} // namespace Aws
