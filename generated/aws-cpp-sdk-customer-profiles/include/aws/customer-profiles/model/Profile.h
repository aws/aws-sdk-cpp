﻿/**
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
  class AWS_CUSTOMERPROFILES_API Profile
  {
  public:
    Profile();
    Profile(Aws::Utils::Json::JsonView jsonValue);
    Profile& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline Profile& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}

    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline Profile& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline Profile& WithProfileId(const char* value) { SetProfileId(value); return *this;}


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
    inline Profile& WithAccountNumber(const Aws::String& value) { SetAccountNumber(value); return *this;}

    /**
     * <p>A unique account number that you have given to the customer.</p>
     */
    inline Profile& WithAccountNumber(Aws::String&& value) { SetAccountNumber(std::move(value)); return *this;}

    /**
     * <p>A unique account number that you have given to the customer.</p>
     */
    inline Profile& WithAccountNumber(const char* value) { SetAccountNumber(value); return *this;}


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
    inline Profile& WithAdditionalInformation(const Aws::String& value) { SetAdditionalInformation(value); return *this;}

    /**
     * <p>Any additional information relevant to the customer’s profile.</p>
     */
    inline Profile& WithAdditionalInformation(Aws::String&& value) { SetAdditionalInformation(std::move(value)); return *this;}

    /**
     * <p>Any additional information relevant to the customer’s profile.</p>
     */
    inline Profile& WithAdditionalInformation(const char* value) { SetAdditionalInformation(value); return *this;}


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
    inline Profile& WithPartyType(const PartyType& value) { SetPartyType(value); return *this;}

    /**
     * <p>The type of profile used to describe the customer.</p>
     */
    inline Profile& WithPartyType(PartyType&& value) { SetPartyType(std::move(value)); return *this;}


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
    inline Profile& WithBusinessName(const Aws::String& value) { SetBusinessName(value); return *this;}

    /**
     * <p>The name of the customer’s business.</p>
     */
    inline Profile& WithBusinessName(Aws::String&& value) { SetBusinessName(std::move(value)); return *this;}

    /**
     * <p>The name of the customer’s business.</p>
     */
    inline Profile& WithBusinessName(const char* value) { SetBusinessName(value); return *this;}


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
    inline Profile& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}

    /**
     * <p>The customer’s first name.</p>
     */
    inline Profile& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}

    /**
     * <p>The customer’s first name.</p>
     */
    inline Profile& WithFirstName(const char* value) { SetFirstName(value); return *this;}


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
    inline Profile& WithMiddleName(const Aws::String& value) { SetMiddleName(value); return *this;}

    /**
     * <p>The customer’s middle name.</p>
     */
    inline Profile& WithMiddleName(Aws::String&& value) { SetMiddleName(std::move(value)); return *this;}

    /**
     * <p>The customer’s middle name.</p>
     */
    inline Profile& WithMiddleName(const char* value) { SetMiddleName(value); return *this;}


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
    inline Profile& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}

    /**
     * <p>The customer’s last name.</p>
     */
    inline Profile& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}

    /**
     * <p>The customer’s last name.</p>
     */
    inline Profile& WithLastName(const char* value) { SetLastName(value); return *this;}


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
    inline Profile& WithBirthDate(const Aws::String& value) { SetBirthDate(value); return *this;}

    /**
     * <p>The customer’s birth date. </p>
     */
    inline Profile& WithBirthDate(Aws::String&& value) { SetBirthDate(std::move(value)); return *this;}

    /**
     * <p>The customer’s birth date. </p>
     */
    inline Profile& WithBirthDate(const char* value) { SetBirthDate(value); return *this;}


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
    inline Profile& WithGender(const Gender& value) { SetGender(value); return *this;}

    /**
     * <p>The gender with which the customer identifies. </p>
     */
    inline Profile& WithGender(Gender&& value) { SetGender(std::move(value)); return *this;}


    /**
     * <p>The customer's phone number, which has not been specified as a mobile, home,
     * or business number.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }

    /**
     * <p>The customer's phone number, which has not been specified as a mobile, home,
     * or business number.</p>
     */
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }

    /**
     * <p>The customer's phone number, which has not been specified as a mobile, home,
     * or business number.</p>
     */
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }

    /**
     * <p>The customer's phone number, which has not been specified as a mobile, home,
     * or business number.</p>
     */
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }

    /**
     * <p>The customer's phone number, which has not been specified as a mobile, home,
     * or business number.</p>
     */
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }

    /**
     * <p>The customer's phone number, which has not been specified as a mobile, home,
     * or business number.</p>
     */
    inline Profile& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}

    /**
     * <p>The customer's phone number, which has not been specified as a mobile, home,
     * or business number.</p>
     */
    inline Profile& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The customer's phone number, which has not been specified as a mobile, home,
     * or business number.</p>
     */
    inline Profile& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}


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
    inline Profile& WithMobilePhoneNumber(const Aws::String& value) { SetMobilePhoneNumber(value); return *this;}

    /**
     * <p>The customer’s mobile phone number.</p>
     */
    inline Profile& WithMobilePhoneNumber(Aws::String&& value) { SetMobilePhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The customer’s mobile phone number.</p>
     */
    inline Profile& WithMobilePhoneNumber(const char* value) { SetMobilePhoneNumber(value); return *this;}


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
    inline Profile& WithHomePhoneNumber(const Aws::String& value) { SetHomePhoneNumber(value); return *this;}

    /**
     * <p>The customer’s home phone number.</p>
     */
    inline Profile& WithHomePhoneNumber(Aws::String&& value) { SetHomePhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The customer’s home phone number.</p>
     */
    inline Profile& WithHomePhoneNumber(const char* value) { SetHomePhoneNumber(value); return *this;}


    /**
     * <p>The customer’s home phone number.</p>
     */
    inline const Aws::String& GetBusinessPhoneNumber() const{ return m_businessPhoneNumber; }

    /**
     * <p>The customer’s home phone number.</p>
     */
    inline bool BusinessPhoneNumberHasBeenSet() const { return m_businessPhoneNumberHasBeenSet; }

    /**
     * <p>The customer’s home phone number.</p>
     */
    inline void SetBusinessPhoneNumber(const Aws::String& value) { m_businessPhoneNumberHasBeenSet = true; m_businessPhoneNumber = value; }

    /**
     * <p>The customer’s home phone number.</p>
     */
    inline void SetBusinessPhoneNumber(Aws::String&& value) { m_businessPhoneNumberHasBeenSet = true; m_businessPhoneNumber = std::move(value); }

    /**
     * <p>The customer’s home phone number.</p>
     */
    inline void SetBusinessPhoneNumber(const char* value) { m_businessPhoneNumberHasBeenSet = true; m_businessPhoneNumber.assign(value); }

    /**
     * <p>The customer’s home phone number.</p>
     */
    inline Profile& WithBusinessPhoneNumber(const Aws::String& value) { SetBusinessPhoneNumber(value); return *this;}

    /**
     * <p>The customer’s home phone number.</p>
     */
    inline Profile& WithBusinessPhoneNumber(Aws::String&& value) { SetBusinessPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The customer’s home phone number.</p>
     */
    inline Profile& WithBusinessPhoneNumber(const char* value) { SetBusinessPhoneNumber(value); return *this;}


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
    inline Profile& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}

    /**
     * <p>The customer’s email address, which has not been specified as a personal or
     * business address. </p>
     */
    inline Profile& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The customer’s email address, which has not been specified as a personal or
     * business address. </p>
     */
    inline Profile& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}


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
    inline Profile& WithPersonalEmailAddress(const Aws::String& value) { SetPersonalEmailAddress(value); return *this;}

    /**
     * <p>The customer’s personal email address.</p>
     */
    inline Profile& WithPersonalEmailAddress(Aws::String&& value) { SetPersonalEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The customer’s personal email address.</p>
     */
    inline Profile& WithPersonalEmailAddress(const char* value) { SetPersonalEmailAddress(value); return *this;}


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
    inline Profile& WithBusinessEmailAddress(const Aws::String& value) { SetBusinessEmailAddress(value); return *this;}

    /**
     * <p>The customer’s business email address.</p>
     */
    inline Profile& WithBusinessEmailAddress(Aws::String&& value) { SetBusinessEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The customer’s business email address.</p>
     */
    inline Profile& WithBusinessEmailAddress(const char* value) { SetBusinessEmailAddress(value); return *this;}


    /**
     * <p>A generic address associated with the customer that is not mailing, shipping,
     * or billing.</p>
     */
    inline const Address& GetAddress() const{ return m_address; }

    /**
     * <p>A generic address associated with the customer that is not mailing, shipping,
     * or billing.</p>
     */
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }

    /**
     * <p>A generic address associated with the customer that is not mailing, shipping,
     * or billing.</p>
     */
    inline void SetAddress(const Address& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * <p>A generic address associated with the customer that is not mailing, shipping,
     * or billing.</p>
     */
    inline void SetAddress(Address&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }

    /**
     * <p>A generic address associated with the customer that is not mailing, shipping,
     * or billing.</p>
     */
    inline Profile& WithAddress(const Address& value) { SetAddress(value); return *this;}

    /**
     * <p>A generic address associated with the customer that is not mailing, shipping,
     * or billing.</p>
     */
    inline Profile& WithAddress(Address&& value) { SetAddress(std::move(value)); return *this;}


    /**
     * <p>The customer’s shipping address.</p>
     */
    inline const Address& GetShippingAddress() const{ return m_shippingAddress; }

    /**
     * <p>The customer’s shipping address.</p>
     */
    inline bool ShippingAddressHasBeenSet() const { return m_shippingAddressHasBeenSet; }

    /**
     * <p>The customer’s shipping address.</p>
     */
    inline void SetShippingAddress(const Address& value) { m_shippingAddressHasBeenSet = true; m_shippingAddress = value; }

    /**
     * <p>The customer’s shipping address.</p>
     */
    inline void SetShippingAddress(Address&& value) { m_shippingAddressHasBeenSet = true; m_shippingAddress = std::move(value); }

    /**
     * <p>The customer’s shipping address.</p>
     */
    inline Profile& WithShippingAddress(const Address& value) { SetShippingAddress(value); return *this;}

    /**
     * <p>The customer’s shipping address.</p>
     */
    inline Profile& WithShippingAddress(Address&& value) { SetShippingAddress(std::move(value)); return *this;}


    /**
     * <p>The customer’s mailing address.</p>
     */
    inline const Address& GetMailingAddress() const{ return m_mailingAddress; }

    /**
     * <p>The customer’s mailing address.</p>
     */
    inline bool MailingAddressHasBeenSet() const { return m_mailingAddressHasBeenSet; }

    /**
     * <p>The customer’s mailing address.</p>
     */
    inline void SetMailingAddress(const Address& value) { m_mailingAddressHasBeenSet = true; m_mailingAddress = value; }

    /**
     * <p>The customer’s mailing address.</p>
     */
    inline void SetMailingAddress(Address&& value) { m_mailingAddressHasBeenSet = true; m_mailingAddress = std::move(value); }

    /**
     * <p>The customer’s mailing address.</p>
     */
    inline Profile& WithMailingAddress(const Address& value) { SetMailingAddress(value); return *this;}

    /**
     * <p>The customer’s mailing address.</p>
     */
    inline Profile& WithMailingAddress(Address&& value) { SetMailingAddress(std::move(value)); return *this;}


    /**
     * <p>The customer’s billing address.</p>
     */
    inline const Address& GetBillingAddress() const{ return m_billingAddress; }

    /**
     * <p>The customer’s billing address.</p>
     */
    inline bool BillingAddressHasBeenSet() const { return m_billingAddressHasBeenSet; }

    /**
     * <p>The customer’s billing address.</p>
     */
    inline void SetBillingAddress(const Address& value) { m_billingAddressHasBeenSet = true; m_billingAddress = value; }

    /**
     * <p>The customer’s billing address.</p>
     */
    inline void SetBillingAddress(Address&& value) { m_billingAddressHasBeenSet = true; m_billingAddress = std::move(value); }

    /**
     * <p>The customer’s billing address.</p>
     */
    inline Profile& WithBillingAddress(const Address& value) { SetBillingAddress(value); return *this;}

    /**
     * <p>The customer’s billing address.</p>
     */
    inline Profile& WithBillingAddress(Address&& value) { SetBillingAddress(std::move(value)); return *this;}


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
    inline Profile& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A key value pair of attributes of a customer profile.</p>
     */
    inline Profile& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A key value pair of attributes of a customer profile.</p>
     */
    inline Profile& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>A key value pair of attributes of a customer profile.</p>
     */
    inline Profile& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key value pair of attributes of a customer profile.</p>
     */
    inline Profile& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key value pair of attributes of a customer profile.</p>
     */
    inline Profile& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A key value pair of attributes of a customer profile.</p>
     */
    inline Profile& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key value pair of attributes of a customer profile.</p>
     */
    inline Profile& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key value pair of attributes of a customer profile.</p>
     */
    inline Profile& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

  private:

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet;

    Aws::String m_accountNumber;
    bool m_accountNumberHasBeenSet;

    Aws::String m_additionalInformation;
    bool m_additionalInformationHasBeenSet;

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

    Address m_address;
    bool m_addressHasBeenSet;

    Address m_shippingAddress;
    bool m_shippingAddressHasBeenSet;

    Address m_mailingAddress;
    bool m_mailingAddressHasBeenSet;

    Address m_billingAddress;
    bool m_billingAddressHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
