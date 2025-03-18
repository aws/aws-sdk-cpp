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

  /**
   * <p>The proxy session for an Amazon Chime SDK Voice Connector.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/ProxySession">AWS
   * API Reference</a></p>
   */
  class ProxySession
  {
  public:
    AWS_CHIMESDKVOICE_API ProxySession() = default;
    AWS_CHIMESDKVOICE_API ProxySession(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API ProxySession& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Voice Connector ID.</p>
     */
    inline const Aws::String& GetVoiceConnectorId() const { return m_voiceConnectorId; }
    inline bool VoiceConnectorIdHasBeenSet() const { return m_voiceConnectorIdHasBeenSet; }
    template<typename VoiceConnectorIdT = Aws::String>
    void SetVoiceConnectorId(VoiceConnectorIdT&& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = std::forward<VoiceConnectorIdT>(value); }
    template<typename VoiceConnectorIdT = Aws::String>
    ProxySession& WithVoiceConnectorId(VoiceConnectorIdT&& value) { SetVoiceConnectorId(std::forward<VoiceConnectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The proxy session ID.</p>
     */
    inline const Aws::String& GetProxySessionId() const { return m_proxySessionId; }
    inline bool ProxySessionIdHasBeenSet() const { return m_proxySessionIdHasBeenSet; }
    template<typename ProxySessionIdT = Aws::String>
    void SetProxySessionId(ProxySessionIdT&& value) { m_proxySessionIdHasBeenSet = true; m_proxySessionId = std::forward<ProxySessionIdT>(value); }
    template<typename ProxySessionIdT = Aws::String>
    ProxySession& WithProxySessionId(ProxySessionIdT&& value) { SetProxySessionId(std::forward<ProxySessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The proxy session name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ProxySession& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The proxy session status.</p>
     */
    inline ProxySessionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ProxySessionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ProxySession& WithStatus(ProxySessionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of minutes allowed for the proxy session.</p>
     */
    inline int GetExpiryMinutes() const { return m_expiryMinutes; }
    inline bool ExpiryMinutesHasBeenSet() const { return m_expiryMinutesHasBeenSet; }
    inline void SetExpiryMinutes(int value) { m_expiryMinutesHasBeenSet = true; m_expiryMinutes = value; }
    inline ProxySession& WithExpiryMinutes(int value) { SetExpiryMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The proxy session capabilities.</p>
     */
    inline const Aws::Vector<Capability>& GetCapabilities() const { return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    template<typename CapabilitiesT = Aws::Vector<Capability>>
    void SetCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::forward<CapabilitiesT>(value); }
    template<typename CapabilitiesT = Aws::Vector<Capability>>
    ProxySession& WithCapabilities(CapabilitiesT&& value) { SetCapabilities(std::forward<CapabilitiesT>(value)); return *this;}
    inline ProxySession& AddCapabilities(Capability value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The created time stamp, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    ProxySession& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated time stamp, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const { return m_updatedTimestamp; }
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    void SetUpdatedTimestamp(UpdatedTimestampT&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::forward<UpdatedTimestampT>(value); }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    ProxySession& WithUpdatedTimestamp(UpdatedTimestampT&& value) { SetUpdatedTimestamp(std::forward<UpdatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ended time stamp, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedTimestamp() const { return m_endedTimestamp; }
    inline bool EndedTimestampHasBeenSet() const { return m_endedTimestampHasBeenSet; }
    template<typename EndedTimestampT = Aws::Utils::DateTime>
    void SetEndedTimestamp(EndedTimestampT&& value) { m_endedTimestampHasBeenSet = true; m_endedTimestamp = std::forward<EndedTimestampT>(value); }
    template<typename EndedTimestampT = Aws::Utils::DateTime>
    ProxySession& WithEndedTimestamp(EndedTimestampT&& value) { SetEndedTimestamp(std::forward<EndedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The proxy session participants.</p>
     */
    inline const Aws::Vector<Participant>& GetParticipants() const { return m_participants; }
    inline bool ParticipantsHasBeenSet() const { return m_participantsHasBeenSet; }
    template<typename ParticipantsT = Aws::Vector<Participant>>
    void SetParticipants(ParticipantsT&& value) { m_participantsHasBeenSet = true; m_participants = std::forward<ParticipantsT>(value); }
    template<typename ParticipantsT = Aws::Vector<Participant>>
    ProxySession& WithParticipants(ParticipantsT&& value) { SetParticipants(std::forward<ParticipantsT>(value)); return *this;}
    template<typename ParticipantsT = Participant>
    ProxySession& AddParticipants(ParticipantsT&& value) { m_participantsHasBeenSet = true; m_participants.emplace_back(std::forward<ParticipantsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The preference for proxy phone number reuse, or stickiness, between the same
     * participants across sessions.</p>
     */
    inline NumberSelectionBehavior GetNumberSelectionBehavior() const { return m_numberSelectionBehavior; }
    inline bool NumberSelectionBehaviorHasBeenSet() const { return m_numberSelectionBehaviorHasBeenSet; }
    inline void SetNumberSelectionBehavior(NumberSelectionBehavior value) { m_numberSelectionBehaviorHasBeenSet = true; m_numberSelectionBehavior = value; }
    inline ProxySession& WithNumberSelectionBehavior(NumberSelectionBehavior value) { SetNumberSelectionBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The preference for matching the country or area code of the proxy phone
     * number with that of the first participant.</p>
     */
    inline GeoMatchLevel GetGeoMatchLevel() const { return m_geoMatchLevel; }
    inline bool GeoMatchLevelHasBeenSet() const { return m_geoMatchLevelHasBeenSet; }
    inline void SetGeoMatchLevel(GeoMatchLevel value) { m_geoMatchLevelHasBeenSet = true; m_geoMatchLevel = value; }
    inline ProxySession& WithGeoMatchLevel(GeoMatchLevel value) { SetGeoMatchLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The country and area code for the proxy phone number.</p>
     */
    inline const GeoMatchParams& GetGeoMatchParams() const { return m_geoMatchParams; }
    inline bool GeoMatchParamsHasBeenSet() const { return m_geoMatchParamsHasBeenSet; }
    template<typename GeoMatchParamsT = GeoMatchParams>
    void SetGeoMatchParams(GeoMatchParamsT&& value) { m_geoMatchParamsHasBeenSet = true; m_geoMatchParams = std::forward<GeoMatchParamsT>(value); }
    template<typename GeoMatchParamsT = GeoMatchParams>
    ProxySession& WithGeoMatchParams(GeoMatchParamsT&& value) { SetGeoMatchParams(std::forward<GeoMatchParamsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_voiceConnectorId;
    bool m_voiceConnectorIdHasBeenSet = false;

    Aws::String m_proxySessionId;
    bool m_proxySessionIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ProxySessionStatus m_status{ProxySessionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    int m_expiryMinutes{0};
    bool m_expiryMinutesHasBeenSet = false;

    Aws::Vector<Capability> m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp{};
    bool m_updatedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_endedTimestamp{};
    bool m_endedTimestampHasBeenSet = false;

    Aws::Vector<Participant> m_participants;
    bool m_participantsHasBeenSet = false;

    NumberSelectionBehavior m_numberSelectionBehavior{NumberSelectionBehavior::NOT_SET};
    bool m_numberSelectionBehaviorHasBeenSet = false;

    GeoMatchLevel m_geoMatchLevel{GeoMatchLevel::NOT_SET};
    bool m_geoMatchLevelHasBeenSet = false;

    GeoMatchParams m_geoMatchParams;
    bool m_geoMatchParamsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
