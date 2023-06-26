/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/FieldSourceProfileIds.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

FieldSourceProfileIds::FieldSourceProfileIds() : 
    m_accountNumberHasBeenSet(false),
    m_additionalInformationHasBeenSet(false),
    m_partyTypeHasBeenSet(false),
    m_businessNameHasBeenSet(false),
    m_firstNameHasBeenSet(false),
    m_middleNameHasBeenSet(false),
    m_lastNameHasBeenSet(false),
    m_birthDateHasBeenSet(false),
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
    m_attributesHasBeenSet(false)
{
}

FieldSourceProfileIds::FieldSourceProfileIds(JsonView jsonValue) : 
    m_accountNumberHasBeenSet(false),
    m_additionalInformationHasBeenSet(false),
    m_partyTypeHasBeenSet(false),
    m_businessNameHasBeenSet(false),
    m_firstNameHasBeenSet(false),
    m_middleNameHasBeenSet(false),
    m_lastNameHasBeenSet(false),
    m_birthDateHasBeenSet(false),
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
    m_attributesHasBeenSet(false)
{
  *this = jsonValue;
}

FieldSourceProfileIds& FieldSourceProfileIds::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountNumber"))
  {
    m_accountNumber = jsonValue.GetString("AccountNumber");

    m_accountNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalInformation"))
  {
    m_additionalInformation = jsonValue.GetString("AdditionalInformation");

    m_additionalInformationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PartyType"))
  {
    m_partyType = jsonValue.GetString("PartyType");

    m_partyTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BusinessName"))
  {
    m_businessName = jsonValue.GetString("BusinessName");

    m_businessNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirstName"))
  {
    m_firstName = jsonValue.GetString("FirstName");

    m_firstNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MiddleName"))
  {
    m_middleName = jsonValue.GetString("MiddleName");

    m_middleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastName"))
  {
    m_lastName = jsonValue.GetString("LastName");

    m_lastNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BirthDate"))
  {
    m_birthDate = jsonValue.GetString("BirthDate");

    m_birthDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Gender"))
  {
    m_gender = jsonValue.GetString("Gender");

    m_genderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhoneNumber"))
  {
    m_phoneNumber = jsonValue.GetString("PhoneNumber");

    m_phoneNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MobilePhoneNumber"))
  {
    m_mobilePhoneNumber = jsonValue.GetString("MobilePhoneNumber");

    m_mobilePhoneNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HomePhoneNumber"))
  {
    m_homePhoneNumber = jsonValue.GetString("HomePhoneNumber");

    m_homePhoneNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BusinessPhoneNumber"))
  {
    m_businessPhoneNumber = jsonValue.GetString("BusinessPhoneNumber");

    m_businessPhoneNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EmailAddress"))
  {
    m_emailAddress = jsonValue.GetString("EmailAddress");

    m_emailAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PersonalEmailAddress"))
  {
    m_personalEmailAddress = jsonValue.GetString("PersonalEmailAddress");

    m_personalEmailAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BusinessEmailAddress"))
  {
    m_businessEmailAddress = jsonValue.GetString("BusinessEmailAddress");

    m_businessEmailAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Address"))
  {
    m_address = jsonValue.GetString("Address");

    m_addressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShippingAddress"))
  {
    m_shippingAddress = jsonValue.GetString("ShippingAddress");

    m_shippingAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MailingAddress"))
  {
    m_mailingAddress = jsonValue.GetString("MailingAddress");

    m_mailingAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BillingAddress"))
  {
    m_billingAddress = jsonValue.GetString("BillingAddress");

    m_billingAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Attributes"))
  {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("Attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[attributesItem.first] = attributesItem.second.AsString();
    }
    m_attributesHasBeenSet = true;
  }

  return *this;
}

JsonValue FieldSourceProfileIds::Jsonize() const
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
   payload.WithString("PartyType", m_partyType);

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
   payload.WithString("Gender", m_gender);

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
   payload.WithString("Address", m_address);

  }

  if(m_shippingAddressHasBeenSet)
  {
   payload.WithString("ShippingAddress", m_shippingAddress);

  }

  if(m_mailingAddressHasBeenSet)
  {
   payload.WithString("MailingAddress", m_mailingAddress);

  }

  if(m_billingAddressHasBeenSet)
  {
   payload.WithString("BillingAddress", m_billingAddress);

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

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
