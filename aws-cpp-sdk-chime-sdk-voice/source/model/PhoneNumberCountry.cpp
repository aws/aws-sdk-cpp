/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/PhoneNumberCountry.h>
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

PhoneNumberCountry::PhoneNumberCountry() : 
    m_countryCodeHasBeenSet(false),
    m_supportedPhoneNumberTypesHasBeenSet(false)
{
}

PhoneNumberCountry::PhoneNumberCountry(JsonView jsonValue) : 
    m_countryCodeHasBeenSet(false),
    m_supportedPhoneNumberTypesHasBeenSet(false)
{
  *this = jsonValue;
}

PhoneNumberCountry& PhoneNumberCountry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CountryCode"))
  {
    m_countryCode = jsonValue.GetString("CountryCode");

    m_countryCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportedPhoneNumberTypes"))
  {
    Aws::Utils::Array<JsonView> supportedPhoneNumberTypesJsonList = jsonValue.GetArray("SupportedPhoneNumberTypes");
    for(unsigned supportedPhoneNumberTypesIndex = 0; supportedPhoneNumberTypesIndex < supportedPhoneNumberTypesJsonList.GetLength(); ++supportedPhoneNumberTypesIndex)
    {
      m_supportedPhoneNumberTypes.push_back(PhoneNumberTypeMapper::GetPhoneNumberTypeForName(supportedPhoneNumberTypesJsonList[supportedPhoneNumberTypesIndex].AsString()));
    }
    m_supportedPhoneNumberTypesHasBeenSet = true;
  }

  return *this;
}

JsonValue PhoneNumberCountry::Jsonize() const
{
  JsonValue payload;

  if(m_countryCodeHasBeenSet)
  {
   payload.WithString("CountryCode", m_countryCode);

  }

  if(m_supportedPhoneNumberTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedPhoneNumberTypesJsonList(m_supportedPhoneNumberTypes.size());
   for(unsigned supportedPhoneNumberTypesIndex = 0; supportedPhoneNumberTypesIndex < supportedPhoneNumberTypesJsonList.GetLength(); ++supportedPhoneNumberTypesIndex)
   {
     supportedPhoneNumberTypesJsonList[supportedPhoneNumberTypesIndex].AsString(PhoneNumberTypeMapper::GetNameForPhoneNumberType(m_supportedPhoneNumberTypes[supportedPhoneNumberTypesIndex]));
   }
   payload.WithArray("SupportedPhoneNumberTypes", std::move(supportedPhoneNumberTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
