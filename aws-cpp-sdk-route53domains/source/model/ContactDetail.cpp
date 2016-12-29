/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/route53domains/model/ContactDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

ContactDetail::ContactDetail() : 
    m_firstNameHasBeenSet(false),
    m_lastNameHasBeenSet(false),
    m_contactType(ContactType::NOT_SET),
    m_contactTypeHasBeenSet(false),
    m_organizationNameHasBeenSet(false),
    m_addressLine1HasBeenSet(false),
    m_addressLine2HasBeenSet(false),
    m_cityHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_countryCode(CountryCode::NOT_SET),
    m_countryCodeHasBeenSet(false),
    m_zipCodeHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_faxHasBeenSet(false),
    m_extraParamsHasBeenSet(false)
{
}

ContactDetail::ContactDetail(const JsonValue& jsonValue) : 
    m_firstNameHasBeenSet(false),
    m_lastNameHasBeenSet(false),
    m_contactType(ContactType::NOT_SET),
    m_contactTypeHasBeenSet(false),
    m_organizationNameHasBeenSet(false),
    m_addressLine1HasBeenSet(false),
    m_addressLine2HasBeenSet(false),
    m_cityHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_countryCode(CountryCode::NOT_SET),
    m_countryCodeHasBeenSet(false),
    m_zipCodeHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_faxHasBeenSet(false),
    m_extraParamsHasBeenSet(false)
{
  *this = jsonValue;
}

ContactDetail& ContactDetail::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("FirstName"))
  {
    m_firstName = jsonValue.GetString("FirstName");

    m_firstNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastName"))
  {
    m_lastName = jsonValue.GetString("LastName");

    m_lastNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContactType"))
  {
    m_contactType = ContactTypeMapper::GetContactTypeForName(jsonValue.GetString("ContactType"));

    m_contactTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrganizationName"))
  {
    m_organizationName = jsonValue.GetString("OrganizationName");

    m_organizationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AddressLine1"))
  {
    m_addressLine1 = jsonValue.GetString("AddressLine1");

    m_addressLine1HasBeenSet = true;
  }

  if(jsonValue.ValueExists("AddressLine2"))
  {
    m_addressLine2 = jsonValue.GetString("AddressLine2");

    m_addressLine2HasBeenSet = true;
  }

  if(jsonValue.ValueExists("City"))
  {
    m_city = jsonValue.GetString("City");

    m_cityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = jsonValue.GetString("State");

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CountryCode"))
  {
    m_countryCode = CountryCodeMapper::GetCountryCodeForName(jsonValue.GetString("CountryCode"));

    m_countryCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ZipCode"))
  {
    m_zipCode = jsonValue.GetString("ZipCode");

    m_zipCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhoneNumber"))
  {
    m_phoneNumber = jsonValue.GetString("PhoneNumber");

    m_phoneNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Email"))
  {
    m_email = jsonValue.GetString("Email");

    m_emailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Fax"))
  {
    m_fax = jsonValue.GetString("Fax");

    m_faxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExtraParams"))
  {
    Array<JsonValue> extraParamsJsonList = jsonValue.GetArray("ExtraParams");
    for(unsigned extraParamsIndex = 0; extraParamsIndex < extraParamsJsonList.GetLength(); ++extraParamsIndex)
    {
      m_extraParams.push_back(extraParamsJsonList[extraParamsIndex].AsObject());
    }
    m_extraParamsHasBeenSet = true;
  }

  return *this;
}

JsonValue ContactDetail::Jsonize() const
{
  JsonValue payload;

  if(m_firstNameHasBeenSet)
  {
   payload.WithString("FirstName", m_firstName);

  }

  if(m_lastNameHasBeenSet)
  {
   payload.WithString("LastName", m_lastName);

  }

  if(m_contactTypeHasBeenSet)
  {
   payload.WithString("ContactType", ContactTypeMapper::GetNameForContactType(m_contactType));
  }

  if(m_organizationNameHasBeenSet)
  {
   payload.WithString("OrganizationName", m_organizationName);

  }

  if(m_addressLine1HasBeenSet)
  {
   payload.WithString("AddressLine1", m_addressLine1);

  }

  if(m_addressLine2HasBeenSet)
  {
   payload.WithString("AddressLine2", m_addressLine2);

  }

  if(m_cityHasBeenSet)
  {
   payload.WithString("City", m_city);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", m_state);

  }

  if(m_countryCodeHasBeenSet)
  {
   payload.WithString("CountryCode", CountryCodeMapper::GetNameForCountryCode(m_countryCode));
  }

  if(m_zipCodeHasBeenSet)
  {
   payload.WithString("ZipCode", m_zipCode);

  }

  if(m_phoneNumberHasBeenSet)
  {
   payload.WithString("PhoneNumber", m_phoneNumber);

  }

  if(m_emailHasBeenSet)
  {
   payload.WithString("Email", m_email);

  }

  if(m_faxHasBeenSet)
  {
   payload.WithString("Fax", m_fax);

  }

  if(m_extraParamsHasBeenSet)
  {
   Array<JsonValue> extraParamsJsonList(m_extraParams.size());
   for(unsigned extraParamsIndex = 0; extraParamsIndex < extraParamsJsonList.GetLength(); ++extraParamsIndex)
   {
     extraParamsJsonList[extraParamsIndex].AsObject(m_extraParams[extraParamsIndex].Jsonize());
   }
   payload.WithArray("ExtraParams", std::move(extraParamsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Route53Domains
} // namespace Aws