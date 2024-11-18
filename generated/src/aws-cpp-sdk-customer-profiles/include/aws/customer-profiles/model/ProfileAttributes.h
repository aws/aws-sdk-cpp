/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/ProfileDimension.h>
#include <aws/customer-profiles/model/ExtraLengthValueProfileDimension.h>
#include <aws/customer-profiles/model/DateDimension.h>
#include <aws/customer-profiles/model/AddressDimension.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/AttributeDimension.h>
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
   * <p>The object used to segment on attributes within the customer
   * profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ProfileAttributes">AWS
   * API Reference</a></p>
   */
  class ProfileAttributes
  {
  public:
    AWS_CUSTOMERPROFILES_API ProfileAttributes();
    AWS_CUSTOMERPROFILES_API ProfileAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API ProfileAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A field to describe values to segment on within account number.</p>
     */
    inline const ProfileDimension& GetAccountNumber() const{ return m_accountNumber; }
    inline bool AccountNumberHasBeenSet() const { return m_accountNumberHasBeenSet; }
    inline void SetAccountNumber(const ProfileDimension& value) { m_accountNumberHasBeenSet = true; m_accountNumber = value; }
    inline void SetAccountNumber(ProfileDimension&& value) { m_accountNumberHasBeenSet = true; m_accountNumber = std::move(value); }
    inline ProfileAttributes& WithAccountNumber(const ProfileDimension& value) { SetAccountNumber(value); return *this;}
    inline ProfileAttributes& WithAccountNumber(ProfileDimension&& value) { SetAccountNumber(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within additional information.</p>
     */
    inline const ExtraLengthValueProfileDimension& GetAdditionalInformation() const{ return m_additionalInformation; }
    inline bool AdditionalInformationHasBeenSet() const { return m_additionalInformationHasBeenSet; }
    inline void SetAdditionalInformation(const ExtraLengthValueProfileDimension& value) { m_additionalInformationHasBeenSet = true; m_additionalInformation = value; }
    inline void SetAdditionalInformation(ExtraLengthValueProfileDimension&& value) { m_additionalInformationHasBeenSet = true; m_additionalInformation = std::move(value); }
    inline ProfileAttributes& WithAdditionalInformation(const ExtraLengthValueProfileDimension& value) { SetAdditionalInformation(value); return *this;}
    inline ProfileAttributes& WithAdditionalInformation(ExtraLengthValueProfileDimension&& value) { SetAdditionalInformation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within first name.</p>
     */
    inline const ProfileDimension& GetFirstName() const{ return m_firstName; }
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }
    inline void SetFirstName(const ProfileDimension& value) { m_firstNameHasBeenSet = true; m_firstName = value; }
    inline void SetFirstName(ProfileDimension&& value) { m_firstNameHasBeenSet = true; m_firstName = std::move(value); }
    inline ProfileAttributes& WithFirstName(const ProfileDimension& value) { SetFirstName(value); return *this;}
    inline ProfileAttributes& WithFirstName(ProfileDimension&& value) { SetFirstName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within last name.</p>
     */
    inline const ProfileDimension& GetLastName() const{ return m_lastName; }
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }
    inline void SetLastName(const ProfileDimension& value) { m_lastNameHasBeenSet = true; m_lastName = value; }
    inline void SetLastName(ProfileDimension&& value) { m_lastNameHasBeenSet = true; m_lastName = std::move(value); }
    inline ProfileAttributes& WithLastName(const ProfileDimension& value) { SetLastName(value); return *this;}
    inline ProfileAttributes& WithLastName(ProfileDimension&& value) { SetLastName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within middle name.</p>
     */
    inline const ProfileDimension& GetMiddleName() const{ return m_middleName; }
    inline bool MiddleNameHasBeenSet() const { return m_middleNameHasBeenSet; }
    inline void SetMiddleName(const ProfileDimension& value) { m_middleNameHasBeenSet = true; m_middleName = value; }
    inline void SetMiddleName(ProfileDimension&& value) { m_middleNameHasBeenSet = true; m_middleName = std::move(value); }
    inline ProfileAttributes& WithMiddleName(const ProfileDimension& value) { SetMiddleName(value); return *this;}
    inline ProfileAttributes& WithMiddleName(ProfileDimension&& value) { SetMiddleName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within genderString.</p>
     */
    inline const ProfileDimension& GetGenderString() const{ return m_genderString; }
    inline bool GenderStringHasBeenSet() const { return m_genderStringHasBeenSet; }
    inline void SetGenderString(const ProfileDimension& value) { m_genderStringHasBeenSet = true; m_genderString = value; }
    inline void SetGenderString(ProfileDimension&& value) { m_genderStringHasBeenSet = true; m_genderString = std::move(value); }
    inline ProfileAttributes& WithGenderString(const ProfileDimension& value) { SetGenderString(value); return *this;}
    inline ProfileAttributes& WithGenderString(ProfileDimension&& value) { SetGenderString(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within partyTypeString.</p>
     */
    inline const ProfileDimension& GetPartyTypeString() const{ return m_partyTypeString; }
    inline bool PartyTypeStringHasBeenSet() const { return m_partyTypeStringHasBeenSet; }
    inline void SetPartyTypeString(const ProfileDimension& value) { m_partyTypeStringHasBeenSet = true; m_partyTypeString = value; }
    inline void SetPartyTypeString(ProfileDimension&& value) { m_partyTypeStringHasBeenSet = true; m_partyTypeString = std::move(value); }
    inline ProfileAttributes& WithPartyTypeString(const ProfileDimension& value) { SetPartyTypeString(value); return *this;}
    inline ProfileAttributes& WithPartyTypeString(ProfileDimension&& value) { SetPartyTypeString(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within birthDate.</p>
     */
    inline const DateDimension& GetBirthDate() const{ return m_birthDate; }
    inline bool BirthDateHasBeenSet() const { return m_birthDateHasBeenSet; }
    inline void SetBirthDate(const DateDimension& value) { m_birthDateHasBeenSet = true; m_birthDate = value; }
    inline void SetBirthDate(DateDimension&& value) { m_birthDateHasBeenSet = true; m_birthDate = std::move(value); }
    inline ProfileAttributes& WithBirthDate(const DateDimension& value) { SetBirthDate(value); return *this;}
    inline ProfileAttributes& WithBirthDate(DateDimension&& value) { SetBirthDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within phone number.</p>
     */
    inline const ProfileDimension& GetPhoneNumber() const{ return m_phoneNumber; }
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
    inline void SetPhoneNumber(const ProfileDimension& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }
    inline void SetPhoneNumber(ProfileDimension&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }
    inline ProfileAttributes& WithPhoneNumber(const ProfileDimension& value) { SetPhoneNumber(value); return *this;}
    inline ProfileAttributes& WithPhoneNumber(ProfileDimension&& value) { SetPhoneNumber(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within business name.</p>
     */
    inline const ProfileDimension& GetBusinessName() const{ return m_businessName; }
    inline bool BusinessNameHasBeenSet() const { return m_businessNameHasBeenSet; }
    inline void SetBusinessName(const ProfileDimension& value) { m_businessNameHasBeenSet = true; m_businessName = value; }
    inline void SetBusinessName(ProfileDimension&& value) { m_businessNameHasBeenSet = true; m_businessName = std::move(value); }
    inline ProfileAttributes& WithBusinessName(const ProfileDimension& value) { SetBusinessName(value); return *this;}
    inline ProfileAttributes& WithBusinessName(ProfileDimension&& value) { SetBusinessName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within business phone number.</p>
     */
    inline const ProfileDimension& GetBusinessPhoneNumber() const{ return m_businessPhoneNumber; }
    inline bool BusinessPhoneNumberHasBeenSet() const { return m_businessPhoneNumberHasBeenSet; }
    inline void SetBusinessPhoneNumber(const ProfileDimension& value) { m_businessPhoneNumberHasBeenSet = true; m_businessPhoneNumber = value; }
    inline void SetBusinessPhoneNumber(ProfileDimension&& value) { m_businessPhoneNumberHasBeenSet = true; m_businessPhoneNumber = std::move(value); }
    inline ProfileAttributes& WithBusinessPhoneNumber(const ProfileDimension& value) { SetBusinessPhoneNumber(value); return *this;}
    inline ProfileAttributes& WithBusinessPhoneNumber(ProfileDimension&& value) { SetBusinessPhoneNumber(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within home phone number.</p>
     */
    inline const ProfileDimension& GetHomePhoneNumber() const{ return m_homePhoneNumber; }
    inline bool HomePhoneNumberHasBeenSet() const { return m_homePhoneNumberHasBeenSet; }
    inline void SetHomePhoneNumber(const ProfileDimension& value) { m_homePhoneNumberHasBeenSet = true; m_homePhoneNumber = value; }
    inline void SetHomePhoneNumber(ProfileDimension&& value) { m_homePhoneNumberHasBeenSet = true; m_homePhoneNumber = std::move(value); }
    inline ProfileAttributes& WithHomePhoneNumber(const ProfileDimension& value) { SetHomePhoneNumber(value); return *this;}
    inline ProfileAttributes& WithHomePhoneNumber(ProfileDimension&& value) { SetHomePhoneNumber(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within mobile phone number.</p>
     */
    inline const ProfileDimension& GetMobilePhoneNumber() const{ return m_mobilePhoneNumber; }
    inline bool MobilePhoneNumberHasBeenSet() const { return m_mobilePhoneNumberHasBeenSet; }
    inline void SetMobilePhoneNumber(const ProfileDimension& value) { m_mobilePhoneNumberHasBeenSet = true; m_mobilePhoneNumber = value; }
    inline void SetMobilePhoneNumber(ProfileDimension&& value) { m_mobilePhoneNumberHasBeenSet = true; m_mobilePhoneNumber = std::move(value); }
    inline ProfileAttributes& WithMobilePhoneNumber(const ProfileDimension& value) { SetMobilePhoneNumber(value); return *this;}
    inline ProfileAttributes& WithMobilePhoneNumber(ProfileDimension&& value) { SetMobilePhoneNumber(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within email address.</p>
     */
    inline const ProfileDimension& GetEmailAddress() const{ return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    inline void SetEmailAddress(const ProfileDimension& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }
    inline void SetEmailAddress(ProfileDimension&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }
    inline ProfileAttributes& WithEmailAddress(const ProfileDimension& value) { SetEmailAddress(value); return *this;}
    inline ProfileAttributes& WithEmailAddress(ProfileDimension&& value) { SetEmailAddress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within personal email address.</p>
     */
    inline const ProfileDimension& GetPersonalEmailAddress() const{ return m_personalEmailAddress; }
    inline bool PersonalEmailAddressHasBeenSet() const { return m_personalEmailAddressHasBeenSet; }
    inline void SetPersonalEmailAddress(const ProfileDimension& value) { m_personalEmailAddressHasBeenSet = true; m_personalEmailAddress = value; }
    inline void SetPersonalEmailAddress(ProfileDimension&& value) { m_personalEmailAddressHasBeenSet = true; m_personalEmailAddress = std::move(value); }
    inline ProfileAttributes& WithPersonalEmailAddress(const ProfileDimension& value) { SetPersonalEmailAddress(value); return *this;}
    inline ProfileAttributes& WithPersonalEmailAddress(ProfileDimension&& value) { SetPersonalEmailAddress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within business email address.</p>
     */
    inline const ProfileDimension& GetBusinessEmailAddress() const{ return m_businessEmailAddress; }
    inline bool BusinessEmailAddressHasBeenSet() const { return m_businessEmailAddressHasBeenSet; }
    inline void SetBusinessEmailAddress(const ProfileDimension& value) { m_businessEmailAddressHasBeenSet = true; m_businessEmailAddress = value; }
    inline void SetBusinessEmailAddress(ProfileDimension&& value) { m_businessEmailAddressHasBeenSet = true; m_businessEmailAddress = std::move(value); }
    inline ProfileAttributes& WithBusinessEmailAddress(const ProfileDimension& value) { SetBusinessEmailAddress(value); return *this;}
    inline ProfileAttributes& WithBusinessEmailAddress(ProfileDimension&& value) { SetBusinessEmailAddress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within address.</p>
     */
    inline const AddressDimension& GetAddress() const{ return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    inline void SetAddress(const AddressDimension& value) { m_addressHasBeenSet = true; m_address = value; }
    inline void SetAddress(AddressDimension&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }
    inline ProfileAttributes& WithAddress(const AddressDimension& value) { SetAddress(value); return *this;}
    inline ProfileAttributes& WithAddress(AddressDimension&& value) { SetAddress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within shipping address.</p>
     */
    inline const AddressDimension& GetShippingAddress() const{ return m_shippingAddress; }
    inline bool ShippingAddressHasBeenSet() const { return m_shippingAddressHasBeenSet; }
    inline void SetShippingAddress(const AddressDimension& value) { m_shippingAddressHasBeenSet = true; m_shippingAddress = value; }
    inline void SetShippingAddress(AddressDimension&& value) { m_shippingAddressHasBeenSet = true; m_shippingAddress = std::move(value); }
    inline ProfileAttributes& WithShippingAddress(const AddressDimension& value) { SetShippingAddress(value); return *this;}
    inline ProfileAttributes& WithShippingAddress(AddressDimension&& value) { SetShippingAddress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within mailing address.</p>
     */
    inline const AddressDimension& GetMailingAddress() const{ return m_mailingAddress; }
    inline bool MailingAddressHasBeenSet() const { return m_mailingAddressHasBeenSet; }
    inline void SetMailingAddress(const AddressDimension& value) { m_mailingAddressHasBeenSet = true; m_mailingAddress = value; }
    inline void SetMailingAddress(AddressDimension&& value) { m_mailingAddressHasBeenSet = true; m_mailingAddress = std::move(value); }
    inline ProfileAttributes& WithMailingAddress(const AddressDimension& value) { SetMailingAddress(value); return *this;}
    inline ProfileAttributes& WithMailingAddress(AddressDimension&& value) { SetMailingAddress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within billing address.</p>
     */
    inline const AddressDimension& GetBillingAddress() const{ return m_billingAddress; }
    inline bool BillingAddressHasBeenSet() const { return m_billingAddressHasBeenSet; }
    inline void SetBillingAddress(const AddressDimension& value) { m_billingAddressHasBeenSet = true; m_billingAddress = value; }
    inline void SetBillingAddress(AddressDimension&& value) { m_billingAddressHasBeenSet = true; m_billingAddress = std::move(value); }
    inline ProfileAttributes& WithBillingAddress(const AddressDimension& value) { SetBillingAddress(value); return *this;}
    inline ProfileAttributes& WithBillingAddress(AddressDimension&& value) { SetBillingAddress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within attributes.</p>
     */
    inline const Aws::Map<Aws::String, AttributeDimension>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Map<Aws::String, AttributeDimension>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, AttributeDimension>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline ProfileAttributes& WithAttributes(const Aws::Map<Aws::String, AttributeDimension>& value) { SetAttributes(value); return *this;}
    inline ProfileAttributes& WithAttributes(Aws::Map<Aws::String, AttributeDimension>&& value) { SetAttributes(std::move(value)); return *this;}
    inline ProfileAttributes& AddAttributes(const Aws::String& key, const AttributeDimension& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    inline ProfileAttributes& AddAttributes(Aws::String&& key, const AttributeDimension& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline ProfileAttributes& AddAttributes(const Aws::String& key, AttributeDimension&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline ProfileAttributes& AddAttributes(Aws::String&& key, AttributeDimension&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline ProfileAttributes& AddAttributes(const char* key, AttributeDimension&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline ProfileAttributes& AddAttributes(const char* key, const AttributeDimension& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    ///@}
  private:

    ProfileDimension m_accountNumber;
    bool m_accountNumberHasBeenSet = false;

    ExtraLengthValueProfileDimension m_additionalInformation;
    bool m_additionalInformationHasBeenSet = false;

    ProfileDimension m_firstName;
    bool m_firstNameHasBeenSet = false;

    ProfileDimension m_lastName;
    bool m_lastNameHasBeenSet = false;

    ProfileDimension m_middleName;
    bool m_middleNameHasBeenSet = false;

    ProfileDimension m_genderString;
    bool m_genderStringHasBeenSet = false;

    ProfileDimension m_partyTypeString;
    bool m_partyTypeStringHasBeenSet = false;

    DateDimension m_birthDate;
    bool m_birthDateHasBeenSet = false;

    ProfileDimension m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;

    ProfileDimension m_businessName;
    bool m_businessNameHasBeenSet = false;

    ProfileDimension m_businessPhoneNumber;
    bool m_businessPhoneNumberHasBeenSet = false;

    ProfileDimension m_homePhoneNumber;
    bool m_homePhoneNumberHasBeenSet = false;

    ProfileDimension m_mobilePhoneNumber;
    bool m_mobilePhoneNumberHasBeenSet = false;

    ProfileDimension m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    ProfileDimension m_personalEmailAddress;
    bool m_personalEmailAddressHasBeenSet = false;

    ProfileDimension m_businessEmailAddress;
    bool m_businessEmailAddressHasBeenSet = false;

    AddressDimension m_address;
    bool m_addressHasBeenSet = false;

    AddressDimension m_shippingAddress;
    bool m_shippingAddressHasBeenSet = false;

    AddressDimension m_mailingAddress;
    bool m_mailingAddressHasBeenSet = false;

    AddressDimension m_billingAddress;
    bool m_billingAddressHasBeenSet = false;

    Aws::Map<Aws::String, AttributeDimension> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
