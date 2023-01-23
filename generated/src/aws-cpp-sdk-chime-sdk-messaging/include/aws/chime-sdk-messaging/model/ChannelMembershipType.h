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
  enum class ChannelMembershipType
  {
    NOT_SET,
    DEFAULT,
    HIDDEN
  };

namespace ChannelMembershipTypeMapper
{
AWS_CHIMESDKMESSAGING_API ChannelMembershipType GetChannelMembershipTypeForName(const Aws::String& name);

AWS_CHIMESDKMESSAGING_API Aws::String GetNameForChannelMembershipType(ChannelMembershipType value);
} // namespace ChannelMembershipTypeMapper
} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
