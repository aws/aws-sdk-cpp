/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>A duplicate customer profile that is to be merged into a main profile.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/FieldSourceProfileIds">AWS
   * API Reference</a></p>
   */
  class FieldSourceProfileIds
  {
  public:
    AWS_CUSTOMERPROFILES_API FieldSourceProfileIds();
    AWS_CUSTOMERPROFILES_API FieldSourceProfileIds(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API FieldSourceProfileIds& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the account number field to be merged. </p>
     */
    inline const Aws::String& GetAccountNumber() const{ return m_accountNumber; }
    inline bool AccountNumberHasBeenSet() const { return m_accountNumberHasBeenSet; }
    inline void SetAccountNumber(const Aws::String& value) { m_accountNumberHasBeenSet = true; m_accountNumber = value; }
    inline void SetAccountNumber(Aws::String&& value) { m_accountNumberHasBeenSet = true; m_accountNumber = std::move(value); }
    inline void SetAccountNumber(const char* value) { m_accountNumberHasBeenSet = true; m_accountNumber.assign(value); }
    inline FieldSourceProfileIds& WithAccountNumber(const Aws::String& value) { SetAccountNumber(value); return *this;}
    inline FieldSourceProfileIds& WithAccountNumber(Aws::String&& value) { SetAccountNumber(std::move(value)); return *this;}
    inline FieldSourceProfileIds& WithAccountNumber(const char* value) { SetAccountNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the additional information field to be merged.</p>
     */
    inline const Aws::String& GetAdditionalInformation() const{ return m_additionalInformation; }
    inline bool AdditionalInformationHasBeenSet() const { return m_additionalInformationHasBeenSet; }
    inline void SetAdditionalInformation(const Aws::String& value) { m_additionalInformationHasBeenSet = true; m_additionalInformation = value; }
    inline void SetAdditionalInformation(Aws::String&& value) { m_additionalInformationHasBeenSet = true; m_additionalInformation = std::move(value); }
    inline void SetAdditionalInformation(const char* value) { m_additionalInformationHasBeenSet = true; m_additionalInformation.assign(value); }
    inline FieldSourceProfileIds& WithAdditionalInformation(const Aws::String& value) { SetAdditionalInformation(value); return *this;}
    inline FieldSourceProfileIds& WithAdditionalInformation(Aws::String&& value) { SetAdditionalInformation(std::move(value)); return *this;}
    inline FieldSourceProfileIds& WithAdditionalInformation(const char* value) { SetAdditionalInformation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the party type field to be merged.</p>
     */
    inline const Aws::String& GetPartyType() const{ return m_partyType; }
    inline bool PartyTypeHasBeenSet() const { return m_partyTypeHasBeenSet; }
    inline void SetPartyType(const Aws::String& value) { m_partyTypeHasBeenSet = true; m_partyType = value; }
    inline void SetPartyType(Aws::String&& value) { m_partyTypeHasBeenSet = true; m_partyType = std::move(value); }
    inline void SetPartyType(const char* value) { m_partyTypeHasBeenSet = true; m_partyType.assign(value); }
    inline FieldSourceProfileIds& WithPartyType(const Aws::String& value) { SetPartyType(value); return *this;}
    inline FieldSourceProfileIds& WithPartyType(Aws::String&& value) { SetPartyType(std::move(value)); return *this;}
    inline FieldSourceProfileIds& WithPartyType(const char* value) { SetPartyType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the business name field to be merged.</p>
     */
    inline const Aws::String& GetBusinessName() const{ return m_businessName; }
    inline bool BusinessNameHasBeenSet() const { return m_businessNameHasBeenSet; }
    inline void SetBusinessName(const Aws::String& value) { m_businessNameHasBeenSet = true; m_businessName = value; }
    inline void SetBusinessName(Aws::String&& value) { m_businessNameHasBeenSet = true; m_businessName = std::move(value); }
    inline void SetBusinessName(const char* value) { m_businessNameHasBeenSet = true; m_businessName.assign(value); }
    inline FieldSourceProfileIds& WithBusinessName(const Aws::String& value) { SetBusinessName(value); return *this;}
    inline FieldSourceProfileIds& WithBusinessName(Aws::String&& value) { SetBusinessName(std::move(value)); return *this;}
    inline FieldSourceProfileIds& WithBusinessName(const char* value) { SetBusinessName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the first name field to be merged.</p>
     */
    inline const Aws::String& GetFirstName() const{ return m_firstName; }
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }
    inline void SetFirstName(const Aws::String& value) { m_firstNameHasBeenSet = true; m_firstName = value; }
    inline void SetFirstName(Aws::String&& value) { m_firstNameHasBeenSet = true; m_firstName = std::move(value); }
    inline void SetFirstName(const char* value) { m_firstNameHasBeenSet = true; m_firstName.assign(value); }
    inline FieldSourceProfileIds& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}
    inline FieldSourceProfileIds& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}
    inline FieldSourceProfileIds& WithFirstName(const char* value) { SetFirstName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the middle name field to be merged.</p>
     */
    inline const Aws::String& GetMiddleName() const{ return m_middleName; }
    inline bool MiddleNameHasBeenSet() const { return m_middleNameHasBeenSet; }
    inline void SetMiddleName(const Aws::String& value) { m_middleNameHasBeenSet = true; m_middleName = value; }
    inline void SetMiddleName(Aws::String&& value) { m_middleNameHasBeenSet = true; m_middleName = std::move(value); }
    inline void SetMiddleName(const char* value) { m_middleNameHasBeenSet = true; m_middleName.assign(value); }
    inline FieldSourceProfileIds& WithMiddleName(const Aws::String& value) { SetMiddleName(value); return *this;}
    inline FieldSourceProfileIds& WithMiddleName(Aws::String&& value) { SetMiddleName(std::move(value)); return *this;}
    inline FieldSourceProfileIds& WithMiddleName(const char* value) { SetMiddleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the last name field to be merged.</p>
     */
    inline const Aws::String& GetLastName() const{ return m_lastName; }
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }
    inline void SetLastName(const Aws::String& value) { m_lastNameHasBeenSet = true; m_lastName = value; }
    inline void SetLastName(Aws::String&& value) { m_lastNameHasBeenSet = true; m_lastName = std::move(value); }
    inline void SetLastName(const char* value) { m_lastNameHasBeenSet = true; m_lastName.assign(value); }
    inline FieldSourceProfileIds& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}
    inline FieldSourceProfileIds& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}
    inline FieldSourceProfileIds& WithLastName(const char* value) { SetLastName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the birthdate field to be merged.</p>
     */
    inline const Aws::String& GetBirthDate() const{ return m_birthDate; }
    inline bool BirthDateHasBeenSet() const { return m_birthDateHasBeenSet; }
    inline void SetBirthDate(const Aws::String& value) { m_birthDateHasBeenSet = true; m_birthDate = value; }
    inline void SetBirthDate(Aws::String&& value) { m_birthDateHasBeenSet = true; m_birthDate = std::move(value); }
    inline void SetBirthDate(const char* value) { m_birthDateHasBeenSet = true; m_birthDate.assign(value); }
    inline FieldSourceProfileIds& WithBirthDate(const Aws::String& value) { SetBirthDate(value); return *this;}
    inline FieldSourceProfileIds& WithBirthDate(Aws::String&& value) { SetBirthDate(std::move(value)); return *this;}
    inline FieldSourceProfileIds& WithBirthDate(const char* value) { SetBirthDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the gender field to be merged.</p>
     */
    inline const Aws::String& GetGender() const{ return m_gender; }
    inline bool GenderHasBeenSet() const { return m_genderHasBeenSet; }
    inline void SetGender(const Aws::String& value) { m_genderHasBeenSet = true; m_gender = value; }
    inline void SetGender(Aws::String&& value) { m_genderHasBeenSet = true; m_gender = std::move(value); }
    inline void SetGender(const char* value) { m_genderHasBeenSet = true; m_gender.assign(value); }
    inline FieldSourceProfileIds& WithGender(const Aws::String& value) { SetGender(value); return *this;}
    inline FieldSourceProfileIds& WithGender(Aws::String&& value) { SetGender(std::move(value)); return *this;}
    inline FieldSourceProfileIds& WithGender(const char* value) { SetGender(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the phone number field to be merged.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }
    inline FieldSourceProfileIds& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}
    inline FieldSourceProfileIds& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}
    inline FieldSourceProfileIds& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the mobile phone number field to be merged.</p>
     */
    inline const Aws::String& GetMobilePhoneNumber() const{ return m_mobilePhoneNumber; }
    inline bool MobilePhoneNumberHasBeenSet() const { return m_mobilePhoneNumberHasBeenSet; }
    inline void SetMobilePhoneNumber(const Aws::String& value) { m_mobilePhoneNumberHasBeenSet = true; m_mobilePhoneNumber = value; }
    inline void SetMobilePhoneNumber(Aws::String&& value) { m_mobilePhoneNumberHasBeenSet = true; m_mobilePhoneNumber = std::move(value); }
    inline void SetMobilePhoneNumber(const char* value) { m_mobilePhoneNumberHasBeenSet = true; m_mobilePhoneNumber.assign(value); }
    inline FieldSourceProfileIds& WithMobilePhoneNumber(const Aws::String& value) { SetMobilePhoneNumber(value); return *this;}
    inline FieldSourceProfileIds& WithMobilePhoneNumber(Aws::String&& value) { SetMobilePhoneNumber(std::move(value)); return *this;}
    inline FieldSourceProfileIds& WithMobilePhoneNumber(const char* value) { SetMobilePhoneNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the home phone number field to be merged.</p>
     */
    inline const Aws::String& GetHomePhoneNumber() const{ return m_homePhoneNumber; }
    inline bool HomePhoneNumberHasBeenSet() const { return m_homePhoneNumberHasBeenSet; }
    inline void SetHomePhoneNumber(const Aws::String& value) { m_homePhoneNumberHasBeenSet = true; m_homePhoneNumber = value; }
    inline void SetHomePhoneNumber(Aws::String&& value) { m_homePhoneNumberHasBeenSet = true; m_homePhoneNumber = std::move(value); }
    inline void SetHomePhoneNumber(const char* value) { m_homePhoneNumberHasBeenSet = true; m_homePhoneNumber.assign(value); }
    inline FieldSourceProfileIds& WithHomePhoneNumber(const Aws::String& value) { SetHomePhoneNumber(value); return *this;}
    inline FieldSourceProfileIds& WithHomePhoneNumber(Aws::String&& value) { SetHomePhoneNumber(std::move(value)); return *this;}
    inline FieldSourceProfileIds& WithHomePhoneNumber(const char* value) { SetHomePhoneNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the business phone number field to be merged.</p>
     */
    inline const Aws::String& GetBusinessPhoneNumber() const{ return m_businessPhoneNumber; }
    inline bool BusinessPhoneNumberHasBeenSet() const { return m_businessPhoneNumberHasBeenSet; }
    inline void SetBusinessPhoneNumber(const Aws::String& value) { m_businessPhoneNumberHasBeenSet = true; m_businessPhoneNumber = value; }
    inline void SetBusinessPhoneNumber(Aws::String&& value) { m_businessPhoneNumberHasBeenSet = true; m_businessPhoneNumber = std::move(value); }
    inline void SetBusinessPhoneNumber(const char* value) { m_businessPhoneNumberHasBeenSet = true; m_businessPhoneNumber.assign(value); }
    inline FieldSourceProfileIds& WithBusinessPhoneNumber(const Aws::String& value) { SetBusinessPhoneNumber(value); return *this;}
    inline FieldSourceProfileIds& WithBusinessPhoneNumber(Aws::String&& value) { SetBusinessPhoneNumber(std::move(value)); return *this;}
    inline FieldSourceProfileIds& WithBusinessPhoneNumber(const char* value) { SetBusinessPhoneNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the email address field to be merged.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }
    inline FieldSourceProfileIds& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}
    inline FieldSourceProfileIds& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}
    inline FieldSourceProfileIds& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the personal email address field to be merged.</p>
     */
    inline const Aws::String& GetPersonalEmailAddress() const{ return m_personalEmailAddress; }
    inline bool PersonalEmailAddressHasBeenSet() const { return m_personalEmailAddressHasBeenSet; }
    inline void SetPersonalEmailAddress(const Aws::String& value) { m_personalEmailAddressHasBeenSet = true; m_personalEmailAddress = value; }
    inline void SetPersonalEmailAddress(Aws::String&& value) { m_personalEmailAddressHasBeenSet = true; m_personalEmailAddress = std::move(value); }
    inline void SetPersonalEmailAddress(const char* value) { m_personalEmailAddressHasBeenSet = true; m_personalEmailAddress.assign(value); }
    inline FieldSourceProfileIds& WithPersonalEmailAddress(const Aws::String& value) { SetPersonalEmailAddress(value); return *this;}
    inline FieldSourceProfileIds& WithPersonalEmailAddress(Aws::String&& value) { SetPersonalEmailAddress(std::move(value)); return *this;}
    inline FieldSourceProfileIds& WithPersonalEmailAddress(const char* value) { SetPersonalEmailAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the party type field to be merged.</p>
     */
    inline const Aws::String& GetBusinessEmailAddress() const{ return m_businessEmailAddress; }
    inline bool BusinessEmailAddressHasBeenSet() const { return m_businessEmailAddressHasBeenSet; }
    inline void SetBusinessEmailAddress(const Aws::String& value) { m_businessEmailAddressHasBeenSet = true; m_businessEmailAddress = value; }
    inline void SetBusinessEmailAddress(Aws::String&& value) { m_businessEmailAddressHasBeenSet = true; m_businessEmailAddress = std::move(value); }
    inline void SetBusinessEmailAddress(const char* value) { m_businessEmailAddressHasBeenSet = true; m_businessEmailAddress.assign(value); }
    inline FieldSourceProfileIds& WithBusinessEmailAddress(const Aws::String& value) { SetBusinessEmailAddress(value); return *this;}
    inline FieldSourceProfileIds& WithBusinessEmailAddress(Aws::String&& value) { SetBusinessEmailAddress(std::move(value)); return *this;}
    inline FieldSourceProfileIds& WithBusinessEmailAddress(const char* value) { SetBusinessEmailAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the party type field to be merged.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }
    inline FieldSourceProfileIds& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}
    inline FieldSourceProfileIds& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}
    inline FieldSourceProfileIds& WithAddress(const char* value) { SetAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the shipping address field to be merged.</p>
     */
    inline const Aws::String& GetShippingAddress() const{ return m_shippingAddress; }
    inline bool ShippingAddressHasBeenSet() const { return m_shippingAddressHasBeenSet; }
    inline void SetShippingAddress(const Aws::String& value) { m_shippingAddressHasBeenSet = true; m_shippingAddress = value; }
    inline void SetShippingAddress(Aws::String&& value) { m_shippingAddressHasBeenSet = true; m_shippingAddress = std::move(value); }
    inline void SetShippingAddress(const char* value) { m_shippingAddressHasBeenSet = true; m_shippingAddress.assign(value); }
    inline FieldSourceProfileIds& WithShippingAddress(const Aws::String& value) { SetShippingAddress(value); return *this;}
    inline FieldSourceProfileIds& WithShippingAddress(Aws::String&& value) { SetShippingAddress(std::move(value)); return *this;}
    inline FieldSourceProfileIds& WithShippingAddress(const char* value) { SetShippingAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the mailing address field to be merged.</p>
     */
    inline const Aws::String& GetMailingAddress() const{ return m_mailingAddress; }
    inline bool MailingAddressHasBeenSet() const { return m_mailingAddressHasBeenSet; }
    inline void SetMailingAddress(const Aws::String& value) { m_mailingAddressHasBeenSet = true; m_mailingAddress = value; }
    inline void SetMailingAddress(Aws::String&& value) { m_mailingAddressHasBeenSet = true; m_mailingAddress = std::move(value); }
    inline void SetMailingAddress(const char* value) { m_mailingAddressHasBeenSet = true; m_mailingAddress.assign(value); }
    inline FieldSourceProfileIds& WithMailingAddress(const Aws::String& value) { SetMailingAddress(value); return *this;}
    inline FieldSourceProfileIds& WithMailingAddress(Aws::String&& value) { SetMailingAddress(std::move(value)); return *this;}
    inline FieldSourceProfileIds& WithMailingAddress(const char* value) { SetMailingAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the billing type field to be merged.</p>
     */
    inline const Aws::String& GetBillingAddress() const{ return m_billingAddress; }
    inline bool BillingAddressHasBeenSet() const { return m_billingAddressHasBeenSet; }
    inline void SetBillingAddress(const Aws::String& value) { m_billingAddressHasBeenSet = true; m_billingAddress = value; }
    inline void SetBillingAddress(Aws::String&& value) { m_billingAddressHasBeenSet = true; m_billingAddress = std::move(value); }
    inline void SetBillingAddress(const char* value) { m_billingAddressHasBeenSet = true; m_billingAddress.assign(value); }
    inline FieldSourceProfileIds& WithBillingAddress(const Aws::String& value) { SetBillingAddress(value); return *this;}
    inline FieldSourceProfileIds& WithBillingAddress(Aws::String&& value) { SetBillingAddress(std::move(value)); return *this;}
    inline FieldSourceProfileIds& WithBillingAddress(const char* value) { SetBillingAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the attributes field to be merged.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline FieldSourceProfileIds& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}
    inline FieldSourceProfileIds& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}
    inline FieldSourceProfileIds& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    inline FieldSourceProfileIds& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline FieldSourceProfileIds& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline FieldSourceProfileIds& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline FieldSourceProfileIds& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline FieldSourceProfileIds& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline FieldSourceProfileIds& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_accountNumber;
    bool m_accountNumberHasBeenSet = false;

    Aws::String m_additionalInformation;
    bool m_additionalInformationHasBeenSet = false;

    Aws::String m_partyType;
    bool m_partyTypeHasBeenSet = false;

    Aws::String m_businessName;
    bool m_businessNameHasBeenSet = false;

    Aws::String m_firstName;
    bool m_firstNameHasBeenSet = false;

    Aws::String m_middleName;
    bool m_middleNameHasBeenSet = false;

    Aws::String m_lastName;
    bool m_lastNameHasBeenSet = false;

    Aws::String m_birthDate;
    bool m_birthDateHasBeenSet = false;

    Aws::String m_gender;
    bool m_genderHasBeenSet = false;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;

    Aws::String m_mobilePhoneNumber;
    bool m_mobilePhoneNumberHasBeenSet = false;

    Aws::String m_homePhoneNumber;
    bool m_homePhoneNumberHasBeenSet = false;

    Aws::String m_businessPhoneNumber;
    bool m_businessPhoneNumberHasBeenSet = false;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    Aws::String m_personalEmailAddress;
    bool m_personalEmailAddressHasBeenSet = false;

    Aws::String m_businessEmailAddress;
    bool m_businessEmailAddressHasBeenSet = false;

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    Aws::String m_shippingAddress;
    bool m_shippingAddressHasBeenSet = false;

    Aws::String m_mailingAddress;
    bool m_mailingAddressHasBeenSet = false;

    Aws::String m_billingAddress;
    bool m_billingAddressHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
