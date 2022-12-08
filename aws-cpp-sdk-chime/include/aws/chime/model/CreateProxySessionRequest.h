/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime/model/NumberSelectionBehavior.h>
#include <aws/chime/model/GeoMatchLevel.h>
#include <aws/chime/model/GeoMatchParams.h>
#include <aws/chime/model/Capability.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class CreateProxySessionRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API CreateProxySessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProxySession"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


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
    inline CreateProxySessionRequest& WithVoiceConnectorId(const Aws::String& value) { SetVoiceConnectorId(value); return *this;}

    /**
     * <p>The Amazon Chime voice connector ID.</p>
     */
    inline CreateProxySessionRequest& WithVoiceConnectorId(Aws::String&& value) { SetVoiceConnectorId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Chime voice connector ID.</p>
     */
    inline CreateProxySessionRequest& WithVoiceConnectorId(const char* value) { SetVoiceConnectorId(value); return *this;}


    /**
     * <p>The participant phone numbers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetParticipantPhoneNumbers() const{ return m_participantPhoneNumbers; }

    /**
     * <p>The participant phone numbers.</p>
     */
    inline bool ParticipantPhoneNumbersHasBeenSet() const { return m_participantPhoneNumbersHasBeenSet; }

    /**
     * <p>The participant phone numbers.</p>
     */
    inline void SetParticipantPhoneNumbers(const Aws::Vector<Aws::String>& value) { m_participantPhoneNumbersHasBeenSet = true; m_participantPhoneNumbers = value; }

    /**
     * <p>The participant phone numbers.</p>
     */
    inline void SetParticipantPhoneNumbers(Aws::Vector<Aws::String>&& value) { m_participantPhoneNumbersHasBeenSet = true; m_participantPhoneNumbers = std::move(value); }

    /**
     * <p>The participant phone numbers.</p>
     */
    inline CreateProxySessionRequest& WithParticipantPhoneNumbers(const Aws::Vector<Aws::String>& value) { SetParticipantPhoneNumbers(value); return *this;}

    /**
     * <p>The participant phone numbers.</p>
     */
    inline CreateProxySessionRequest& WithParticipantPhoneNumbers(Aws::Vector<Aws::String>&& value) { SetParticipantPhoneNumbers(std::move(value)); return *this;}

    /**
     * <p>The participant phone numbers.</p>
     */
    inline CreateProxySessionRequest& AddParticipantPhoneNumbers(const Aws::String& value) { m_participantPhoneNumbersHasBeenSet = true; m_participantPhoneNumbers.push_back(value); return *this; }

    /**
     * <p>The participant phone numbers.</p>
     */
    inline CreateProxySessionRequest& AddParticipantPhoneNumbers(Aws::String&& value) { m_participantPhoneNumbersHasBeenSet = true; m_participantPhoneNumbers.push_back(std::move(value)); return *this; }

    /**
     * <p>The participant phone numbers.</p>
     */
    inline CreateProxySessionRequest& AddParticipantPhoneNumbers(const char* value) { m_participantPhoneNumbersHasBeenSet = true; m_participantPhoneNumbers.push_back(value); return *this; }


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
    inline CreateProxySessionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the proxy session.</p>
     */
    inline CreateProxySessionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the proxy session.</p>
     */
    inline CreateProxySessionRequest& WithName(const char* value) { SetName(value); return *this;}


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
    inline CreateProxySessionRequest& WithExpiryMinutes(int value) { SetExpiryMinutes(value); return *this;}


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
    inline CreateProxySessionRequest& WithCapabilities(const Aws::Vector<Capability>& value) { SetCapabilities(value); return *this;}

    /**
     * <p>The proxy session capabilities.</p>
     */
    inline CreateProxySessionRequest& WithCapabilities(Aws::Vector<Capability>&& value) { SetCapabilities(std::move(value)); return *this;}

    /**
     * <p>The proxy session capabilities.</p>
     */
    inline CreateProxySessionRequest& AddCapabilities(const Capability& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }

    /**
     * <p>The proxy session capabilities.</p>
     */
    inline CreateProxySessionRequest& AddCapabilities(Capability&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(std::move(value)); return *this; }


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
    inline CreateProxySessionRequest& WithNumberSelectionBehavior(const NumberSelectionBehavior& value) { SetNumberSelectionBehavior(value); return *this;}

    /**
     * <p>The preference for proxy phone number reuse, or stickiness, between the same
     * participants across sessions.</p>
     */
    inline CreateProxySessionRequest& WithNumberSelectionBehavior(NumberSelectionBehavior&& value) { SetNumberSelectionBehavior(std::move(value)); return *this;}


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
    inline CreateProxySessionRequest& WithGeoMatchLevel(const GeoMatchLevel& value) { SetGeoMatchLevel(value); return *this;}

    /**
     * <p>The preference for matching the country or area code of the proxy phone
     * number with that of the first participant.</p>
     */
    inline CreateProxySessionRequest& WithGeoMatchLevel(GeoMatchLevel&& value) { SetGeoMatchLevel(std::move(value)); return *this;}


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
    inline CreateProxySessionRequest& WithGeoMatchParams(const GeoMatchParams& value) { SetGeoMatchParams(value); return *this;}

    /**
     * <p>The country and area code for the proxy phone number.</p>
     */
    inline CreateProxySessionRequest& WithGeoMatchParams(GeoMatchParams&& value) { SetGeoMatchParams(std::move(value)); return *this;}

  private:

    Aws::String m_voiceConnectorId;
    bool m_voiceConnectorIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_participantPhoneNumbers;
    bool m_participantPhoneNumbersHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_expiryMinutes;
    bool m_expiryMinutesHasBeenSet = false;

    Aws::Vector<Capability> m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

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
