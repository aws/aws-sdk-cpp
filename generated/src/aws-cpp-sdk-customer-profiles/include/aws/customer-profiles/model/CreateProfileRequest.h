/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/PartyType.h>
#include <aws/customer-profiles/model/Gender.h>
#include <aws/customer-profiles/model/Address.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/customer-profiles/model/ProfileType.h>
#include <aws/customer-profiles/model/EngagementPreferences.h>
#include <utility>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

  /**
   */
  class CreateProfileRequest : public CustomerProfilesRequest
  {
  public:
    AWS_CUSTOMERPROFILES_API CreateProfileRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProfile"; }

    AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    CreateProfileRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An account number that you have assigned to the customer.</p>
     */
    inline const Aws::String& GetAccountNumber() const { return m_accountNumber; }
    inline bool AccountNumberHasBeenSet() const { return m_accountNumberHasBeenSet; }
    template<typename AccountNumberT = Aws::String>
    void SetAccountNumber(AccountNumberT&& value) { m_accountNumberHasBeenSet = true; m_accountNumber = std::forward<AccountNumberT>(value); }
    template<typename AccountNumberT = Aws::String>
    CreateProfileRequest& WithAccountNumber(AccountNumberT&& value) { SetAccountNumber(std::forward<AccountNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any additional information relevant to the customer’s profile.</p>
     */
    inline const Aws::String& GetAdditionalInformation() const { return m_additionalInformation; }
    inline bool AdditionalInformationHasBeenSet() const { return m_additionalInformationHasBeenSet; }
    template<typename AdditionalInformationT = Aws::String>
    void SetAdditionalInformation(AdditionalInformationT&& value) { m_additionalInformationHasBeenSet = true; m_additionalInformation = std::forward<AdditionalInformationT>(value); }
    template<typename AdditionalInformationT = Aws::String>
    CreateProfileRequest& WithAdditionalInformation(AdditionalInformationT&& value) { SetAdditionalInformation(std::forward<AdditionalInformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of profile used to describe the customer.</p>
     */
    inline PartyType GetPartyType() const { return m_partyType; }
    inline bool PartyTypeHasBeenSet() const { return m_partyTypeHasBeenSet; }
    inline void SetPartyType(PartyType value) { m_partyTypeHasBeenSet = true; m_partyType = value; }
    inline CreateProfileRequest& WithPartyType(PartyType value) { SetPartyType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the customer’s business.</p>
     */
    inline const Aws::String& GetBusinessName() const { return m_businessName; }
    inline bool BusinessNameHasBeenSet() const { return m_businessNameHasBeenSet; }
    template<typename BusinessNameT = Aws::String>
    void SetBusinessName(BusinessNameT&& value) { m_businessNameHasBeenSet = true; m_businessName = std::forward<BusinessNameT>(value); }
    template<typename BusinessNameT = Aws::String>
    CreateProfileRequest& WithBusinessName(BusinessNameT&& value) { SetBusinessName(std::forward<BusinessNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer’s first name.</p>
     */
    inline const Aws::String& GetFirstName() const { return m_firstName; }
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }
    template<typename FirstNameT = Aws::String>
    void SetFirstName(FirstNameT&& value) { m_firstNameHasBeenSet = true; m_firstName = std::forward<FirstNameT>(value); }
    template<typename FirstNameT = Aws::String>
    CreateProfileRequest& WithFirstName(FirstNameT&& value) { SetFirstName(std::forward<FirstNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer’s middle name.</p>
     */
    inline const Aws::String& GetMiddleName() const { return m_middleName; }
    inline bool MiddleNameHasBeenSet() const { return m_middleNameHasBeenSet; }
    template<typename MiddleNameT = Aws::String>
    void SetMiddleName(MiddleNameT&& value) { m_middleNameHasBeenSet = true; m_middleName = std::forward<MiddleNameT>(value); }
    template<typename MiddleNameT = Aws::String>
    CreateProfileRequest& WithMiddleName(MiddleNameT&& value) { SetMiddleName(std::forward<MiddleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer’s last name.</p>
     */
    inline const Aws::String& GetLastName() const { return m_lastName; }
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }
    template<typename LastNameT = Aws::String>
    void SetLastName(LastNameT&& value) { m_lastNameHasBeenSet = true; m_lastName = std::forward<LastNameT>(value); }
    template<typename LastNameT = Aws::String>
    CreateProfileRequest& WithLastName(LastNameT&& value) { SetLastName(std::forward<LastNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer’s birth date. </p>
     */
    inline const Aws::String& GetBirthDate() const { return m_birthDate; }
    inline bool BirthDateHasBeenSet() const { return m_birthDateHasBeenSet; }
    template<typename BirthDateT = Aws::String>
    void SetBirthDate(BirthDateT&& value) { m_birthDateHasBeenSet = true; m_birthDate = std::forward<BirthDateT>(value); }
    template<typename BirthDateT = Aws::String>
    CreateProfileRequest& WithBirthDate(BirthDateT&& value) { SetBirthDate(std::forward<BirthDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The gender with which the customer identifies. </p>
     */
    inline Gender GetGender() const { return m_gender; }
    inline bool GenderHasBeenSet() const { return m_genderHasBeenSet; }
    inline void SetGender(Gender value) { m_genderHasBeenSet = true; m_gender = value; }
    inline CreateProfileRequest& WithGender(Gender value) { SetGender(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer’s phone number, which has not been specified as a mobile, home,
     * or business number. </p>
     */
    inline const Aws::String& GetPhoneNumber() const { return m_phoneNumber; }
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
    template<typename PhoneNumberT = Aws::String>
    void SetPhoneNumber(PhoneNumberT&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::forward<PhoneNumberT>(value); }
    template<typename PhoneNumberT = Aws::String>
    CreateProfileRequest& WithPhoneNumber(PhoneNumberT&& value) { SetPhoneNumber(std::forward<PhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer’s mobile phone number.</p>
     */
    inline const Aws::String& GetMobilePhoneNumber() const { return m_mobilePhoneNumber; }
    inline bool MobilePhoneNumberHasBeenSet() const { return m_mobilePhoneNumberHasBeenSet; }
    template<typename MobilePhoneNumberT = Aws::String>
    void SetMobilePhoneNumber(MobilePhoneNumberT&& value) { m_mobilePhoneNumberHasBeenSet = true; m_mobilePhoneNumber = std::forward<MobilePhoneNumberT>(value); }
    template<typename MobilePhoneNumberT = Aws::String>
    CreateProfileRequest& WithMobilePhoneNumber(MobilePhoneNumberT&& value) { SetMobilePhoneNumber(std::forward<MobilePhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer’s home phone number.</p>
     */
    inline const Aws::String& GetHomePhoneNumber() const { return m_homePhoneNumber; }
    inline bool HomePhoneNumberHasBeenSet() const { return m_homePhoneNumberHasBeenSet; }
    template<typename HomePhoneNumberT = Aws::String>
    void SetHomePhoneNumber(HomePhoneNumberT&& value) { m_homePhoneNumberHasBeenSet = true; m_homePhoneNumber = std::forward<HomePhoneNumberT>(value); }
    template<typename HomePhoneNumberT = Aws::String>
    CreateProfileRequest& WithHomePhoneNumber(HomePhoneNumberT&& value) { SetHomePhoneNumber(std::forward<HomePhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer’s business phone number.</p>
     */
    inline const Aws::String& GetBusinessPhoneNumber() const { return m_businessPhoneNumber; }
    inline bool BusinessPhoneNumberHasBeenSet() const { return m_businessPhoneNumberHasBeenSet; }
    template<typename BusinessPhoneNumberT = Aws::String>
    void SetBusinessPhoneNumber(BusinessPhoneNumberT&& value) { m_businessPhoneNumberHasBeenSet = true; m_businessPhoneNumber = std::forward<BusinessPhoneNumberT>(value); }
    template<typename BusinessPhoneNumberT = Aws::String>
    CreateProfileRequest& WithBusinessPhoneNumber(BusinessPhoneNumberT&& value) { SetBusinessPhoneNumber(std::forward<BusinessPhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer’s email address, which has not been specified as a personal or
     * business address. </p>
     */
    inline const Aws::String& GetEmailAddress() const { return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    template<typename EmailAddressT = Aws::String>
    void SetEmailAddress(EmailAddressT&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::forward<EmailAddressT>(value); }
    template<typename EmailAddressT = Aws::String>
    CreateProfileRequest& WithEmailAddress(EmailAddressT&& value) { SetEmailAddress(std::forward<EmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer’s personal email address.</p>
     */
    inline const Aws::String& GetPersonalEmailAddress() const { return m_personalEmailAddress; }
    inline bool PersonalEmailAddressHasBeenSet() const { return m_personalEmailAddressHasBeenSet; }
    template<typename PersonalEmailAddressT = Aws::String>
    void SetPersonalEmailAddress(PersonalEmailAddressT&& value) { m_personalEmailAddressHasBeenSet = true; m_personalEmailAddress = std::forward<PersonalEmailAddressT>(value); }
    template<typename PersonalEmailAddressT = Aws::String>
    CreateProfileRequest& WithPersonalEmailAddress(PersonalEmailAddressT&& value) { SetPersonalEmailAddress(std::forward<PersonalEmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer’s business email address.</p>
     */
    inline const Aws::String& GetBusinessEmailAddress() const { return m_businessEmailAddress; }
    inline bool BusinessEmailAddressHasBeenSet() const { return m_businessEmailAddressHasBeenSet; }
    template<typename BusinessEmailAddressT = Aws::String>
    void SetBusinessEmailAddress(BusinessEmailAddressT&& value) { m_businessEmailAddressHasBeenSet = true; m_businessEmailAddress = std::forward<BusinessEmailAddressT>(value); }
    template<typename BusinessEmailAddressT = Aws::String>
    CreateProfileRequest& WithBusinessEmailAddress(BusinessEmailAddressT&& value) { SetBusinessEmailAddress(std::forward<BusinessEmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A generic address associated with the customer that is not mailing, shipping,
     * or billing.</p>
     */
    inline const Address& GetAddress() const { return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    template<typename AddressT = Address>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = Address>
    CreateProfileRequest& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer’s shipping address.</p>
     */
    inline const Address& GetShippingAddress() const { return m_shippingAddress; }
    inline bool ShippingAddressHasBeenSet() const { return m_shippingAddressHasBeenSet; }
    template<typename ShippingAddressT = Address>
    void SetShippingAddress(ShippingAddressT&& value) { m_shippingAddressHasBeenSet = true; m_shippingAddress = std::forward<ShippingAddressT>(value); }
    template<typename ShippingAddressT = Address>
    CreateProfileRequest& WithShippingAddress(ShippingAddressT&& value) { SetShippingAddress(std::forward<ShippingAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer’s mailing address.</p>
     */
    inline const Address& GetMailingAddress() const { return m_mailingAddress; }
    inline bool MailingAddressHasBeenSet() const { return m_mailingAddressHasBeenSet; }
    template<typename MailingAddressT = Address>
    void SetMailingAddress(MailingAddressT&& value) { m_mailingAddressHasBeenSet = true; m_mailingAddress = std::forward<MailingAddressT>(value); }
    template<typename MailingAddressT = Address>
    CreateProfileRequest& WithMailingAddress(MailingAddressT&& value) { SetMailingAddress(std::forward<MailingAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer’s billing address.</p>
     */
    inline const Address& GetBillingAddress() const { return m_billingAddress; }
    inline bool BillingAddressHasBeenSet() const { return m_billingAddressHasBeenSet; }
    template<typename BillingAddressT = Address>
    void SetBillingAddress(BillingAddressT&& value) { m_billingAddressHasBeenSet = true; m_billingAddress = std::forward<BillingAddressT>(value); }
    template<typename BillingAddressT = Address>
    CreateProfileRequest& WithBillingAddress(BillingAddressT&& value) { SetBillingAddress(std::forward<BillingAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key value pair of attributes of a customer profile.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    CreateProfileRequest& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    CreateProfileRequest& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>An alternative to <code>PartyType</code> which accepts any string as
     * input.</p>
     */
    inline const Aws::String& GetPartyTypeString() const { return m_partyTypeString; }
    inline bool PartyTypeStringHasBeenSet() const { return m_partyTypeStringHasBeenSet; }
    template<typename PartyTypeStringT = Aws::String>
    void SetPartyTypeString(PartyTypeStringT&& value) { m_partyTypeStringHasBeenSet = true; m_partyTypeString = std::forward<PartyTypeStringT>(value); }
    template<typename PartyTypeStringT = Aws::String>
    CreateProfileRequest& WithPartyTypeString(PartyTypeStringT&& value) { SetPartyTypeString(std::forward<PartyTypeStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An alternative to <code>Gender</code> which accepts any string as input.</p>
     */
    inline const Aws::String& GetGenderString() const { return m_genderString; }
    inline bool GenderStringHasBeenSet() const { return m_genderStringHasBeenSet; }
    template<typename GenderStringT = Aws::String>
    void SetGenderString(GenderStringT&& value) { m_genderStringHasBeenSet = true; m_genderString = std::forward<GenderStringT>(value); }
    template<typename GenderStringT = Aws::String>
    CreateProfileRequest& WithGenderString(GenderStringT&& value) { SetGenderString(std::forward<GenderStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the profile.</p>
     */
    inline ProfileType GetProfileType() const { return m_profileType; }
    inline bool ProfileTypeHasBeenSet() const { return m_profileTypeHasBeenSet; }
    inline void SetProfileType(ProfileType value) { m_profileTypeHasBeenSet = true; m_profileType = value; }
    inline CreateProfileRequest& WithProfileType(ProfileType value) { SetProfileType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Object that defines the preferred methods of engagement, per channel.</p>
     */
    inline const EngagementPreferences& GetEngagementPreferences() const { return m_engagementPreferences; }
    inline bool EngagementPreferencesHasBeenSet() const { return m_engagementPreferencesHasBeenSet; }
    template<typename EngagementPreferencesT = EngagementPreferences>
    void SetEngagementPreferences(EngagementPreferencesT&& value) { m_engagementPreferencesHasBeenSet = true; m_engagementPreferences = std::forward<EngagementPreferencesT>(value); }
    template<typename EngagementPreferencesT = EngagementPreferences>
    CreateProfileRequest& WithEngagementPreferences(EngagementPreferencesT&& value) { SetEngagementPreferences(std::forward<EngagementPreferencesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_accountNumber;
    bool m_accountNumberHasBeenSet = false;

    Aws::String m_additionalInformation;
    bool m_additionalInformationHasBeenSet = false;

    PartyType m_partyType{PartyType::NOT_SET};
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

    Gender m_gender{Gender::NOT_SET};
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

    Address m_address;
    bool m_addressHasBeenSet = false;

    Address m_shippingAddress;
    bool m_shippingAddressHasBeenSet = false;

    Address m_mailingAddress;
    bool m_mailingAddressHasBeenSet = false;

    Address m_billingAddress;
    bool m_billingAddressHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::String m_partyTypeString;
    bool m_partyTypeStringHasBeenSet = false;

    Aws::String m_genderString;
    bool m_genderStringHasBeenSet = false;

    ProfileType m_profileType{ProfileType::NOT_SET};
    bool m_profileTypeHasBeenSet = false;

    EngagementPreferences m_engagementPreferences;
    bool m_engagementPreferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
