/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/PartyType.h>
#include <aws/customer-profiles/model/Gender.h>
#include <aws/customer-profiles/model/Address.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/model/ProfileType.h>
#include <aws/customer-profiles/model/EngagementPreferences.h>
#include <aws/customer-profiles/model/FoundByKeyValue.h>
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
   * <p>The standard profile of a customer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/Profile">AWS
   * API Reference</a></p>
   */
  class Profile
  {
  public:
    AWS_CUSTOMERPROFILES_API Profile() = default;
    AWS_CUSTOMERPROFILES_API Profile(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Profile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline const Aws::String& GetProfileId() const { return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    template<typename ProfileIdT = Aws::String>
    void SetProfileId(ProfileIdT&& value) { m_profileIdHasBeenSet = true; m_profileId = std::forward<ProfileIdT>(value); }
    template<typename ProfileIdT = Aws::String>
    Profile& WithProfileId(ProfileIdT&& value) { SetProfileId(std::forward<ProfileIdT>(value)); return *this;}
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
    Profile& WithAccountNumber(AccountNumberT&& value) { SetAccountNumber(std::forward<AccountNumberT>(value)); return *this;}
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
    Profile& WithAdditionalInformation(AdditionalInformationT&& value) { SetAdditionalInformation(std::forward<AdditionalInformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of profile used to describe the customer.</p>
     */
    inline PartyType GetPartyType() const { return m_partyType; }
    inline bool PartyTypeHasBeenSet() const { return m_partyTypeHasBeenSet; }
    inline void SetPartyType(PartyType value) { m_partyTypeHasBeenSet = true; m_partyType = value; }
    inline Profile& WithPartyType(PartyType value) { SetPartyType(value); return *this;}
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
    Profile& WithBusinessName(BusinessNameT&& value) { SetBusinessName(std::forward<BusinessNameT>(value)); return *this;}
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
    Profile& WithFirstName(FirstNameT&& value) { SetFirstName(std::forward<FirstNameT>(value)); return *this;}
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
    Profile& WithMiddleName(MiddleNameT&& value) { SetMiddleName(std::forward<MiddleNameT>(value)); return *this;}
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
    Profile& WithLastName(LastNameT&& value) { SetLastName(std::forward<LastNameT>(value)); return *this;}
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
    Profile& WithBirthDate(BirthDateT&& value) { SetBirthDate(std::forward<BirthDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The gender with which the customer identifies. </p>
     */
    inline Gender GetGender() const { return m_gender; }
    inline bool GenderHasBeenSet() const { return m_genderHasBeenSet; }
    inline void SetGender(Gender value) { m_genderHasBeenSet = true; m_gender = value; }
    inline Profile& WithGender(Gender value) { SetGender(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer's phone number, which has not been specified as a mobile, home,
     * or business number.</p>
     */
    inline const Aws::String& GetPhoneNumber() const { return m_phoneNumber; }
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
    template<typename PhoneNumberT = Aws::String>
    void SetPhoneNumber(PhoneNumberT&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::forward<PhoneNumberT>(value); }
    template<typename PhoneNumberT = Aws::String>
    Profile& WithPhoneNumber(PhoneNumberT&& value) { SetPhoneNumber(std::forward<PhoneNumberT>(value)); return *this;}
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
    Profile& WithMobilePhoneNumber(MobilePhoneNumberT&& value) { SetMobilePhoneNumber(std::forward<MobilePhoneNumberT>(value)); return *this;}
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
    Profile& WithHomePhoneNumber(HomePhoneNumberT&& value) { SetHomePhoneNumber(std::forward<HomePhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer’s home phone number.</p>
     */
    inline const Aws::String& GetBusinessPhoneNumber() const { return m_businessPhoneNumber; }
    inline bool BusinessPhoneNumberHasBeenSet() const { return m_businessPhoneNumberHasBeenSet; }
    template<typename BusinessPhoneNumberT = Aws::String>
    void SetBusinessPhoneNumber(BusinessPhoneNumberT&& value) { m_businessPhoneNumberHasBeenSet = true; m_businessPhoneNumber = std::forward<BusinessPhoneNumberT>(value); }
    template<typename BusinessPhoneNumberT = Aws::String>
    Profile& WithBusinessPhoneNumber(BusinessPhoneNumberT&& value) { SetBusinessPhoneNumber(std::forward<BusinessPhoneNumberT>(value)); return *this;}
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
    Profile& WithEmailAddress(EmailAddressT&& value) { SetEmailAddress(std::forward<EmailAddressT>(value)); return *this;}
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
    Profile& WithPersonalEmailAddress(PersonalEmailAddressT&& value) { SetPersonalEmailAddress(std::forward<PersonalEmailAddressT>(value)); return *this;}
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
    Profile& WithBusinessEmailAddress(BusinessEmailAddressT&& value) { SetBusinessEmailAddress(std::forward<BusinessEmailAddressT>(value)); return *this;}
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
    Profile& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
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
    Profile& WithShippingAddress(ShippingAddressT&& value) { SetShippingAddress(std::forward<ShippingAddressT>(value)); return *this;}
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
    Profile& WithMailingAddress(MailingAddressT&& value) { SetMailingAddress(std::forward<MailingAddressT>(value)); return *this;}
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
    Profile& WithBillingAddress(BillingAddressT&& value) { SetBillingAddress(std::forward<BillingAddressT>(value)); return *this;}
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
    Profile& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    Profile& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A list of items used to find a profile returned in a <a
     * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_SearchProfiles.html">SearchProfiles</a>
     * response. An item is a key-value(s) pair that matches an attribute in the
     * profile.</p> <p>If the optional <code>AdditionalSearchKeys</code> parameter was
     * included in the <a
     * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_SearchProfiles.html">SearchProfiles</a>
     * request, the <code>FoundByItems</code> list should be interpreted based on the
     * <code>LogicalOperator</code> used in the request:</p> <ul> <li> <p>
     * <code>AND</code> - The profile included in the response matched all of the
     * search keys specified in the request. The <code>FoundByItems</code> will include
     * all of the key-value(s) pairs that were specified in the request (as this is a
     * requirement of <code>AND</code> search logic).</p> </li> <li> <p>
     * <code>OR</code> - The profile included in the response matched at least one of
     * the search keys specified in the request. The <code>FoundByItems</code> will
     * include each of the key-value(s) pairs that the profile was found by.</p> </li>
     * </ul> <p>The <code>OR</code> relationship is the default behavior if the
     * <code>LogicalOperator</code> parameter is not included in the <a
     * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_SearchProfiles.html">SearchProfiles</a>
     * request.</p>
     */
    inline const Aws::Vector<FoundByKeyValue>& GetFoundByItems() const { return m_foundByItems; }
    inline bool FoundByItemsHasBeenSet() const { return m_foundByItemsHasBeenSet; }
    template<typename FoundByItemsT = Aws::Vector<FoundByKeyValue>>
    void SetFoundByItems(FoundByItemsT&& value) { m_foundByItemsHasBeenSet = true; m_foundByItems = std::forward<FoundByItemsT>(value); }
    template<typename FoundByItemsT = Aws::Vector<FoundByKeyValue>>
    Profile& WithFoundByItems(FoundByItemsT&& value) { SetFoundByItems(std::forward<FoundByItemsT>(value)); return *this;}
    template<typename FoundByItemsT = FoundByKeyValue>
    Profile& AddFoundByItems(FoundByItemsT&& value) { m_foundByItemsHasBeenSet = true; m_foundByItems.emplace_back(std::forward<FoundByItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An alternative to PartyType which accepts any string as input.</p>
     */
    inline const Aws::String& GetPartyTypeString() const { return m_partyTypeString; }
    inline bool PartyTypeStringHasBeenSet() const { return m_partyTypeStringHasBeenSet; }
    template<typename PartyTypeStringT = Aws::String>
    void SetPartyTypeString(PartyTypeStringT&& value) { m_partyTypeStringHasBeenSet = true; m_partyTypeString = std::forward<PartyTypeStringT>(value); }
    template<typename PartyTypeStringT = Aws::String>
    Profile& WithPartyTypeString(PartyTypeStringT&& value) { SetPartyTypeString(std::forward<PartyTypeStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An alternative to Gender which accepts any string as input.</p>
     */
    inline const Aws::String& GetGenderString() const { return m_genderString; }
    inline bool GenderStringHasBeenSet() const { return m_genderStringHasBeenSet; }
    template<typename GenderStringT = Aws::String>
    void SetGenderString(GenderStringT&& value) { m_genderStringHasBeenSet = true; m_genderString = std::forward<GenderStringT>(value); }
    template<typename GenderStringT = Aws::String>
    Profile& WithGenderString(GenderStringT&& value) { SetGenderString(std::forward<GenderStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the profile.</p>
     */
    inline ProfileType GetProfileType() const { return m_profileType; }
    inline bool ProfileTypeHasBeenSet() const { return m_profileTypeHasBeenSet; }
    inline void SetProfileType(ProfileType value) { m_profileTypeHasBeenSet = true; m_profileType = value; }
    inline Profile& WithProfileType(ProfileType value) { SetProfileType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer or account’s engagement preferences.</p>
     */
    inline const EngagementPreferences& GetEngagementPreferences() const { return m_engagementPreferences; }
    inline bool EngagementPreferencesHasBeenSet() const { return m_engagementPreferencesHasBeenSet; }
    template<typename EngagementPreferencesT = EngagementPreferences>
    void SetEngagementPreferences(EngagementPreferencesT&& value) { m_engagementPreferencesHasBeenSet = true; m_engagementPreferences = std::forward<EngagementPreferencesT>(value); }
    template<typename EngagementPreferencesT = EngagementPreferences>
    Profile& WithEngagementPreferences(EngagementPreferencesT&& value) { SetEngagementPreferences(std::forward<EngagementPreferencesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

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

    Aws::Vector<FoundByKeyValue> m_foundByItems;
    bool m_foundByItemsHasBeenSet = false;

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
