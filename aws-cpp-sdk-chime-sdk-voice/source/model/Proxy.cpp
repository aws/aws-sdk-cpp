/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/Proxy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

Proxy::Proxy() : 
    m_defaultSessionExpiryMinutes(0),
    m_defaultSessionExpiryMinutesHasBeenSet(false),
    m_disabled(false),
    m_disabledHasBeenSet(false),
    m_fallBackPhoneNumberHasBeenSet(false),
    m_phoneNumberCountriesHasBeenSet(false)
{
}

Proxy::Proxy(JsonView jsonValue) : 
    m_defaultSessionExpiryMinutes(0),
    m_defaultSessionExpiryMinutesHasBeenSet(false),
    m_disabled(false),
    m_disabledHasBeenSet(false),
    m_fallBackPhoneNumberHasBeenSet(false),
    m_phoneNumberCountriesHasBeenSet(false)
{
  *this = jsonValue;
}

Proxy& Proxy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DefaultSessionExpiryMinutes"))
  {
    m_defaultSessionExpiryMinutes = jsonValue.GetInteger("DefaultSessionExpiryMinutes");

    m_defaultSessionExpiryMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Disabled"))
  {
    m_disabled = jsonValue.GetBool("Disabled");

    m_disabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FallBackPhoneNumber"))
  {
    m_fallBackPhoneNumber = jsonValue.GetString("FallBackPhoneNumber");

    m_fallBackPhoneNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhoneNumberCountries"))
  {
    Aws::Utils::Array<JsonView> phoneNumberCountriesJsonList = jsonValue.GetArray("PhoneNumberCountries");
    for(unsigned phoneNumberCountriesIndex = 0; phoneNumberCountriesIndex < phoneNumberCountriesJsonList.GetLength(); ++phoneNumberCountriesIndex)
    {
      m_phoneNumberCountries.push_back(phoneNumberCountriesJsonList[phoneNumberCountriesIndex].AsString());
    }
    m_phoneNumberCountriesHasBeenSet = true;
  }

  return *this;
}

JsonValue Proxy::Jsonize() const
{
  JsonValue payload;

  if(m_defaultSessionExpiryMinutesHasBeenSet)
  {
   payload.WithInteger("DefaultSessionExpiryMinutes", m_defaultSessionExpiryMinutes);

  }

  if(m_disabledHasBeenSet)
  {
   payload.WithBool("Disabled", m_disabled);

  }

  if(m_fallBackPhoneNumberHasBeenSet)
  {
   payload.WithString("FallBackPhoneNumber", m_fallBackPhoneNumber);

  }

  if(m_phoneNumberCountriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> phoneNumberCountriesJsonList(m_phoneNumberCountries.size());
   for(unsigned phoneNumberCountriesIndex = 0; phoneNumberCountriesIndex < phoneNumberCountriesJsonList.GetLength(); ++phoneNumberCountriesIndex)
   {
     phoneNumberCountriesJsonList[phoneNumberCountriesIndex].AsString(m_phoneNumberCountries[phoneNumberCountriesIndex]);
   }
   payload.WithArray("PhoneNumberCountries", std::move(phoneNumberCountriesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
