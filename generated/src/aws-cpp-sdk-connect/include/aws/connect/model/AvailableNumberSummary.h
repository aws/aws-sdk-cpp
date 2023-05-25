/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/PhoneNumberCountryCode.h>
#include <aws/connect/model/PhoneNumberType.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about available phone numbers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AvailableNumberSummary">AWS
   * API Reference</a></p>
   */
  class AvailableNumberSummary
  {
  public:
    AWS_CONNECT_API AvailableNumberSummary();
    AWS_CONNECT_API AvailableNumberSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AvailableNumberSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The phone number. Phone numbers are formatted <code>[+] [country code]
     * [subscriber number including area code]</code>.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }

    /**
     * <p>The phone number. Phone numbers are formatted <code>[+] [country code]
     * [subscriber number including area code]</code>.</p>
     */
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }

    /**
     * <p>The phone number. Phone numbers are formatted <code>[+] [country code]
     * [subscriber number including area code]</code>.</p>
     */
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }

    /**
     * <p>The phone number. Phone numbers are formatted <code>[+] [country code]
     * [subscriber number including area code]</code>.</p>
     */
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }

    /**
     * <p>The phone number. Phone numbers are formatted <code>[+] [country code]
     * [subscriber number including area code]</code>.</p>
     */
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }

    /**
     * <p>The phone number. Phone numbers are formatted <code>[+] [country code]
     * [subscriber number including area code]</code>.</p>
     */
    inline AvailableNumberSummary& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}

    /**
     * <p>The phone number. Phone numbers are formatted <code>[+] [country code]
     * [subscriber number including area code]</code>.</p>
     */
    inline AvailableNumberSummary& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The phone number. Phone numbers are formatted <code>[+] [country code]
     * [subscriber number including area code]</code>.</p>
     */
    inline AvailableNumberSummary& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}


    /**
     * <p>The ISO country code.</p>
     */
    inline const PhoneNumberCountryCode& GetPhoneNumberCountryCode() const{ return m_phoneNumberCountryCode; }

    /**
     * <p>The ISO country code.</p>
     */
    inline bool PhoneNumberCountryCodeHasBeenSet() const { return m_phoneNumberCountryCodeHasBeenSet; }

    /**
     * <p>The ISO country code.</p>
     */
    inline void SetPhoneNumberCountryCode(const PhoneNumberCountryCode& value) { m_phoneNumberCountryCodeHasBeenSet = true; m_phoneNumberCountryCode = value; }

    /**
     * <p>The ISO country code.</p>
     */
    inline void SetPhoneNumberCountryCode(PhoneNumberCountryCode&& value) { m_phoneNumberCountryCodeHasBeenSet = true; m_phoneNumberCountryCode = std::move(value); }

    /**
     * <p>The ISO country code.</p>
     */
    inline AvailableNumberSummary& WithPhoneNumberCountryCode(const PhoneNumberCountryCode& value) { SetPhoneNumberCountryCode(value); return *this;}

    /**
     * <p>The ISO country code.</p>
     */
    inline AvailableNumberSummary& WithPhoneNumberCountryCode(PhoneNumberCountryCode&& value) { SetPhoneNumberCountryCode(std::move(value)); return *this;}


    /**
     * <p>The type of phone number.</p>
     */
    inline const PhoneNumberType& GetPhoneNumberType() const{ return m_phoneNumberType; }

    /**
     * <p>The type of phone number.</p>
     */
    inline bool PhoneNumberTypeHasBeenSet() const { return m_phoneNumberTypeHasBeenSet; }

    /**
     * <p>The type of phone number.</p>
     */
    inline void SetPhoneNumberType(const PhoneNumberType& value) { m_phoneNumberTypeHasBeenSet = true; m_phoneNumberType = value; }

    /**
     * <p>The type of phone number.</p>
     */
    inline void SetPhoneNumberType(PhoneNumberType&& value) { m_phoneNumberTypeHasBeenSet = true; m_phoneNumberType = std::move(value); }

    /**
     * <p>The type of phone number.</p>
     */
    inline AvailableNumberSummary& WithPhoneNumberType(const PhoneNumberType& value) { SetPhoneNumberType(value); return *this;}

    /**
     * <p>The type of phone number.</p>
     */
    inline AvailableNumberSummary& WithPhoneNumberType(PhoneNumberType&& value) { SetPhoneNumberType(std::move(value)); return *this;}

  private:

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;

    PhoneNumberCountryCode m_phoneNumberCountryCode;
    bool m_phoneNumberCountryCodeHasBeenSet = false;

    PhoneNumberType m_phoneNumberType;
    bool m_phoneNumberTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
