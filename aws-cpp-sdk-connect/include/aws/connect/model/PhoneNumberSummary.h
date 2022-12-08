/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/PhoneNumberType.h>
#include <aws/connect/model/PhoneNumberCountryCode.h>
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
   * <p>Contains summary information about a phone number for a contact
   * center.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/PhoneNumberSummary">AWS
   * API Reference</a></p>
   */
  class PhoneNumberSummary
  {
  public:
    AWS_CONNECT_API PhoneNumberSummary();
    AWS_CONNECT_API PhoneNumberSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API PhoneNumberSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the phone number.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the phone number.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the phone number.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the phone number.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the phone number.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the phone number.</p>
     */
    inline PhoneNumberSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the phone number.</p>
     */
    inline PhoneNumberSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the phone number.</p>
     */
    inline PhoneNumberSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the phone number.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the phone number.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the phone number.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the phone number.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the phone number.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the phone number.</p>
     */
    inline PhoneNumberSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the phone number.</p>
     */
    inline PhoneNumberSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the phone number.</p>
     */
    inline PhoneNumberSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The phone number.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }

    /**
     * <p>The phone number.</p>
     */
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }

    /**
     * <p>The phone number.</p>
     */
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }

    /**
     * <p>The phone number.</p>
     */
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }

    /**
     * <p>The phone number.</p>
     */
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }

    /**
     * <p>The phone number.</p>
     */
    inline PhoneNumberSummary& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}

    /**
     * <p>The phone number.</p>
     */
    inline PhoneNumberSummary& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The phone number.</p>
     */
    inline PhoneNumberSummary& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}


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
    inline PhoneNumberSummary& WithPhoneNumberType(const PhoneNumberType& value) { SetPhoneNumberType(value); return *this;}

    /**
     * <p>The type of phone number.</p>
     */
    inline PhoneNumberSummary& WithPhoneNumberType(PhoneNumberType&& value) { SetPhoneNumberType(std::move(value)); return *this;}


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
    inline PhoneNumberSummary& WithPhoneNumberCountryCode(const PhoneNumberCountryCode& value) { SetPhoneNumberCountryCode(value); return *this;}

    /**
     * <p>The ISO country code.</p>
     */
    inline PhoneNumberSummary& WithPhoneNumberCountryCode(PhoneNumberCountryCode&& value) { SetPhoneNumberCountryCode(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;

    PhoneNumberType m_phoneNumberType;
    bool m_phoneNumberTypeHasBeenSet = false;

    PhoneNumberCountryCode m_phoneNumberCountryCode;
    bool m_phoneNumberCountryCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
