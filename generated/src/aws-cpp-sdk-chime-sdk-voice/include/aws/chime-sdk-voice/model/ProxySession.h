/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/ProxySessionStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/chime-sdk-voice/model/NumberSelectionBehavior.h>
#include <aws/chime-sdk-voice/model/GeoMatchLevel.h>
#include <aws/chime-sdk-voice/model/GeoMatchParams.h>
#include <aws/chime-sdk-voice/model/Capability.h>
#include <aws/chime-sdk-voice/model/Participant.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ChimeSDKVoice
{
namespace Model
{

  class ProxySession
  {
  public:
    AWS_CHIMESDKVOICE_API ProxySession();
    AWS_CHIMESDKVOICE_API ProxySession(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API ProxySession& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetVoiceConnectorId() const{ return m_voiceConnectorId; }

    
    inline bool VoiceConnectorIdHasBeenSet() const { return m_voiceConnectorIdHasBeenSet; }

    
    inline void SetVoiceConnectorId(const Aws::String& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = value; }

    
    inline void SetVoiceConnectorId(Aws::String&& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = std::move(value); }

    
    inline void SetVoiceConnectorId(const char* value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId.assign(value); }

    
    inline ProxySession& WithVoiceConnectorId(const Aws::String& value) { SetVoiceConnectorId(value); return *this;}

    
    inline ProxySession& WithVoiceConnectorId(Aws::String&& value) { SetVoiceConnectorId(std::move(value)); return *this;}

    
    inline ProxySession& WithVoiceConnectorId(const char* value) { SetVoiceConnectorId(value); return *this;}


    
    inline const Aws::String& GetProxySessionId() const{ return m_proxySessionId; }

    
    inline bool ProxySessionIdHasBeenSet() const { return m_proxySessionIdHasBeenSet; }

    
    inline void SetProxySessionId(const Aws::String& value) { m_proxySessionIdHasBeenSet = true; m_proxySessionId = value; }

    
    inline void SetProxySessionId(Aws::String&& value) { m_proxySessionIdHasBeenSet = true; m_proxySessionId = std::move(value); }

    
    inline void SetProxySessionId(const char* value) { m_proxySessionIdHasBeenSet = true; m_proxySessionId.assign(value); }

    
    inline ProxySession& WithProxySessionId(const Aws::String& value) { SetProxySessionId(value); return *this;}

    
    inline ProxySession& WithProxySessionId(Aws::String&& value) { SetProxySessionId(std::move(value)); return *this;}

    
    inline ProxySession& WithProxySessionId(const char* value) { SetProxySessionId(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline ProxySession& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline ProxySession& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline ProxySession& WithName(const char* value) { SetName(value); return *this;}


    
    inline const ProxySessionStatus& GetStatus() const{ return m_status; }

    
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    
    inline void SetStatus(const ProxySessionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline void SetStatus(ProxySessionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    
    inline ProxySession& WithStatus(const ProxySessionStatus& value) { SetStatus(value); return *this;}

    
    inline ProxySession& WithStatus(ProxySessionStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline int GetExpiryMinutes() const{ return m_expiryMinutes; }

    
    inline bool ExpiryMinutesHasBeenSet() const { return m_expiryMinutesHasBeenSet; }

    
    inline void SetExpiryMinutes(int value) { m_expiryMinutesHasBeenSet = true; m_expiryMinutes = value; }

    
    inline ProxySession& WithExpiryMinutes(int value) { SetExpiryMinutes(value); return *this;}


    
    inline const Aws::Vector<Capability>& GetCapabilities() const{ return m_capabilities; }

    
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }

    
    inline void SetCapabilities(const Aws::Vector<Capability>& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }

    
    inline void SetCapabilities(Aws::Vector<Capability>&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }

    
    inline ProxySession& WithCapabilities(const Aws::Vector<Capability>& value) { SetCapabilities(value); return *this;}

    
    inline ProxySession& WithCapabilities(Aws::Vector<Capability>&& value) { SetCapabilities(std::move(value)); return *this;}

    
    inline ProxySession& AddCapabilities(const Capability& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }

    
    inline ProxySession& AddCapabilities(Capability&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(std::move(value)); return *this; }


    
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    
    inline ProxySession& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    
    inline ProxySession& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }

    
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }

    
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = value; }

    
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::move(value); }

    
    inline ProxySession& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}

    
    inline ProxySession& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetEndedTimestamp() const{ return m_endedTimestamp; }

    
    inline bool EndedTimestampHasBeenSet() const { return m_endedTimestampHasBeenSet; }

    
    inline void SetEndedTimestamp(const Aws::Utils::DateTime& value) { m_endedTimestampHasBeenSet = true; m_endedTimestamp = value; }

    
    inline void SetEndedTimestamp(Aws::Utils::DateTime&& value) { m_endedTimestampHasBeenSet = true; m_endedTimestamp = std::move(value); }

    
    inline ProxySession& WithEndedTimestamp(const Aws::Utils::DateTime& value) { SetEndedTimestamp(value); return *this;}

    
    inline ProxySession& WithEndedTimestamp(Aws::Utils::DateTime&& value) { SetEndedTimestamp(std::move(value)); return *this;}


    
    inline const Aws::Vector<Participant>& GetParticipants() const{ return m_participants; }

    
    inline bool ParticipantsHasBeenSet() const { return m_participantsHasBeenSet; }

    
    inline void SetParticipants(const Aws::Vector<Participant>& value) { m_participantsHasBeenSet = true; m_participants = value; }

    
    inline void SetParticipants(Aws::Vector<Participant>&& value) { m_participantsHasBeenSet = true; m_participants = std::move(value); }

    
    inline ProxySession& WithParticipants(const Aws::Vector<Participant>& value) { SetParticipants(value); return *this;}

    
    inline ProxySession& WithParticipants(Aws::Vector<Participant>&& value) { SetParticipants(std::move(value)); return *this;}

    
    inline ProxySession& AddParticipants(const Participant& value) { m_participantsHasBeenSet = true; m_participants.push_back(value); return *this; }

    
    inline ProxySession& AddParticipants(Participant&& value) { m_participantsHasBeenSet = true; m_participants.push_back(std::move(value)); return *this; }


    
    inline const NumberSelectionBehavior& GetNumberSelectionBehavior() const{ return m_numberSelectionBehavior; }

    
    inline bool NumberSelectionBehaviorHasBeenSet() const { return m_numberSelectionBehaviorHasBeenSet; }

    
    inline void SetNumberSelectionBehavior(const NumberSelectionBehavior& value) { m_numberSelectionBehaviorHasBeenSet = true; m_numberSelectionBehavior = value; }

    
    inline void SetNumberSelectionBehavior(NumberSelectionBehavior&& value) { m_numberSelectionBehaviorHasBeenSet = true; m_numberSelectionBehavior = std::move(value); }

    
    inline ProxySession& WithNumberSelectionBehavior(const NumberSelectionBehavior& value) { SetNumberSelectionBehavior(value); return *this;}

    
    inline ProxySession& WithNumberSelectionBehavior(NumberSelectionBehavior&& value) { SetNumberSelectionBehavior(std::move(value)); return *this;}


    
    inline const GeoMatchLevel& GetGeoMatchLevel() const{ return m_geoMatchLevel; }

    
    inline bool GeoMatchLevelHasBeenSet() const { return m_geoMatchLevelHasBeenSet; }

    
    inline void SetGeoMatchLevel(const GeoMatchLevel& value) { m_geoMatchLevelHasBeenSet = true; m_geoMatchLevel = value; }

    
    inline void SetGeoMatchLevel(GeoMatchLevel&& value) { m_geoMatchLevelHasBeenSet = true; m_geoMatchLevel = std::move(value); }

    
    inline ProxySession& WithGeoMatchLevel(const GeoMatchLevel& value) { SetGeoMatchLevel(value); return *this;}

    
    inline ProxySession& WithGeoMatchLevel(GeoMatchLevel&& value) { SetGeoMatchLevel(std::move(value)); return *this;}


    
    inline const GeoMatchParams& GetGeoMatchParams() const{ return m_geoMatchParams; }

    
    inline bool GeoMatchParamsHasBeenSet() const { return m_geoMatchParamsHasBeenSet; }

    
    inline void SetGeoMatchParams(const GeoMatchParams& value) { m_geoMatchParamsHasBeenSet = true; m_geoMatchParams = value; }

    
    inline void SetGeoMatchParams(GeoMatchParams&& value) { m_geoMatchParamsHasBeenSet = true; m_geoMatchParams = std::move(value); }

    
    inline ProxySession& WithGeoMatchParams(const GeoMatchParams& value) { SetGeoMatchParams(value); return *this;}

    
    inline ProxySession& WithGeoMatchParams(GeoMatchParams&& value) { SetGeoMatchParams(std::move(value)); return *this;}

  private:

    Aws::String m_voiceConnectorId;
    bool m_voiceConnectorIdHasBeenSet = false;

    Aws::String m_proxySessionId;
    bool m_proxySessionIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ProxySessionStatus m_status;
    bool m_statusHasBeenSet = false;

    int m_expiryMinutes;
    bool m_expiryMinutesHasBeenSet = false;

    Aws::Vector<Capability> m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp;
    bool m_updatedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_endedTimestamp;
    bool m_endedTimestampHasBeenSet = false;

    Aws::Vector<Participant> m_participants;
    bool m_participantsHasBeenSet = false;

    NumberSelectionBehavior m_numberSelectionBehavior;
    bool m_numberSelectionBehaviorHasBeenSet = false;

    GeoMatchLevel m_geoMatchLevel;
    bool m_geoMatchLevelHasBeenSet = false;

    GeoMatchParams m_geoMatchParams;
    bool m_geoMatchParamsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
