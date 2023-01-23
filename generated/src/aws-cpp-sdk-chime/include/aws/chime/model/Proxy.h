/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>The proxy configuration for an Amazon Chime Voice Connector.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/Proxy">AWS API
   * Reference</a></p>
   */
  class Proxy
  {
  public:
    AWS_CHIME_API Proxy();
    AWS_CHIME_API Proxy(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Proxy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline Proxy& WithDefaultSessionExpiryMinutes(int value) { SetDefaultSessionExpiryMinutes(value); return *this;}


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
    inline Proxy& WithDisabled(bool value) { SetDisabled(value); return *this;}


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
    inline Proxy& WithFallBackPhoneNumber(const Aws::String& value) { SetFallBackPhoneNumber(value); return *this;}

    /**
     * <p>The phone number to route calls to after a proxy session expires.</p>
     */
    inline Proxy& WithFallBackPhoneNumber(Aws::String&& value) { SetFallBackPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The phone number to route calls to after a proxy session expires.</p>
     */
    inline Proxy& WithFallBackPhoneNumber(const char* value) { SetFallBackPhoneNumber(value); return *this;}


    /**
     * <p>The countries for proxy phone numbers to be selected from.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPhoneNumberCountries() const{ return m_phoneNumberCountries; }

    /**
     * <p>The countries for proxy phone numbers to be selected from.</p>
     */
    inline bool PhoneNumberCountriesHasBeenSet() const { return m_phoneNumberCountriesHasBeenSet; }

    /**
     * <p>The countries for proxy phone numbers to be selected from.</p>
     */
    inline void SetPhoneNumberCountries(const Aws::Vector<Aws::String>& value) { m_phoneNumberCountriesHasBeenSet = true; m_phoneNumberCountries = value; }

    /**
     * <p>The countries for proxy phone numbers to be selected from.</p>
     */
    inline void SetPhoneNumberCountries(Aws::Vector<Aws::String>&& value) { m_phoneNumberCountriesHasBeenSet = true; m_phoneNumberCountries = std::move(value); }

    /**
     * <p>The countries for proxy phone numbers to be selected from.</p>
     */
    inline Proxy& WithPhoneNumberCountries(const Aws::Vector<Aws::String>& value) { SetPhoneNumberCountries(value); return *this;}

    /**
     * <p>The countries for proxy phone numbers to be selected from.</p>
     */
    inline Proxy& WithPhoneNumberCountries(Aws::Vector<Aws::String>&& value) { SetPhoneNumberCountries(std::move(value)); return *this;}

    /**
     * <p>The countries for proxy phone numbers to be selected from.</p>
     */
    inline Proxy& AddPhoneNumberCountries(const Aws::String& value) { m_phoneNumberCountriesHasBeenSet = true; m_phoneNumberCountries.push_back(value); return *this; }

    /**
     * <p>The countries for proxy phone numbers to be selected from.</p>
     */
    inline Proxy& AddPhoneNumberCountries(Aws::String&& value) { m_phoneNumberCountriesHasBeenSet = true; m_phoneNumberCountries.push_back(std::move(value)); return *this; }

    /**
     * <p>The countries for proxy phone numbers to be selected from.</p>
     */
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
} // namespace Chime
} // namespace Aws
