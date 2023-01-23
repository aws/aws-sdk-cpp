/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/PutVoiceConnectorProxyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutVoiceConnectorProxyRequest::PutVoiceConnectorProxyRequest() : 
    m_voiceConnectorIdHasBeenSet(false),
    m_defaultSessionExpiryMinutes(0),
    m_defaultSessionExpiryMinutesHasBeenSet(false),
    m_phoneNumberPoolCountriesHasBeenSet(false),
    m_fallBackPhoneNumberHasBeenSet(false),
    m_disabled(false),
    m_disabledHasBeenSet(false)
{
}

Aws::String PutVoiceConnectorProxyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_defaultSessionExpiryMinutesHasBeenSet)
  {
   payload.WithInteger("DefaultSessionExpiryMinutes", m_defaultSessionExpiryMinutes);

  }

  if(m_phoneNumberPoolCountriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> phoneNumberPoolCountriesJsonList(m_phoneNumberPoolCountries.size());
   for(unsigned phoneNumberPoolCountriesIndex = 0; phoneNumberPoolCountriesIndex < phoneNumberPoolCountriesJsonList.GetLength(); ++phoneNumberPoolCountriesIndex)
   {
     phoneNumberPoolCountriesJsonList[phoneNumberPoolCountriesIndex].AsString(m_phoneNumberPoolCountries[phoneNumberPoolCountriesIndex]);
   }
   payload.WithArray("PhoneNumberPoolCountries", std::move(phoneNumberPoolCountriesJsonList));

  }

  if(m_fallBackPhoneNumberHasBeenSet)
  {
   payload.WithString("FallBackPhoneNumber", m_fallBackPhoneNumber);

  }

  if(m_disabledHasBeenSet)
  {
   payload.WithBool("Disabled", m_disabled);

  }

  return payload.View().WriteReadable();
}




