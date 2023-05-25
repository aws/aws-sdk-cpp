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
  enum class ChannelPrivacy
  {
    NOT_SET,
    PUBLIC_,
    PRIVATE_
  };

namespace ChannelPrivacyMapper
{
AWS_CHIMESDKMESSAGING_API ChannelPrivacy GetChannelPrivacyForName(const Aws::String& name);

AWS_CHIMESDKMESSAGING_API Aws::String GetNameForChannelPrivacy(ChannelPrivacy value);
} // namespace ChannelPrivacyMapper
} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
