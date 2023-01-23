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
  enum class ChannelMessageStatus
  {
    NOT_SET,
    SENT,
    PENDING,
    FAILED,
    DENIED
  };

namespace ChannelMessageStatusMapper
{
AWS_CHIMESDKMESSAGING_API ChannelMessageStatus GetChannelMessageStatusForName(const Aws::String& name);

AWS_CHIMESDKMESSAGING_API Aws::String GetNameForChannelMessageStatus(ChannelMessageStatus value);
} // namespace ChannelMessageStatusMapper
} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
