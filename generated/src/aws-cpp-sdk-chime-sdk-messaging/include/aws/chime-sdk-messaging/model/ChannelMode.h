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
  enum class ChannelMode
  {
    NOT_SET,
    UNRESTRICTED,
    RESTRICTED
  };

namespace ChannelModeMapper
{
AWS_CHIMESDKMESSAGING_API ChannelMode GetChannelModeForName(const Aws::String& name);

AWS_CHIMESDKMESSAGING_API Aws::String GetNameForChannelMode(ChannelMode value);
} // namespace ChannelModeMapper
} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
