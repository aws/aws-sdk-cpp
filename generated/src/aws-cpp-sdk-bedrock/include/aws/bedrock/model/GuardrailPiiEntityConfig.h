﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/GuardrailPiiEntityType.h>
#include <aws/bedrock/model/GuardrailSensitiveInformationAction.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>The PII entity to configure for the guardrail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GuardrailPiiEntityConfig">AWS
   * API Reference</a></p>
   */
  class GuardrailPiiEntityConfig
  {
  public:
    AWS_BEDROCK_API GuardrailPiiEntityConfig() = default;
    AWS_BEDROCK_API GuardrailPiiEntityConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailPiiEntityConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configure guardrail type when the PII entity is detected.</p> <p>The
     * following PIIs are used to block or mask sensitive information:</p> <ul> <li>
     * <p> <b>General</b> </p> <ul> <li> <p> <b>ADDRESS</b> </p> <p>A physical address,
     * such as "100 Main Street, Anytown, USA" or "Suite #12, Building 123". An address
     * can include information such as the street, building, location, city, state,
     * country, county, zip code, precinct, and neighborhood. </p> </li> <li> <p>
     * <b>AGE</b> </p> <p>An individual's age, including the quantity and unit of time.
     * For example, in the phrase "I am 40 years old," Guardrails recognizes "40 years"
     * as an age. </p> </li> <li> <p> <b>NAME</b> </p> <p>An individual's name. This
     * entity type does not include titles, such as Dr., Mr., Mrs., or Miss. guardrails
     * doesn't apply this entity type to names that are part of organizations or
     * addresses. For example, guardrails recognizes the "John Doe Organization" as an
     * organization, and it recognizes "Jane Doe Street" as an address. </p> </li> <li>
     * <p> <b>EMAIL</b> </p> <p>An email address, such as
     * <i>marymajor@email.com</i>.</p> </li> <li> <p> <b>PHONE</b> </p> <p>A phone
     * number. This entity type also includes fax and pager numbers. </p> </li> <li>
     * <p> <b>USERNAME</b> </p> <p>A user name that identifies an account, such as a
     * login name, screen name, nick name, or handle. </p> </li> <li> <p>
     * <b>PASSWORD</b> </p> <p>An alphanumeric string that is used as a password, such
     * as "*<i>very20special#pass*</i>". </p> </li> <li> <p> <b>DRIVER_ID</b> </p>
     * <p>The number assigned to a driver's license, which is an official document
     * permitting an individual to operate one or more motorized vehicles on a public
     * road. A driver's license number consists of alphanumeric characters. </p> </li>
     * <li> <p> <b>LICENSE_PLATE</b> </p> <p>A license plate for a vehicle is issued by
     * the state or country where the vehicle is registered. The format for passenger
     * vehicles is typically five to eight digits, consisting of upper-case letters and
     * numbers. The format varies depending on the location of the issuing state or
     * country. </p> </li> <li> <p> <b>VEHICLE_IDENTIFICATION_NUMBER</b> </p> <p>A
     * Vehicle Identification Number (VIN) uniquely identifies a vehicle. VIN content
     * and format are defined in the <i>ISO 3779</i> specification. Each country has
     * specific codes and formats for VINs. </p> </li> </ul> </li> <li> <p>
     * <b>Finance</b> </p> <ul> <li> <p> <b>CREDIT_DEBIT_CARD_CVV</b> </p> <p>A
     * three-digit card verification code (CVV) that is present on VISA, MasterCard,
     * and Discover credit and debit cards. For American Express credit or debit cards,
     * the CVV is a four-digit numeric code. </p> </li> <li> <p>
     * <b>CREDIT_DEBIT_CARD_EXPIRY</b> </p> <p>The expiration date for a credit or
     * debit card. This number is usually four digits long and is often formatted as
     * <i>month/year</i> or <i>MM/YY</i>. Guardrails recognizes expiration dates such
     * as <i>01/21</i>, <i>01/2021</i>, and <i>Jan 2021</i>. </p> </li> <li> <p>
     * <b>CREDIT_DEBIT_CARD_NUMBER</b> </p> <p>The number for a credit or debit card.
     * These numbers can vary from 13 to 16 digits in length. However, Amazon
     * Comprehend also recognizes credit or debit card numbers when only the last four
     * digits are present. </p> </li> <li> <p> <b>PIN</b> </p> <p>A four-digit personal
     * identification number (PIN) with which you can access your bank account. </p>
     * </li> <li> <p> <b>INTERNATIONAL_BANK_ACCOUNT_NUMBER</b> </p> <p>An International
     * Bank Account Number has specific formats in each country. For more information,
     * see <a href="https://www.iban.com/structure">www.iban.com/structure</a>.</p>
     * </li> <li> <p> <b>SWIFT_CODE</b> </p> <p>A SWIFT code is a standard format of
     * Bank Identifier Code (BIC) used to specify a particular bank or branch. Banks
     * use these codes for money transfers such as international wire transfers.</p>
     * <p>SWIFT codes consist of eight or 11 characters. The 11-digit codes refer to
     * specific branches, while eight-digit codes (or 11-digit codes ending in 'XXX')
     * refer to the head or primary office.</p> </li> </ul> </li> <li> <p> <b>IT</b>
     * </p> <ul> <li> <p> <b>IP_ADDRESS</b> </p> <p>An IPv4 address, such as
     * <i>198.51.100.0</i>. </p> </li> <li> <p> <b>MAC_ADDRESS</b> </p> <p>A <i>media
     * access control</i> (MAC) address is a unique identifier assigned to a network
     * interface controller (NIC). </p> </li> <li> <p> <b>URL</b> </p> <p>A web
     * address, such as <i>www.example.com</i>. </p> </li> <li> <p>
     * <b>AWS_ACCESS_KEY</b> </p> <p>A unique identifier that's associated with a
     * secret access key; you use the access key ID and secret access key to sign
     * programmatic Amazon Web Services requests cryptographically. </p> </li> <li> <p>
     * <b>AWS_SECRET_KEY</b> </p> <p>A unique identifier that's associated with an
     * access key. You use the access key ID and secret access key to sign programmatic
     * Amazon Web Services requests cryptographically. </p> </li> </ul> </li> <li> <p>
     * <b>USA specific</b> </p> <ul> <li> <p> <b>US_BANK_ACCOUNT_NUMBER</b> </p> <p>A
     * US bank account number, which is typically 10 to 12 digits long. </p> </li> <li>
     * <p> <b>US_BANK_ROUTING_NUMBER</b> </p> <p>A US bank account routing number.
     * These are typically nine digits long, </p> </li> <li> <p>
     * <b>US_INDIVIDUAL_TAX_IDENTIFICATION_NUMBER</b> </p> <p>A US Individual Taxpayer
     * Identification Number (ITIN) is a nine-digit number that starts with a "9" and
     * contain a "7" or "8" as the fourth digit. An ITIN can be formatted with a space
     * or a dash after the third and forth digits. </p> </li> <li> <p>
     * <b>US_PASSPORT_NUMBER</b> </p> <p>A US passport number. Passport numbers range
     * from six to nine alphanumeric characters. </p> </li> <li> <p>
     * <b>US_SOCIAL_SECURITY_NUMBER</b> </p> <p>A US Social Security Number (SSN) is a
     * nine-digit number that is issued to US citizens, permanent residents, and
     * temporary working residents. </p> </li> </ul> </li> <li> <p> <b>Canada
     * specific</b> </p> <ul> <li> <p> <b>CA_HEALTH_NUMBER</b> </p> <p>A Canadian
     * Health Service Number is a 10-digit unique identifier, required for individuals
     * to access healthcare benefits. </p> </li> <li> <p>
     * <b>CA_SOCIAL_INSURANCE_NUMBER</b> </p> <p>A Canadian Social Insurance Number
     * (SIN) is a nine-digit unique identifier, required for individuals to access
     * government programs and benefits.</p> <p>The SIN is formatted as three groups of
     * three digits, such as <i>123-456-789</i>. A SIN can be validated through a
     * simple check-digit process called the <a
     * href="https://www.wikipedia.org/wiki/Luhn_algorithm">Luhn algorithm</a>.</p>
     * </li> </ul> </li> <li> <p> <b>UK Specific</b> </p> <ul> <li> <p>
     * <b>UK_NATIONAL_HEALTH_SERVICE_NUMBER</b> </p> <p>A UK National Health Service
     * Number is a 10-17 digit number, such as <i>485 777 3456</i>. The current system
     * formats the 10-digit number with spaces after the third and sixth digits. The
     * final digit is an error-detecting checksum.</p> </li> <li> <p>
     * <b>UK_NATIONAL_INSURANCE_NUMBER</b> </p> <p>A UK National Insurance Number
     * (NINO) provides individuals with access to National Insurance (social security)
     * benefits. It is also used for some purposes in the UK tax system.</p> <p>The
     * number is nine digits long and starts with two letters, followed by six numbers
     * and one letter. A NINO can be formatted with a space or a dash after the two
     * letters and after the second, forth, and sixth digits.</p> </li> <li> <p>
     * <b>UK_UNIQUE_TAXPAYER_REFERENCE_NUMBER</b> </p> <p>A UK Unique Taxpayer
     * Reference (UTR) is a 10-digit number that identifies a taxpayer or a business.
     * </p> </li> </ul> </li> <li> <p> <b>Custom</b> </p> <ul> <li> <p> <b>Regex
     * filter</b> - You can use a regular expressions to define patterns for a
     * guardrail to recognize and act upon such as serial number, booking ID etc..</p>
     * </li> </ul> </li> </ul>
     */
    inline GuardrailPiiEntityType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(GuardrailPiiEntityType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GuardrailPiiEntityConfig& WithType(GuardrailPiiEntityType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configure guardrail action when the PII entity is detected.</p>
     */
    inline GuardrailSensitiveInformationAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(GuardrailSensitiveInformationAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline GuardrailPiiEntityConfig& WithAction(GuardrailSensitiveInformationAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the action to take when harmful content is detected in the input.
     * Supported values include:</p> <ul> <li> <p> <code>BLOCK</code> – Block the
     * content and replace it with blocked messaging.</p> </li> <li> <p>
     * <code>ANONYMIZE</code> – Mask the content and replace it with identifier
     * tags.</p> </li> <li> <p> <code>NONE</code> – Take no action but return detection
     * information in the trace response.</p> </li> </ul>
     */
    inline GuardrailSensitiveInformationAction GetInputAction() const { return m_inputAction; }
    inline bool InputActionHasBeenSet() const { return m_inputActionHasBeenSet; }
    inline void SetInputAction(GuardrailSensitiveInformationAction value) { m_inputActionHasBeenSet = true; m_inputAction = value; }
    inline GuardrailPiiEntityConfig& WithInputAction(GuardrailSensitiveInformationAction value) { SetInputAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the action to take when harmful content is detected in the output.
     * Supported values include:</p> <ul> <li> <p> <code>BLOCK</code> ��� Block the
     * content and replace it with blocked messaging.</p> </li> <li> <p>
     * <code>ANONYMIZE</code> – Mask the content and replace it with identifier
     * tags.</p> </li> <li> <p> <code>NONE</code> – Take no action but return detection
     * information in the trace response.</p> </li> </ul>
     */
    inline GuardrailSensitiveInformationAction GetOutputAction() const { return m_outputAction; }
    inline bool OutputActionHasBeenSet() const { return m_outputActionHasBeenSet; }
    inline void SetOutputAction(GuardrailSensitiveInformationAction value) { m_outputActionHasBeenSet = true; m_outputAction = value; }
    inline GuardrailPiiEntityConfig& WithOutputAction(GuardrailSensitiveInformationAction value) { SetOutputAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable guardrail evaluation on the input. When disabled,
     * you aren't charged for the evaluation. The evaluation doesn't appear in the
     * response.</p>
     */
    inline bool GetInputEnabled() const { return m_inputEnabled; }
    inline bool InputEnabledHasBeenSet() const { return m_inputEnabledHasBeenSet; }
    inline void SetInputEnabled(bool value) { m_inputEnabledHasBeenSet = true; m_inputEnabled = value; }
    inline GuardrailPiiEntityConfig& WithInputEnabled(bool value) { SetInputEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable guardrail evaluation on the output. When
     * disabled, you aren't charged for the evaluation. The evaluation doesn't appear
     * in the response.</p>
     */
    inline bool GetOutputEnabled() const { return m_outputEnabled; }
    inline bool OutputEnabledHasBeenSet() const { return m_outputEnabledHasBeenSet; }
    inline void SetOutputEnabled(bool value) { m_outputEnabledHasBeenSet = true; m_outputEnabled = value; }
    inline GuardrailPiiEntityConfig& WithOutputEnabled(bool value) { SetOutputEnabled(value); return *this;}
    ///@}
  private:

    GuardrailPiiEntityType m_type{GuardrailPiiEntityType::NOT_SET};
    bool m_typeHasBeenSet = false;

    GuardrailSensitiveInformationAction m_action{GuardrailSensitiveInformationAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    GuardrailSensitiveInformationAction m_inputAction{GuardrailSensitiveInformationAction::NOT_SET};
    bool m_inputActionHasBeenSet = false;

    GuardrailSensitiveInformationAction m_outputAction{GuardrailSensitiveInformationAction::NOT_SET};
    bool m_outputActionHasBeenSet = false;

    bool m_inputEnabled{false};
    bool m_inputEnabledHasBeenSet = false;

    bool m_outputEnabled{false};
    bool m_outputEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
