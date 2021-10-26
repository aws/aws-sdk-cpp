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
  enum class AllowNotifications
  {
    NOT_SET,
    ALL,
    NONE,
    FILTERED
  };

namespace AllowNotificationsMapper
{
AWS_CHIMESDKMESSAGING_API AllowNotifications GetAllowNotificationsForName(const Aws::String& name);

AWS_CHIMESDKMESSAGING_API Aws::String GetNameForAllowNotifications(AllowNotifications value);
} // namespace AllowNotificationsMapper
} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
