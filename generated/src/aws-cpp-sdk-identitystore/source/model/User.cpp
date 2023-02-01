/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/identitystore/model/User.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IdentityStore
{
namespace Model
{

User::User() : 
    m_userNameHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_externalIdsHasBeenSet(false),
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
    m_timezoneHasBeenSet(false),
    m_identityStoreIdHasBeenSet(false)
{
}

User::User(JsonView jsonValue) : 
    m_userNameHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_externalIdsHasBeenSet(false),
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
    m_timezoneHasBeenSet(false),
    m_identityStoreIdHasBeenSet(false)
{
  *this = jsonValue;
}

User& User::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserName"))
  {
    m_userName = jsonValue.GetString("UserName");

    m_userNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserId"))
  {
    m_userId = jsonValue.GetString("UserId");

    m_userIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExternalIds"))
  {
    Aws::Utils::Array<JsonView> externalIdsJsonList = jsonValue.GetArray("ExternalIds");
    for(unsigned externalIdsIndex = 0; externalIdsIndex < externalIdsJsonList.GetLength(); ++externalIdsIndex)
    {
      m_externalIds.push_back(externalIdsJsonList[externalIdsIndex].AsObject());
    }
    m_externalIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetObject("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NickName"))
  {
    m_nickName = jsonValue.GetString("NickName");

    m_nickNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProfileUrl"))
  {
    m_profileUrl = jsonValue.GetString("ProfileUrl");

    m_profileUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Emails"))
  {
    Aws::Utils::Array<JsonView> emailsJsonList = jsonValue.GetArray("Emails");
    for(unsigned emailsIndex = 0; emailsIndex < emailsJsonList.GetLength(); ++emailsIndex)
    {
      m_emails.push_back(emailsJsonList[emailsIndex].AsObject());
    }
    m_emailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Addresses"))
  {
    Aws::Utils::Array<JsonView> addressesJsonList = jsonValue.GetArray("Addresses");
    for(unsigned addressesIndex = 0; addressesIndex < addressesJsonList.GetLength(); ++addressesIndex)
    {
      m_addresses.push_back(addressesJsonList[addressesIndex].AsObject());
    }
    m_addressesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhoneNumbers"))
  {
    Aws::Utils::Array<JsonView> phoneNumbersJsonList = jsonValue.GetArray("PhoneNumbers");
    for(unsigned phoneNumbersIndex = 0; phoneNumbersIndex < phoneNumbersJsonList.GetLength(); ++phoneNumbersIndex)
    {
      m_phoneNumbers.push_back(phoneNumbersJsonList[phoneNumbersIndex].AsObject());
    }
    m_phoneNumbersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserType"))
  {
    m_userType = jsonValue.GetString("UserType");

    m_userTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreferredLanguage"))
  {
    m_preferredLanguage = jsonValue.GetString("PreferredLanguage");

    m_preferredLanguageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Locale"))
  {
    m_locale = jsonValue.GetString("Locale");

    m_localeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timezone"))
  {
    m_timezone = jsonValue.GetString("Timezone");

    m_timezoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentityStoreId"))
  {
    m_identityStoreId = jsonValue.GetString("IdentityStoreId");

    m_identityStoreIdHasBeenSet = true;
  }

  return *this;
}

JsonValue User::Jsonize() const
{
  JsonValue payload;

  if(m_userNameHasBeenSet)
  {
   payload.WithString("UserName", m_userName);

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("UserId", m_userId);

  }

  if(m_externalIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> externalIdsJsonList(m_externalIds.size());
   for(unsigned externalIdsIndex = 0; externalIdsIndex < externalIdsJsonList.GetLength(); ++externalIdsIndex)
   {
     externalIdsJsonList[externalIdsIndex].AsObject(m_externalIds[externalIdsIndex].Jsonize());
   }
   payload.WithArray("ExternalIds", std::move(externalIdsJsonList));

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

  if(m_identityStoreIdHasBeenSet)
  {
   payload.WithString("IdentityStoreId", m_identityStoreId);

  }

  return payload;
}

} // namespace Model
} // namespace IdentityStore
} // namespace Aws
