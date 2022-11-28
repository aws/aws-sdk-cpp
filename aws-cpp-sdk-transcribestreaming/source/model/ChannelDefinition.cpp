/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/ChannelDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{

ChannelDefinition::ChannelDefinition() : 
    m_channelId(0),
    m_channelIdHasBeenSet(false),
    m_participantRole(ParticipantRole::NOT_SET),
    m_participantRoleHasBeenSet(false)
{
}

ChannelDefinition::ChannelDefinition(JsonView jsonValue) : 
    m_channelId(0),
    m_channelIdHasBeenSet(false),
    m_participantRole(ParticipantRole::NOT_SET),
    m_participantRoleHasBeenSet(false)
{
  *this = jsonValue;
}

ChannelDefinition& ChannelDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ChannelId"))
  {
    m_channelId = jsonValue.GetInteger("ChannelId");

    m_channelIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParticipantRole"))
  {
    m_participantRole = ParticipantRoleMapper::GetParticipantRoleForName(jsonValue.GetString("ParticipantRole"));

    m_participantRoleHasBeenSet = true;
  }

  return *this;
}

JsonValue ChannelDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_channelIdHasBeenSet)
  {
   payload.WithInteger("ChannelId", m_channelId);

  }

  if(m_participantRoleHasBeenSet)
  {
   payload.WithString("ParticipantRole", ParticipantRoleMapper::GetNameForParticipantRole(m_participantRole));
  }

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
