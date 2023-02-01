/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/EmergencyCallingConfiguration.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   */
  class PutVoiceConnectorEmergencyCallingConfigurationRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API PutVoiceConnectorEmergencyCallingConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutVoiceConnectorEmergencyCallingConfiguration"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetVoiceConnectorId() const{ return m_voiceConnectorId; }

    
    inline bool VoiceConnectorIdHasBeenSet() const { return m_voiceConnectorIdHasBeenSet; }

    
    inline void SetVoiceConnectorId(const Aws::String& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = value; }

    
    inline void SetVoiceConnectorId(Aws::String&& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = std::move(value); }

    
    inline void SetVoiceConnectorId(const char* value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId.assign(value); }

    
    inline PutVoiceConnectorEmergencyCallingConfigurationRequest& WithVoiceConnectorId(const Aws::String& value) { SetVoiceConnectorId(value); return *this;}

    
    inline PutVoiceConnectorEmergencyCallingConfigurationRequest& WithVoiceConnectorId(Aws::String&& value) { SetVoiceConnectorId(std::move(value)); return *this;}

    
    inline PutVoiceConnectorEmergencyCallingConfigurationRequest& WithVoiceConnectorId(const char* value) { SetVoiceConnectorId(value); return *this;}


    
    inline const EmergencyCallingConfiguration& GetEmergencyCallingConfiguration() const{ return m_emergencyCallingConfiguration; }

    
    inline bool EmergencyCallingConfigurationHasBeenSet() const { return m_emergencyCallingConfigurationHasBeenSet; }

    
    inline void SetEmergencyCallingConfiguration(const EmergencyCallingConfiguration& value) { m_emergencyCallingConfigurationHasBeenSet = true; m_emergencyCallingConfiguration = value; }

    
    inline void SetEmergencyCallingConfiguration(EmergencyCallingConfiguration&& value) { m_emergencyCallingConfigurationHasBeenSet = true; m_emergencyCallingConfiguration = std::move(value); }

    
    inline PutVoiceConnectorEmergencyCallingConfigurationRequest& WithEmergencyCallingConfiguration(const EmergencyCallingConfiguration& value) { SetEmergencyCallingConfiguration(value); return *this;}

    
    inline PutVoiceConnectorEmergencyCallingConfigurationRequest& WithEmergencyCallingConfiguration(EmergencyCallingConfiguration&& value) { SetEmergencyCallingConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_voiceConnectorId;
    bool m_voiceConnectorIdHasBeenSet = false;

    EmergencyCallingConfiguration m_emergencyCallingConfiguration;
    bool m_emergencyCallingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
