﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/ContactData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

ContactData::ContactData() : 
    m_contactArnHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_firstNameHasBeenSet(false),
    m_lastNameHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_phoneNumbersHasBeenSet(false),
    m_sipAddressesHasBeenSet(false)
{
}

ContactData::ContactData(JsonView jsonValue) : 
    m_contactArnHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_firstNameHasBeenSet(false),
    m_lastNameHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_phoneNumbersHasBeenSet(false),
    m_sipAddressesHasBeenSet(false)
{
  *this = jsonValue;
}

ContactData& ContactData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContactArn"))
  {
    m_contactArn = jsonValue.GetString("ContactArn");

    m_contactArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

    m_displayNameHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("PhoneNumber"))
  {
    m_phoneNumber = jsonValue.GetString("PhoneNumber");

    m_phoneNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhoneNumbers"))
  {
    Array<JsonView> phoneNumbersJsonList = jsonValue.GetArray("PhoneNumbers");
    for(unsigned phoneNumbersIndex = 0; phoneNumbersIndex < phoneNumbersJsonList.GetLength(); ++phoneNumbersIndex)
    {
      m_phoneNumbers.push_back(phoneNumbersJsonList[phoneNumbersIndex].AsObject());
    }
    m_phoneNumbersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SipAddresses"))
  {
    Array<JsonView> sipAddressesJsonList = jsonValue.GetArray("SipAddresses");
    for(unsigned sipAddressesIndex = 0; sipAddressesIndex < sipAddressesJsonList.GetLength(); ++sipAddressesIndex)
    {
      m_sipAddresses.push_back(sipAddressesJsonList[sipAddressesIndex].AsObject());
    }
    m_sipAddressesHasBeenSet = true;
  }

  return *this;
}

JsonValue ContactData::Jsonize() const
{
  JsonValue payload;

  if(m_contactArnHasBeenSet)
  {
   payload.WithString("ContactArn", m_contactArn);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_firstNameHasBeenSet)
  {
   payload.WithString("FirstName", m_firstName);

  }

  if(m_lastNameHasBeenSet)
  {
   payload.WithString("LastName", m_lastName);

  }

  if(m_phoneNumberHasBeenSet)
  {
   payload.WithString("PhoneNumber", m_phoneNumber);

  }

  if(m_phoneNumbersHasBeenSet)
  {
   Array<JsonValue> phoneNumbersJsonList(m_phoneNumbers.size());
   for(unsigned phoneNumbersIndex = 0; phoneNumbersIndex < phoneNumbersJsonList.GetLength(); ++phoneNumbersIndex)
   {
     phoneNumbersJsonList[phoneNumbersIndex].AsObject(m_phoneNumbers[phoneNumbersIndex].Jsonize());
   }
   payload.WithArray("PhoneNumbers", std::move(phoneNumbersJsonList));

  }

  if(m_sipAddressesHasBeenSet)
  {
   Array<JsonValue> sipAddressesJsonList(m_sipAddresses.size());
   for(unsigned sipAddressesIndex = 0; sipAddressesIndex < sipAddressesJsonList.GetLength(); ++sipAddressesIndex)
   {
     sipAddressesJsonList[sipAddressesIndex].AsObject(m_sipAddresses[sipAddressesIndex].Jsonize());
   }
   payload.WithArray("SipAddresses", std::move(sipAddressesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
