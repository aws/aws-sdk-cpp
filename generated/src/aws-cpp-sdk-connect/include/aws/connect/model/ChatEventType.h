/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class ChatEventType
  {
    NOT_SET,
    DISCONNECT,
    MESSAGE,
    EVENT
  };

namespace ChatEventTypeMapper
{
AWS_CONNECT_API ChatEventType GetChatEventTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForChatEventType(ChatEventType value);
} // namespace ChatEventTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
