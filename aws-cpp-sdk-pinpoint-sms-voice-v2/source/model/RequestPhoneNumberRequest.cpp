/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/RequestPhoneNumberRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RequestPhoneNumberRequest::RequestPhoneNumberRequest() : 
    m_isoCountryCodeHasBeenSet(false),
    m_messageType(MessageType::NOT_SET),
    m_messageTypeHasBeenSet(false),
    m_numberCapabilitiesHasBeenSet(false),
    m_numberType(RequestableNumberType::NOT_SET),
    m_numberTypeHasBeenSet(false),
    m_optOutListNameHasBeenSet(false),
    m_poolIdHasBeenSet(false),
    m_registrationIdHasBeenSet(false),
    m_deletionProtectionEnabled(false),
    m_deletionProtectionEnabledHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String RequestPhoneNumberRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_isoCountryCodeHasBeenSet)
  {
   payload.WithString("IsoCountryCode", m_isoCountryCode);

  }

  if(m_messageTypeHasBeenSet)
  {
   payload.WithString("MessageType", MessageTypeMapper::GetNameForMessageType(m_messageType));
  }

  if(m_numberCapabilitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> numberCapabilitiesJsonList(m_numberCapabilities.size());
   for(unsigned numberCapabilitiesIndex = 0; numberCapabilitiesIndex < numberCapabilitiesJsonList.GetLength(); ++numberCapabilitiesIndex)
   {
     numberCapabilitiesJsonList[numberCapabilitiesIndex].AsString(NumberCapabilityMapper::GetNameForNumberCapability(m_numberCapabilities[numberCapabilitiesIndex]));
   }
   payload.WithArray("NumberCapabilities", std::move(numberCapabilitiesJsonList));

  }

  if(m_numberTypeHasBeenSet)
  {
   payload.WithString("NumberType", RequestableNumberTypeMapper::GetNameForRequestableNumberType(m_numberType));
  }

  if(m_optOutListNameHasBeenSet)
  {
   payload.WithString("OptOutListName", m_optOutListName);

  }

  if(m_poolIdHasBeenSet)
  {
   payload.WithString("PoolId", m_poolId);

  }

  if(m_registrationIdHasBeenSet)
  {
   payload.WithString("RegistrationId", m_registrationId);

  }

  if(m_deletionProtectionEnabledHasBeenSet)
  {
   payload.WithBool("DeletionProtectionEnabled", m_deletionProtectionEnabled);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RequestPhoneNumberRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.RequestPhoneNumber"));
  return headers;

}




