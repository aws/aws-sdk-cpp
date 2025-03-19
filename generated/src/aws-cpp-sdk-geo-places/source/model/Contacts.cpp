/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/Contacts.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GeoPlaces
{
namespace Model
{

Contacts::Contacts(JsonView jsonValue)
{
  *this = jsonValue;
}

Contacts& Contacts::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Phones"))
  {
    Aws::Utils::Array<JsonView> phonesJsonList = jsonValue.GetArray("Phones");
    for(unsigned phonesIndex = 0; phonesIndex < phonesJsonList.GetLength(); ++phonesIndex)
    {
      m_phones.push_back(phonesJsonList[phonesIndex].AsObject());
    }
    m_phonesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Faxes"))
  {
    Aws::Utils::Array<JsonView> faxesJsonList = jsonValue.GetArray("Faxes");
    for(unsigned faxesIndex = 0; faxesIndex < faxesJsonList.GetLength(); ++faxesIndex)
    {
      m_faxes.push_back(faxesJsonList[faxesIndex].AsObject());
    }
    m_faxesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Websites"))
  {
    Aws::Utils::Array<JsonView> websitesJsonList = jsonValue.GetArray("Websites");
    for(unsigned websitesIndex = 0; websitesIndex < websitesJsonList.GetLength(); ++websitesIndex)
    {
      m_websites.push_back(websitesJsonList[websitesIndex].AsObject());
    }
    m_websitesHasBeenSet = true;
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
  return *this;
}

JsonValue Contacts::Jsonize() const
{
  JsonValue payload;

  if(m_phonesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> phonesJsonList(m_phones.size());
   for(unsigned phonesIndex = 0; phonesIndex < phonesJsonList.GetLength(); ++phonesIndex)
   {
     phonesJsonList[phonesIndex].AsObject(m_phones[phonesIndex].Jsonize());
   }
   payload.WithArray("Phones", std::move(phonesJsonList));

  }

  if(m_faxesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> faxesJsonList(m_faxes.size());
   for(unsigned faxesIndex = 0; faxesIndex < faxesJsonList.GetLength(); ++faxesIndex)
   {
     faxesJsonList[faxesIndex].AsObject(m_faxes[faxesIndex].Jsonize());
   }
   payload.WithArray("Faxes", std::move(faxesJsonList));

  }

  if(m_websitesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> websitesJsonList(m_websites.size());
   for(unsigned websitesIndex = 0; websitesIndex < websitesJsonList.GetLength(); ++websitesIndex)
   {
     websitesJsonList[websitesIndex].AsObject(m_websites[websitesIndex].Jsonize());
   }
   payload.WithArray("Websites", std::move(websitesJsonList));

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

  return payload;
}

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
