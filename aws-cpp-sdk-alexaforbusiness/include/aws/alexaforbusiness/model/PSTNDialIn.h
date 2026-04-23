/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AlexaForBusiness
{
namespace Model
{

  /**
   * <p>The information for public switched telephone network (PSTN)
   * conferencing.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/PSTNDialIn">AWS
   * API Reference</a></p>
   */
  class AWS_ALEXAFORBUSINESS_API PSTNDialIn
  {
  public:
    PSTNDialIn();
    PSTNDialIn(Aws::Utils::Json::JsonView jsonValue);
    PSTNDialIn& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The zip code.</p>
     */
    inline const Aws::String& GetCountryCode() const{ return m_countryCode; }

    /**
     * <p>The zip code.</p>
     */
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }

    /**
     * <p>The zip code.</p>
     */
    inline void SetCountryCode(const Aws::String& value) { m_countryCodeHasBeenSet = true; m_countryCode = value; }

    /**
     * <p>The zip code.</p>
     */
    inline void SetCountryCode(Aws::String&& value) { m_countryCodeHasBeenSet = true; m_countryCode = std::move(value); }

    /**
     * <p>The zip code.</p>
     */
    inline void SetCountryCode(const char* value) { m_countryCodeHasBeenSet = true; m_countryCode.assign(value); }

    /**
     * <p>The zip code.</p>
     */
    inline PSTNDialIn& WithCountryCode(const Aws::String& value) { SetCountryCode(value); return *this;}

    /**
     * <p>The zip code.</p>
     */
    inline PSTNDialIn& WithCountryCode(Aws::String&& value) { SetCountryCode(std::move(value)); return *this;}

    /**
     * <p>The zip code.</p>
     */
    inline PSTNDialIn& WithCountryCode(const char* value) { SetCountryCode(value); return *this;}


    /**
     * <p>The phone number to call to join the conference.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }

    /**
     * <p>The phone number to call to join the conference.</p>
     */
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }

    /**
     * <p>The phone number to call to join the conference.</p>
     */
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }

    /**
     * <p>The phone number to call to join the conference.</p>
     */
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }

    /**
     * <p>The phone number to call to join the conference.</p>
     */
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }

    /**
     * <p>The phone number to call to join the conference.</p>
     */
    inline PSTNDialIn& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}

    /**
     * <p>The phone number to call to join the conference.</p>
     */
    inline PSTNDialIn& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The phone number to call to join the conference.</p>
     */
    inline PSTNDialIn& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}


    /**
     * <p>The delay duration before Alexa enters the conference ID with dual-tone
     * multi-frequency (DTMF). Each number on the dial pad corresponds to a DTMF tone,
     * which is how we send data over the telephone network.</p>
     */
    inline const Aws::String& GetOneClickIdDelay() const{ return m_oneClickIdDelay; }

    /**
     * <p>The delay duration before Alexa enters the conference ID with dual-tone
     * multi-frequency (DTMF). Each number on the dial pad corresponds to a DTMF tone,
     * which is how we send data over the telephone network.</p>
     */
    inline bool OneClickIdDelayHasBeenSet() const { return m_oneClickIdDelayHasBeenSet; }

    /**
     * <p>The delay duration before Alexa enters the conference ID with dual-tone
     * multi-frequency (DTMF). Each number on the dial pad corresponds to a DTMF tone,
     * which is how we send data over the telephone network.</p>
     */
    inline void SetOneClickIdDelay(const Aws::String& value) { m_oneClickIdDelayHasBeenSet = true; m_oneClickIdDelay = value; }

    /**
     * <p>The delay duration before Alexa enters the conference ID with dual-tone
     * multi-frequency (DTMF). Each number on the dial pad corresponds to a DTMF tone,
     * which is how we send data over the telephone network.</p>
     */
    inline void SetOneClickIdDelay(Aws::String&& value) { m_oneClickIdDelayHasBeenSet = true; m_oneClickIdDelay = std::move(value); }

    /**
     * <p>The delay duration before Alexa enters the conference ID with dual-tone
     * multi-frequency (DTMF). Each number on the dial pad corresponds to a DTMF tone,
     * which is how we send data over the telephone network.</p>
     */
    inline void SetOneClickIdDelay(const char* value) { m_oneClickIdDelayHasBeenSet = true; m_oneClickIdDelay.assign(value); }

    /**
     * <p>The delay duration before Alexa enters the conference ID with dual-tone
     * multi-frequency (DTMF). Each number on the dial pad corresponds to a DTMF tone,
     * which is how we send data over the telephone network.</p>
     */
    inline PSTNDialIn& WithOneClickIdDelay(const Aws::String& value) { SetOneClickIdDelay(value); return *this;}

    /**
     * <p>The delay duration before Alexa enters the conference ID with dual-tone
     * multi-frequency (DTMF). Each number on the dial pad corresponds to a DTMF tone,
     * which is how we send data over the telephone network.</p>
     */
    inline PSTNDialIn& WithOneClickIdDelay(Aws::String&& value) { SetOneClickIdDelay(std::move(value)); return *this;}

    /**
     * <p>The delay duration before Alexa enters the conference ID with dual-tone
     * multi-frequency (DTMF). Each number on the dial pad corresponds to a DTMF tone,
     * which is how we send data over the telephone network.</p>
     */
    inline PSTNDialIn& WithOneClickIdDelay(const char* value) { SetOneClickIdDelay(value); return *this;}


    /**
     * <p>The delay duration before Alexa enters the conference pin with dual-tone
     * multi-frequency (DTMF). Each number on the dial pad corresponds to a DTMF tone,
     * which is how we send data over the telephone network.</p>
     */
    inline const Aws::String& GetOneClickPinDelay() const{ return m_oneClickPinDelay; }

    /**
     * <p>The delay duration before Alexa enters the conference pin with dual-tone
     * multi-frequency (DTMF). Each number on the dial pad corresponds to a DTMF tone,
     * which is how we send data over the telephone network.</p>
     */
    inline bool OneClickPinDelayHasBeenSet() const { return m_oneClickPinDelayHasBeenSet; }

    /**
     * <p>The delay duration before Alexa enters the conference pin with dual-tone
     * multi-frequency (DTMF). Each number on the dial pad corresponds to a DTMF tone,
     * which is how we send data over the telephone network.</p>
     */
    inline void SetOneClickPinDelay(const Aws::String& value) { m_oneClickPinDelayHasBeenSet = true; m_oneClickPinDelay = value; }

    /**
     * <p>The delay duration before Alexa enters the conference pin with dual-tone
     * multi-frequency (DTMF). Each number on the dial pad corresponds to a DTMF tone,
     * which is how we send data over the telephone network.</p>
     */
    inline void SetOneClickPinDelay(Aws::String&& value) { m_oneClickPinDelayHasBeenSet = true; m_oneClickPinDelay = std::move(value); }

    /**
     * <p>The delay duration before Alexa enters the conference pin with dual-tone
     * multi-frequency (DTMF). Each number on the dial pad corresponds to a DTMF tone,
     * which is how we send data over the telephone network.</p>
     */
    inline void SetOneClickPinDelay(const char* value) { m_oneClickPinDelayHasBeenSet = true; m_oneClickPinDelay.assign(value); }

    /**
     * <p>The delay duration before Alexa enters the conference pin with dual-tone
     * multi-frequency (DTMF). Each number on the dial pad corresponds to a DTMF tone,
     * which is how we send data over the telephone network.</p>
     */
    inline PSTNDialIn& WithOneClickPinDelay(const Aws::String& value) { SetOneClickPinDelay(value); return *this;}

    /**
     * <p>The delay duration before Alexa enters the conference pin with dual-tone
     * multi-frequency (DTMF). Each number on the dial pad corresponds to a DTMF tone,
     * which is how we send data over the telephone network.</p>
     */
    inline PSTNDialIn& WithOneClickPinDelay(Aws::String&& value) { SetOneClickPinDelay(std::move(value)); return *this;}

    /**
     * <p>The delay duration before Alexa enters the conference pin with dual-tone
     * multi-frequency (DTMF). Each number on the dial pad corresponds to a DTMF tone,
     * which is how we send data over the telephone network.</p>
     */
    inline PSTNDialIn& WithOneClickPinDelay(const char* value) { SetOneClickPinDelay(value); return *this;}

  private:

    Aws::String m_countryCode;
    bool m_countryCodeHasBeenSet;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet;

    Aws::String m_oneClickIdDelay;
    bool m_oneClickIdDelayHasBeenSet;

    Aws::String m_oneClickPinDelay;
    bool m_oneClickPinDelayHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
