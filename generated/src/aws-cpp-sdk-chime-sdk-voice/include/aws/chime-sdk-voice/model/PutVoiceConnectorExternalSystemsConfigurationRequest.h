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
    AWS_CHIMESDKVOICE_API PutVoiceConnectorExternalSystemsConfigurationRequest();

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
    inline const Aws::String& GetVoiceConnectorId() const{ return m_voiceConnectorId; }
    inline bool VoiceConnectorIdHasBeenSet() const { return m_voiceConnectorIdHasBeenSet; }
    inline void SetVoiceConnectorId(const Aws::String& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = value; }
    inline void SetVoiceConnectorId(Aws::String&& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = std::move(value); }
    inline void SetVoiceConnectorId(const char* value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId.assign(value); }
    inline PutVoiceConnectorExternalSystemsConfigurationRequest& WithVoiceConnectorId(const Aws::String& value) { SetVoiceConnectorId(value); return *this;}
    inline PutVoiceConnectorExternalSystemsConfigurationRequest& WithVoiceConnectorId(Aws::String&& value) { SetVoiceConnectorId(std::move(value)); return *this;}
    inline PutVoiceConnectorExternalSystemsConfigurationRequest& WithVoiceConnectorId(const char* value) { SetVoiceConnectorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session border controllers to use.</p>
     */
    inline const Aws::Vector<SessionBorderControllerType>& GetSessionBorderControllerTypes() const{ return m_sessionBorderControllerTypes; }
    inline bool SessionBorderControllerTypesHasBeenSet() const { return m_sessionBorderControllerTypesHasBeenSet; }
    inline void SetSessionBorderControllerTypes(const Aws::Vector<SessionBorderControllerType>& value) { m_sessionBorderControllerTypesHasBeenSet = true; m_sessionBorderControllerTypes = value; }
    inline void SetSessionBorderControllerTypes(Aws::Vector<SessionBorderControllerType>&& value) { m_sessionBorderControllerTypesHasBeenSet = true; m_sessionBorderControllerTypes = std::move(value); }
    inline PutVoiceConnectorExternalSystemsConfigurationRequest& WithSessionBorderControllerTypes(const Aws::Vector<SessionBorderControllerType>& value) { SetSessionBorderControllerTypes(value); return *this;}
    inline PutVoiceConnectorExternalSystemsConfigurationRequest& WithSessionBorderControllerTypes(Aws::Vector<SessionBorderControllerType>&& value) { SetSessionBorderControllerTypes(std::move(value)); return *this;}
    inline PutVoiceConnectorExternalSystemsConfigurationRequest& AddSessionBorderControllerTypes(const SessionBorderControllerType& value) { m_sessionBorderControllerTypesHasBeenSet = true; m_sessionBorderControllerTypes.push_back(value); return *this; }
    inline PutVoiceConnectorExternalSystemsConfigurationRequest& AddSessionBorderControllerTypes(SessionBorderControllerType&& value) { m_sessionBorderControllerTypesHasBeenSet = true; m_sessionBorderControllerTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The contact center system to use.</p>
     */
    inline const Aws::Vector<ContactCenterSystemType>& GetContactCenterSystemTypes() const{ return m_contactCenterSystemTypes; }
    inline bool ContactCenterSystemTypesHasBeenSet() const { return m_contactCenterSystemTypesHasBeenSet; }
    inline void SetContactCenterSystemTypes(const Aws::Vector<ContactCenterSystemType>& value) { m_contactCenterSystemTypesHasBeenSet = true; m_contactCenterSystemTypes = value; }
    inline void SetContactCenterSystemTypes(Aws::Vector<ContactCenterSystemType>&& value) { m_contactCenterSystemTypesHasBeenSet = true; m_contactCenterSystemTypes = std::move(value); }
    inline PutVoiceConnectorExternalSystemsConfigurationRequest& WithContactCenterSystemTypes(const Aws::Vector<ContactCenterSystemType>& value) { SetContactCenterSystemTypes(value); return *this;}
    inline PutVoiceConnectorExternalSystemsConfigurationRequest& WithContactCenterSystemTypes(Aws::Vector<ContactCenterSystemType>&& value) { SetContactCenterSystemTypes(std::move(value)); return *this;}
    inline PutVoiceConnectorExternalSystemsConfigurationRequest& AddContactCenterSystemTypes(const ContactCenterSystemType& value) { m_contactCenterSystemTypesHasBeenSet = true; m_contactCenterSystemTypes.push_back(value); return *this; }
    inline PutVoiceConnectorExternalSystemsConfigurationRequest& AddContactCenterSystemTypes(ContactCenterSystemType&& value) { m_contactCenterSystemTypesHasBeenSet = true; m_contactCenterSystemTypes.push_back(std::move(value)); return *this; }
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
