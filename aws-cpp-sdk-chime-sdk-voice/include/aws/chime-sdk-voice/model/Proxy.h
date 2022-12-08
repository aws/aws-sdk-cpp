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

  class Proxy
  {
  public:
    AWS_CHIMESDKVOICE_API Proxy();
    AWS_CHIMESDKVOICE_API Proxy(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Proxy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline int GetDefaultSessionExpiryMinutes() const{ return m_defaultSessionExpiryMinutes; }

    
    inline bool DefaultSessionExpiryMinutesHasBeenSet() const { return m_defaultSessionExpiryMinutesHasBeenSet; }

    
    inline void SetDefaultSessionExpiryMinutes(int value) { m_defaultSessionExpiryMinutesHasBeenSet = true; m_defaultSessionExpiryMinutes = value; }

    
    inline Proxy& WithDefaultSessionExpiryMinutes(int value) { SetDefaultSessionExpiryMinutes(value); return *this;}


    
    inline bool GetDisabled() const{ return m_disabled; }

    
    inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }

    
    inline void SetDisabled(bool value) { m_disabledHasBeenSet = true; m_disabled = value; }

    
    inline Proxy& WithDisabled(bool value) { SetDisabled(value); return *this;}


    
    inline const Aws::String& GetFallBackPhoneNumber() const{ return m_fallBackPhoneNumber; }

    
    inline bool FallBackPhoneNumberHasBeenSet() const { return m_fallBackPhoneNumberHasBeenSet; }

    
    inline void SetFallBackPhoneNumber(const Aws::String& value) { m_fallBackPhoneNumberHasBeenSet = true; m_fallBackPhoneNumber = value; }

    
    inline void SetFallBackPhoneNumber(Aws::String&& value) { m_fallBackPhoneNumberHasBeenSet = true; m_fallBackPhoneNumber = std::move(value); }

    
    inline void SetFallBackPhoneNumber(const char* value) { m_fallBackPhoneNumberHasBeenSet = true; m_fallBackPhoneNumber.assign(value); }

    
    inline Proxy& WithFallBackPhoneNumber(const Aws::String& value) { SetFallBackPhoneNumber(value); return *this;}

    
    inline Proxy& WithFallBackPhoneNumber(Aws::String&& value) { SetFallBackPhoneNumber(std::move(value)); return *this;}

    
    inline Proxy& WithFallBackPhoneNumber(const char* value) { SetFallBackPhoneNumber(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetPhoneNumberCountries() const{ return m_phoneNumberCountries; }

    
    inline bool PhoneNumberCountriesHasBeenSet() const { return m_phoneNumberCountriesHasBeenSet; }

    
    inline void SetPhoneNumberCountries(const Aws::Vector<Aws::String>& value) { m_phoneNumberCountriesHasBeenSet = true; m_phoneNumberCountries = value; }

    
    inline void SetPhoneNumberCountries(Aws::Vector<Aws::String>&& value) { m_phoneNumberCountriesHasBeenSet = true; m_phoneNumberCountries = std::move(value); }

    
    inline Proxy& WithPhoneNumberCountries(const Aws::Vector<Aws::String>& value) { SetPhoneNumberCountries(value); return *this;}

    
    inline Proxy& WithPhoneNumberCountries(Aws::Vector<Aws::String>&& value) { SetPhoneNumberCountries(std::move(value)); return *this;}

    
    inline Proxy& AddPhoneNumberCountries(const Aws::String& value) { m_phoneNumberCountriesHasBeenSet = true; m_phoneNumberCountries.push_back(value); return *this; }

    
    inline Proxy& AddPhoneNumberCountries(Aws::String&& value) { m_phoneNumberCountriesHasBeenSet = true; m_phoneNumberCountries.push_back(std::move(value)); return *this; }

    
    inline Proxy& AddPhoneNumberCountries(const char* value) { m_phoneNumberCountriesHasBeenSet = true; m_phoneNumberCountries.push_back(value); return *this; }

  private:

    int m_defaultSessionExpiryMinutes;
    bool m_defaultSessionExpiryMinutesHasBeenSet = false;

    bool m_disabled;
    bool m_disabledHasBeenSet = false;

    Aws::String m_fallBackPhoneNumber;
    bool m_fallBackPhoneNumberHasBeenSet = false;

    Aws::Vector<Aws::String> m_phoneNumberCountries;
    bool m_phoneNumberCountriesHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
