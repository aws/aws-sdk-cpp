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
  class PutVoiceConnectorProxyRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API PutVoiceConnectorProxyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutVoiceConnectorProxy"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetVoiceConnectorId() const{ return m_voiceConnectorId; }

    
    inline bool VoiceConnectorIdHasBeenSet() const { return m_voiceConnectorIdHasBeenSet; }

    
    inline void SetVoiceConnectorId(const Aws::String& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = value; }

    
    inline void SetVoiceConnectorId(Aws::String&& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = std::move(value); }

    
    inline void SetVoiceConnectorId(const char* value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId.assign(value); }

    
    inline PutVoiceConnectorProxyRequest& WithVoiceConnectorId(const Aws::String& value) { SetVoiceConnectorId(value); return *this;}

    
    inline PutVoiceConnectorProxyRequest& WithVoiceConnectorId(Aws::String&& value) { SetVoiceConnectorId(std::move(value)); return *this;}

    
    inline PutVoiceConnectorProxyRequest& WithVoiceConnectorId(const char* value) { SetVoiceConnectorId(value); return *this;}


    
    inline int GetDefaultSessionExpiryMinutes() const{ return m_defaultSessionExpiryMinutes; }

    
    inline bool DefaultSessionExpiryMinutesHasBeenSet() const { return m_defaultSessionExpiryMinutesHasBeenSet; }

    
    inline void SetDefaultSessionExpiryMinutes(int value) { m_defaultSessionExpiryMinutesHasBeenSet = true; m_defaultSessionExpiryMinutes = value; }

    
    inline PutVoiceConnectorProxyRequest& WithDefaultSessionExpiryMinutes(int value) { SetDefaultSessionExpiryMinutes(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetPhoneNumberPoolCountries() const{ return m_phoneNumberPoolCountries; }

    
    inline bool PhoneNumberPoolCountriesHasBeenSet() const { return m_phoneNumberPoolCountriesHasBeenSet; }

    
    inline void SetPhoneNumberPoolCountries(const Aws::Vector<Aws::String>& value) { m_phoneNumberPoolCountriesHasBeenSet = true; m_phoneNumberPoolCountries = value; }

    
    inline void SetPhoneNumberPoolCountries(Aws::Vector<Aws::String>&& value) { m_phoneNumberPoolCountriesHasBeenSet = true; m_phoneNumberPoolCountries = std::move(value); }

    
    inline PutVoiceConnectorProxyRequest& WithPhoneNumberPoolCountries(const Aws::Vector<Aws::String>& value) { SetPhoneNumberPoolCountries(value); return *this;}

    
    inline PutVoiceConnectorProxyRequest& WithPhoneNumberPoolCountries(Aws::Vector<Aws::String>&& value) { SetPhoneNumberPoolCountries(std::move(value)); return *this;}

    
    inline PutVoiceConnectorProxyRequest& AddPhoneNumberPoolCountries(const Aws::String& value) { m_phoneNumberPoolCountriesHasBeenSet = true; m_phoneNumberPoolCountries.push_back(value); return *this; }

    
    inline PutVoiceConnectorProxyRequest& AddPhoneNumberPoolCountries(Aws::String&& value) { m_phoneNumberPoolCountriesHasBeenSet = true; m_phoneNumberPoolCountries.push_back(std::move(value)); return *this; }

    
    inline PutVoiceConnectorProxyRequest& AddPhoneNumberPoolCountries(const char* value) { m_phoneNumberPoolCountriesHasBeenSet = true; m_phoneNumberPoolCountries.push_back(value); return *this; }


    
    inline const Aws::String& GetFallBackPhoneNumber() const{ return m_fallBackPhoneNumber; }

    
    inline bool FallBackPhoneNumberHasBeenSet() const { return m_fallBackPhoneNumberHasBeenSet; }

    
    inline void SetFallBackPhoneNumber(const Aws::String& value) { m_fallBackPhoneNumberHasBeenSet = true; m_fallBackPhoneNumber = value; }

    
    inline void SetFallBackPhoneNumber(Aws::String&& value) { m_fallBackPhoneNumberHasBeenSet = true; m_fallBackPhoneNumber = std::move(value); }

    
    inline void SetFallBackPhoneNumber(const char* value) { m_fallBackPhoneNumberHasBeenSet = true; m_fallBackPhoneNumber.assign(value); }

    
    inline PutVoiceConnectorProxyRequest& WithFallBackPhoneNumber(const Aws::String& value) { SetFallBackPhoneNumber(value); return *this;}

    
    inline PutVoiceConnectorProxyRequest& WithFallBackPhoneNumber(Aws::String&& value) { SetFallBackPhoneNumber(std::move(value)); return *this;}

    
    inline PutVoiceConnectorProxyRequest& WithFallBackPhoneNumber(const char* value) { SetFallBackPhoneNumber(value); return *this;}


    
    inline bool GetDisabled() const{ return m_disabled; }

    
    inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }

    
    inline void SetDisabled(bool value) { m_disabledHasBeenSet = true; m_disabled = value; }

    
    inline PutVoiceConnectorProxyRequest& WithDisabled(bool value) { SetDisabled(value); return *this;}

  private:

    Aws::String m_voiceConnectorId;
    bool m_voiceConnectorIdHasBeenSet = false;

    int m_defaultSessionExpiryMinutes;
    bool m_defaultSessionExpiryMinutesHasBeenSet = false;

    Aws::Vector<Aws::String> m_phoneNumberPoolCountries;
    bool m_phoneNumberPoolCountriesHasBeenSet = false;

    Aws::String m_fallBackPhoneNumber;
    bool m_fallBackPhoneNumberHasBeenSet = false;

    bool m_disabled;
    bool m_disabledHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
