/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/chime/model/BusinessCallingSettings.h>
#include <aws/chime/model/VoiceConnectorSettings.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class UpdateGlobalSettingsRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API UpdateGlobalSettingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGlobalSettings"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Chime Business Calling settings.</p>
     */
    inline const BusinessCallingSettings& GetBusinessCalling() const { return m_businessCalling; }
    inline bool BusinessCallingHasBeenSet() const { return m_businessCallingHasBeenSet; }
    template<typename BusinessCallingT = BusinessCallingSettings>
    void SetBusinessCalling(BusinessCallingT&& value) { m_businessCallingHasBeenSet = true; m_businessCalling = std::forward<BusinessCallingT>(value); }
    template<typename BusinessCallingT = BusinessCallingSettings>
    UpdateGlobalSettingsRequest& WithBusinessCalling(BusinessCallingT&& value) { SetBusinessCalling(std::forward<BusinessCallingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Chime Voice Connector settings.</p>
     */
    inline const VoiceConnectorSettings& GetVoiceConnector() const { return m_voiceConnector; }
    inline bool VoiceConnectorHasBeenSet() const { return m_voiceConnectorHasBeenSet; }
    template<typename VoiceConnectorT = VoiceConnectorSettings>
    void SetVoiceConnector(VoiceConnectorT&& value) { m_voiceConnectorHasBeenSet = true; m_voiceConnector = std::forward<VoiceConnectorT>(value); }
    template<typename VoiceConnectorT = VoiceConnectorSettings>
    UpdateGlobalSettingsRequest& WithVoiceConnector(VoiceConnectorT&& value) { SetVoiceConnector(std::forward<VoiceConnectorT>(value)); return *this;}
    ///@}
  private:

    BusinessCallingSettings m_businessCalling;
    bool m_businessCallingHasBeenSet = false;

    VoiceConnectorSettings m_voiceConnector;
    bool m_voiceConnectorHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
