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
    AWS_CHIMESDKVOICE_API CreateProxySessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProxySession"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetVoiceConnectorId() const{ return m_voiceConnectorId; }

    
    inline bool VoiceConnectorIdHasBeenSet() const { return m_voiceConnectorIdHasBeenSet; }

    
    inline void SetVoiceConnectorId(const Aws::String& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = value; }

    
    inline void SetVoiceConnectorId(Aws::String&& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = std::move(value); }

    
    inline void SetVoiceConnectorId(const char* value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId.assign(value); }

    
    inline CreateProxySessionRequest& WithVoiceConnectorId(const Aws::String& value) { SetVoiceConnectorId(value); return *this;}

    
    inline CreateProxySessionRequest& WithVoiceConnectorId(Aws::String&& value) { SetVoiceConnectorId(std::move(value)); return *this;}

    
    inline CreateProxySessionRequest& WithVoiceConnectorId(const char* value) { SetVoiceConnectorId(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetParticipantPhoneNumbers() const{ return m_participantPhoneNumbers; }

    
    inline bool ParticipantPhoneNumbersHasBeenSet() const { return m_participantPhoneNumbersHasBeenSet; }

    
    inline void SetParticipantPhoneNumbers(const Aws::Vector<Aws::String>& value) { m_participantPhoneNumbersHasBeenSet = true; m_participantPhoneNumbers = value; }

    
    inline void SetParticipantPhoneNumbers(Aws::Vector<Aws::String>&& value) { m_participantPhoneNumbersHasBeenSet = true; m_participantPhoneNumbers = std::move(value); }

    
    inline CreateProxySessionRequest& WithParticipantPhoneNumbers(const Aws::Vector<Aws::String>& value) { SetParticipantPhoneNumbers(value); return *this;}

    
    inline CreateProxySessionRequest& WithParticipantPhoneNumbers(Aws::Vector<Aws::String>&& value) { SetParticipantPhoneNumbers(std::move(value)); return *this;}

    
    inline CreateProxySessionRequest& AddParticipantPhoneNumbers(const Aws::String& value) { m_participantPhoneNumbersHasBeenSet = true; m_participantPhoneNumbers.push_back(value); return *this; }

    
    inline CreateProxySessionRequest& AddParticipantPhoneNumbers(Aws::String&& value) { m_participantPhoneNumbersHasBeenSet = true; m_participantPhoneNumbers.push_back(std::move(value)); return *this; }

    
    inline CreateProxySessionRequest& AddParticipantPhoneNumbers(const char* value) { m_participantPhoneNumbersHasBeenSet = true; m_participantPhoneNumbers.push_back(value); return *this; }


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline CreateProxySessionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline CreateProxySessionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline CreateProxySessionRequest& WithName(const char* value) { SetName(value); return *this;}


    
    inline int GetExpiryMinutes() const{ return m_expiryMinutes; }

    
    inline bool ExpiryMinutesHasBeenSet() const { return m_expiryMinutesHasBeenSet; }

    
    inline void SetExpiryMinutes(int value) { m_expiryMinutesHasBeenSet = true; m_expiryMinutes = value; }

    
    inline CreateProxySessionRequest& WithExpiryMinutes(int value) { SetExpiryMinutes(value); return *this;}


    
    inline const Aws::Vector<Capability>& GetCapabilities() const{ return m_capabilities; }

    
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }

    
    inline void SetCapabilities(const Aws::Vector<Capability>& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }

    
    inline void SetCapabilities(Aws::Vector<Capability>&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }

    
    inline CreateProxySessionRequest& WithCapabilities(const Aws::Vector<Capability>& value) { SetCapabilities(value); return *this;}

    
    inline CreateProxySessionRequest& WithCapabilities(Aws::Vector<Capability>&& value) { SetCapabilities(std::move(value)); return *this;}

    
    inline CreateProxySessionRequest& AddCapabilities(const Capability& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }

    
    inline CreateProxySessionRequest& AddCapabilities(Capability&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(std::move(value)); return *this; }


    
    inline const NumberSelectionBehavior& GetNumberSelectionBehavior() const{ return m_numberSelectionBehavior; }

    
    inline bool NumberSelectionBehaviorHasBeenSet() const { return m_numberSelectionBehaviorHasBeenSet; }

    
    inline void SetNumberSelectionBehavior(const NumberSelectionBehavior& value) { m_numberSelectionBehaviorHasBeenSet = true; m_numberSelectionBehavior = value; }

    
    inline void SetNumberSelectionBehavior(NumberSelectionBehavior&& value) { m_numberSelectionBehaviorHasBeenSet = true; m_numberSelectionBehavior = std::move(value); }

    
    inline CreateProxySessionRequest& WithNumberSelectionBehavior(const NumberSelectionBehavior& value) { SetNumberSelectionBehavior(value); return *this;}

    
    inline CreateProxySessionRequest& WithNumberSelectionBehavior(NumberSelectionBehavior&& value) { SetNumberSelectionBehavior(std::move(value)); return *this;}


    
    inline const GeoMatchLevel& GetGeoMatchLevel() const{ return m_geoMatchLevel; }

    
    inline bool GeoMatchLevelHasBeenSet() const { return m_geoMatchLevelHasBeenSet; }

    
    inline void SetGeoMatchLevel(const GeoMatchLevel& value) { m_geoMatchLevelHasBeenSet = true; m_geoMatchLevel = value; }

    
    inline void SetGeoMatchLevel(GeoMatchLevel&& value) { m_geoMatchLevelHasBeenSet = true; m_geoMatchLevel = std::move(value); }

    
    inline CreateProxySessionRequest& WithGeoMatchLevel(const GeoMatchLevel& value) { SetGeoMatchLevel(value); return *this;}

    
    inline CreateProxySessionRequest& WithGeoMatchLevel(GeoMatchLevel&& value) { SetGeoMatchLevel(std::move(value)); return *this;}


    
    inline const GeoMatchParams& GetGeoMatchParams() const{ return m_geoMatchParams; }

    
    inline bool GeoMatchParamsHasBeenSet() const { return m_geoMatchParamsHasBeenSet; }

    
    inline void SetGeoMatchParams(const GeoMatchParams& value) { m_geoMatchParamsHasBeenSet = true; m_geoMatchParams = value; }

    
    inline void SetGeoMatchParams(GeoMatchParams&& value) { m_geoMatchParamsHasBeenSet = true; m_geoMatchParams = std::move(value); }

    
    inline CreateProxySessionRequest& WithGeoMatchParams(const GeoMatchParams& value) { SetGeoMatchParams(value); return *this;}

    
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
} // namespace ChimeSDKVoice
} // namespace Aws
