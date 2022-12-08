/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/ProxySessionStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/chime/model/NumberSelectionBehavior.h>
#include <aws/chime/model/GeoMatchLevel.h>
#include <aws/chime/model/GeoMatchParams.h>
#include <aws/chime/model/Capability.h>
#include <aws/chime/model/Participant.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>The proxy session for an Amazon Chime Voice Connector.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ProxySession">AWS
   * API Reference</a></p>
   */
  class ProxySession
  {
  public:
    AWS_CHIME_API ProxySession();
    AWS_CHIME_API ProxySession(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API ProxySession& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Chime voice connector ID.</p>
     */
    inline const Aws::String& GetVoiceConnectorId() const{ return m_voiceConnectorId; }

    /**
     * <p>The Amazon Chime voice connector ID.</p>
     */
    inline bool VoiceConnectorIdHasBeenSet() const { return m_voiceConnectorIdHasBeenSet; }

    /**
     * <p>The Amazon Chime voice connector ID.</p>
     */
    inline void SetVoiceConnectorId(const Aws::String& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = value; }

    /**
     * <p>The Amazon Chime voice connector ID.</p>
     */
    inline void SetVoiceConnectorId(Aws::String&& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = std::move(value); }

    /**
     * <p>The Amazon Chime voice connector ID.</p>
     */
    inline void SetVoiceConnectorId(const char* value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId.assign(value); }

    /**
     * <p>The Amazon Chime voice connector ID.</p>
     */
    inline ProxySession& WithVoiceConnectorId(const Aws::String& value) { SetVoiceConnectorId(value); return *this;}

    /**
     * <p>The Amazon Chime voice connector ID.</p>
     */
    inline ProxySession& WithVoiceConnectorId(Aws::String&& value) { SetVoiceConnectorId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Chime voice connector ID.</p>
     */
    inline ProxySession& WithVoiceConnectorId(const char* value) { SetVoiceConnectorId(value); return *this;}


    /**
     * <p>The proxy session ID.</p>
     */
    inline const Aws::String& GetProxySessionId() const{ return m_proxySessionId; }

    /**
     * <p>The proxy session ID.</p>
     */
    inline bool ProxySessionIdHasBeenSet() const { return m_proxySessionIdHasBeenSet; }

    /**
     * <p>The proxy session ID.</p>
     */
    inline void SetProxySessionId(const Aws::String& value) { m_proxySessionIdHasBeenSet = true; m_proxySessionId = value; }

    /**
     * <p>The proxy session ID.</p>
     */
    inline void SetProxySessionId(Aws::String&& value) { m_proxySessionIdHasBeenSet = true; m_proxySessionId = std::move(value); }

    /**
     * <p>The proxy session ID.</p>
     */
    inline void SetProxySessionId(const char* value) { m_proxySessionIdHasBeenSet = true; m_proxySessionId.assign(value); }

    /**
     * <p>The proxy session ID.</p>
     */
    inline ProxySession& WithProxySessionId(const Aws::String& value) { SetProxySessionId(value); return *this;}

    /**
     * <p>The proxy session ID.</p>
     */
    inline ProxySession& WithProxySessionId(Aws::String&& value) { SetProxySessionId(std::move(value)); return *this;}

    /**
     * <p>The proxy session ID.</p>
     */
    inline ProxySession& WithProxySessionId(const char* value) { SetProxySessionId(value); return *this;}


    /**
     * <p>The name of the proxy session.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the proxy session.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the proxy session.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the proxy session.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the proxy session.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the proxy session.</p>
     */
    inline ProxySession& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the proxy session.</p>
     */
    inline ProxySession& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the proxy session.</p>
     */
    inline ProxySession& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of the proxy session.</p>
     */
    inline const ProxySessionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the proxy session.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the proxy session.</p>
     */
    inline void SetStatus(const ProxySessionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the proxy session.</p>
     */
    inline void SetStatus(ProxySessionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the proxy session.</p>
     */
    inline ProxySession& WithStatus(const ProxySessionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the proxy session.</p>
     */
    inline ProxySession& WithStatus(ProxySessionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The number of minutes allowed for the proxy session.</p>
     */
    inline int GetExpiryMinutes() const{ return m_expiryMinutes; }

    /**
     * <p>The number of minutes allowed for the proxy session.</p>
     */
    inline bool ExpiryMinutesHasBeenSet() const { return m_expiryMinutesHasBeenSet; }

    /**
     * <p>The number of minutes allowed for the proxy session.</p>
     */
    inline void SetExpiryMinutes(int value) { m_expiryMinutesHasBeenSet = true; m_expiryMinutes = value; }

    /**
     * <p>The number of minutes allowed for the proxy session.</p>
     */
    inline ProxySession& WithExpiryMinutes(int value) { SetExpiryMinutes(value); return *this;}


    /**
     * <p>The proxy session capabilities.</p>
     */
    inline const Aws::Vector<Capability>& GetCapabilities() const{ return m_capabilities; }

    /**
     * <p>The proxy session capabilities.</p>
     */
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }

    /**
     * <p>The proxy session capabilities.</p>
     */
    inline void SetCapabilities(const Aws::Vector<Capability>& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }

    /**
     * <p>The proxy session capabilities.</p>
     */
    inline void SetCapabilities(Aws::Vector<Capability>&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }

    /**
     * <p>The proxy session capabilities.</p>
     */
    inline ProxySession& WithCapabilities(const Aws::Vector<Capability>& value) { SetCapabilities(value); return *this;}

    /**
     * <p>The proxy session capabilities.</p>
     */
    inline ProxySession& WithCapabilities(Aws::Vector<Capability>&& value) { SetCapabilities(std::move(value)); return *this;}

    /**
     * <p>The proxy session capabilities.</p>
     */
    inline ProxySession& AddCapabilities(const Capability& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }

    /**
     * <p>The proxy session capabilities.</p>
     */
    inline ProxySession& AddCapabilities(Capability&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(std::move(value)); return *this; }


    /**
     * <p>The created time stamp, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The created time stamp, in ISO 8601 format.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The created time stamp, in ISO 8601 format.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The created time stamp, in ISO 8601 format.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The created time stamp, in ISO 8601 format.</p>
     */
    inline ProxySession& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The created time stamp, in ISO 8601 format.</p>
     */
    inline ProxySession& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The updated time stamp, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }

    /**
     * <p>The updated time stamp, in ISO 8601 format.</p>
     */
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }

    /**
     * <p>The updated time stamp, in ISO 8601 format.</p>
     */
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = value; }

    /**
     * <p>The updated time stamp, in ISO 8601 format.</p>
     */
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::move(value); }

    /**
     * <p>The updated time stamp, in ISO 8601 format.</p>
     */
    inline ProxySession& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}

    /**
     * <p>The updated time stamp, in ISO 8601 format.</p>
     */
    inline ProxySession& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The ended time stamp, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedTimestamp() const{ return m_endedTimestamp; }

    /**
     * <p>The ended time stamp, in ISO 8601 format.</p>
     */
    inline bool EndedTimestampHasBeenSet() const { return m_endedTimestampHasBeenSet; }

    /**
     * <p>The ended time stamp, in ISO 8601 format.</p>
     */
    inline void SetEndedTimestamp(const Aws::Utils::DateTime& value) { m_endedTimestampHasBeenSet = true; m_endedTimestamp = value; }

    /**
     * <p>The ended time stamp, in ISO 8601 format.</p>
     */
    inline void SetEndedTimestamp(Aws::Utils::DateTime&& value) { m_endedTimestampHasBeenSet = true; m_endedTimestamp = std::move(value); }

    /**
     * <p>The ended time stamp, in ISO 8601 format.</p>
     */
    inline ProxySession& WithEndedTimestamp(const Aws::Utils::DateTime& value) { SetEndedTimestamp(value); return *this;}

    /**
     * <p>The ended time stamp, in ISO 8601 format.</p>
     */
    inline ProxySession& WithEndedTimestamp(Aws::Utils::DateTime&& value) { SetEndedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The proxy session participants.</p>
     */
    inline const Aws::Vector<Participant>& GetParticipants() const{ return m_participants; }

    /**
     * <p>The proxy session participants.</p>
     */
    inline bool ParticipantsHasBeenSet() const { return m_participantsHasBeenSet; }

    /**
     * <p>The proxy session participants.</p>
     */
    inline void SetParticipants(const Aws::Vector<Participant>& value) { m_participantsHasBeenSet = true; m_participants = value; }

    /**
     * <p>The proxy session participants.</p>
     */
    inline void SetParticipants(Aws::Vector<Participant>&& value) { m_participantsHasBeenSet = true; m_participants = std::move(value); }

    /**
     * <p>The proxy session participants.</p>
     */
    inline ProxySession& WithParticipants(const Aws::Vector<Participant>& value) { SetParticipants(value); return *this;}

    /**
     * <p>The proxy session participants.</p>
     */
    inline ProxySession& WithParticipants(Aws::Vector<Participant>&& value) { SetParticipants(std::move(value)); return *this;}

    /**
     * <p>The proxy session participants.</p>
     */
    inline ProxySession& AddParticipants(const Participant& value) { m_participantsHasBeenSet = true; m_participants.push_back(value); return *this; }

    /**
     * <p>The proxy session participants.</p>
     */
    inline ProxySession& AddParticipants(Participant&& value) { m_participantsHasBeenSet = true; m_participants.push_back(std::move(value)); return *this; }


    /**
     * <p>The preference for proxy phone number reuse, or stickiness, between the same
     * participants across sessions.</p>
     */
    inline const NumberSelectionBehavior& GetNumberSelectionBehavior() const{ return m_numberSelectionBehavior; }

    /**
     * <p>The preference for proxy phone number reuse, or stickiness, between the same
     * participants across sessions.</p>
     */
    inline bool NumberSelectionBehaviorHasBeenSet() const { return m_numberSelectionBehaviorHasBeenSet; }

    /**
     * <p>The preference for proxy phone number reuse, or stickiness, between the same
     * participants across sessions.</p>
     */
    inline void SetNumberSelectionBehavior(const NumberSelectionBehavior& value) { m_numberSelectionBehaviorHasBeenSet = true; m_numberSelectionBehavior = value; }

    /**
     * <p>The preference for proxy phone number reuse, or stickiness, between the same
     * participants across sessions.</p>
     */
    inline void SetNumberSelectionBehavior(NumberSelectionBehavior&& value) { m_numberSelectionBehaviorHasBeenSet = true; m_numberSelectionBehavior = std::move(value); }

    /**
     * <p>The preference for proxy phone number reuse, or stickiness, between the same
     * participants across sessions.</p>
     */
    inline ProxySession& WithNumberSelectionBehavior(const NumberSelectionBehavior& value) { SetNumberSelectionBehavior(value); return *this;}

    /**
     * <p>The preference for proxy phone number reuse, or stickiness, between the same
     * participants across sessions.</p>
     */
    inline ProxySession& WithNumberSelectionBehavior(NumberSelectionBehavior&& value) { SetNumberSelectionBehavior(std::move(value)); return *this;}


    /**
     * <p>The preference for matching the country or area code of the proxy phone
     * number with that of the first participant.</p>
     */
    inline const GeoMatchLevel& GetGeoMatchLevel() const{ return m_geoMatchLevel; }

    /**
     * <p>The preference for matching the country or area code of the proxy phone
     * number with that of the first participant.</p>
     */
    inline bool GeoMatchLevelHasBeenSet() const { return m_geoMatchLevelHasBeenSet; }

    /**
     * <p>The preference for matching the country or area code of the proxy phone
     * number with that of the first participant.</p>
     */
    inline void SetGeoMatchLevel(const GeoMatchLevel& value) { m_geoMatchLevelHasBeenSet = true; m_geoMatchLevel = value; }

    /**
     * <p>The preference for matching the country or area code of the proxy phone
     * number with that of the first participant.</p>
     */
    inline void SetGeoMatchLevel(GeoMatchLevel&& value) { m_geoMatchLevelHasBeenSet = true; m_geoMatchLevel = std::move(value); }

    /**
     * <p>The preference for matching the country or area code of the proxy phone
     * number with that of the first participant.</p>
     */
    inline ProxySession& WithGeoMatchLevel(const GeoMatchLevel& value) { SetGeoMatchLevel(value); return *this;}

    /**
     * <p>The preference for matching the country or area code of the proxy phone
     * number with that of the first participant.</p>
     */
    inline ProxySession& WithGeoMatchLevel(GeoMatchLevel&& value) { SetGeoMatchLevel(std::move(value)); return *this;}


    /**
     * <p>The country and area code for the proxy phone number.</p>
     */
    inline const GeoMatchParams& GetGeoMatchParams() const{ return m_geoMatchParams; }

    /**
     * <p>The country and area code for the proxy phone number.</p>
     */
    inline bool GeoMatchParamsHasBeenSet() const { return m_geoMatchParamsHasBeenSet; }

    /**
     * <p>The country and area code for the proxy phone number.</p>
     */
    inline void SetGeoMatchParams(const GeoMatchParams& value) { m_geoMatchParamsHasBeenSet = true; m_geoMatchParams = value; }

    /**
     * <p>The country and area code for the proxy phone number.</p>
     */
    inline void SetGeoMatchParams(GeoMatchParams&& value) { m_geoMatchParamsHasBeenSet = true; m_geoMatchParams = std::move(value); }

    /**
     * <p>The country and area code for the proxy phone number.</p>
     */
    inline ProxySession& WithGeoMatchParams(const GeoMatchParams& value) { SetGeoMatchParams(value); return *this;}

    /**
     * <p>The country and area code for the proxy phone number.</p>
     */
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
} // namespace Chime
} // namespace Aws
