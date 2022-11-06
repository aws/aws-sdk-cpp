/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/UpdateContactRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateContactRequest::UpdateContactRequest() : 
    m_contactArnHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_firstNameHasBeenSet(false),
    m_lastNameHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_phoneNumbersHasBeenSet(false),
    m_sipAddressesHasBeenSet(false)
{
}

Aws::String UpdateContactRequest::SerializePayload() const
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
   Aws::Utils::Array<JsonValue> phoneNumbersJsonList(m_phoneNumbers.size());
   for(unsigned phoneNumbersIndex = 0; phoneNumbersIndex < phoneNumbersJsonList.GetLength(); ++phoneNumbersIndex)
   {
     phoneNumbersJsonList[phoneNumbersIndex].AsObject(m_phoneNumbers[phoneNumbersIndex].Jsonize());
   }
   payload.WithArray("PhoneNumbers", std::move(phoneNumbersJsonList));

  }

  if(m_sipAddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sipAddressesJsonList(m_sipAddresses.size());
   for(unsigned sipAddressesIndex = 0; sipAddressesIndex < sipAddressesJsonList.GetLength(); ++sipAddressesIndex)
   {
     sipAddressesJsonList[sipAddressesIndex].AsObject(m_sipAddresses[sipAddressesIndex].Jsonize());
   }
   payload.WithArray("SipAddresses", std::move(sipAddressesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateContactRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.UpdateContact"));
  return headers;

}




