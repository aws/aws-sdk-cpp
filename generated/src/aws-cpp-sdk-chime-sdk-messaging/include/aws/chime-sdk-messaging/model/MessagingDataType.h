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
  enum class MessagingDataType
  {
    NOT_SET,
    Channel,
    ChannelMessage
  };

namespace MessagingDataTypeMapper
{
AWS_CHIMESDKMESSAGING_API MessagingDataType GetMessagingDataTypeForName(const Aws::String& name);

AWS_CHIMESDKMESSAGING_API Aws::String GetNameForMessagingDataType(MessagingDataType value);
} // namespace MessagingDataTypeMapper
} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
