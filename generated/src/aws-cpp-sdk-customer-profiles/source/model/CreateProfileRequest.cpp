/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/CreateProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateProfileRequest::CreateProfileRequest() : 
    m_domainNameHasBeenSet(false),
    m_accountNumberHasBeenSet(false),
    m_additionalInformationHasBeenSet(false),
    m_partyType(PartyType::NOT_SET),
    m_partyTypeHasBeenSet(false),
    m_businessNameHasBeenSet(false),
    m_firstNameHasBeenSet(false),
    m_middleNameHasBeenSet(false),
    m_lastNameHasBeenSet(false),
    m_birthDateHasBeenSet(false),
    m_gender(Gender::NOT_SET),
    m_genderHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_mobilePhoneNumberHasBeenSet(false),
    m_homePhoneNumberHasBeenSet(false),
    m_businessPhoneNumberHasBeenSet(false),
    m_emailAddressHasBeenSet(false),
    m_personalEmailAddressHasBeenSet(false),
    m_businessEmailAddressHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_shippingAddressHasBeenSet(false),
    m_mailingAddressHasBeenSet(false),
    m_billingAddressHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_partyTypeStringHasBeenSet(false),
    m_genderStringHasBeenSet(false)
{
}

Aws::String CreateProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountNumberHasBeenSet)
  {
   payload.WithString("AccountNumber", m_accountNumber);

  }

  if(m_additionalInformationHasBeenSet)
  {
   payload.WithString("AdditionalInformation", m_additionalInformation);

  }

  if(m_partyTypeHasBeenSet)
  {
   payload.WithString("PartyType", PartyTypeMapper::GetNameForPartyType(m_partyType));
  }

  if(m_businessNameHasBeenSet)
  {
   payload.WithString("BusinessName", m_businessName);

  }

  if(m_firstNameHasBeenSet)
  {
   payload.WithString("FirstName", m_firstName);

  }

  if(m_middleNameHasBeenSet)
  {
   payload.WithString("MiddleName", m_middleName);

  }

  if(m_lastNameHasBeenSet)
  {
   payload.WithString("LastName", m_lastName);

  }

  if(m_birthDateHasBeenSet)
  {
   payload.WithString("BirthDate", m_birthDate);

  }

  if(m_genderHasBeenSet)
  {
   payload.WithString("Gender", GenderMapper::GetNameForGender(m_gender));
  }

  if(m_phoneNumberHasBeenSet)
  {
   payload.WithString("PhoneNumber", m_phoneNumber);

  }

  if(m_mobilePhoneNumberHasBeenSet)
  {
   payload.WithString("MobilePhoneNumber", m_mobilePhoneNumber);

  }

  if(m_homePhoneNumberHasBeenSet)
  {
   payload.WithString("HomePhoneNumber", m_homePhoneNumber);

  }

  if(m_businessPhoneNumberHasBeenSet)
  {
   payload.WithString("BusinessPhoneNumber", m_businessPhoneNumber);

  }

  if(m_emailAddressHasBeenSet)
  {
   payload.WithString("EmailAddress", m_emailAddress);

  }

  if(m_personalEmailAddressHasBeenSet)
  {
   payload.WithString("PersonalEmailAddress", m_personalEmailAddress);

  }

  if(m_businessEmailAddressHasBeenSet)
  {
   payload.WithString("BusinessEmailAddress", m_businessEmailAddress);

  }

  if(m_addressHasBeenSet)
  {
   payload.WithObject("Address", m_address.Jsonize());

  }

  if(m_shippingAddressHasBeenSet)
  {
   payload.WithObject("ShippingAddress", m_shippingAddress.Jsonize());

  }

  if(m_mailingAddressHasBeenSet)
  {
   payload.WithObject("MailingAddress", m_mailingAddress.Jsonize());

  }

  if(m_billingAddressHasBeenSet)
  {
   payload.WithObject("BillingAddress", m_billingAddress.Jsonize());

  }

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
   }
   payload.WithObject("Attributes", std::move(attributesJsonMap));

  }

  if(m_partyTypeStringHasBeenSet)
  {
   payload.WithString("PartyTypeString", m_partyTypeString);

  }

  if(m_genderStringHasBeenSet)
  {
   payload.WithString("GenderString", m_genderString);

  }

  return payload.View().WriteReadable();
}




