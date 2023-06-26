/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/alexaforbusiness/model/PhoneNumber.h>
#include <aws/alexaforbusiness/model/SipAddress.h>
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
   * <p>Information related to a contact.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ContactData">AWS
   * API Reference</a></p>
   */
  class ContactData
  {
  public:
    AWS_ALEXAFORBUSINESS_API ContactData();
    AWS_ALEXAFORBUSINESS_API ContactData(Aws::Utils::Json::JsonView jsonValue);
    AWS_ALEXAFORBUSINESS_API ContactData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ALEXAFORBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the contact.</p>
     */
    inline const Aws::String& GetContactArn() const{ return m_contactArn; }

    /**
     * <p>The ARN of the contact.</p>
     */
    inline bool ContactArnHasBeenSet() const { return m_contactArnHasBeenSet; }

    /**
     * <p>The ARN of the contact.</p>
     */
    inline void SetContactArn(const Aws::String& value) { m_contactArnHasBeenSet = true; m_contactArn = value; }

    /**
     * <p>The ARN of the contact.</p>
     */
    inline void SetContactArn(Aws::String&& value) { m_contactArnHasBeenSet = true; m_contactArn = std::move(value); }

    /**
     * <p>The ARN of the contact.</p>
     */
    inline void SetContactArn(const char* value) { m_contactArnHasBeenSet = true; m_contactArn.assign(value); }

    /**
     * <p>The ARN of the contact.</p>
     */
    inline ContactData& WithContactArn(const Aws::String& value) { SetContactArn(value); return *this;}

    /**
     * <p>The ARN of the contact.</p>
     */
    inline ContactData& WithContactArn(Aws::String&& value) { SetContactArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the contact.</p>
     */
    inline ContactData& WithContactArn(const char* value) { SetContactArn(value); return *this;}


    /**
     * <p>The name of the contact to display on the console.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name of the contact to display on the console.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The name of the contact to display on the console.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The name of the contact to display on the console.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The name of the contact to display on the console.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The name of the contact to display on the console.</p>
     */
    inline ContactData& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name of the contact to display on the console.</p>
     */
    inline ContactData& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name of the contact to display on the console.</p>
     */
    inline ContactData& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The first name of the contact, used to call the contact on the device.</p>
     */
    inline const Aws::String& GetFirstName() const{ return m_firstName; }

    /**
     * <p>The first name of the contact, used to call the contact on the device.</p>
     */
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }

    /**
     * <p>The first name of the contact, used to call the contact on the device.</p>
     */
    inline void SetFirstName(const Aws::String& value) { m_firstNameHasBeenSet = true; m_firstName = value; }

    /**
     * <p>The first name of the contact, used to call the contact on the device.</p>
     */
    inline void SetFirstName(Aws::String&& value) { m_firstNameHasBeenSet = true; m_firstName = std::move(value); }

    /**
     * <p>The first name of the contact, used to call the contact on the device.</p>
     */
    inline void SetFirstName(const char* value) { m_firstNameHasBeenSet = true; m_firstName.assign(value); }

    /**
     * <p>The first name of the contact, used to call the contact on the device.</p>
     */
    inline ContactData& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}

    /**
     * <p>The first name of the contact, used to call the contact on the device.</p>
     */
    inline ContactData& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}

    /**
     * <p>The first name of the contact, used to call the contact on the device.</p>
     */
    inline ContactData& WithFirstName(const char* value) { SetFirstName(value); return *this;}


    /**
     * <p>The last name of the contact, used to call the contact on the device.</p>
     */
    inline const Aws::String& GetLastName() const{ return m_lastName; }

    /**
     * <p>The last name of the contact, used to call the contact on the device.</p>
     */
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }

    /**
     * <p>The last name of the contact, used to call the contact on the device.</p>
     */
    inline void SetLastName(const Aws::String& value) { m_lastNameHasBeenSet = true; m_lastName = value; }

    /**
     * <p>The last name of the contact, used to call the contact on the device.</p>
     */
    inline void SetLastName(Aws::String&& value) { m_lastNameHasBeenSet = true; m_lastName = std::move(value); }

    /**
     * <p>The last name of the contact, used to call the contact on the device.</p>
     */
    inline void SetLastName(const char* value) { m_lastNameHasBeenSet = true; m_lastName.assign(value); }

    /**
     * <p>The last name of the contact, used to call the contact on the device.</p>
     */
    inline ContactData& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}

    /**
     * <p>The last name of the contact, used to call the contact on the device.</p>
     */
    inline ContactData& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}

    /**
     * <p>The last name of the contact, used to call the contact on the device.</p>
     */
    inline ContactData& WithLastName(const char* value) { SetLastName(value); return *this;}


    /**
     * <p>The phone number of the contact. The phone number type defaults to WORK. You
     * can specify PhoneNumber or PhoneNumbers. We recommend that you use PhoneNumbers,
     * which lets you specify the phone number type and multiple numbers.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }

    /**
     * <p>The phone number of the contact. The phone number type defaults to WORK. You
     * can specify PhoneNumber or PhoneNumbers. We recommend that you use PhoneNumbers,
     * which lets you specify the phone number type and multiple numbers.</p>
     */
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }

    /**
     * <p>The phone number of the contact. The phone number type defaults to WORK. You
     * can specify PhoneNumber or PhoneNumbers. We recommend that you use PhoneNumbers,
     * which lets you specify the phone number type and multiple numbers.</p>
     */
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }

    /**
     * <p>The phone number of the contact. The phone number type defaults to WORK. You
     * can specify PhoneNumber or PhoneNumbers. We recommend that you use PhoneNumbers,
     * which lets you specify the phone number type and multiple numbers.</p>
     */
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }

    /**
     * <p>The phone number of the contact. The phone number type defaults to WORK. You
     * can specify PhoneNumber or PhoneNumbers. We recommend that you use PhoneNumbers,
     * which lets you specify the phone number type and multiple numbers.</p>
     */
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }

    /**
     * <p>The phone number of the contact. The phone number type defaults to WORK. You
     * can specify PhoneNumber or PhoneNumbers. We recommend that you use PhoneNumbers,
     * which lets you specify the phone number type and multiple numbers.</p>
     */
    inline ContactData& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}

    /**
     * <p>The phone number of the contact. The phone number type defaults to WORK. You
     * can specify PhoneNumber or PhoneNumbers. We recommend that you use PhoneNumbers,
     * which lets you specify the phone number type and multiple numbers.</p>
     */
    inline ContactData& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The phone number of the contact. The phone number type defaults to WORK. You
     * can specify PhoneNumber or PhoneNumbers. We recommend that you use PhoneNumbers,
     * which lets you specify the phone number type and multiple numbers.</p>
     */
    inline ContactData& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}


    /**
     * <p>The list of phone numbers for the contact.</p>
     */
    inline const Aws::Vector<PhoneNumber>& GetPhoneNumbers() const{ return m_phoneNumbers; }

    /**
     * <p>The list of phone numbers for the contact.</p>
     */
    inline bool PhoneNumbersHasBeenSet() const { return m_phoneNumbersHasBeenSet; }

    /**
     * <p>The list of phone numbers for the contact.</p>
     */
    inline void SetPhoneNumbers(const Aws::Vector<PhoneNumber>& value) { m_phoneNumbersHasBeenSet = true; m_phoneNumbers = value; }

    /**
     * <p>The list of phone numbers for the contact.</p>
     */
    inline void SetPhoneNumbers(Aws::Vector<PhoneNumber>&& value) { m_phoneNumbersHasBeenSet = true; m_phoneNumbers = std::move(value); }

    /**
     * <p>The list of phone numbers for the contact.</p>
     */
    inline ContactData& WithPhoneNumbers(const Aws::Vector<PhoneNumber>& value) { SetPhoneNumbers(value); return *this;}

    /**
     * <p>The list of phone numbers for the contact.</p>
     */
    inline ContactData& WithPhoneNumbers(Aws::Vector<PhoneNumber>&& value) { SetPhoneNumbers(std::move(value)); return *this;}

    /**
     * <p>The list of phone numbers for the contact.</p>
     */
    inline ContactData& AddPhoneNumbers(const PhoneNumber& value) { m_phoneNumbersHasBeenSet = true; m_phoneNumbers.push_back(value); return *this; }

    /**
     * <p>The list of phone numbers for the contact.</p>
     */
    inline ContactData& AddPhoneNumbers(PhoneNumber&& value) { m_phoneNumbersHasBeenSet = true; m_phoneNumbers.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of SIP addresses for the contact.</p>
     */
    inline const Aws::Vector<SipAddress>& GetSipAddresses() const{ return m_sipAddresses; }

    /**
     * <p>The list of SIP addresses for the contact.</p>
     */
    inline bool SipAddressesHasBeenSet() const { return m_sipAddressesHasBeenSet; }

    /**
     * <p>The list of SIP addresses for the contact.</p>
     */
    inline void SetSipAddresses(const Aws::Vector<SipAddress>& value) { m_sipAddressesHasBeenSet = true; m_sipAddresses = value; }

    /**
     * <p>The list of SIP addresses for the contact.</p>
     */
    inline void SetSipAddresses(Aws::Vector<SipAddress>&& value) { m_sipAddressesHasBeenSet = true; m_sipAddresses = std::move(value); }

    /**
     * <p>The list of SIP addresses for the contact.</p>
     */
    inline ContactData& WithSipAddresses(const Aws::Vector<SipAddress>& value) { SetSipAddresses(value); return *this;}

    /**
     * <p>The list of SIP addresses for the contact.</p>
     */
    inline ContactData& WithSipAddresses(Aws::Vector<SipAddress>&& value) { SetSipAddresses(std::move(value)); return *this;}

    /**
     * <p>The list of SIP addresses for the contact.</p>
     */
    inline ContactData& AddSipAddresses(const SipAddress& value) { m_sipAddressesHasBeenSet = true; m_sipAddresses.push_back(value); return *this; }

    /**
     * <p>The list of SIP addresses for the contact.</p>
     */
    inline ContactData& AddSipAddresses(SipAddress&& value) { m_sipAddressesHasBeenSet = true; m_sipAddresses.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_contactArn;
    bool m_contactArnHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_firstName;
    bool m_firstNameHasBeenSet = false;

    Aws::String m_lastName;
    bool m_lastNameHasBeenSet = false;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;

    Aws::Vector<PhoneNumber> m_phoneNumbers;
    bool m_phoneNumbersHasBeenSet = false;

    Aws::Vector<SipAddress> m_sipAddresses;
    bool m_sipAddressesHasBeenSet = false;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
