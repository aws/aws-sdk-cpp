/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ivschat
{
namespace Model
{
  enum class ChatTokenCapability
  {
    NOT_SET,
    SEND_MESSAGE,
    DISCONNECT_USER,
    DELETE_MESSAGE
  };

namespace ChatTokenCapabilityMapper
{
AWS_IVSCHAT_API ChatTokenCapability GetChatTokenCapabilityForName(const Aws::String& name);

AWS_IVSCHAT_API Aws::String GetNameForChatTokenCapability(ChatTokenCapability value);
} // namespace ChatTokenCapabilityMapper
} // namespace Model
} // namespace ivschat
} // namespace Aws
