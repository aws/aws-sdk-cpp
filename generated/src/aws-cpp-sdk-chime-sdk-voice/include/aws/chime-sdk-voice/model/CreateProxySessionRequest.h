/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-voice/model/NumberSelectionBehavior.h>
#include <aws/chime-sdk-voice/model/GeoMatchLevel.h>
#include <aws/chime-sdk-voice/model/GeoMatchParams.h>
#include <aws/chime-sdk-voice/model/Capability.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   */
  class CreateProxySessionRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API CreateProxySessionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProxySession"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Voice Connector ID.</p>
     */
    inline const Aws::String& GetVoiceConnectorId() const { return m_voiceConnectorId; }
    inline bool VoiceConnectorIdHasBeenSet() const { return m_voiceConnectorIdHasBeenSet; }
    template<typename VoiceConnectorIdT = Aws::String>
    void SetVoiceConnectorId(VoiceConnectorIdT&& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = std::forward<VoiceConnectorIdT>(value); }
    template<typename VoiceConnectorIdT = Aws::String>
    CreateProxySessionRequest& WithVoiceConnectorId(VoiceConnectorIdT&& value) { SetVoiceConnectorId(std::forward<VoiceConnectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The participant phone numbers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetParticipantPhoneNumbers() const { return m_participantPhoneNumbers; }
    inline bool ParticipantPhoneNumbersHasBeenSet() const { return m_participantPhoneNumbersHasBeenSet; }
    template<typename ParticipantPhoneNumbersT = Aws::Vector<Aws::String>>
    void SetParticipantPhoneNumbers(ParticipantPhoneNumbersT&& value) { m_participantPhoneNumbersHasBeenSet = true; m_participantPhoneNumbers = std::forward<ParticipantPhoneNumbersT>(value); }
    template<typename ParticipantPhoneNumbersT = Aws::Vector<Aws::String>>
    CreateProxySessionRequest& WithParticipantPhoneNumbers(ParticipantPhoneNumbersT&& value) { SetParticipantPhoneNumbers(std::forward<ParticipantPhoneNumbersT>(value)); return *this;}
    template<typename ParticipantPhoneNumbersT = Aws::String>
    CreateProxySessionRequest& AddParticipantPhoneNumbers(ParticipantPhoneNumbersT&& value) { m_participantPhoneNumbersHasBeenSet = true; m_participantPhoneNumbers.emplace_back(std::forward<ParticipantPhoneNumbersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the proxy session.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateProxySessionRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of minutes allowed for the proxy session.</p>
     */
    inline int GetExpiryMinutes() const { return m_expiryMinutes; }
    inline bool ExpiryMinutesHasBeenSet() const { return m_expiryMinutesHasBeenSet; }
    inline void SetExpiryMinutes(int value) { m_expiryMinutesHasBeenSet = true; m_expiryMinutes = value; }
    inline CreateProxySessionRequest& WithExpiryMinutes(int value) { SetExpiryMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The proxy session's capabilities.</p>
     */
    inline const Aws::Vector<Capability>& GetCapabilities() const { return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    template<typename CapabilitiesT = Aws::Vector<Capability>>
    void SetCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::forward<CapabilitiesT>(value); }
    template<typename CapabilitiesT = Aws::Vector<Capability>>
    CreateProxySessionRequest& WithCapabilities(CapabilitiesT&& value) { SetCapabilities(std::forward<CapabilitiesT>(value)); return *this;}
    inline CreateProxySessionRequest& AddCapabilities(Capability value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The preference for proxy phone number reuse, or stickiness, between the same
     * participants across sessions.</p>
     */
    inline NumberSelectionBehavior GetNumberSelectionBehavior() const { return m_numberSelectionBehavior; }
    inline bool NumberSelectionBehaviorHasBeenSet() const { return m_numberSelectionBehaviorHasBeenSet; }
    inline void SetNumberSelectionBehavior(NumberSelectionBehavior value) { m_numberSelectionBehaviorHasBeenSet = true; m_numberSelectionBehavior = value; }
    inline CreateProxySessionRequest& WithNumberSelectionBehavior(NumberSelectionBehavior value) { SetNumberSelectionBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The preference for matching the country or area code of the proxy phone
     * number with that of the first participant.</p>
     */
    inline GeoMatchLevel GetGeoMatchLevel() const { return m_geoMatchLevel; }
    inline bool GeoMatchLevelHasBeenSet() const { return m_geoMatchLevelHasBeenSet; }
    inline void SetGeoMatchLevel(GeoMatchLevel value) { m_geoMatchLevelHasBeenSet = true; m_geoMatchLevel = value; }
    inline CreateProxySessionRequest& WithGeoMatchLevel(GeoMatchLevel value) { SetGeoMatchLevel(value); return *this;}
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
    CreateProxySessionRequest& WithGeoMatchParams(GeoMatchParamsT&& value) { SetGeoMatchParams(std::forward<GeoMatchParamsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_voiceConnectorId;
    bool m_voiceConnectorIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_participantPhoneNumbers;
    bool m_participantPhoneNumbersHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_expiryMinutes{0};
    bool m_expiryMinutesHasBeenSet = false;

    Aws::Vector<Capability> m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

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
