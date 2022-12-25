/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateParticipantRoleConfigChannelInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

UpdateParticipantRoleConfigChannelInfo::UpdateParticipantRoleConfigChannelInfo() : 
    m_chatHasBeenSet(false)
{
}

UpdateParticipantRoleConfigChannelInfo::UpdateParticipantRoleConfigChannelInfo(JsonView jsonValue) : 
    m_chatHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateParticipantRoleConfigChannelInfo& UpdateParticipantRoleConfigChannelInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Chat"))
  {
    m_chat = jsonValue.GetObject("Chat");

    m_chatHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateParticipantRoleConfigChannelInfo::Jsonize() const
{
  JsonValue payload;

  if(m_chatHasBeenSet)
  {
   payload.WithObject("Chat", m_chat.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
