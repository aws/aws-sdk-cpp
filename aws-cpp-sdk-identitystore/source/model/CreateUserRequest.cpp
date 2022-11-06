/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/identitystore/model/CreateUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IdentityStore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateUserRequest::CreateUserRequest() : 
    m_identityStoreIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_profileUrlHasBeenSet(false),
    m_emailsHasBeenSet(false),
    m_addressesHasBeenSet(false),
    m_phoneNumbersHasBeenSet(false),
    m_userTypeHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_preferredLanguageHasBeenSet(false),
    m_localeHasBeenSet(false),
    m_timezoneHasBeenSet(false)
{
}

Aws::String CreateUserRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_identityStoreIdHasBeenSet)
  {
   payload.WithString("IdentityStoreId", m_identityStoreId);

  }

  if(m_userNameHasBeenSet)
  {
   payload.WithString("UserName", m_userName);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithObject("Name", m_name.Jsonize());

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_nickNameHasBeenSet)
  {
   payload.WithString("NickName", m_nickName);

  }

  if(m_profileUrlHasBeenSet)
  {
   payload.WithString("ProfileUrl", m_profileUrl);

  }

  if(m_emailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> emailsJsonList(m_emails.size());
   for(unsigned emailsIndex = 0; emailsIndex < emailsJsonList.GetLength(); ++emailsIndex)
   {
     emailsJsonList[emailsIndex].AsObject(m_emails[emailsIndex].Jsonize());
   }
   payload.WithArray("Emails", std::move(emailsJsonList));

  }

  if(m_addressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> addressesJsonList(m_addresses.size());
   for(unsigned addressesIndex = 0; addressesIndex < addressesJsonList.GetLength(); ++addressesIndex)
   {
     addressesJsonList[addressesIndex].AsObject(m_addresses[addressesIndex].Jsonize());
   }
   payload.WithArray("Addresses", std::move(addressesJsonList));

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

  if(m_userTypeHasBeenSet)
  {
   payload.WithString("UserType", m_userType);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_preferredLanguageHasBeenSet)
  {
   payload.WithString("PreferredLanguage", m_preferredLanguage);

  }

  if(m_localeHasBeenSet)
  {
   payload.WithString("Locale", m_locale);

  }

  if(m_timezoneHasBeenSet)
  {
   payload.WithString("Timezone", m_timezone);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateUserRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSIdentityStore.CreateUser"));
  return headers;

}




