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
  class DisassociatePhoneNumbersFromVoiceConnectorRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API DisassociatePhoneNumbersFromVoiceConnectorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociatePhoneNumbersFromVoiceConnector"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetVoiceConnectorId() const{ return m_voiceConnectorId; }

    
    inline bool VoiceConnectorIdHasBeenSet() const { return m_voiceConnectorIdHasBeenSet; }

    
    inline void SetVoiceConnectorId(const Aws::String& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = value; }

    
    inline void SetVoiceConnectorId(Aws::String&& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = std::move(value); }

    
    inline void SetVoiceConnectorId(const char* value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId.assign(value); }

    
    inline DisassociatePhoneNumbersFromVoiceConnectorRequest& WithVoiceConnectorId(const Aws::String& value) { SetVoiceConnectorId(value); return *this;}

    
    inline DisassociatePhoneNumbersFromVoiceConnectorRequest& WithVoiceConnectorId(Aws::String&& value) { SetVoiceConnectorId(std::move(value)); return *this;}

    
    inline DisassociatePhoneNumbersFromVoiceConnectorRequest& WithVoiceConnectorId(const char* value) { SetVoiceConnectorId(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetE164PhoneNumbers() const{ return m_e164PhoneNumbers; }

    
    inline bool E164PhoneNumbersHasBeenSet() const { return m_e164PhoneNumbersHasBeenSet; }

    
    inline void SetE164PhoneNumbers(const Aws::Vector<Aws::String>& value) { m_e164PhoneNumbersHasBeenSet = true; m_e164PhoneNumbers = value; }

    
    inline void SetE164PhoneNumbers(Aws::Vector<Aws::String>&& value) { m_e164PhoneNumbersHasBeenSet = true; m_e164PhoneNumbers = std::move(value); }

    
    inline DisassociatePhoneNumbersFromVoiceConnectorRequest& WithE164PhoneNumbers(const Aws::Vector<Aws::String>& value) { SetE164PhoneNumbers(value); return *this;}

    
    inline DisassociatePhoneNumbersFromVoiceConnectorRequest& WithE164PhoneNumbers(Aws::Vector<Aws::String>&& value) { SetE164PhoneNumbers(std::move(value)); return *this;}

    
    inline DisassociatePhoneNumbersFromVoiceConnectorRequest& AddE164PhoneNumbers(const Aws::String& value) { m_e164PhoneNumbersHasBeenSet = true; m_e164PhoneNumbers.push_back(value); return *this; }

    
    inline DisassociatePhoneNumbersFromVoiceConnectorRequest& AddE164PhoneNumbers(Aws::String&& value) { m_e164PhoneNumbersHasBeenSet = true; m_e164PhoneNumbers.push_back(std::move(value)); return *this; }

    
    inline DisassociatePhoneNumbersFromVoiceConnectorRequest& AddE164PhoneNumbers(const char* value) { m_e164PhoneNumbersHasBeenSet = true; m_e164PhoneNumbers.push_back(value); return *this; }

  private:

    Aws::String m_voiceConnectorId;
    bool m_voiceConnectorIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_e164PhoneNumbers;
    bool m_e164PhoneNumbersHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
