/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ChimeSDKMessaging
{
namespace Model
{
  enum class PushNotificationType
  {
    NOT_SET,
    DEFAULT,
    VOIP
  };

namespace PushNotificationTypeMapper
{
AWS_CHIMESDKMESSAGING_API PushNotificationType GetPushNotificationTypeForName(const Aws::String& name);

AWS_CHIMESDKMESSAGING_API Aws::String GetNameForPushNotificationType(PushNotificationType value);
} // namespace PushNotificationTypeMapper
} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
