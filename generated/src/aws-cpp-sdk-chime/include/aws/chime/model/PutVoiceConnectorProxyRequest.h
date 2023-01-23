/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class PutVoiceConnectorProxyRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API PutVoiceConnectorProxyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutVoiceConnectorProxy"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Chime voice connector ID.</p>
     */
    inline const Aws::String& GetVoiceConnectorId() const{ return m_voiceConnectorId; }

    /**
     * <p>The Amazon Chime voice connector ID.</p>
     */
    inline bool VoiceConnectorIdHasBeenSet() const { return m_voiceConnectorIdHasBeenSet; }

    /**
     * <p>The Amazon Chime voice connector ID.</p>
     */
    inline void SetVoiceConnectorId(const Aws::String& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = value; }

    /**
     * <p>The Amazon Chime voice connector ID.</p>
     */
    inline void SetVoiceConnectorId(Aws::String&& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = std::move(value); }

    /**
     * <p>The Amazon Chime voice connector ID.</p>
     */
    inline void SetVoiceConnectorId(const char* value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId.assign(value); }

    /**
     * <p>The Amazon Chime voice connector ID.</p>
     */
    inline PutVoiceConnectorProxyRequest& WithVoiceConnectorId(const Aws::String& value) { SetVoiceConnectorId(value); return *this;}

    /**
     * <p>The Amazon Chime voice connector ID.</p>
     */
    inline PutVoiceConnectorProxyRequest& WithVoiceConnectorId(Aws::String&& value) { SetVoiceConnectorId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Chime voice connector ID.</p>
     */
    inline PutVoiceConnectorProxyRequest& WithVoiceConnectorId(const char* value) { SetVoiceConnectorId(value); return *this;}


    /**
     * <p>The default number of minutes allowed for proxy sessions.</p>
     */
    inline int GetDefaultSessionExpiryMinutes() const{ return m_defaultSessionExpiryMinutes; }

    /**
     * <p>The default number of minutes allowed for proxy sessions.</p>
     */
    inline bool DefaultSessionExpiryMinutesHasBeenSet() const { return m_defaultSessionExpiryMinutesHasBeenSet; }

    /**
     * <p>The default number of minutes allowed for proxy sessions.</p>
     */
    inline void SetDefaultSessionExpiryMinutes(int value) { m_defaultSessionExpiryMinutesHasBeenSet = true; m_defaultSessionExpiryMinutes = value; }

    /**
     * <p>The default number of minutes allowed for proxy sessions.</p>
     */
    inline PutVoiceConnectorProxyRequest& WithDefaultSessionExpiryMinutes(int value) { SetDefaultSessionExpiryMinutes(value); return *this;}


    /**
     * <p>The countries for proxy phone numbers to be selected from.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPhoneNumberPoolCountries() const{ return m_phoneNumberPoolCountries; }

    /**
     * <p>The countries for proxy phone numbers to be selected from.</p>
     */
    inline bool PhoneNumberPoolCountriesHasBeenSet() const { return m_phoneNumberPoolCountriesHasBeenSet; }

    /**
     * <p>The countries for proxy phone numbers to be selected from.</p>
     */
    inline void SetPhoneNumberPoolCountries(const Aws::Vector<Aws::String>& value) { m_phoneNumberPoolCountriesHasBeenSet = true; m_phoneNumberPoolCountries = value; }

    /**
     * <p>The countries for proxy phone numbers to be selected from.</p>
     */
    inline void SetPhoneNumberPoolCountries(Aws::Vector<Aws::String>&& value) { m_phoneNumberPoolCountriesHasBeenSet = true; m_phoneNumberPoolCountries = std::move(value); }

    /**
     * <p>The countries for proxy phone numbers to be selected from.</p>
     */
    inline PutVoiceConnectorProxyRequest& WithPhoneNumberPoolCountries(const Aws::Vector<Aws::String>& value) { SetPhoneNumberPoolCountries(value); return *this;}

    /**
     * <p>The countries for proxy phone numbers to be selected from.</p>
     */
    inline PutVoiceConnectorProxyRequest& WithPhoneNumberPoolCountries(Aws::Vector<Aws::String>&& value) { SetPhoneNumberPoolCountries(std::move(value)); return *this;}

    /**
     * <p>The countries for proxy phone numbers to be selected from.</p>
     */
    inline PutVoiceConnectorProxyRequest& AddPhoneNumberPoolCountries(const Aws::String& value) { m_phoneNumberPoolCountriesHasBeenSet = true; m_phoneNumberPoolCountries.push_back(value); return *this; }

    /**
     * <p>The countries for proxy phone numbers to be selected from.</p>
     */
    inline PutVoiceConnectorProxyRequest& AddPhoneNumberPoolCountries(Aws::String&& value) { m_phoneNumberPoolCountriesHasBeenSet = true; m_phoneNumberPoolCountries.push_back(std::move(value)); return *this; }

    /**
     * <p>The countries for proxy phone numbers to be selected from.</p>
     */
    inline PutVoiceConnectorProxyRequest& AddPhoneNumberPoolCountries(const char* value) { m_phoneNumberPoolCountriesHasBeenSet = true; m_phoneNumberPoolCountries.push_back(value); return *this; }


    /**
     * <p>The phone number to route calls to after a proxy session expires.</p>
     */
    inline const Aws::String& GetFallBackPhoneNumber() const{ return m_fallBackPhoneNumber; }

    /**
     * <p>The phone number to route calls to after a proxy session expires.</p>
     */
    inline bool FallBackPhoneNumberHasBeenSet() const { return m_fallBackPhoneNumberHasBeenSet; }

    /**
     * <p>The phone number to route calls to after a proxy session expires.</p>
     */
    inline void SetFallBackPhoneNumber(const Aws::String& value) { m_fallBackPhoneNumberHasBeenSet = true; m_fallBackPhoneNumber = value; }

    /**
     * <p>The phone number to route calls to after a proxy session expires.</p>
     */
    inline void SetFallBackPhoneNumber(Aws::String&& value) { m_fallBackPhoneNumberHasBeenSet = true; m_fallBackPhoneNumber = std::move(value); }

    /**
     * <p>The phone number to route calls to after a proxy session expires.</p>
     */
    inline void SetFallBackPhoneNumber(const char* value) { m_fallBackPhoneNumberHasBeenSet = true; m_fallBackPhoneNumber.assign(value); }

    /**
     * <p>The phone number to route calls to after a proxy session expires.</p>
     */
    inline PutVoiceConnectorProxyRequest& WithFallBackPhoneNumber(const Aws::String& value) { SetFallBackPhoneNumber(value); return *this;}

    /**
     * <p>The phone number to route calls to after a proxy session expires.</p>
     */
    inline PutVoiceConnectorProxyRequest& WithFallBackPhoneNumber(Aws::String&& value) { SetFallBackPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The phone number to route calls to after a proxy session expires.</p>
     */
    inline PutVoiceConnectorProxyRequest& WithFallBackPhoneNumber(const char* value) { SetFallBackPhoneNumber(value); return *this;}


    /**
     * <p>When true, stops proxy sessions from being created on the specified Amazon
     * Chime Voice Connector.</p>
     */
    inline bool GetDisabled() const{ return m_disabled; }

    /**
     * <p>When true, stops proxy sessions from being created on the specified Amazon
     * Chime Voice Connector.</p>
     */
    inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }

    /**
     * <p>When true, stops proxy sessions from being created on the specified Amazon
     * Chime Voice Connector.</p>
     */
    inline void SetDisabled(bool value) { m_disabledHasBeenSet = true; m_disabled = value; }

    /**
     * <p>When true, stops proxy sessions from being created on the specified Amazon
     * Chime Voice Connector.</p>
     */
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
} // namespace Chime
} // namespace Aws
