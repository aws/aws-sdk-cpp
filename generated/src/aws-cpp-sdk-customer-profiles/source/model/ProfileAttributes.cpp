/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/ProfileAttributes.h>
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

ProfileAttributes::ProfileAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

ProfileAttributes& ProfileAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountNumber"))
  {
    m_accountNumber = jsonValue.GetObject("AccountNumber");
    m_accountNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AdditionalInformation"))
  {
    m_additionalInformation = jsonValue.GetObject("AdditionalInformation");
    m_additionalInformationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FirstName"))
  {
    m_firstName = jsonValue.GetObject("FirstName");
    m_firstNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastName"))
  {
    m_lastName = jsonValue.GetObject("LastName");
    m_lastNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MiddleName"))
  {
    m_middleName = jsonValue.GetObject("MiddleName");
    m_middleNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GenderString"))
  {
    m_genderString = jsonValue.GetObject("GenderString");
    m_genderStringHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PartyTypeString"))
  {
    m_partyTypeString = jsonValue.GetObject("PartyTypeString");
    m_partyTypeStringHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BirthDate"))
  {
    m_birthDate = jsonValue.GetObject("BirthDate");
    m_birthDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PhoneNumber"))
  {
    m_phoneNumber = jsonValue.GetObject("PhoneNumber");
    m_phoneNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BusinessName"))
  {
    m_businessName = jsonValue.GetObject("BusinessName");
    m_businessNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BusinessPhoneNumber"))
  {
    m_businessPhoneNumber = jsonValue.GetObject("BusinessPhoneNumber");
    m_businessPhoneNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HomePhoneNumber"))
  {
    m_homePhoneNumber = jsonValue.GetObject("HomePhoneNumber");
    m_homePhoneNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MobilePhoneNumber"))
  {
    m_mobilePhoneNumber = jsonValue.GetObject("MobilePhoneNumber");
    m_mobilePhoneNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EmailAddress"))
  {
    m_emailAddress = jsonValue.GetObject("EmailAddress");
    m_emailAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PersonalEmailAddress"))
  {
    m_personalEmailAddress = jsonValue.GetObject("PersonalEmailAddress");
    m_personalEmailAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BusinessEmailAddress"))
  {
    m_businessEmailAddress = jsonValue.GetObject("BusinessEmailAddress");
    m_businessEmailAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Address"))
  {
    m_address = jsonValue.GetObject("Address");
    m_addressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ShippingAddress"))
  {
    m_shippingAddress = jsonValue.GetObject("ShippingAddress");
    m_shippingAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MailingAddress"))
  {
    m_mailingAddress = jsonValue.GetObject("MailingAddress");
    m_mailingAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BillingAddress"))
  {
    m_billingAddress = jsonValue.GetObject("BillingAddress");
    m_billingAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Attributes"))
  {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("Attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[attributesItem.first] = attributesItem.second.AsObject();
    }
    m_attributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProfileType"))
  {
    m_profileType = jsonValue.GetObject("ProfileType");
    m_profileTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ProfileAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_accountNumberHasBeenSet)
  {
   payload.WithObject("AccountNumber", m_accountNumber.Jsonize());

  }

  if(m_additionalInformationHasBeenSet)
  {
   payload.WithObject("AdditionalInformation", m_additionalInformation.Jsonize());

  }

  if(m_firstNameHasBeenSet)
  {
   payload.WithObject("FirstName", m_firstName.Jsonize());

  }

  if(m_lastNameHasBeenSet)
  {
   payload.WithObject("LastName", m_lastName.Jsonize());

  }

  if(m_middleNameHasBeenSet)
  {
   payload.WithObject("MiddleName", m_middleName.Jsonize());

  }

  if(m_genderStringHasBeenSet)
  {
   payload.WithObject("GenderString", m_genderString.Jsonize());

  }

  if(m_partyTypeStringHasBeenSet)
  {
   payload.WithObject("PartyTypeString", m_partyTypeString.Jsonize());

  }

  if(m_birthDateHasBeenSet)
  {
   payload.WithObject("BirthDate", m_birthDate.Jsonize());

  }

  if(m_phoneNumberHasBeenSet)
  {
   payload.WithObject("PhoneNumber", m_phoneNumber.Jsonize());

  }

  if(m_businessNameHasBeenSet)
  {
   payload.WithObject("BusinessName", m_businessName.Jsonize());

  }

  if(m_businessPhoneNumberHasBeenSet)
  {
   payload.WithObject("BusinessPhoneNumber", m_businessPhoneNumber.Jsonize());

  }

  if(m_homePhoneNumberHasBeenSet)
  {
   payload.WithObject("HomePhoneNumber", m_homePhoneNumber.Jsonize());

  }

  if(m_mobilePhoneNumberHasBeenSet)
  {
   payload.WithObject("MobilePhoneNumber", m_mobilePhoneNumber.Jsonize());

  }

  if(m_emailAddressHasBeenSet)
  {
   payload.WithObject("EmailAddress", m_emailAddress.Jsonize());

  }

  if(m_personalEmailAddressHasBeenSet)
  {
   payload.WithObject("PersonalEmailAddress", m_personalEmailAddress.Jsonize());

  }

  if(m_businessEmailAddressHasBeenSet)
  {
   payload.WithObject("BusinessEmailAddress", m_businessEmailAddress.Jsonize());

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
     attributesJsonMap.WithObject(attributesItem.first, attributesItem.second.Jsonize());
   }
   payload.WithObject("Attributes", std::move(attributesJsonMap));

  }

  if(m_profileTypeHasBeenSet)
  {
   payload.WithObject("ProfileType", m_profileType.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
