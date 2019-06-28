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
#include <aws/alexaforbusiness/AlexaForBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/alexaforbusiness/model/PhoneNumber.h>
#include <aws/alexaforbusiness/model/SipAddress.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

  /**
   */
  class AWS_ALEXAFORBUSINESS_API CreateContactRequest : public AlexaForBusinessRequest
  {
  public:
    CreateContactRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateContact"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline CreateContactRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name of the contact to display on the console.</p>
     */
    inline CreateContactRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name of the contact to display on the console.</p>
     */
    inline CreateContactRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The first name of the contact that is used to call the contact on the
     * device.</p>
     */
    inline const Aws::String& GetFirstName() const{ return m_firstName; }

    /**
     * <p>The first name of the contact that is used to call the contact on the
     * device.</p>
     */
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }

    /**
     * <p>The first name of the contact that is used to call the contact on the
     * device.</p>
     */
    inline void SetFirstName(const Aws::String& value) { m_firstNameHasBeenSet = true; m_firstName = value; }

    /**
     * <p>The first name of the contact that is used to call the contact on the
     * device.</p>
     */
    inline void SetFirstName(Aws::String&& value) { m_firstNameHasBeenSet = true; m_firstName = std::move(value); }

    /**
     * <p>The first name of the contact that is used to call the contact on the
     * device.</p>
     */
    inline void SetFirstName(const char* value) { m_firstNameHasBeenSet = true; m_firstName.assign(value); }

    /**
     * <p>The first name of the contact that is used to call the contact on the
     * device.</p>
     */
    inline CreateContactRequest& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}

    /**
     * <p>The first name of the contact that is used to call the contact on the
     * device.</p>
     */
    inline CreateContactRequest& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}

    /**
     * <p>The first name of the contact that is used to call the contact on the
     * device.</p>
     */
    inline CreateContactRequest& WithFirstName(const char* value) { SetFirstName(value); return *this;}


    /**
     * <p>The last name of the contact that is used to call the contact on the
     * device.</p>
     */
    inline const Aws::String& GetLastName() const{ return m_lastName; }

    /**
     * <p>The last name of the contact that is used to call the contact on the
     * device.</p>
     */
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }

    /**
     * <p>The last name of the contact that is used to call the contact on the
     * device.</p>
     */
    inline void SetLastName(const Aws::String& value) { m_lastNameHasBeenSet = true; m_lastName = value; }

    /**
     * <p>The last name of the contact that is used to call the contact on the
     * device.</p>
     */
    inline void SetLastName(Aws::String&& value) { m_lastNameHasBeenSet = true; m_lastName = std::move(value); }

    /**
     * <p>The last name of the contact that is used to call the contact on the
     * device.</p>
     */
    inline void SetLastName(const char* value) { m_lastNameHasBeenSet = true; m_lastName.assign(value); }

    /**
     * <p>The last name of the contact that is used to call the contact on the
     * device.</p>
     */
    inline CreateContactRequest& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}

    /**
     * <p>The last name of the contact that is used to call the contact on the
     * device.</p>
     */
    inline CreateContactRequest& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}

    /**
     * <p>The last name of the contact that is used to call the contact on the
     * device.</p>
     */
    inline CreateContactRequest& WithLastName(const char* value) { SetLastName(value); return *this;}


    /**
     * <p>The phone number of the contact in E.164 format. The phone number type
     * defaults to WORK. You can specify PhoneNumber or PhoneNumbers. We recommend that
     * you use PhoneNumbers, which lets you specify the phone number type and multiple
     * numbers.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }

    /**
     * <p>The phone number of the contact in E.164 format. The phone number type
     * defaults to WORK. You can specify PhoneNumber or PhoneNumbers. We recommend that
     * you use PhoneNumbers, which lets you specify the phone number type and multiple
     * numbers.</p>
     */
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }

    /**
     * <p>The phone number of the contact in E.164 format. The phone number type
     * defaults to WORK. You can specify PhoneNumber or PhoneNumbers. We recommend that
     * you use PhoneNumbers, which lets you specify the phone number type and multiple
     * numbers.</p>
     */
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }

    /**
     * <p>The phone number of the contact in E.164 format. The phone number type
     * defaults to WORK. You can specify PhoneNumber or PhoneNumbers. We recommend that
     * you use PhoneNumbers, which lets you specify the phone number type and multiple
     * numbers.</p>
     */
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }

    /**
     * <p>The phone number of the contact in E.164 format. The phone number type
     * defaults to WORK. You can specify PhoneNumber or PhoneNumbers. We recommend that
     * you use PhoneNumbers, which lets you specify the phone number type and multiple
     * numbers.</p>
     */
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }

    /**
     * <p>The phone number of the contact in E.164 format. The phone number type
     * defaults to WORK. You can specify PhoneNumber or PhoneNumbers. We recommend that
     * you use PhoneNumbers, which lets you specify the phone number type and multiple
     * numbers.</p>
     */
    inline CreateContactRequest& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}

    /**
     * <p>The phone number of the contact in E.164 format. The phone number type
     * defaults to WORK. You can specify PhoneNumber or PhoneNumbers. We recommend that
     * you use PhoneNumbers, which lets you specify the phone number type and multiple
     * numbers.</p>
     */
    inline CreateContactRequest& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The phone number of the contact in E.164 format. The phone number type
     * defaults to WORK. You can specify PhoneNumber or PhoneNumbers. We recommend that
     * you use PhoneNumbers, which lets you specify the phone number type and multiple
     * numbers.</p>
     */
    inline CreateContactRequest& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}


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
    inline CreateContactRequest& WithPhoneNumbers(const Aws::Vector<PhoneNumber>& value) { SetPhoneNumbers(value); return *this;}

    /**
     * <p>The list of phone numbers for the contact.</p>
     */
    inline CreateContactRequest& WithPhoneNumbers(Aws::Vector<PhoneNumber>&& value) { SetPhoneNumbers(std::move(value)); return *this;}

    /**
     * <p>The list of phone numbers for the contact.</p>
     */
    inline CreateContactRequest& AddPhoneNumbers(const PhoneNumber& value) { m_phoneNumbersHasBeenSet = true; m_phoneNumbers.push_back(value); return *this; }

    /**
     * <p>The list of phone numbers for the contact.</p>
     */
    inline CreateContactRequest& AddPhoneNumbers(PhoneNumber&& value) { m_phoneNumbersHasBeenSet = true; m_phoneNumbers.push_back(std::move(value)); return *this; }


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
    inline CreateContactRequest& WithSipAddresses(const Aws::Vector<SipAddress>& value) { SetSipAddresses(value); return *this;}

    /**
     * <p>The list of SIP addresses for the contact.</p>
     */
    inline CreateContactRequest& WithSipAddresses(Aws::Vector<SipAddress>&& value) { SetSipAddresses(std::move(value)); return *this;}

    /**
     * <p>The list of SIP addresses for the contact.</p>
     */
    inline CreateContactRequest& AddSipAddresses(const SipAddress& value) { m_sipAddressesHasBeenSet = true; m_sipAddresses.push_back(value); return *this; }

    /**
     * <p>The list of SIP addresses for the contact.</p>
     */
    inline CreateContactRequest& AddSipAddresses(SipAddress&& value) { m_sipAddressesHasBeenSet = true; m_sipAddresses.push_back(std::move(value)); return *this; }


    /**
     * <p>A unique, user-specified identifier for this request that ensures
     * idempotency.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique, user-specified identifier for this request that ensures
     * idempotency.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique, user-specified identifier for this request that ensures
     * idempotency.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique, user-specified identifier for this request that ensures
     * idempotency.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique, user-specified identifier for this request that ensures
     * idempotency.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique, user-specified identifier for this request that ensures
     * idempotency.</p>
     */
    inline CreateContactRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique, user-specified identifier for this request that ensures
     * idempotency.</p>
     */
    inline CreateContactRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique, user-specified identifier for this request that ensures
     * idempotency.</p>
     */
    inline CreateContactRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet;

    Aws::String m_firstName;
    bool m_firstNameHasBeenSet;

    Aws::String m_lastName;
    bool m_lastNameHasBeenSet;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet;

    Aws::Vector<PhoneNumber> m_phoneNumbers;
    bool m_phoneNumbersHasBeenSet;

    Aws::Vector<SipAddress> m_sipAddresses;
    bool m_sipAddressesHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
