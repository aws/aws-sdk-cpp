/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/ProxySession.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

ProxySession::ProxySession() : 
    m_voiceConnectorIdHasBeenSet(false),
    m_proxySessionIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(ProxySessionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_expiryMinutes(0),
    m_expiryMinutesHasBeenSet(false),
    m_capabilitiesHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false),
    m_endedTimestampHasBeenSet(false),
    m_participantsHasBeenSet(false),
    m_numberSelectionBehavior(NumberSelectionBehavior::NOT_SET),
    m_numberSelectionBehaviorHasBeenSet(false),
    m_geoMatchLevel(GeoMatchLevel::NOT_SET),
    m_geoMatchLevelHasBeenSet(false),
    m_geoMatchParamsHasBeenSet(false)
{
}

ProxySession::ProxySession(JsonView jsonValue) : 
    m_voiceConnectorIdHasBeenSet(false),
    m_proxySessionIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(ProxySessionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_expiryMinutes(0),
    m_expiryMinutesHasBeenSet(false),
    m_capabilitiesHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false),
    m_endedTimestampHasBeenSet(false),
    m_participantsHasBeenSet(false),
    m_numberSelectionBehavior(NumberSelectionBehavior::NOT_SET),
    m_numberSelectionBehaviorHasBeenSet(false),
    m_geoMatchLevel(GeoMatchLevel::NOT_SET),
    m_geoMatchLevelHasBeenSet(false),
    m_geoMatchParamsHasBeenSet(false)
{
  *this = jsonValue;
}

ProxySession& ProxySession::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VoiceConnectorId"))
  {
    m_voiceConnectorId = jsonValue.GetString("VoiceConnectorId");

    m_voiceConnectorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProxySessionId"))
  {
    m_proxySessionId = jsonValue.GetString("ProxySessionId");

    m_proxySessionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ProxySessionStatusMapper::GetProxySessionStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpiryMinutes"))
  {
    m_expiryMinutes = jsonValue.GetInteger("ExpiryMinutes");

    m_expiryMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Capabilities"))
  {
    Aws::Utils::Array<JsonView> capabilitiesJsonList = jsonValue.GetArray("Capabilities");
    for(unsigned capabilitiesIndex = 0; capabilitiesIndex < capabilitiesJsonList.GetLength(); ++capabilitiesIndex)
    {
      m_capabilities.push_back(CapabilityMapper::GetCapabilityForName(capabilitiesJsonList[capabilitiesIndex].AsString()));
    }
    m_capabilitiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetString("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedTimestamp"))
  {
    m_updatedTimestamp = jsonValue.GetString("UpdatedTimestamp");

    m_updatedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndedTimestamp"))
  {
    m_endedTimestamp = jsonValue.GetString("EndedTimestamp");

    m_endedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Participants"))
  {
    Aws::Utils::Array<JsonView> participantsJsonList = jsonValue.GetArray("Participants");
    for(unsigned participantsIndex = 0; participantsIndex < participantsJsonList.GetLength(); ++participantsIndex)
    {
      m_participants.push_back(participantsJsonList[participantsIndex].AsObject());
    }
    m_participantsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberSelectionBehavior"))
  {
    m_numberSelectionBehavior = NumberSelectionBehaviorMapper::GetNumberSelectionBehaviorForName(jsonValue.GetString("NumberSelectionBehavior"));

    m_numberSelectionBehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GeoMatchLevel"))
  {
    m_geoMatchLevel = GeoMatchLevelMapper::GetGeoMatchLevelForName(jsonValue.GetString("GeoMatchLevel"));

    m_geoMatchLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GeoMatchParams"))
  {
    m_geoMatchParams = jsonValue.GetObject("GeoMatchParams");

    m_geoMatchParamsHasBeenSet = true;
  }

  return *this;
}

JsonValue ProxySession::Jsonize() const
{
  JsonValue payload;

  if(m_voiceConnectorIdHasBeenSet)
  {
   payload.WithString("VoiceConnectorId", m_voiceConnectorId);

  }

  if(m_proxySessionIdHasBeenSet)
  {
   payload.WithString("ProxySessionId", m_proxySessionId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ProxySessionStatusMapper::GetNameForProxySessionStatus(m_status));
  }

  if(m_expiryMinutesHasBeenSet)
  {
   payload.WithInteger("ExpiryMinutes", m_expiryMinutes);

  }

  if(m_capabilitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> capabilitiesJsonList(m_capabilities.size());
   for(unsigned capabilitiesIndex = 0; capabilitiesIndex < capabilitiesJsonList.GetLength(); ++capabilitiesIndex)
   {
     capabilitiesJsonList[capabilitiesIndex].AsString(CapabilityMapper::GetNameForCapability(m_capabilities[capabilitiesIndex]));
   }
   payload.WithArray("Capabilities", std::move(capabilitiesJsonList));

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithString("CreatedTimestamp", m_createdTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedTimestampHasBeenSet)
  {
   payload.WithString("UpdatedTimestamp", m_updatedTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_endedTimestampHasBeenSet)
  {
   payload.WithString("EndedTimestamp", m_endedTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_participantsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> participantsJsonList(m_participants.size());
   for(unsigned participantsIndex = 0; participantsIndex < participantsJsonList.GetLength(); ++participantsIndex)
   {
     participantsJsonList[participantsIndex].AsObject(m_participants[participantsIndex].Jsonize());
   }
   payload.WithArray("Participants", std::move(participantsJsonList));

  }

  if(m_numberSelectionBehaviorHasBeenSet)
  {
   payload.WithString("NumberSelectionBehavior", NumberSelectionBehaviorMapper::GetNameForNumberSelectionBehavior(m_numberSelectionBehavior));
  }

  if(m_geoMatchLevelHasBeenSet)
  {
   payload.WithString("GeoMatchLevel", GeoMatchLevelMapper::GetNameForGeoMatchLevel(m_geoMatchLevel));
  }

  if(m_geoMatchParamsHasBeenSet)
  {
   payload.WithObject("GeoMatchParams", m_geoMatchParams.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
