/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceRequest.h>
#include <aws/chime-sdk-voice/model/VoiceConnectorSettings.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   */
  class UpdateGlobalSettingsRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API UpdateGlobalSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGlobalSettings"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    
    inline const VoiceConnectorSettings& GetVoiceConnector() const{ return m_voiceConnector; }

    
    inline bool VoiceConnectorHasBeenSet() const { return m_voiceConnectorHasBeenSet; }

    
    inline void SetVoiceConnector(const VoiceConnectorSettings& value) { m_voiceConnectorHasBeenSet = true; m_voiceConnector = value; }

    
    inline void SetVoiceConnector(VoiceConnectorSettings&& value) { m_voiceConnectorHasBeenSet = true; m_voiceConnector = std::move(value); }

    
    inline UpdateGlobalSettingsRequest& WithVoiceConnector(const VoiceConnectorSettings& value) { SetVoiceConnector(value); return *this;}

    
    inline UpdateGlobalSettingsRequest& WithVoiceConnector(VoiceConnectorSettings&& value) { SetVoiceConnector(std::move(value)); return *this;}

  private:

    VoiceConnectorSettings m_voiceConnector;
    bool m_voiceConnectorHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
