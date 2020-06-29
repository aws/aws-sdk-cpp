/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectParticipant
{
namespace Model
{
  enum class ChatItemType
  {
    NOT_SET,
    MESSAGE,
    EVENT,
    CONNECTION_ACK
  };

namespace ChatItemTypeMapper
{
AWS_CONNECTPARTICIPANT_API ChatItemType GetChatItemTypeForName(const Aws::String& name);

AWS_CONNECTPARTICIPANT_API Aws::String GetNameForChatItemType(ChatItemType value);
} // namespace ChatItemTypeMapper
} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
