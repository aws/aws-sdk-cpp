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
    AWS_CUSTOMERPROFILES_API Profile();
    AWS_CUSTOMERPROFILES_API Profile(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Profile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    inline void SetProfileId(const Aws::String& value) { m_profileIdHasBeenSet = true; m_profileId = value; }
    inline void SetProfileId(Aws::String&& value) { m_profileIdHasBeenSet = true; m_profileId = std::move(value); }
    inline void SetProfileId(const char* value) { m_profileIdHasBeenSet = true; m_profileId.assign(value); }
    inline Profile& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}
    inline Profile& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}
    inline Profile& WithProfileId(const char* value) { SetProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An account number that you have given to the customer.</p>
     */
    inline const Aws::String& GetAccountNumber() const{ return m_accountNumber; }
    inline bool AccountNumberHasBeenSet() const { return m_accountNumberHasBeenSet; }
    inline void SetAccountNumber(const Aws::String& value) { m_accountNumberHasBeenSet = true; m_accountNumber = value; }
    inline void SetAccountNumber(Aws::String&& value) { m_accountNumberHasBeenSet = true; m_accountNumber = std::move(value); }
    inline void SetAccountNumber(const char* value) { m_accountNumberHasBeenSet = true; m_accountNumber.assign(value); }
    inline Profile& WithAccountNumber(const Aws::String& value) { SetAccountNumber(value); return *this;}
    inline Profile& WithAccountNumber(Aws::String&& value) { SetAccountNumber(std::move(value)); return *this;}
    inline Profile& WithAccountNumber(const char* value) { SetAccountNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any additional information relevant to the customer’s profile.</p>
     */
    inline const Aws::String& GetAdditionalInformation() const{ return m_additionalInformation; }
    inline bool AdditionalInformationHasBeenSet() const { return m_additionalInformationHasBeenSet; }
    inline void SetAdditionalInformation(const Aws::String& value) { m_additionalInformationHasBeenSet = true; m_additionalInformation = value; }
    inline void SetAdditionalInformation(Aws::String&& value) { m_additionalInformationHasBeenSet = true; m_additionalInformation = std::move(value); }
    inline void SetAdditionalInformation(const char* value) { m_additionalInformationHasBeenSet = true; m_additionalInformation.assign(value); }
    inline Profile& WithAdditionalInformation(const Aws::String& value) { SetAdditionalInformation(value); return *this;}
    inline Profile& WithAdditionalInformation(Aws::String&& value) { SetAdditionalInformation(std::move(value)); return *this;}
    inline Profile& WithAdditionalInformation(const char* value) { SetAdditionalInformation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of profile used to describe the customer.</p>
     */
    inline const PartyType& GetPartyType() const{ return m_partyType; }
    inline bool PartyTypeHasBeenSet() const { return m_partyTypeHasBeenSet; }
    inline void SetPartyType(const PartyType& value) { m_partyTypeHasBeenSet = true; m_partyType = value; }
    inline void SetPartyType(PartyType&& value) { m_partyTypeHasBeenSet = true; m_partyType = std::move(value); }
    inline Profile& WithPartyType(const PartyType& value) { SetPartyType(value); return *this;}
    inline Profile& WithPartyType(PartyType&& value) { SetPartyType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the customer’s business.</p>
     */
    inline const Aws::String& GetBusinessName() const{ return m_businessName; }
    inline bool BusinessNameHasBeenSet() const { return m_businessNameHasBeenSet; }
    inline void SetBusinessName(const Aws::String& value) { m_businessNameHasBeenSet = true; m_businessName = value; }
    inline void SetBusinessName(Aws::String&& value) { m_businessNameHasBeenSet = true; m_businessName = std::move(value); }
    inline void SetBusinessName(const char* value) { m_businessNameHasBeenSet = true; m_businessName.assign(value); }
    inline Profile& WithBusinessName(const Aws::String& value) { SetBusinessName(value); return *this;}
    inline Profile& WithBusinessName(Aws::String&& value) { SetBusinessName(std::move(value)); return *this;}
    inline Profile& WithBusinessName(const char* value) { SetBusinessName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer’s first name.</p>
     */
    inline const Aws::String& GetFirstName() const{ return m_firstName; }
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }
    inline void SetFirstName(const Aws::String& value) { m_firstNameHasBeenSet = true; m_firstName = value; }
    inline void SetFirstName(Aws::String&& value) { m_firstNameHasBeenSet = true; m_firstName = std::move(value); }
    inline void SetFirstName(const char* value) { m_firstNameHasBeenSet = true; m_firstName.assign(value); }
    inline Profile& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}
    inline Profile& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}
    inline Profile& WithFirstName(const char* value) { SetFirstName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer’s middle name.</p>
     */
    inline const Aws::String& GetMiddleName() const{ return m_middleName; }
    inline bool MiddleNameHasBeenSet() const { return m_middleNameHasBeenSet; }
    inline void SetMiddleName(const Aws::String& value) { m_middleNameHasBeenSet = true; m_middleName = value; }
    inline void SetMiddleName(Aws::String&& value) { m_middleNameHasBeenSet = true; m_middleName = std::move(value); }
    inline void SetMiddleName(const char* value) { m_middleNameHasBeenSet = true; m_middleName.assign(value); }
    inline Profile& WithMiddleName(const Aws::String& value) { SetMiddleName(value); return *this;}
    inline Profile& WithMiddleName(Aws::String&& value) { SetMiddleName(std::move(value)); return *this;}
    inline Profile& WithMiddleName(const char* value) { SetMiddleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer’s last name.</p>
     */
    inline const Aws::String& GetLastName() const{ return m_lastName; }
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }
    inline void SetLastName(const Aws::String& value) { m_lastNameHasBeenSet = true; m_lastName = value; }
    inline void SetLastName(Aws::String&& value) { m_lastNameHasBeenSet = true; m_lastName = std::move(value); }
    inline void SetLastName(const char* value) { m_lastNameHasBeenSet = true; m_lastName.assign(value); }
    inline Profile& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}
    inline Profile& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}
    inline Profile& WithLastName(const char* value) { SetLastName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer’s birth date. </p>
     */
    inline const Aws::String& GetBirthDate() const{ return m_birthDate; }
    inline bool BirthDateHasBeenSet() const { return m_birthDateHasBeenSet; }
    inline void SetBirthDate(const Aws::String& value) { m_birthDateHasBeenSet = true; m_birthDate = value; }
    inline void SetBirthDate(Aws::String&& value) { m_birthDateHasBeenSet = true; m_birthDate = std::move(value); }
    inline void SetBirthDate(const char* value) { m_birthDateHasBeenSet = true; m_birthDate.assign(value); }
    inline Profile& WithBirthDate(const Aws::String& value) { SetBirthDate(value); return *this;}
    inline Profile& WithBirthDate(Aws::String&& value) { SetBirthDate(std::move(value)); return *this;}
    inline Profile& WithBirthDate(const char* value) { SetBirthDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The gender with which the customer identifies. </p>
     */
    inline const Gender& GetGender() const{ return m_gender; }
    inline bool GenderHasBeenSet() const { return m_genderHasBeenSet; }
    inline void SetGender(const Gender& value) { m_genderHasBeenSet = true; m_gender = value; }
    inline void SetGender(Gender&& value) { m_genderHasBeenSet = true; m_gender = std::move(value); }
    inline Profile& WithGender(const Gender& value) { SetGender(value); return *this;}
    inline Profile& WithGender(Gender&& value) { SetGender(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer's phone number, which has not been specified as a mobile, home,
     * or business number.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }
    inline Profile& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}
    inline Profile& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}
    inline Profile& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer’s mobile phone number.</p>
     */
    inline const Aws::String& GetMobilePhoneNumber() const{ return m_mobilePhoneNumber; }
    inline bool MobilePhoneNumberHasBeenSet() const { return m_mobilePhoneNumberHasBeenSet; }
    inline void SetMobilePhoneNumber(const Aws::String& value) { m_mobilePhoneNumberHasBeenSet = true; m_mobilePhoneNumber = value; }
    inline void SetMobilePhoneNumber(Aws::String&& value) { m_mobilePhoneNumberHasBeenSet = true; m_mobilePhoneNumber = std::move(value); }
    inline void SetMobilePhoneNumber(const char* value) { m_mobilePhoneNumberHasBeenSet = true; m_mobilePhoneNumber.assign(value); }
    inline Profile& WithMobilePhoneNumber(const Aws::String& value) { SetMobilePhoneNumber(value); return *this;}
    inline Profile& WithMobilePhoneNumber(Aws::String&& value) { SetMobilePhoneNumber(std::move(value)); return *this;}
    inline Profile& WithMobilePhoneNumber(const char* value) { SetMobilePhoneNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer’s home phone number.</p>
     */
    inline const Aws::String& GetHomePhoneNumber() const{ return m_homePhoneNumber; }
    inline bool HomePhoneNumberHasBeenSet() const { return m_homePhoneNumberHasBeenSet; }
    inline void SetHomePhoneNumber(const Aws::String& value) { m_homePhoneNumberHasBeenSet = true; m_homePhoneNumber = value; }
    inline void SetHomePhoneNumber(Aws::String&& value) { m_homePhoneNumberHasBeenSet = true; m_homePhoneNumber = std::move(value); }
    inline void SetHomePhoneNumber(const char* value) { m_homePhoneNumberHasBeenSet = true; m_homePhoneNumber.assign(value); }
    inline Profile& WithHomePhoneNumber(const Aws::String& value) { SetHomePhoneNumber(value); return *this;}
    inline Profile& WithHomePhoneNumber(Aws::String&& value) { SetHomePhoneNumber(std::move(value)); return *this;}
    inline Profile& WithHomePhoneNumber(const char* value) { SetHomePhoneNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer’s home phone number.</p>
     */
    inline const Aws::String& GetBusinessPhoneNumber() const{ return m_businessPhoneNumber; }
    inline bool BusinessPhoneNumberHasBeenSet() const { return m_businessPhoneNumberHasBeenSet; }
    inline void SetBusinessPhoneNumber(const Aws::String& value) { m_businessPhoneNumberHasBeenSet = true; m_businessPhoneNumber = value; }
    inline void SetBusinessPhoneNumber(Aws::String&& value) { m_businessPhoneNumberHasBeenSet = true; m_businessPhoneNumber = std::move(value); }
    inline void SetBusinessPhoneNumber(const char* value) { m_businessPhoneNumberHasBeenSet = true; m_businessPhoneNumber.assign(value); }
    inline Profile& WithBusinessPhoneNumber(const Aws::String& value) { SetBusinessPhoneNumber(value); return *this;}
    inline Profile& WithBusinessPhoneNumber(Aws::String&& value) { SetBusinessPhoneNumber(std::move(value)); return *this;}
    inline Profile& WithBusinessPhoneNumber(const char* value) { SetBusinessPhoneNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer’s email address, which has not been specified as a personal or
     * business address. </p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }
    inline Profile& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}
    inline Profile& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}
    inline Profile& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer’s personal email address.</p>
     */
    inline const Aws::String& GetPersonalEmailAddress() const{ return m_personalEmailAddress; }
    inline bool PersonalEmailAddressHasBeenSet() const { return m_personalEmailAddressHasBeenSet; }
    inline void SetPersonalEmailAddress(const Aws::String& value) { m_personalEmailAddressHasBeenSet = true; m_personalEmailAddress = value; }
    inline void SetPersonalEmailAddress(Aws::String&& value) { m_personalEmailAddressHasBeenSet = true; m_personalEmailAddress = std::move(value); }
    inline void SetPersonalEmailAddress(const char* value) { m_personalEmailAddressHasBeenSet = true; m_personalEmailAddress.assign(value); }
    inline Profile& WithPersonalEmailAddress(const Aws::String& value) { SetPersonalEmailAddress(value); return *this;}
    inline Profile& WithPersonalEmailAddress(Aws::String&& value) { SetPersonalEmailAddress(std::move(value)); return *this;}
    inline Profile& WithPersonalEmailAddress(const char* value) { SetPersonalEmailAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer’s business email address.</p>
     */
    inline const Aws::String& GetBusinessEmailAddress() const{ return m_businessEmailAddress; }
    inline bool BusinessEmailAddressHasBeenSet() const { return m_businessEmailAddressHasBeenSet; }
    inline void SetBusinessEmailAddress(const Aws::String& value) { m_businessEmailAddressHasBeenSet = true; m_businessEmailAddress = value; }
    inline void SetBusinessEmailAddress(Aws::String&& value) { m_businessEmailAddressHasBeenSet = true; m_businessEmailAddress = std::move(value); }
    inline void SetBusinessEmailAddress(const char* value) { m_businessEmailAddressHasBeenSet = true; m_businessEmailAddress.assign(value); }
    inline Profile& WithBusinessEmailAddress(const Aws::String& value) { SetBusinessEmailAddress(value); return *this;}
    inline Profile& WithBusinessEmailAddress(Aws::String&& value) { SetBusinessEmailAddress(std::move(value)); return *this;}
    inline Profile& WithBusinessEmailAddress(const char* value) { SetBusinessEmailAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A generic address associated with the customer that is not mailing, shipping,
     * or billing.</p>
     */
    inline const Address& GetAddress() const{ return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    inline void SetAddress(const Address& value) { m_addressHasBeenSet = true; m_address = value; }
    inline void SetAddress(Address&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }
    inline Profile& WithAddress(const Address& value) { SetAddress(value); return *this;}
    inline Profile& WithAddress(Address&& value) { SetAddress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer’s shipping address.</p>
     */
    inline const Address& GetShippingAddress() const{ return m_shippingAddress; }
    inline bool ShippingAddressHasBeenSet() const { return m_shippingAddressHasBeenSet; }
    inline void SetShippingAddress(const Address& value) { m_shippingAddressHasBeenSet = true; m_shippingAddress = value; }
    inline void SetShippingAddress(Address&& value) { m_shippingAddressHasBeenSet = true; m_shippingAddress = std::move(value); }
    inline Profile& WithShippingAddress(const Address& value) { SetShippingAddress(value); return *this;}
    inline Profile& WithShippingAddress(Address&& value) { SetShippingAddress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer’s mailing address.</p>
     */
    inline const Address& GetMailingAddress() const{ return m_mailingAddress; }
    inline bool MailingAddressHasBeenSet() const { return m_mailingAddressHasBeenSet; }
    inline void SetMailingAddress(const Address& value) { m_mailingAddressHasBeenSet = true; m_mailingAddress = value; }
    inline void SetMailingAddress(Address&& value) { m_mailingAddressHasBeenSet = true; m_mailingAddress = std::move(value); }
    inline Profile& WithMailingAddress(const Address& value) { SetMailingAddress(value); return *this;}
    inline Profile& WithMailingAddress(Address&& value) { SetMailingAddress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer’s billing address.</p>
     */
    inline const Address& GetBillingAddress() const{ return m_billingAddress; }
    inline bool BillingAddressHasBeenSet() const { return m_billingAddressHasBeenSet; }
    inline void SetBillingAddress(const Address& value) { m_billingAddressHasBeenSet = true; m_billingAddress = value; }
    inline void SetBillingAddress(Address&& value) { m_billingAddressHasBeenSet = true; m_billingAddress = std::move(value); }
    inline Profile& WithBillingAddress(const Address& value) { SetBillingAddress(value); return *this;}
    inline Profile& WithBillingAddress(Address&& value) { SetBillingAddress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key value pair of attributes of a customer profile.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline Profile& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}
    inline Profile& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}
    inline Profile& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    inline Profile& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline Profile& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline Profile& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline Profile& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline Profile& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline Profile& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
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
    inline const Aws::Vector<FoundByKeyValue>& GetFoundByItems() const{ return m_foundByItems; }
    inline bool FoundByItemsHasBeenSet() const { return m_foundByItemsHasBeenSet; }
    inline void SetFoundByItems(const Aws::Vector<FoundByKeyValue>& value) { m_foundByItemsHasBeenSet = true; m_foundByItems = value; }
    inline void SetFoundByItems(Aws::Vector<FoundByKeyValue>&& value) { m_foundByItemsHasBeenSet = true; m_foundByItems = std::move(value); }
    inline Profile& WithFoundByItems(const Aws::Vector<FoundByKeyValue>& value) { SetFoundByItems(value); return *this;}
    inline Profile& WithFoundByItems(Aws::Vector<FoundByKeyValue>&& value) { SetFoundByItems(std::move(value)); return *this;}
    inline Profile& AddFoundByItems(const FoundByKeyValue& value) { m_foundByItemsHasBeenSet = true; m_foundByItems.push_back(value); return *this; }
    inline Profile& AddFoundByItems(FoundByKeyValue&& value) { m_foundByItemsHasBeenSet = true; m_foundByItems.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An alternative to PartyType which accepts any string as input.</p>
     */
    inline const Aws::String& GetPartyTypeString() const{ return m_partyTypeString; }
    inline bool PartyTypeStringHasBeenSet() const { return m_partyTypeStringHasBeenSet; }
    inline void SetPartyTypeString(const Aws::String& value) { m_partyTypeStringHasBeenSet = true; m_partyTypeString = value; }
    inline void SetPartyTypeString(Aws::String&& value) { m_partyTypeStringHasBeenSet = true; m_partyTypeString = std::move(value); }
    inline void SetPartyTypeString(const char* value) { m_partyTypeStringHasBeenSet = true; m_partyTypeString.assign(value); }
    inline Profile& WithPartyTypeString(const Aws::String& value) { SetPartyTypeString(value); return *this;}
    inline Profile& WithPartyTypeString(Aws::String&& value) { SetPartyTypeString(std::move(value)); return *this;}
    inline Profile& WithPartyTypeString(const char* value) { SetPartyTypeString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An alternative to Gender which accepts any string as input.</p>
     */
    inline const Aws::String& GetGenderString() const{ return m_genderString; }
    inline bool GenderStringHasBeenSet() const { return m_genderStringHasBeenSet; }
    inline void SetGenderString(const Aws::String& value) { m_genderStringHasBeenSet = true; m_genderString = value; }
    inline void SetGenderString(Aws::String&& value) { m_genderStringHasBeenSet = true; m_genderString = std::move(value); }
    inline void SetGenderString(const char* value) { m_genderStringHasBeenSet = true; m_genderString.assign(value); }
    inline Profile& WithGenderString(const Aws::String& value) { SetGenderString(value); return *this;}
    inline Profile& WithGenderString(Aws::String&& value) { SetGenderString(std::move(value)); return *this;}
    inline Profile& WithGenderString(const char* value) { SetGenderString(value); return *this;}
    ///@}
  private:

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    Aws::String m_accountNumber;
    bool m_accountNumberHasBeenSet = false;

    Aws::String m_additionalInformation;
    bool m_additionalInformationHasBeenSet = false;

    PartyType m_partyType;
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

    Gender m_gender;
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
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
