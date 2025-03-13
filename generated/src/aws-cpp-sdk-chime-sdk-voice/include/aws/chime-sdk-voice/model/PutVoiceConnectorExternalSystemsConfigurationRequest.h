/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-voice/model/SessionBorderControllerType.h>
#include <aws/chime-sdk-voice/model/ContactCenterSystemType.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   */
  class PutVoiceConnectorExternalSystemsConfigurationRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API PutVoiceConnectorExternalSystemsConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutVoiceConnectorExternalSystemsConfiguration"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Voice Connector for which to add the external system
     * configuration.</p>
     */
    inline const Aws::String& GetVoiceConnectorId() const { return m_voiceConnectorId; }
    inline bool VoiceConnectorIdHasBeenSet() const { return m_voiceConnectorIdHasBeenSet; }
    template<typename VoiceConnectorIdT = Aws::String>
    void SetVoiceConnectorId(VoiceConnectorIdT&& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = std::forward<VoiceConnectorIdT>(value); }
    template<typename VoiceConnectorIdT = Aws::String>
    PutVoiceConnectorExternalSystemsConfigurationRequest& WithVoiceConnectorId(VoiceConnectorIdT&& value) { SetVoiceConnectorId(std::forward<VoiceConnectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session border controllers to use.</p>
     */
    inline const Aws::Vector<SessionBorderControllerType>& GetSessionBorderControllerTypes() const { return m_sessionBorderControllerTypes; }
    inline bool SessionBorderControllerTypesHasBeenSet() const { return m_sessionBorderControllerTypesHasBeenSet; }
    template<typename SessionBorderControllerTypesT = Aws::Vector<SessionBorderControllerType>>
    void SetSessionBorderControllerTypes(SessionBorderControllerTypesT&& value) { m_sessionBorderControllerTypesHasBeenSet = true; m_sessionBorderControllerTypes = std::forward<SessionBorderControllerTypesT>(value); }
    template<typename SessionBorderControllerTypesT = Aws::Vector<SessionBorderControllerType>>
    PutVoiceConnectorExternalSystemsConfigurationRequest& WithSessionBorderControllerTypes(SessionBorderControllerTypesT&& value) { SetSessionBorderControllerTypes(std::forward<SessionBorderControllerTypesT>(value)); return *this;}
    inline PutVoiceConnectorExternalSystemsConfigurationRequest& AddSessionBorderControllerTypes(SessionBorderControllerType value) { m_sessionBorderControllerTypesHasBeenSet = true; m_sessionBorderControllerTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The contact center system to use.</p>
     */
    inline const Aws::Vector<ContactCenterSystemType>& GetContactCenterSystemTypes() const { return m_contactCenterSystemTypes; }
    inline bool ContactCenterSystemTypesHasBeenSet() const { return m_contactCenterSystemTypesHasBeenSet; }
    template<typename ContactCenterSystemTypesT = Aws::Vector<ContactCenterSystemType>>
    void SetContactCenterSystemTypes(ContactCenterSystemTypesT&& value) { m_contactCenterSystemTypesHasBeenSet = true; m_contactCenterSystemTypes = std::forward<ContactCenterSystemTypesT>(value); }
    template<typename ContactCenterSystemTypesT = Aws::Vector<ContactCenterSystemType>>
    PutVoiceConnectorExternalSystemsConfigurationRequest& WithContactCenterSystemTypes(ContactCenterSystemTypesT&& value) { SetContactCenterSystemTypes(std::forward<ContactCenterSystemTypesT>(value)); return *this;}
    inline PutVoiceConnectorExternalSystemsConfigurationRequest& AddContactCenterSystemTypes(ContactCenterSystemType value) { m_contactCenterSystemTypesHasBeenSet = true; m_contactCenterSystemTypes.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_voiceConnectorId;
    bool m_voiceConnectorIdHasBeenSet = false;

    Aws::Vector<SessionBorderControllerType> m_sessionBorderControllerTypes;
    bool m_sessionBorderControllerTypesHasBeenSet = false;

    Aws::Vector<ContactCenterSystemType> m_contactCenterSystemTypes;
    bool m_contactCenterSystemTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
