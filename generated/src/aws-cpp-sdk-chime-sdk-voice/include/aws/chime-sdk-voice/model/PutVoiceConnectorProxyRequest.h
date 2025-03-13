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
    AWS_CHIMESDKVOICE_API PutVoiceConnectorProxyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutVoiceConnectorProxy"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Voice Connector ID.</p>
     */
    inline const Aws::String& GetVoiceConnectorId() const { return m_voiceConnectorId; }
    inline bool VoiceConnectorIdHasBeenSet() const { return m_voiceConnectorIdHasBeenSet; }
    template<typename VoiceConnectorIdT = Aws::String>
    void SetVoiceConnectorId(VoiceConnectorIdT&& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = std::forward<VoiceConnectorIdT>(value); }
    template<typename VoiceConnectorIdT = Aws::String>
    PutVoiceConnectorProxyRequest& WithVoiceConnectorId(VoiceConnectorIdT&& value) { SetVoiceConnectorId(std::forward<VoiceConnectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default number of minutes allowed for proxy session.</p>
     */
    inline int GetDefaultSessionExpiryMinutes() const { return m_defaultSessionExpiryMinutes; }
    inline bool DefaultSessionExpiryMinutesHasBeenSet() const { return m_defaultSessionExpiryMinutesHasBeenSet; }
    inline void SetDefaultSessionExpiryMinutes(int value) { m_defaultSessionExpiryMinutesHasBeenSet = true; m_defaultSessionExpiryMinutes = value; }
    inline PutVoiceConnectorProxyRequest& WithDefaultSessionExpiryMinutes(int value) { SetDefaultSessionExpiryMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The countries for proxy phone numbers to be selected from.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPhoneNumberPoolCountries() const { return m_phoneNumberPoolCountries; }
    inline bool PhoneNumberPoolCountriesHasBeenSet() const { return m_phoneNumberPoolCountriesHasBeenSet; }
    template<typename PhoneNumberPoolCountriesT = Aws::Vector<Aws::String>>
    void SetPhoneNumberPoolCountries(PhoneNumberPoolCountriesT&& value) { m_phoneNumberPoolCountriesHasBeenSet = true; m_phoneNumberPoolCountries = std::forward<PhoneNumberPoolCountriesT>(value); }
    template<typename PhoneNumberPoolCountriesT = Aws::Vector<Aws::String>>
    PutVoiceConnectorProxyRequest& WithPhoneNumberPoolCountries(PhoneNumberPoolCountriesT&& value) { SetPhoneNumberPoolCountries(std::forward<PhoneNumberPoolCountriesT>(value)); return *this;}
    template<typename PhoneNumberPoolCountriesT = Aws::String>
    PutVoiceConnectorProxyRequest& AddPhoneNumberPoolCountries(PhoneNumberPoolCountriesT&& value) { m_phoneNumberPoolCountriesHasBeenSet = true; m_phoneNumberPoolCountries.emplace_back(std::forward<PhoneNumberPoolCountriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The phone number to route calls to after a proxy session expires.</p>
     */
    inline const Aws::String& GetFallBackPhoneNumber() const { return m_fallBackPhoneNumber; }
    inline bool FallBackPhoneNumberHasBeenSet() const { return m_fallBackPhoneNumberHasBeenSet; }
    template<typename FallBackPhoneNumberT = Aws::String>
    void SetFallBackPhoneNumber(FallBackPhoneNumberT&& value) { m_fallBackPhoneNumberHasBeenSet = true; m_fallBackPhoneNumber = std::forward<FallBackPhoneNumberT>(value); }
    template<typename FallBackPhoneNumberT = Aws::String>
    PutVoiceConnectorProxyRequest& WithFallBackPhoneNumber(FallBackPhoneNumberT&& value) { SetFallBackPhoneNumber(std::forward<FallBackPhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When true, stops proxy sessions from being created on the specified Amazon
     * Chime SDK Voice Connector.</p>
     */
    inline bool GetDisabled() const { return m_disabled; }
    inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }
    inline void SetDisabled(bool value) { m_disabledHasBeenSet = true; m_disabled = value; }
    inline PutVoiceConnectorProxyRequest& WithDisabled(bool value) { SetDisabled(value); return *this;}
    ///@}
  private:

    Aws::String m_voiceConnectorId;
    bool m_voiceConnectorIdHasBeenSet = false;

    int m_defaultSessionExpiryMinutes{0};
    bool m_defaultSessionExpiryMinutesHasBeenSet = false;

    Aws::Vector<Aws::String> m_phoneNumberPoolCountries;
    bool m_phoneNumberPoolCountriesHasBeenSet = false;

    Aws::String m_fallBackPhoneNumber;
    bool m_fallBackPhoneNumberHasBeenSet = false;

    bool m_disabled{false};
    bool m_disabledHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
