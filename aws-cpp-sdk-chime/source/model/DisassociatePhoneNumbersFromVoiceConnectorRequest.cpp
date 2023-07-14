﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/DisassociatePhoneNumbersFromVoiceConnectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociatePhoneNumbersFromVoiceConnectorRequest::DisassociatePhoneNumbersFromVoiceConnectorRequest() : 
    m_voiceConnectorIdHasBeenSet(false),
    m_e164PhoneNumbersHasBeenSet(false)
{
}

Aws::String DisassociatePhoneNumbersFromVoiceConnectorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_e164PhoneNumbersHasBeenSet)
  {
   Array<JsonValue> e164PhoneNumbersJsonList(m_e164PhoneNumbers.size());
   for(unsigned e164PhoneNumbersIndex = 0; e164PhoneNumbersIndex < e164PhoneNumbersJsonList.GetLength(); ++e164PhoneNumbersIndex)
   {
     e164PhoneNumbersJsonList[e164PhoneNumbersIndex].AsString(m_e164PhoneNumbers[e164PhoneNumbersIndex]);
   }
   payload.WithArray("E164PhoneNumbers", std::move(e164PhoneNumbersJsonList));

  }

  return payload.View().WriteReadable();
}




