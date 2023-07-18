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
  enum class ChannelMessagePersistenceType
  {
    NOT_SET,
    PERSISTENT,
    NON_PERSISTENT
  };

namespace ChannelMessagePersistenceTypeMapper
{
AWS_CHIMESDKMESSAGING_API ChannelMessagePersistenceType GetChannelMessagePersistenceTypeForName(const Aws::String& name);

AWS_CHIMESDKMESSAGING_API Aws::String GetNameForChannelMessagePersistenceType(ChannelMessagePersistenceType value);
} // namespace ChannelMessagePersistenceTypeMapper
} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
