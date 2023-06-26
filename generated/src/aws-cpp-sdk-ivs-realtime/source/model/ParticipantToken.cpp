/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/ParticipantToken.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{

ParticipantToken::ParticipantToken() : 
    m_attributesHasBeenSet(false),
    m_capabilitiesHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_expirationTimeHasBeenSet(false),
    m_participantIdHasBeenSet(false),
    m_tokenHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

ParticipantToken::ParticipantToken(JsonView jsonValue) : 
    m_attributesHasBeenSet(false),
    m_capabilitiesHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_expirationTimeHasBeenSet(false),
    m_participantIdHasBeenSet(false),
    m_tokenHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
  *this = jsonValue;
}

ParticipantToken& ParticipantToken::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attributes"))
  {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[attributesItem.first] = attributesItem.second.AsString();
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("capabilities"))
  {
    Aws::Utils::Array<JsonView> capabilitiesJsonList = jsonValue.GetArray("capabilities");
    for(unsigned capabilitiesIndex = 0; capabilitiesIndex < capabilitiesJsonList.GetLength(); ++capabilitiesIndex)
    {
      m_capabilities.push_back(ParticipantTokenCapabilityMapper::GetParticipantTokenCapabilityForName(capabilitiesJsonList[capabilitiesIndex].AsString()));
    }
    m_capabilitiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("duration"))
  {
    m_duration = jsonValue.GetInteger("duration");

    m_durationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expirationTime"))
  {
    m_expirationTime = jsonValue.GetString("expirationTime");

    m_expirationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("participantId"))
  {
    m_participantId = jsonValue.GetString("participantId");

    m_participantIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("token"))
  {
    m_token = jsonValue.GetString("token");

    m_tokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userId"))
  {
    m_userId = jsonValue.GetString("userId");

    m_userIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ParticipantToken::Jsonize() const
{
  JsonValue payload;

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
   }
   payload.WithObject("attributes", std::move(attributesJsonMap));

  }

  if(m_capabilitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> capabilitiesJsonList(m_capabilities.size());
   for(unsigned capabilitiesIndex = 0; capabilitiesIndex < capabilitiesJsonList.GetLength(); ++capabilitiesIndex)
   {
     capabilitiesJsonList[capabilitiesIndex].AsString(ParticipantTokenCapabilityMapper::GetNameForParticipantTokenCapability(m_capabilities[capabilitiesIndex]));
   }
   payload.WithArray("capabilities", std::move(capabilitiesJsonList));

  }

  if(m_durationHasBeenSet)
  {
   payload.WithInteger("duration", m_duration);

  }

  if(m_expirationTimeHasBeenSet)
  {
   payload.WithString("expirationTime", m_expirationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_participantIdHasBeenSet)
  {
   payload.WithString("participantId", m_participantId);

  }

  if(m_tokenHasBeenSet)
  {
   payload.WithString("token", m_token);

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("userId", m_userId);

  }

  return payload;
}

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
