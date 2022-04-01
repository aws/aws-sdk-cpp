/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class NotificationType
  {
    NOT_SET,
    Command,
    Invocation
  };

namespace NotificationTypeMapper
{
AWS_SSM_API NotificationType GetNotificationTypeForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForNotificationType(NotificationType value);
} // namespace NotificationTypeMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
