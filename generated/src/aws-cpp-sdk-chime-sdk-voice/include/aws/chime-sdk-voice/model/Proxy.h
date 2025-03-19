/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   * <p>The proxy configuration for an Amazon Chime SDK Voice
   * Connector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/Proxy">AWS
   * API Reference</a></p>
   */
  class Proxy
  {
  public:
    AWS_CHIMESDKVOICE_API Proxy() = default;
    AWS_CHIMESDKVOICE_API Proxy(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Proxy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The default number of minutes allowed for proxy sessions.</p>
     */
    inline int GetDefaultSessionExpiryMinutes() const { return m_defaultSessionExpiryMinutes; }
    inline bool DefaultSessionExpiryMinutesHasBeenSet() const { return m_defaultSessionExpiryMinutesHasBeenSet; }
    inline void SetDefaultSessionExpiryMinutes(int value) { m_defaultSessionExpiryMinutesHasBeenSet = true; m_defaultSessionExpiryMinutes = value; }
    inline Proxy& WithDefaultSessionExpiryMinutes(int value) { SetDefaultSessionExpiryMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When true, stops proxy sessions from being created on the specified Amazon
     * Chime SDK Voice Connector.</p>
     */
    inline bool GetDisabled() const { return m_disabled; }
    inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }
    inline void SetDisabled(bool value) { m_disabledHasBeenSet = true; m_disabled = value; }
    inline Proxy& WithDisabled(bool value) { SetDisabled(value); return *this;}
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
    Proxy& WithFallBackPhoneNumber(FallBackPhoneNumberT&& value) { SetFallBackPhoneNumber(std::forward<FallBackPhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The countries for proxy phone numbers to be selected from.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPhoneNumberCountries() const { return m_phoneNumberCountries; }
    inline bool PhoneNumberCountriesHasBeenSet() const { return m_phoneNumberCountriesHasBeenSet; }
    template<typename PhoneNumberCountriesT = Aws::Vector<Aws::String>>
    void SetPhoneNumberCountries(PhoneNumberCountriesT&& value) { m_phoneNumberCountriesHasBeenSet = true; m_phoneNumberCountries = std::forward<PhoneNumberCountriesT>(value); }
    template<typename PhoneNumberCountriesT = Aws::Vector<Aws::String>>
    Proxy& WithPhoneNumberCountries(PhoneNumberCountriesT&& value) { SetPhoneNumberCountries(std::forward<PhoneNumberCountriesT>(value)); return *this;}
    template<typename PhoneNumberCountriesT = Aws::String>
    Proxy& AddPhoneNumberCountries(PhoneNumberCountriesT&& value) { m_phoneNumberCountriesHasBeenSet = true; m_phoneNumberCountries.emplace_back(std::forward<PhoneNumberCountriesT>(value)); return *this; }
    ///@}
  private:

    int m_defaultSessionExpiryMinutes{0};
    bool m_defaultSessionExpiryMinutesHasBeenSet = false;

    bool m_disabled{false};
    bool m_disabledHasBeenSet = false;

    Aws::String m_fallBackPhoneNumber;
    bool m_fallBackPhoneNumberHasBeenSet = false;

    Aws::Vector<Aws::String> m_phoneNumberCountries;
    bool m_phoneNumberCountriesHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
