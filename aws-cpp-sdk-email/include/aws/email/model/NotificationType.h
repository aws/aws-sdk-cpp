/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SES
{
namespace Model
{
  enum class NotificationType
  {
    NOT_SET,
    Bounce,
    Complaint,
    Delivery
  };

namespace NotificationTypeMapper
{
AWS_SES_API NotificationType GetNotificationTypeForName(const Aws::String& name);

AWS_SES_API Aws::String GetNameForNotificationType(NotificationType value);
} // namespace NotificationTypeMapper
} // namespace Model
} // namespace SES
} // namespace Aws
