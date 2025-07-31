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
    AWS_CUSTOMERPROFILES_API FieldSourceProfileIds() = default;
    AWS_CUSTOMERPROFILES_API FieldSourceProfileIds(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API FieldSourceProfileIds& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the account number field to be merged. </p>
     */
    inline const Aws::String& GetAccountNumber() const { return m_accountNumber; }
    inline bool AccountNumberHasBeenSet() const { return m_accountNumberHasBeenSet; }
    template<typename AccountNumberT = Aws::String>
    void SetAccountNumber(AccountNumberT&& value) { m_accountNumberHasBeenSet = true; m_accountNumber = std::forward<AccountNumberT>(value); }
    template<typename AccountNumberT = Aws::String>
    FieldSourceProfileIds& WithAccountNumber(AccountNumberT&& value) { SetAccountNumber(std::forward<AccountNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the additional information field to be merged.</p>
     */
    inline const Aws::String& GetAdditionalInformation() const { return m_additionalInformation; }
    inline bool AdditionalInformationHasBeenSet() const { return m_additionalInformationHasBeenSet; }
    template<typename AdditionalInformationT = Aws::String>
    void SetAdditionalInformation(AdditionalInformationT&& value) { m_additionalInformationHasBeenSet = true; m_additionalInformation = std::forward<AdditionalInformationT>(value); }
    template<typename AdditionalInformationT = Aws::String>
    FieldSourceProfileIds& WithAdditionalInformation(AdditionalInformationT&& value) { SetAdditionalInformation(std::forward<AdditionalInformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the party type field to be merged.</p>
     */
    inline const Aws::String& GetPartyType() const { return m_partyType; }
    inline bool PartyTypeHasBeenSet() const { return m_partyTypeHasBeenSet; }
    template<typename PartyTypeT = Aws::String>
    void SetPartyType(PartyTypeT&& value) { m_partyTypeHasBeenSet = true; m_partyType = std::forward<PartyTypeT>(value); }
    template<typename PartyTypeT = Aws::String>
    FieldSourceProfileIds& WithPartyType(PartyTypeT&& value) { SetPartyType(std::forward<PartyTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the business name field to be merged.</p>
     */
    inline const Aws::String& GetBusinessName() const { return m_businessName; }
    inline bool BusinessNameHasBeenSet() const { return m_businessNameHasBeenSet; }
    template<typename BusinessNameT = Aws::String>
    void SetBusinessName(BusinessNameT&& value) { m_businessNameHasBeenSet = true; m_businessName = std::forward<BusinessNameT>(value); }
    template<typename BusinessNameT = Aws::String>
    FieldSourceProfileIds& WithBusinessName(BusinessNameT&& value) { SetBusinessName(std::forward<BusinessNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the first name field to be merged.</p>
     */
    inline const Aws::String& GetFirstName() const { return m_firstName; }
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }
    template<typename FirstNameT = Aws::String>
    void SetFirstName(FirstNameT&& value) { m_firstNameHasBeenSet = true; m_firstName = std::forward<FirstNameT>(value); }
    template<typename FirstNameT = Aws::String>
    FieldSourceProfileIds& WithFirstName(FirstNameT&& value) { SetFirstName(std::forward<FirstNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the middle name field to be merged.</p>
     */
    inline const Aws::String& GetMiddleName() const { return m_middleName; }
    inline bool MiddleNameHasBeenSet() const { return m_middleNameHasBeenSet; }
    template<typename MiddleNameT = Aws::String>
    void SetMiddleName(MiddleNameT&& value) { m_middleNameHasBeenSet = true; m_middleName = std::forward<MiddleNameT>(value); }
    template<typename MiddleNameT = Aws::String>
    FieldSourceProfileIds& WithMiddleName(MiddleNameT&& value) { SetMiddleName(std::forward<MiddleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the last name field to be merged.</p>
     */
    inline const Aws::String& GetLastName() const { return m_lastName; }
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }
    template<typename LastNameT = Aws::String>
    void SetLastName(LastNameT&& value) { m_lastNameHasBeenSet = true; m_lastName = std::forward<LastNameT>(value); }
    template<typename LastNameT = Aws::String>
    FieldSourceProfileIds& WithLastName(LastNameT&& value) { SetLastName(std::forward<LastNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the birthdate field to be merged.</p>
     */
    inline const Aws::String& GetBirthDate() const { return m_birthDate; }
    inline bool BirthDateHasBeenSet() const { return m_birthDateHasBeenSet; }
    template<typename BirthDateT = Aws::String>
    void SetBirthDate(BirthDateT&& value) { m_birthDateHasBeenSet = true; m_birthDate = std::forward<BirthDateT>(value); }
    template<typename BirthDateT = Aws::String>
    FieldSourceProfileIds& WithBirthDate(BirthDateT&& value) { SetBirthDate(std::forward<BirthDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the gender field to be merged.</p>
     */
    inline const Aws::String& GetGender() const { return m_gender; }
    inline bool GenderHasBeenSet() const { return m_genderHasBeenSet; }
    template<typename GenderT = Aws::String>
    void SetGender(GenderT&& value) { m_genderHasBeenSet = true; m_gender = std::forward<GenderT>(value); }
    template<typename GenderT = Aws::String>
    FieldSourceProfileIds& WithGender(GenderT&& value) { SetGender(std::forward<GenderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the phone number field to be merged.</p>
     */
    inline const Aws::String& GetPhoneNumber() const { return m_phoneNumber; }
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
    template<typename PhoneNumberT = Aws::String>
    void SetPhoneNumber(PhoneNumberT&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::forward<PhoneNumberT>(value); }
    template<typename PhoneNumberT = Aws::String>
    FieldSourceProfileIds& WithPhoneNumber(PhoneNumberT&& value) { SetPhoneNumber(std::forward<PhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the mobile phone number field to be merged.</p>
     */
    inline const Aws::String& GetMobilePhoneNumber() const { return m_mobilePhoneNumber; }
    inline bool MobilePhoneNumberHasBeenSet() const { return m_mobilePhoneNumberHasBeenSet; }
    template<typename MobilePhoneNumberT = Aws::String>
    void SetMobilePhoneNumber(MobilePhoneNumberT&& value) { m_mobilePhoneNumberHasBeenSet = true; m_mobilePhoneNumber = std::forward<MobilePhoneNumberT>(value); }
    template<typename MobilePhoneNumberT = Aws::String>
    FieldSourceProfileIds& WithMobilePhoneNumber(MobilePhoneNumberT&& value) { SetMobilePhoneNumber(std::forward<MobilePhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the home phone number field to be merged.</p>
     */
    inline const Aws::String& GetHomePhoneNumber() const { return m_homePhoneNumber; }
    inline bool HomePhoneNumberHasBeenSet() const { return m_homePhoneNumberHasBeenSet; }
    template<typename HomePhoneNumberT = Aws::String>
    void SetHomePhoneNumber(HomePhoneNumberT&& value) { m_homePhoneNumberHasBeenSet = true; m_homePhoneNumber = std::forward<HomePhoneNumberT>(value); }
    template<typename HomePhoneNumberT = Aws::String>
    FieldSourceProfileIds& WithHomePhoneNumber(HomePhoneNumberT&& value) { SetHomePhoneNumber(std::forward<HomePhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the business phone number field to be merged.</p>
     */
    inline const Aws::String& GetBusinessPhoneNumber() const { return m_businessPhoneNumber; }
    inline bool BusinessPhoneNumberHasBeenSet() const { return m_businessPhoneNumberHasBeenSet; }
    template<typename BusinessPhoneNumberT = Aws::String>
    void SetBusinessPhoneNumber(BusinessPhoneNumberT&& value) { m_businessPhoneNumberHasBeenSet = true; m_businessPhoneNumber = std::forward<BusinessPhoneNumberT>(value); }
    template<typename BusinessPhoneNumberT = Aws::String>
    FieldSourceProfileIds& WithBusinessPhoneNumber(BusinessPhoneNumberT&& value) { SetBusinessPhoneNumber(std::forward<BusinessPhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the email address field to be merged.</p>
     */
    inline const Aws::String& GetEmailAddress() const { return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    template<typename EmailAddressT = Aws::String>
    void SetEmailAddress(EmailAddressT&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::forward<EmailAddressT>(value); }
    template<typename EmailAddressT = Aws::String>
    FieldSourceProfileIds& WithEmailAddress(EmailAddressT&& value) { SetEmailAddress(std::forward<EmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the personal email address field to be merged.</p>
     */
    inline const Aws::String& GetPersonalEmailAddress() const { return m_personalEmailAddress; }
    inline bool PersonalEmailAddressHasBeenSet() const { return m_personalEmailAddressHasBeenSet; }
    template<typename PersonalEmailAddressT = Aws::String>
    void SetPersonalEmailAddress(PersonalEmailAddressT&& value) { m_personalEmailAddressHasBeenSet = true; m_personalEmailAddress = std::forward<PersonalEmailAddressT>(value); }
    template<typename PersonalEmailAddressT = Aws::String>
    FieldSourceProfileIds& WithPersonalEmailAddress(PersonalEmailAddressT&& value) { SetPersonalEmailAddress(std::forward<PersonalEmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the party type field to be merged.</p>
     */
    inline const Aws::String& GetBusinessEmailAddress() const { return m_businessEmailAddress; }
    inline bool BusinessEmailAddressHasBeenSet() const { return m_businessEmailAddressHasBeenSet; }
    template<typename BusinessEmailAddressT = Aws::String>
    void SetBusinessEmailAddress(BusinessEmailAddressT&& value) { m_businessEmailAddressHasBeenSet = true; m_businessEmailAddress = std::forward<BusinessEmailAddressT>(value); }
    template<typename BusinessEmailAddressT = Aws::String>
    FieldSourceProfileIds& WithBusinessEmailAddress(BusinessEmailAddressT&& value) { SetBusinessEmailAddress(std::forward<BusinessEmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the party type field to be merged.</p>
     */
    inline const Aws::String& GetAddress() const { return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    template<typename AddressT = Aws::String>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = Aws::String>
    FieldSourceProfileIds& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the shipping address field to be merged.</p>
     */
    inline const Aws::String& GetShippingAddress() const { return m_shippingAddress; }
    inline bool ShippingAddressHasBeenSet() const { return m_shippingAddressHasBeenSet; }
    template<typename ShippingAddressT = Aws::String>
    void SetShippingAddress(ShippingAddressT&& value) { m_shippingAddressHasBeenSet = true; m_shippingAddress = std::forward<ShippingAddressT>(value); }
    template<typename ShippingAddressT = Aws::String>
    FieldSourceProfileIds& WithShippingAddress(ShippingAddressT&& value) { SetShippingAddress(std::forward<ShippingAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the mailing address field to be merged.</p>
     */
    inline const Aws::String& GetMailingAddress() const { return m_mailingAddress; }
    inline bool MailingAddressHasBeenSet() const { return m_mailingAddressHasBeenSet; }
    template<typename MailingAddressT = Aws::String>
    void SetMailingAddress(MailingAddressT&& value) { m_mailingAddressHasBeenSet = true; m_mailingAddress = std::forward<MailingAddressT>(value); }
    template<typename MailingAddressT = Aws::String>
    FieldSourceProfileIds& WithMailingAddress(MailingAddressT&& value) { SetMailingAddress(std::forward<MailingAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the billing type field to be merged.</p>
     */
    inline const Aws::String& GetBillingAddress() const { return m_billingAddress; }
    inline bool BillingAddressHasBeenSet() const { return m_billingAddressHasBeenSet; }
    template<typename BillingAddressT = Aws::String>
    void SetBillingAddress(BillingAddressT&& value) { m_billingAddressHasBeenSet = true; m_billingAddress = std::forward<BillingAddressT>(value); }
    template<typename BillingAddressT = Aws::String>
    FieldSourceProfileIds& WithBillingAddress(BillingAddressT&& value) { SetBillingAddress(std::forward<BillingAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the attributes field to be merged.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    FieldSourceProfileIds& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    FieldSourceProfileIds& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the profile type field to be merged.</p>
     */
    inline const Aws::String& GetProfileType() const { return m_profileType; }
    inline bool ProfileTypeHasBeenSet() const { return m_profileTypeHasBeenSet; }
    template<typename ProfileTypeT = Aws::String>
    void SetProfileType(ProfileTypeT&& value) { m_profileTypeHasBeenSet = true; m_profileType = std::forward<ProfileTypeT>(value); }
    template<typename ProfileTypeT = Aws::String>
    FieldSourceProfileIds& WithProfileType(ProfileTypeT&& value) { SetProfileType(std::forward<ProfileTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the engagement preferences field to be merged.</p>
     */
    inline const Aws::String& GetEngagementPreferences() const { return m_engagementPreferences; }
    inline bool EngagementPreferencesHasBeenSet() const { return m_engagementPreferencesHasBeenSet; }
    template<typename EngagementPreferencesT = Aws::String>
    void SetEngagementPreferences(EngagementPreferencesT&& value) { m_engagementPreferencesHasBeenSet = true; m_engagementPreferences = std::forward<EngagementPreferencesT>(value); }
    template<typename EngagementPreferencesT = Aws::String>
    FieldSourceProfileIds& WithEngagementPreferences(EngagementPreferencesT&& value) { SetEngagementPreferences(std::forward<EngagementPreferencesT>(value)); return *this;}
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

    Aws::String m_profileType;
    bool m_profileTypeHasBeenSet = false;

    Aws::String m_engagementPreferences;
    bool m_engagementPreferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
