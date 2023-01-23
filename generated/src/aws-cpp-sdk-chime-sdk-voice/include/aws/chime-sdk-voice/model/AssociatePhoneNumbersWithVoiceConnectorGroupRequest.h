/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   */
  class AssociatePhoneNumbersWithVoiceConnectorGroupRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API AssociatePhoneNumbersWithVoiceConnectorGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociatePhoneNumbersWithVoiceConnectorGroup"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetVoiceConnectorGroupId() const{ return m_voiceConnectorGroupId; }

    
    inline bool VoiceConnectorGroupIdHasBeenSet() const { return m_voiceConnectorGroupIdHasBeenSet; }

    
    inline void SetVoiceConnectorGroupId(const Aws::String& value) { m_voiceConnectorGroupIdHasBeenSet = true; m_voiceConnectorGroupId = value; }

    
    inline void SetVoiceConnectorGroupId(Aws::String&& value) { m_voiceConnectorGroupIdHasBeenSet = true; m_voiceConnectorGroupId = std::move(value); }

    
    inline void SetVoiceConnectorGroupId(const char* value) { m_voiceConnectorGroupIdHasBeenSet = true; m_voiceConnectorGroupId.assign(value); }

    
    inline AssociatePhoneNumbersWithVoiceConnectorGroupRequest& WithVoiceConnectorGroupId(const Aws::String& value) { SetVoiceConnectorGroupId(value); return *this;}

    
    inline AssociatePhoneNumbersWithVoiceConnectorGroupRequest& WithVoiceConnectorGroupId(Aws::String&& value) { SetVoiceConnectorGroupId(std::move(value)); return *this;}

    
    inline AssociatePhoneNumbersWithVoiceConnectorGroupRequest& WithVoiceConnectorGroupId(const char* value) { SetVoiceConnectorGroupId(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetE164PhoneNumbers() const{ return m_e164PhoneNumbers; }

    
    inline bool E164PhoneNumbersHasBeenSet() const { return m_e164PhoneNumbersHasBeenSet; }

    
    inline void SetE164PhoneNumbers(const Aws::Vector<Aws::String>& value) { m_e164PhoneNumbersHasBeenSet = true; m_e164PhoneNumbers = value; }

    
    inline void SetE164PhoneNumbers(Aws::Vector<Aws::String>&& value) { m_e164PhoneNumbersHasBeenSet = true; m_e164PhoneNumbers = std::move(value); }

    
    inline AssociatePhoneNumbersWithVoiceConnectorGroupRequest& WithE164PhoneNumbers(const Aws::Vector<Aws::String>& value) { SetE164PhoneNumbers(value); return *this;}

    
    inline AssociatePhoneNumbersWithVoiceConnectorGroupRequest& WithE164PhoneNumbers(Aws::Vector<Aws::String>&& value) { SetE164PhoneNumbers(std::move(value)); return *this;}

    
    inline AssociatePhoneNumbersWithVoiceConnectorGroupRequest& AddE164PhoneNumbers(const Aws::String& value) { m_e164PhoneNumbersHasBeenSet = true; m_e164PhoneNumbers.push_back(value); return *this; }

    
    inline AssociatePhoneNumbersWithVoiceConnectorGroupRequest& AddE164PhoneNumbers(Aws::String&& value) { m_e164PhoneNumbersHasBeenSet = true; m_e164PhoneNumbers.push_back(std::move(value)); return *this; }

    
    inline AssociatePhoneNumbersWithVoiceConnectorGroupRequest& AddE164PhoneNumbers(const char* value) { m_e164PhoneNumbersHasBeenSet = true; m_e164PhoneNumbers.push_back(value); return *this; }


    
    inline bool GetForceAssociate() const{ return m_forceAssociate; }

    
    inline bool ForceAssociateHasBeenSet() const { return m_forceAssociateHasBeenSet; }

    
    inline void SetForceAssociate(bool value) { m_forceAssociateHasBeenSet = true; m_forceAssociate = value; }

    
    inline AssociatePhoneNumbersWithVoiceConnectorGroupRequest& WithForceAssociate(bool value) { SetForceAssociate(value); return *this;}

  private:

    Aws::String m_voiceConnectorGroupId;
    bool m_voiceConnectorGroupIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_e164PhoneNumbers;
    bool m_e164PhoneNumbersHasBeenSet = false;

    bool m_forceAssociate;
    bool m_forceAssociateHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
