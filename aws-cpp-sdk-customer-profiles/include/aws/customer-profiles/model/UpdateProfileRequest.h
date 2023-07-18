﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/PartyType.h>
#include <aws/customer-profiles/model/Gender.h>
#include <aws/customer-profiles/model/UpdateAddress.h>
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
  class AWS_CUSTOMERPROFILES_API UpdateProfileRequest : public CustomerProfilesRequest
  {
  public:
    UpdateProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProfile"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline UpdateProfileRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline UpdateProfileRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline UpdateProfileRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }

    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }

    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline void SetProfileId(const Aws::String& value) { m_profileIdHasBeenSet = true; m_profileId = value; }

    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline void SetProfileId(Aws::String&& value) { m_profileIdHasBeenSet = true; m_profileId = std::move(value); }

    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline void SetProfileId(const char* value) { m_profileIdHasBeenSet = true; m_profileId.assign(value); }

    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline UpdateProfileRequest& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}

    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline UpdateProfileRequest& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline UpdateProfileRequest& WithProfileId(const char* value) { SetProfileId(value); return *this;}


    /**
     * <p>Any additional information relevant to the customer’s profile.</p>
     */
    inline const Aws::String& GetAdditionalInformation() const{ return m_additionalInformation; }

    /**
     * <p>Any additional information relevant to the customer’s profile.</p>
     */
    inline bool AdditionalInformationHasBeenSet() const { return m_additionalInformationHasBeenSet; }

    /**
     * <p>Any additional information relevant to the customer’s profile.</p>
     */
    inline void SetAdditionalInformation(const Aws::String& value) { m_additionalInformationHasBeenSet = true; m_additionalInformation = value; }

    /**
     * <p>Any additional information relevant to the customer’s profile.</p>
     */
    inline void SetAdditionalInformation(Aws::String&& value) { m_additionalInformationHasBeenSet = true; m_additionalInformation = std::move(value); }

    /**
     * <p>Any additional information relevant to the customer’s profile.</p>
     */
    inline void SetAdditionalInformation(const char* value) { m_additionalInformationHasBeenSet = true; m_additionalInformation.assign(value); }

    /**
     * <p>Any additional information relevant to the customer’s profile.</p>
     */
    inline UpdateProfileRequest& WithAdditionalInformation(const Aws::String& value) { SetAdditionalInformation(value); return *this;}

    /**
     * <p>Any additional information relevant to the customer’s profile.</p>
     */
    inline UpdateProfileRequest& WithAdditionalInformation(Aws::String&& value) { SetAdditionalInformation(std::move(value)); return *this;}

    /**
     * <p>Any additional information relevant to the customer’s profile.</p>
     */
    inline UpdateProfileRequest& WithAdditionalInformation(const char* value) { SetAdditionalInformation(value); return *this;}


    /**
     * <p>A unique account number that you have given to the customer.</p>
     */
    inline const Aws::String& GetAccountNumber() const{ return m_accountNumber; }

    /**
     * <p>A unique account number that you have given to the customer.</p>
     */
    inline bool AccountNumberHasBeenSet() const { return m_accountNumberHasBeenSet; }

    /**
     * <p>A unique account number that you have given to the customer.</p>
     */
    inline void SetAccountNumber(const Aws::String& value) { m_accountNumberHasBeenSet = true; m_accountNumber = value; }

    /**
     * <p>A unique account number that you have given to the customer.</p>
     */
    inline void SetAccountNumber(Aws::String&& value) { m_accountNumberHasBeenSet = true; m_accountNumber = std::move(value); }

    /**
     * <p>A unique account number that you have given to the customer.</p>
     */
    inline void SetAccountNumber(const char* value) { m_accountNumberHasBeenSet = true; m_accountNumber.assign(value); }

    /**
     * <p>A unique account number that you have given to the customer.</p>
     */
    inline UpdateProfileRequest& WithAccountNumber(const Aws::String& value) { SetAccountNumber(value); return *this;}

    /**
     * <p>A unique account number that you have given to the customer.</p>
     */
    inline UpdateProfileRequest& WithAccountNumber(Aws::String&& value) { SetAccountNumber(std::move(value)); return *this;}

    /**
     * <p>A unique account number that you have given to the customer.</p>
     */
    inline UpdateProfileRequest& WithAccountNumber(const char* value) { SetAccountNumber(value); return *this;}


    /**
     * <p>The type of profile used to describe the customer.</p>
     */
    inline const PartyType& GetPartyType() const{ return m_partyType; }

    /**
     * <p>The type of profile used to describe the customer.</p>
     */
    inline bool PartyTypeHasBeenSet() const { return m_partyTypeHasBeenSet; }

    /**
     * <p>The type of profile used to describe the customer.</p>
     */
    inline void SetPartyType(const PartyType& value) { m_partyTypeHasBeenSet = true; m_partyType = value; }

    /**
     * <p>The type of profile used to describe the customer.</p>
     */
    inline void SetPartyType(PartyType&& value) { m_partyTypeHasBeenSet = true; m_partyType = std::move(value); }

    /**
     * <p>The type of profile used to describe the customer.</p>
     */
    inline UpdateProfileRequest& WithPartyType(const PartyType& value) { SetPartyType(value); return *this;}

    /**
     * <p>The type of profile used to describe the customer.</p>
     */
    inline UpdateProfileRequest& WithPartyType(PartyType&& value) { SetPartyType(std::move(value)); return *this;}


    /**
     * <p>The name of the customer’s business.</p>
     */
    inline const Aws::String& GetBusinessName() const{ return m_businessName; }

    /**
     * <p>The name of the customer’s business.</p>
     */
    inline bool BusinessNameHasBeenSet() const { return m_businessNameHasBeenSet; }

    /**
     * <p>The name of the customer’s business.</p>
     */
    inline void SetBusinessName(const Aws::String& value) { m_businessNameHasBeenSet = true; m_businessName = value; }

    /**
     * <p>The name of the customer’s business.</p>
     */
    inline void SetBusinessName(Aws::String&& value) { m_businessNameHasBeenSet = true; m_businessName = std::move(value); }

    /**
     * <p>The name of the customer’s business.</p>
     */
    inline void SetBusinessName(const char* value) { m_businessNameHasBeenSet = true; m_businessName.assign(value); }

    /**
     * <p>The name of the customer’s business.</p>
     */
    inline UpdateProfileRequest& WithBusinessName(const Aws::String& value) { SetBusinessName(value); return *this;}

    /**
     * <p>The name of the customer’s business.</p>
     */
    inline UpdateProfileRequest& WithBusinessName(Aws::String&& value) { SetBusinessName(std::move(value)); return *this;}

    /**
     * <p>The name of the customer’s business.</p>
     */
    inline UpdateProfileRequest& WithBusinessName(const char* value) { SetBusinessName(value); return *this;}


    /**
     * <p>The customer’s first name.</p>
     */
    inline const Aws::String& GetFirstName() const{ return m_firstName; }

    /**
     * <p>The customer’s first name.</p>
     */
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }

    /**
     * <p>The customer’s first name.</p>
     */
    inline void SetFirstName(const Aws::String& value) { m_firstNameHasBeenSet = true; m_firstName = value; }

    /**
     * <p>The customer’s first name.</p>
     */
    inline void SetFirstName(Aws::String&& value) { m_firstNameHasBeenSet = true; m_firstName = std::move(value); }

    /**
     * <p>The customer’s first name.</p>
     */
    inline void SetFirstName(const char* value) { m_firstNameHasBeenSet = true; m_firstName.assign(value); }

    /**
     * <p>The customer’s first name.</p>
     */
    inline UpdateProfileRequest& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}

    /**
     * <p>The customer’s first name.</p>
     */
    inline UpdateProfileRequest& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}

    /**
     * <p>The customer’s first name.</p>
     */
    inline UpdateProfileRequest& WithFirstName(const char* value) { SetFirstName(value); return *this;}


    /**
     * <p>The customer’s middle name.</p>
     */
    inline const Aws::String& GetMiddleName() const{ return m_middleName; }

    /**
     * <p>The customer’s middle name.</p>
     */
    inline bool MiddleNameHasBeenSet() const { return m_middleNameHasBeenSet; }

    /**
     * <p>The customer’s middle name.</p>
     */
    inline void SetMiddleName(const Aws::String& value) { m_middleNameHasBeenSet = true; m_middleName = value; }

    /**
     * <p>The customer’s middle name.</p>
     */
    inline void SetMiddleName(Aws::String&& value) { m_middleNameHasBeenSet = true; m_middleName = std::move(value); }

    /**
     * <p>The customer’s middle name.</p>
     */
    inline void SetMiddleName(const char* value) { m_middleNameHasBeenSet = true; m_middleName.assign(value); }

    /**
     * <p>The customer’s middle name.</p>
     */
    inline UpdateProfileRequest& WithMiddleName(const Aws::String& value) { SetMiddleName(value); return *this;}

    /**
     * <p>The customer’s middle name.</p>
     */
    inline UpdateProfileRequest& WithMiddleName(Aws::String&& value) { SetMiddleName(std::move(value)); return *this;}

    /**
     * <p>The customer’s middle name.</p>
     */
    inline UpdateProfileRequest& WithMiddleName(const char* value) { SetMiddleName(value); return *this;}


    /**
     * <p>The customer’s last name.</p>
     */
    inline const Aws::String& GetLastName() const{ return m_lastName; }

    /**
     * <p>The customer’s last name.</p>
     */
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }

    /**
     * <p>The customer’s last name.</p>
     */
    inline void SetLastName(const Aws::String& value) { m_lastNameHasBeenSet = true; m_lastName = value; }

    /**
     * <p>The customer’s last name.</p>
     */
    inline void SetLastName(Aws::String&& value) { m_lastNameHasBeenSet = true; m_lastName = std::move(value); }

    /**
     * <p>The customer’s last name.</p>
     */
    inline void SetLastName(const char* value) { m_lastNameHasBeenSet = true; m_lastName.assign(value); }

    /**
     * <p>The customer’s last name.</p>
     */
    inline UpdateProfileRequest& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}

    /**
     * <p>The customer’s last name.</p>
     */
    inline UpdateProfileRequest& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}

    /**
     * <p>The customer’s last name.</p>
     */
    inline UpdateProfileRequest& WithLastName(const char* value) { SetLastName(value); return *this;}


    /**
     * <p>The customer’s birth date. </p>
     */
    inline const Aws::String& GetBirthDate() const{ return m_birthDate; }

    /**
     * <p>The customer’s birth date. </p>
     */
    inline bool BirthDateHasBeenSet() const { return m_birthDateHasBeenSet; }

    /**
     * <p>The customer’s birth date. </p>
     */
    inline void SetBirthDate(const Aws::String& value) { m_birthDateHasBeenSet = true; m_birthDate = value; }

    /**
     * <p>The customer’s birth date. </p>
     */
    inline void SetBirthDate(Aws::String&& value) { m_birthDateHasBeenSet = true; m_birthDate = std::move(value); }

    /**
     * <p>The customer’s birth date. </p>
     */
    inline void SetBirthDate(const char* value) { m_birthDateHasBeenSet = true; m_birthDate.assign(value); }

    /**
     * <p>The customer’s birth date. </p>
     */
    inline UpdateProfileRequest& WithBirthDate(const Aws::String& value) { SetBirthDate(value); return *this;}

    /**
     * <p>The customer’s birth date. </p>
     */
    inline UpdateProfileRequest& WithBirthDate(Aws::String&& value) { SetBirthDate(std::move(value)); return *this;}

    /**
     * <p>The customer’s birth date. </p>
     */
    inline UpdateProfileRequest& WithBirthDate(const char* value) { SetBirthDate(value); return *this;}


    /**
     * <p>The gender with which the customer identifies. </p>
     */
    inline const Gender& GetGender() const{ return m_gender; }

    /**
     * <p>The gender with which the customer identifies. </p>
     */
    inline bool GenderHasBeenSet() const { return m_genderHasBeenSet; }

    /**
     * <p>The gender with which the customer identifies. </p>
     */
    inline void SetGender(const Gender& value) { m_genderHasBeenSet = true; m_gender = value; }

    /**
     * <p>The gender with which the customer identifies. </p>
     */
    inline void SetGender(Gender&& value) { m_genderHasBeenSet = true; m_gender = std::move(value); }

    /**
     * <p>The gender with which the customer identifies. </p>
     */
    inline UpdateProfileRequest& WithGender(const Gender& value) { SetGender(value); return *this;}

    /**
     * <p>The gender with which the customer identifies. </p>
     */
    inline UpdateProfileRequest& WithGender(Gender&& value) { SetGender(std::move(value)); return *this;}


    /**
     * <p>The customer’s phone number, which has not been specified as a mobile, home,
     * or business number. </p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }

    /**
     * <p>The customer’s phone number, which has not been specified as a mobile, home,
     * or business number. </p>
     */
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }

    /**
     * <p>The customer’s phone number, which has not been specified as a mobile, home,
     * or business number. </p>
     */
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }

    /**
     * <p>The customer’s phone number, which has not been specified as a mobile, home,
     * or business number. </p>
     */
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }

    /**
     * <p>The customer’s phone number, which has not been specified as a mobile, home,
     * or business number. </p>
     */
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }

    /**
     * <p>The customer’s phone number, which has not been specified as a mobile, home,
     * or business number. </p>
     */
    inline UpdateProfileRequest& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}

    /**
     * <p>The customer’s phone number, which has not been specified as a mobile, home,
     * or business number. </p>
     */
    inline UpdateProfileRequest& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The customer’s phone number, which has not been specified as a mobile, home,
     * or business number. </p>
     */
    inline UpdateProfileRequest& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}


    /**
     * <p>The customer’s mobile phone number.</p>
     */
    inline const Aws::String& GetMobilePhoneNumber() const{ return m_mobilePhoneNumber; }

    /**
     * <p>The customer’s mobile phone number.</p>
     */
    inline bool MobilePhoneNumberHasBeenSet() const { return m_mobilePhoneNumberHasBeenSet; }

    /**
     * <p>The customer’s mobile phone number.</p>
     */
    inline void SetMobilePhoneNumber(const Aws::String& value) { m_mobilePhoneNumberHasBeenSet = true; m_mobilePhoneNumber = value; }

    /**
     * <p>The customer’s mobile phone number.</p>
     */
    inline void SetMobilePhoneNumber(Aws::String&& value) { m_mobilePhoneNumberHasBeenSet = true; m_mobilePhoneNumber = std::move(value); }

    /**
     * <p>The customer’s mobile phone number.</p>
     */
    inline void SetMobilePhoneNumber(const char* value) { m_mobilePhoneNumberHasBeenSet = true; m_mobilePhoneNumber.assign(value); }

    /**
     * <p>The customer’s mobile phone number.</p>
     */
    inline UpdateProfileRequest& WithMobilePhoneNumber(const Aws::String& value) { SetMobilePhoneNumber(value); return *this;}

    /**
     * <p>The customer’s mobile phone number.</p>
     */
    inline UpdateProfileRequest& WithMobilePhoneNumber(Aws::String&& value) { SetMobilePhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The customer’s mobile phone number.</p>
     */
    inline UpdateProfileRequest& WithMobilePhoneNumber(const char* value) { SetMobilePhoneNumber(value); return *this;}


    /**
     * <p>The customer’s home phone number.</p>
     */
    inline const Aws::String& GetHomePhoneNumber() const{ return m_homePhoneNumber; }

    /**
     * <p>The customer’s home phone number.</p>
     */
    inline bool HomePhoneNumberHasBeenSet() const { return m_homePhoneNumberHasBeenSet; }

    /**
     * <p>The customer’s home phone number.</p>
     */
    inline void SetHomePhoneNumber(const Aws::String& value) { m_homePhoneNumberHasBeenSet = true; m_homePhoneNumber = value; }

    /**
     * <p>The customer’s home phone number.</p>
     */
    inline void SetHomePhoneNumber(Aws::String&& value) { m_homePhoneNumberHasBeenSet = true; m_homePhoneNumber = std::move(value); }

    /**
     * <p>The customer’s home phone number.</p>
     */
    inline void SetHomePhoneNumber(const char* value) { m_homePhoneNumberHasBeenSet = true; m_homePhoneNumber.assign(value); }

    /**
     * <p>The customer’s home phone number.</p>
     */
    inline UpdateProfileRequest& WithHomePhoneNumber(const Aws::String& value) { SetHomePhoneNumber(value); return *this;}

    /**
     * <p>The customer’s home phone number.</p>
     */
    inline UpdateProfileRequest& WithHomePhoneNumber(Aws::String&& value) { SetHomePhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The customer’s home phone number.</p>
     */
    inline UpdateProfileRequest& WithHomePhoneNumber(const char* value) { SetHomePhoneNumber(value); return *this;}


    /**
     * <p>The customer’s business phone number.</p>
     */
    inline const Aws::String& GetBusinessPhoneNumber() const{ return m_businessPhoneNumber; }

    /**
     * <p>The customer’s business phone number.</p>
     */
    inline bool BusinessPhoneNumberHasBeenSet() const { return m_businessPhoneNumberHasBeenSet; }

    /**
     * <p>The customer’s business phone number.</p>
     */
    inline void SetBusinessPhoneNumber(const Aws::String& value) { m_businessPhoneNumberHasBeenSet = true; m_businessPhoneNumber = value; }

    /**
     * <p>The customer’s business phone number.</p>
     */
    inline void SetBusinessPhoneNumber(Aws::String&& value) { m_businessPhoneNumberHasBeenSet = true; m_businessPhoneNumber = std::move(value); }

    /**
     * <p>The customer’s business phone number.</p>
     */
    inline void SetBusinessPhoneNumber(const char* value) { m_businessPhoneNumberHasBeenSet = true; m_businessPhoneNumber.assign(value); }

    /**
     * <p>The customer’s business phone number.</p>
     */
    inline UpdateProfileRequest& WithBusinessPhoneNumber(const Aws::String& value) { SetBusinessPhoneNumber(value); return *this;}

    /**
     * <p>The customer’s business phone number.</p>
     */
    inline UpdateProfileRequest& WithBusinessPhoneNumber(Aws::String&& value) { SetBusinessPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The customer’s business phone number.</p>
     */
    inline UpdateProfileRequest& WithBusinessPhoneNumber(const char* value) { SetBusinessPhoneNumber(value); return *this;}


    /**
     * <p>The customer’s email address, which has not been specified as a personal or
     * business address. </p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }

    /**
     * <p>The customer’s email address, which has not been specified as a personal or
     * business address. </p>
     */
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }

    /**
     * <p>The customer’s email address, which has not been specified as a personal or
     * business address. </p>
     */
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }

    /**
     * <p>The customer’s email address, which has not been specified as a personal or
     * business address. </p>
     */
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }

    /**
     * <p>The customer’s email address, which has not been specified as a personal or
     * business address. </p>
     */
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }

    /**
     * <p>The customer’s email address, which has not been specified as a personal or
     * business address. </p>
     */
    inline UpdateProfileRequest& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}

    /**
     * <p>The customer’s email address, which has not been specified as a personal or
     * business address. </p>
     */
    inline UpdateProfileRequest& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The customer’s email address, which has not been specified as a personal or
     * business address. </p>
     */
    inline UpdateProfileRequest& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}


    /**
     * <p>The customer’s personal email address.</p>
     */
    inline const Aws::String& GetPersonalEmailAddress() const{ return m_personalEmailAddress; }

    /**
     * <p>The customer’s personal email address.</p>
     */
    inline bool PersonalEmailAddressHasBeenSet() const { return m_personalEmailAddressHasBeenSet; }

    /**
     * <p>The customer’s personal email address.</p>
     */
    inline void SetPersonalEmailAddress(const Aws::String& value) { m_personalEmailAddressHasBeenSet = true; m_personalEmailAddress = value; }

    /**
     * <p>The customer’s personal email address.</p>
     */
    inline void SetPersonalEmailAddress(Aws::String&& value) { m_personalEmailAddressHasBeenSet = true; m_personalEmailAddress = std::move(value); }

    /**
     * <p>The customer’s personal email address.</p>
     */
    inline void SetPersonalEmailAddress(const char* value) { m_personalEmailAddressHasBeenSet = true; m_personalEmailAddress.assign(value); }

    /**
     * <p>The customer’s personal email address.</p>
     */
    inline UpdateProfileRequest& WithPersonalEmailAddress(const Aws::String& value) { SetPersonalEmailAddress(value); return *this;}

    /**
     * <p>The customer’s personal email address.</p>
     */
    inline UpdateProfileRequest& WithPersonalEmailAddress(Aws::String&& value) { SetPersonalEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The customer’s personal email address.</p>
     */
    inline UpdateProfileRequest& WithPersonalEmailAddress(const char* value) { SetPersonalEmailAddress(value); return *this;}


    /**
     * <p>The customer’s business email address.</p>
     */
    inline const Aws::String& GetBusinessEmailAddress() const{ return m_businessEmailAddress; }

    /**
     * <p>The customer’s business email address.</p>
     */
    inline bool BusinessEmailAddressHasBeenSet() const { return m_businessEmailAddressHasBeenSet; }

    /**
     * <p>The customer’s business email address.</p>
     */
    inline void SetBusinessEmailAddress(const Aws::String& value) { m_businessEmailAddressHasBeenSet = true; m_businessEmailAddress = value; }

    /**
     * <p>The customer’s business email address.</p>
     */
    inline void SetBusinessEmailAddress(Aws::String&& value) { m_businessEmailAddressHasBeenSet = true; m_businessEmailAddress = std::move(value); }

    /**
     * <p>The customer’s business email address.</p>
     */
    inline void SetBusinessEmailAddress(const char* value) { m_businessEmailAddressHasBeenSet = true; m_businessEmailAddress.assign(value); }

    /**
     * <p>The customer’s business email address.</p>
     */
    inline UpdateProfileRequest& WithBusinessEmailAddress(const Aws::String& value) { SetBusinessEmailAddress(value); return *this;}

    /**
     * <p>The customer’s business email address.</p>
     */
    inline UpdateProfileRequest& WithBusinessEmailAddress(Aws::String&& value) { SetBusinessEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The customer’s business email address.</p>
     */
    inline UpdateProfileRequest& WithBusinessEmailAddress(const char* value) { SetBusinessEmailAddress(value); return *this;}


    /**
     * <p>A generic address associated with the customer that is not mailing, shipping,
     * or billing.</p>
     */
    inline const UpdateAddress& GetAddress() const{ return m_address; }

    /**
     * <p>A generic address associated with the customer that is not mailing, shipping,
     * or billing.</p>
     */
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }

    /**
     * <p>A generic address associated with the customer that is not mailing, shipping,
     * or billing.</p>
     */
    inline void SetAddress(const UpdateAddress& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * <p>A generic address associated with the customer that is not mailing, shipping,
     * or billing.</p>
     */
    inline void SetAddress(UpdateAddress&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }

    /**
     * <p>A generic address associated with the customer that is not mailing, shipping,
     * or billing.</p>
     */
    inline UpdateProfileRequest& WithAddress(const UpdateAddress& value) { SetAddress(value); return *this;}

    /**
     * <p>A generic address associated with the customer that is not mailing, shipping,
     * or billing.</p>
     */
    inline UpdateProfileRequest& WithAddress(UpdateAddress&& value) { SetAddress(std::move(value)); return *this;}


    /**
     * <p>The customer’s shipping address.</p>
     */
    inline const UpdateAddress& GetShippingAddress() const{ return m_shippingAddress; }

    /**
     * <p>The customer’s shipping address.</p>
     */
    inline bool ShippingAddressHasBeenSet() const { return m_shippingAddressHasBeenSet; }

    /**
     * <p>The customer’s shipping address.</p>
     */
    inline void SetShippingAddress(const UpdateAddress& value) { m_shippingAddressHasBeenSet = true; m_shippingAddress = value; }

    /**
     * <p>The customer’s shipping address.</p>
     */
    inline void SetShippingAddress(UpdateAddress&& value) { m_shippingAddressHasBeenSet = true; m_shippingAddress = std::move(value); }

    /**
     * <p>The customer’s shipping address.</p>
     */
    inline UpdateProfileRequest& WithShippingAddress(const UpdateAddress& value) { SetShippingAddress(value); return *this;}

    /**
     * <p>The customer’s shipping address.</p>
     */
    inline UpdateProfileRequest& WithShippingAddress(UpdateAddress&& value) { SetShippingAddress(std::move(value)); return *this;}


    /**
     * <p>The customer’s mailing address.</p>
     */
    inline const UpdateAddress& GetMailingAddress() const{ return m_mailingAddress; }

    /**
     * <p>The customer’s mailing address.</p>
     */
    inline bool MailingAddressHasBeenSet() const { return m_mailingAddressHasBeenSet; }

    /**
     * <p>The customer’s mailing address.</p>
     */
    inline void SetMailingAddress(const UpdateAddress& value) { m_mailingAddressHasBeenSet = true; m_mailingAddress = value; }

    /**
     * <p>The customer’s mailing address.</p>
     */
    inline void SetMailingAddress(UpdateAddress&& value) { m_mailingAddressHasBeenSet = true; m_mailingAddress = std::move(value); }

    /**
     * <p>The customer’s mailing address.</p>
     */
    inline UpdateProfileRequest& WithMailingAddress(const UpdateAddress& value) { SetMailingAddress(value); return *this;}

    /**
     * <p>The customer’s mailing address.</p>
     */
    inline UpdateProfileRequest& WithMailingAddress(UpdateAddress&& value) { SetMailingAddress(std::move(value)); return *this;}


    /**
     * <p>The customer’s billing address.</p>
     */
    inline const UpdateAddress& GetBillingAddress() const{ return m_billingAddress; }

    /**
     * <p>The customer’s billing address.</p>
     */
    inline bool BillingAddressHasBeenSet() const { return m_billingAddressHasBeenSet; }

    /**
     * <p>The customer’s billing address.</p>
     */
    inline void SetBillingAddress(const UpdateAddress& value) { m_billingAddressHasBeenSet = true; m_billingAddress = value; }

    /**
     * <p>The customer’s billing address.</p>
     */
    inline void SetBillingAddress(UpdateAddress&& value) { m_billingAddressHasBeenSet = true; m_billingAddress = std::move(value); }

    /**
     * <p>The customer’s billing address.</p>
     */
    inline UpdateProfileRequest& WithBillingAddress(const UpdateAddress& value) { SetBillingAddress(value); return *this;}

    /**
     * <p>The customer’s billing address.</p>
     */
    inline UpdateProfileRequest& WithBillingAddress(UpdateAddress&& value) { SetBillingAddress(std::move(value)); return *this;}


    /**
     * <p>A key value pair of attributes of a customer profile.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A key value pair of attributes of a customer profile.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>A key value pair of attributes of a customer profile.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A key value pair of attributes of a customer profile.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>A key value pair of attributes of a customer profile.</p>
     */
    inline UpdateProfileRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A key value pair of attributes of a customer profile.</p>
     */
    inline UpdateProfileRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A key value pair of attributes of a customer profile.</p>
     */
    inline UpdateProfileRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>A key value pair of attributes of a customer profile.</p>
     */
    inline UpdateProfileRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key value pair of attributes of a customer profile.</p>
     */
    inline UpdateProfileRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key value pair of attributes of a customer profile.</p>
     */
    inline UpdateProfileRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A key value pair of attributes of a customer profile.</p>
     */
    inline UpdateProfileRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key value pair of attributes of a customer profile.</p>
     */
    inline UpdateProfileRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key value pair of attributes of a customer profile.</p>
     */
    inline UpdateProfileRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet;

    Aws::String m_additionalInformation;
    bool m_additionalInformationHasBeenSet;

    Aws::String m_accountNumber;
    bool m_accountNumberHasBeenSet;

    PartyType m_partyType;
    bool m_partyTypeHasBeenSet;

    Aws::String m_businessName;
    bool m_businessNameHasBeenSet;

    Aws::String m_firstName;
    bool m_firstNameHasBeenSet;

    Aws::String m_middleName;
    bool m_middleNameHasBeenSet;

    Aws::String m_lastName;
    bool m_lastNameHasBeenSet;

    Aws::String m_birthDate;
    bool m_birthDateHasBeenSet;

    Gender m_gender;
    bool m_genderHasBeenSet;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet;

    Aws::String m_mobilePhoneNumber;
    bool m_mobilePhoneNumberHasBeenSet;

    Aws::String m_homePhoneNumber;
    bool m_homePhoneNumberHasBeenSet;

    Aws::String m_businessPhoneNumber;
    bool m_businessPhoneNumberHasBeenSet;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet;

    Aws::String m_personalEmailAddress;
    bool m_personalEmailAddressHasBeenSet;

    Aws::String m_businessEmailAddress;
    bool m_businessEmailAddressHasBeenSet;

    UpdateAddress m_address;
    bool m_addressHasBeenSet;

    UpdateAddress m_shippingAddress;
    bool m_shippingAddressHasBeenSet;

    UpdateAddress m_mailingAddress;
    bool m_mailingAddressHasBeenSet;

    UpdateAddress m_billingAddress;
    bool m_billingAddressHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
