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
    AWS_CUSTOMERPROFILES_API CreateProfileRequest();

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
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline CreateProfileRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline CreateProfileRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline CreateProfileRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}
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
    inline CreateProfileRequest& WithAccountNumber(const Aws::String& value) { SetAccountNumber(value); return *this;}
    inline CreateProfileRequest& WithAccountNumber(Aws::String&& value) { SetAccountNumber(std::move(value)); return *this;}
    inline CreateProfileRequest& WithAccountNumber(const char* value) { SetAccountNumber(value); return *this;}
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
    inline CreateProfileRequest& WithAdditionalInformation(const Aws::String& value) { SetAdditionalInformation(value); return *this;}
    inline CreateProfileRequest& WithAdditionalInformation(Aws::String&& value) { SetAdditionalInformation(std::move(value)); return *this;}
    inline CreateProfileRequest& WithAdditionalInformation(const char* value) { SetAdditionalInformation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of profile used to describe the customer.</p>
     */
    inline const PartyType& GetPartyType() const{ return m_partyType; }
    inline bool PartyTypeHasBeenSet() const { return m_partyTypeHasBeenSet; }
    inline void SetPartyType(const PartyType& value) { m_partyTypeHasBeenSet = true; m_partyType = value; }
    inline void SetPartyType(PartyType&& value) { m_partyTypeHasBeenSet = true; m_partyType = std::move(value); }
    inline CreateProfileRequest& WithPartyType(const PartyType& value) { SetPartyType(value); return *this;}
    inline CreateProfileRequest& WithPartyType(PartyType&& value) { SetPartyType(std::move(value)); return *this;}
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
    inline CreateProfileRequest& WithBusinessName(const Aws::String& value) { SetBusinessName(value); return *this;}
    inline CreateProfileRequest& WithBusinessName(Aws::String&& value) { SetBusinessName(std::move(value)); return *this;}
    inline CreateProfileRequest& WithBusinessName(const char* value) { SetBusinessName(value); return *this;}
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
    inline CreateProfileRequest& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}
    inline CreateProfileRequest& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}
    inline CreateProfileRequest& WithFirstName(const char* value) { SetFirstName(value); return *this;}
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
    inline CreateProfileRequest& WithMiddleName(const Aws::String& value) { SetMiddleName(value); return *this;}
    inline CreateProfileRequest& WithMiddleName(Aws::String&& value) { SetMiddleName(std::move(value)); return *this;}
    inline CreateProfileRequest& WithMiddleName(const char* value) { SetMiddleName(value); return *this;}
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
    inline CreateProfileRequest& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}
    inline CreateProfileRequest& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}
    inline CreateProfileRequest& WithLastName(const char* value) { SetLastName(value); return *this;}
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
    inline CreateProfileRequest& WithBirthDate(const Aws::String& value) { SetBirthDate(value); return *this;}
    inline CreateProfileRequest& WithBirthDate(Aws::String&& value) { SetBirthDate(std::move(value)); return *this;}
    inline CreateProfileRequest& WithBirthDate(const char* value) { SetBirthDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The gender with which the customer identifies. </p>
     */
    inline const Gender& GetGender() const{ return m_gender; }
    inline bool GenderHasBeenSet() const { return m_genderHasBeenSet; }
    inline void SetGender(const Gender& value) { m_genderHasBeenSet = true; m_gender = value; }
    inline void SetGender(Gender&& value) { m_genderHasBeenSet = true; m_gender = std::move(value); }
    inline CreateProfileRequest& WithGender(const Gender& value) { SetGender(value); return *this;}
    inline CreateProfileRequest& WithGender(Gender&& value) { SetGender(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer’s phone number, which has not been specified as a mobile, home,
     * or business number. </p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }
    inline CreateProfileRequest& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}
    inline CreateProfileRequest& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}
    inline CreateProfileRequest& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}
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
    inline CreateProfileRequest& WithMobilePhoneNumber(const Aws::String& value) { SetMobilePhoneNumber(value); return *this;}
    inline CreateProfileRequest& WithMobilePhoneNumber(Aws::String&& value) { SetMobilePhoneNumber(std::move(value)); return *this;}
    inline CreateProfileRequest& WithMobilePhoneNumber(const char* value) { SetMobilePhoneNumber(value); return *this;}
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
    inline CreateProfileRequest& WithHomePhoneNumber(const Aws::String& value) { SetHomePhoneNumber(value); return *this;}
    inline CreateProfileRequest& WithHomePhoneNumber(Aws::String&& value) { SetHomePhoneNumber(std::move(value)); return *this;}
    inline CreateProfileRequest& WithHomePhoneNumber(const char* value) { SetHomePhoneNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer’s business phone number.</p>
     */
    inline const Aws::String& GetBusinessPhoneNumber() const{ return m_businessPhoneNumber; }
    inline bool BusinessPhoneNumberHasBeenSet() const { return m_businessPhoneNumberHasBeenSet; }
    inline void SetBusinessPhoneNumber(const Aws::String& value) { m_businessPhoneNumberHasBeenSet = true; m_businessPhoneNumber = value; }
    inline void SetBusinessPhoneNumber(Aws::String&& value) { m_businessPhoneNumberHasBeenSet = true; m_businessPhoneNumber = std::move(value); }
    inline void SetBusinessPhoneNumber(const char* value) { m_businessPhoneNumberHasBeenSet = true; m_businessPhoneNumber.assign(value); }
    inline CreateProfileRequest& WithBusinessPhoneNumber(const Aws::String& value) { SetBusinessPhoneNumber(value); return *this;}
    inline CreateProfileRequest& WithBusinessPhoneNumber(Aws::String&& value) { SetBusinessPhoneNumber(std::move(value)); return *this;}
    inline CreateProfileRequest& WithBusinessPhoneNumber(const char* value) { SetBusinessPhoneNumber(value); return *this;}
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
    inline CreateProfileRequest& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}
    inline CreateProfileRequest& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}
    inline CreateProfileRequest& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}
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
    inline CreateProfileRequest& WithPersonalEmailAddress(const Aws::String& value) { SetPersonalEmailAddress(value); return *this;}
    inline CreateProfileRequest& WithPersonalEmailAddress(Aws::String&& value) { SetPersonalEmailAddress(std::move(value)); return *this;}
    inline CreateProfileRequest& WithPersonalEmailAddress(const char* value) { SetPersonalEmailAddress(value); return *this;}
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
    inline CreateProfileRequest& WithBusinessEmailAddress(const Aws::String& value) { SetBusinessEmailAddress(value); return *this;}
    inline CreateProfileRequest& WithBusinessEmailAddress(Aws::String&& value) { SetBusinessEmailAddress(std::move(value)); return *this;}
    inline CreateProfileRequest& WithBusinessEmailAddress(const char* value) { SetBusinessEmailAddress(value); return *this;}
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
    inline CreateProfileRequest& WithAddress(const Address& value) { SetAddress(value); return *this;}
    inline CreateProfileRequest& WithAddress(Address&& value) { SetAddress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer’s shipping address.</p>
     */
    inline const Address& GetShippingAddress() const{ return m_shippingAddress; }
    inline bool ShippingAddressHasBeenSet() const { return m_shippingAddressHasBeenSet; }
    inline void SetShippingAddress(const Address& value) { m_shippingAddressHasBeenSet = true; m_shippingAddress = value; }
    inline void SetShippingAddress(Address&& value) { m_shippingAddressHasBeenSet = true; m_shippingAddress = std::move(value); }
    inline CreateProfileRequest& WithShippingAddress(const Address& value) { SetShippingAddress(value); return *this;}
    inline CreateProfileRequest& WithShippingAddress(Address&& value) { SetShippingAddress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer’s mailing address.</p>
     */
    inline const Address& GetMailingAddress() const{ return m_mailingAddress; }
    inline bool MailingAddressHasBeenSet() const { return m_mailingAddressHasBeenSet; }
    inline void SetMailingAddress(const Address& value) { m_mailingAddressHasBeenSet = true; m_mailingAddress = value; }
    inline void SetMailingAddress(Address&& value) { m_mailingAddressHasBeenSet = true; m_mailingAddress = std::move(value); }
    inline CreateProfileRequest& WithMailingAddress(const Address& value) { SetMailingAddress(value); return *this;}
    inline CreateProfileRequest& WithMailingAddress(Address&& value) { SetMailingAddress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer’s billing address.</p>
     */
    inline const Address& GetBillingAddress() const{ return m_billingAddress; }
    inline bool BillingAddressHasBeenSet() const { return m_billingAddressHasBeenSet; }
    inline void SetBillingAddress(const Address& value) { m_billingAddressHasBeenSet = true; m_billingAddress = value; }
    inline void SetBillingAddress(Address&& value) { m_billingAddressHasBeenSet = true; m_billingAddress = std::move(value); }
    inline CreateProfileRequest& WithBillingAddress(const Address& value) { SetBillingAddress(value); return *this;}
    inline CreateProfileRequest& WithBillingAddress(Address&& value) { SetBillingAddress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key value pair of attributes of a customer profile.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline CreateProfileRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}
    inline CreateProfileRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}
    inline CreateProfileRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    inline CreateProfileRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline CreateProfileRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline CreateProfileRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateProfileRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline CreateProfileRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline CreateProfileRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An alternative to <code>PartyType</code> which accepts any string as
     * input.</p>
     */
    inline const Aws::String& GetPartyTypeString() const{ return m_partyTypeString; }
    inline bool PartyTypeStringHasBeenSet() const { return m_partyTypeStringHasBeenSet; }
    inline void SetPartyTypeString(const Aws::String& value) { m_partyTypeStringHasBeenSet = true; m_partyTypeString = value; }
    inline void SetPartyTypeString(Aws::String&& value) { m_partyTypeStringHasBeenSet = true; m_partyTypeString = std::move(value); }
    inline void SetPartyTypeString(const char* value) { m_partyTypeStringHasBeenSet = true; m_partyTypeString.assign(value); }
    inline CreateProfileRequest& WithPartyTypeString(const Aws::String& value) { SetPartyTypeString(value); return *this;}
    inline CreateProfileRequest& WithPartyTypeString(Aws::String&& value) { SetPartyTypeString(std::move(value)); return *this;}
    inline CreateProfileRequest& WithPartyTypeString(const char* value) { SetPartyTypeString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An alternative to <code>Gender</code> which accepts any string as input.</p>
     */
    inline const Aws::String& GetGenderString() const{ return m_genderString; }
    inline bool GenderStringHasBeenSet() const { return m_genderStringHasBeenSet; }
    inline void SetGenderString(const Aws::String& value) { m_genderStringHasBeenSet = true; m_genderString = value; }
    inline void SetGenderString(Aws::String&& value) { m_genderStringHasBeenSet = true; m_genderString = std::move(value); }
    inline void SetGenderString(const char* value) { m_genderStringHasBeenSet = true; m_genderString.assign(value); }
    inline CreateProfileRequest& WithGenderString(const Aws::String& value) { SetGenderString(value); return *this;}
    inline CreateProfileRequest& WithGenderString(Aws::String&& value) { SetGenderString(std::move(value)); return *this;}
    inline CreateProfileRequest& WithGenderString(const char* value) { SetGenderString(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

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

    Aws::String m_partyTypeString;
    bool m_partyTypeStringHasBeenSet = false;

    Aws::String m_genderString;
    bool m_genderStringHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
