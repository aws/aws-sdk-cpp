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
#include <aws/customer-profiles/model/ProfileTypeDimension.h>
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
    AWS_CUSTOMERPROFILES_API ProfileAttributes() = default;
    AWS_CUSTOMERPROFILES_API ProfileAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API ProfileAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A field to describe values to segment on within account number.</p>
     */
    inline const ProfileDimension& GetAccountNumber() const { return m_accountNumber; }
    inline bool AccountNumberHasBeenSet() const { return m_accountNumberHasBeenSet; }
    template<typename AccountNumberT = ProfileDimension>
    void SetAccountNumber(AccountNumberT&& value) { m_accountNumberHasBeenSet = true; m_accountNumber = std::forward<AccountNumberT>(value); }
    template<typename AccountNumberT = ProfileDimension>
    ProfileAttributes& WithAccountNumber(AccountNumberT&& value) { SetAccountNumber(std::forward<AccountNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within additional information.</p>
     */
    inline const ExtraLengthValueProfileDimension& GetAdditionalInformation() const { return m_additionalInformation; }
    inline bool AdditionalInformationHasBeenSet() const { return m_additionalInformationHasBeenSet; }
    template<typename AdditionalInformationT = ExtraLengthValueProfileDimension>
    void SetAdditionalInformation(AdditionalInformationT&& value) { m_additionalInformationHasBeenSet = true; m_additionalInformation = std::forward<AdditionalInformationT>(value); }
    template<typename AdditionalInformationT = ExtraLengthValueProfileDimension>
    ProfileAttributes& WithAdditionalInformation(AdditionalInformationT&& value) { SetAdditionalInformation(std::forward<AdditionalInformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within first name.</p>
     */
    inline const ProfileDimension& GetFirstName() const { return m_firstName; }
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }
    template<typename FirstNameT = ProfileDimension>
    void SetFirstName(FirstNameT&& value) { m_firstNameHasBeenSet = true; m_firstName = std::forward<FirstNameT>(value); }
    template<typename FirstNameT = ProfileDimension>
    ProfileAttributes& WithFirstName(FirstNameT&& value) { SetFirstName(std::forward<FirstNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within last name.</p>
     */
    inline const ProfileDimension& GetLastName() const { return m_lastName; }
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }
    template<typename LastNameT = ProfileDimension>
    void SetLastName(LastNameT&& value) { m_lastNameHasBeenSet = true; m_lastName = std::forward<LastNameT>(value); }
    template<typename LastNameT = ProfileDimension>
    ProfileAttributes& WithLastName(LastNameT&& value) { SetLastName(std::forward<LastNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within middle name.</p>
     */
    inline const ProfileDimension& GetMiddleName() const { return m_middleName; }
    inline bool MiddleNameHasBeenSet() const { return m_middleNameHasBeenSet; }
    template<typename MiddleNameT = ProfileDimension>
    void SetMiddleName(MiddleNameT&& value) { m_middleNameHasBeenSet = true; m_middleName = std::forward<MiddleNameT>(value); }
    template<typename MiddleNameT = ProfileDimension>
    ProfileAttributes& WithMiddleName(MiddleNameT&& value) { SetMiddleName(std::forward<MiddleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within genderString.</p>
     */
    inline const ProfileDimension& GetGenderString() const { return m_genderString; }
    inline bool GenderStringHasBeenSet() const { return m_genderStringHasBeenSet; }
    template<typename GenderStringT = ProfileDimension>
    void SetGenderString(GenderStringT&& value) { m_genderStringHasBeenSet = true; m_genderString = std::forward<GenderStringT>(value); }
    template<typename GenderStringT = ProfileDimension>
    ProfileAttributes& WithGenderString(GenderStringT&& value) { SetGenderString(std::forward<GenderStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within partyTypeString.</p>
     */
    inline const ProfileDimension& GetPartyTypeString() const { return m_partyTypeString; }
    inline bool PartyTypeStringHasBeenSet() const { return m_partyTypeStringHasBeenSet; }
    template<typename PartyTypeStringT = ProfileDimension>
    void SetPartyTypeString(PartyTypeStringT&& value) { m_partyTypeStringHasBeenSet = true; m_partyTypeString = std::forward<PartyTypeStringT>(value); }
    template<typename PartyTypeStringT = ProfileDimension>
    ProfileAttributes& WithPartyTypeString(PartyTypeStringT&& value) { SetPartyTypeString(std::forward<PartyTypeStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within birthDate.</p>
     */
    inline const DateDimension& GetBirthDate() const { return m_birthDate; }
    inline bool BirthDateHasBeenSet() const { return m_birthDateHasBeenSet; }
    template<typename BirthDateT = DateDimension>
    void SetBirthDate(BirthDateT&& value) { m_birthDateHasBeenSet = true; m_birthDate = std::forward<BirthDateT>(value); }
    template<typename BirthDateT = DateDimension>
    ProfileAttributes& WithBirthDate(BirthDateT&& value) { SetBirthDate(std::forward<BirthDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within phone number.</p>
     */
    inline const ProfileDimension& GetPhoneNumber() const { return m_phoneNumber; }
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
    template<typename PhoneNumberT = ProfileDimension>
    void SetPhoneNumber(PhoneNumberT&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::forward<PhoneNumberT>(value); }
    template<typename PhoneNumberT = ProfileDimension>
    ProfileAttributes& WithPhoneNumber(PhoneNumberT&& value) { SetPhoneNumber(std::forward<PhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within business name.</p>
     */
    inline const ProfileDimension& GetBusinessName() const { return m_businessName; }
    inline bool BusinessNameHasBeenSet() const { return m_businessNameHasBeenSet; }
    template<typename BusinessNameT = ProfileDimension>
    void SetBusinessName(BusinessNameT&& value) { m_businessNameHasBeenSet = true; m_businessName = std::forward<BusinessNameT>(value); }
    template<typename BusinessNameT = ProfileDimension>
    ProfileAttributes& WithBusinessName(BusinessNameT&& value) { SetBusinessName(std::forward<BusinessNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within business phone number.</p>
     */
    inline const ProfileDimension& GetBusinessPhoneNumber() const { return m_businessPhoneNumber; }
    inline bool BusinessPhoneNumberHasBeenSet() const { return m_businessPhoneNumberHasBeenSet; }
    template<typename BusinessPhoneNumberT = ProfileDimension>
    void SetBusinessPhoneNumber(BusinessPhoneNumberT&& value) { m_businessPhoneNumberHasBeenSet = true; m_businessPhoneNumber = std::forward<BusinessPhoneNumberT>(value); }
    template<typename BusinessPhoneNumberT = ProfileDimension>
    ProfileAttributes& WithBusinessPhoneNumber(BusinessPhoneNumberT&& value) { SetBusinessPhoneNumber(std::forward<BusinessPhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within home phone number.</p>
     */
    inline const ProfileDimension& GetHomePhoneNumber() const { return m_homePhoneNumber; }
    inline bool HomePhoneNumberHasBeenSet() const { return m_homePhoneNumberHasBeenSet; }
    template<typename HomePhoneNumberT = ProfileDimension>
    void SetHomePhoneNumber(HomePhoneNumberT&& value) { m_homePhoneNumberHasBeenSet = true; m_homePhoneNumber = std::forward<HomePhoneNumberT>(value); }
    template<typename HomePhoneNumberT = ProfileDimension>
    ProfileAttributes& WithHomePhoneNumber(HomePhoneNumberT&& value) { SetHomePhoneNumber(std::forward<HomePhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within mobile phone number.</p>
     */
    inline const ProfileDimension& GetMobilePhoneNumber() const { return m_mobilePhoneNumber; }
    inline bool MobilePhoneNumberHasBeenSet() const { return m_mobilePhoneNumberHasBeenSet; }
    template<typename MobilePhoneNumberT = ProfileDimension>
    void SetMobilePhoneNumber(MobilePhoneNumberT&& value) { m_mobilePhoneNumberHasBeenSet = true; m_mobilePhoneNumber = std::forward<MobilePhoneNumberT>(value); }
    template<typename MobilePhoneNumberT = ProfileDimension>
    ProfileAttributes& WithMobilePhoneNumber(MobilePhoneNumberT&& value) { SetMobilePhoneNumber(std::forward<MobilePhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within email address.</p>
     */
    inline const ProfileDimension& GetEmailAddress() const { return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    template<typename EmailAddressT = ProfileDimension>
    void SetEmailAddress(EmailAddressT&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::forward<EmailAddressT>(value); }
    template<typename EmailAddressT = ProfileDimension>
    ProfileAttributes& WithEmailAddress(EmailAddressT&& value) { SetEmailAddress(std::forward<EmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within personal email address.</p>
     */
    inline const ProfileDimension& GetPersonalEmailAddress() const { return m_personalEmailAddress; }
    inline bool PersonalEmailAddressHasBeenSet() const { return m_personalEmailAddressHasBeenSet; }
    template<typename PersonalEmailAddressT = ProfileDimension>
    void SetPersonalEmailAddress(PersonalEmailAddressT&& value) { m_personalEmailAddressHasBeenSet = true; m_personalEmailAddress = std::forward<PersonalEmailAddressT>(value); }
    template<typename PersonalEmailAddressT = ProfileDimension>
    ProfileAttributes& WithPersonalEmailAddress(PersonalEmailAddressT&& value) { SetPersonalEmailAddress(std::forward<PersonalEmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within business email address.</p>
     */
    inline const ProfileDimension& GetBusinessEmailAddress() const { return m_businessEmailAddress; }
    inline bool BusinessEmailAddressHasBeenSet() const { return m_businessEmailAddressHasBeenSet; }
    template<typename BusinessEmailAddressT = ProfileDimension>
    void SetBusinessEmailAddress(BusinessEmailAddressT&& value) { m_businessEmailAddressHasBeenSet = true; m_businessEmailAddress = std::forward<BusinessEmailAddressT>(value); }
    template<typename BusinessEmailAddressT = ProfileDimension>
    ProfileAttributes& WithBusinessEmailAddress(BusinessEmailAddressT&& value) { SetBusinessEmailAddress(std::forward<BusinessEmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within address.</p>
     */
    inline const AddressDimension& GetAddress() const { return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    template<typename AddressT = AddressDimension>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = AddressDimension>
    ProfileAttributes& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within shipping address.</p>
     */
    inline const AddressDimension& GetShippingAddress() const { return m_shippingAddress; }
    inline bool ShippingAddressHasBeenSet() const { return m_shippingAddressHasBeenSet; }
    template<typename ShippingAddressT = AddressDimension>
    void SetShippingAddress(ShippingAddressT&& value) { m_shippingAddressHasBeenSet = true; m_shippingAddress = std::forward<ShippingAddressT>(value); }
    template<typename ShippingAddressT = AddressDimension>
    ProfileAttributes& WithShippingAddress(ShippingAddressT&& value) { SetShippingAddress(std::forward<ShippingAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within mailing address.</p>
     */
    inline const AddressDimension& GetMailingAddress() const { return m_mailingAddress; }
    inline bool MailingAddressHasBeenSet() const { return m_mailingAddressHasBeenSet; }
    template<typename MailingAddressT = AddressDimension>
    void SetMailingAddress(MailingAddressT&& value) { m_mailingAddressHasBeenSet = true; m_mailingAddress = std::forward<MailingAddressT>(value); }
    template<typename MailingAddressT = AddressDimension>
    ProfileAttributes& WithMailingAddress(MailingAddressT&& value) { SetMailingAddress(std::forward<MailingAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within billing address.</p>
     */
    inline const AddressDimension& GetBillingAddress() const { return m_billingAddress; }
    inline bool BillingAddressHasBeenSet() const { return m_billingAddressHasBeenSet; }
    template<typename BillingAddressT = AddressDimension>
    void SetBillingAddress(BillingAddressT&& value) { m_billingAddressHasBeenSet = true; m_billingAddress = std::forward<BillingAddressT>(value); }
    template<typename BillingAddressT = AddressDimension>
    ProfileAttributes& WithBillingAddress(BillingAddressT&& value) { SetBillingAddress(std::forward<BillingAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within attributes.</p>
     */
    inline const Aws::Map<Aws::String, AttributeDimension>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, AttributeDimension>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, AttributeDimension>>
    ProfileAttributes& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = AttributeDimension>
    ProfileAttributes& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A field to describe values to segment on within profile type.</p>
     */
    inline const ProfileTypeDimension& GetProfileType() const { return m_profileType; }
    inline bool ProfileTypeHasBeenSet() const { return m_profileTypeHasBeenSet; }
    template<typename ProfileTypeT = ProfileTypeDimension>
    void SetProfileType(ProfileTypeT&& value) { m_profileTypeHasBeenSet = true; m_profileType = std::forward<ProfileTypeT>(value); }
    template<typename ProfileTypeT = ProfileTypeDimension>
    ProfileAttributes& WithProfileType(ProfileTypeT&& value) { SetProfileType(std::forward<ProfileTypeT>(value)); return *this;}
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

    ProfileTypeDimension m_profileType;
    bool m_profileTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
