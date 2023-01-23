/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/CreateSipMediaApplicationCallRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSipMediaApplicationCallRequest::CreateSipMediaApplicationCallRequest() : 
    m_fromPhoneNumberHasBeenSet(false),
    m_toPhoneNumberHasBeenSet(false),
    m_sipMediaApplicationIdHasBeenSet(false),
    m_sipHeadersHasBeenSet(false),
    m_argumentsMapHasBeenSet(false)
{
}

Aws::String CreateSipMediaApplicationCallRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fromPhoneNumberHasBeenSet)
  {
   payload.WithString("FromPhoneNumber", m_fromPhoneNumber);

  }

  if(m_toPhoneNumberHasBeenSet)
  {
   payload.WithString("ToPhoneNumber", m_toPhoneNumber);

  }

  if(m_sipHeadersHasBeenSet)
  {
   JsonValue sipHeadersJsonMap;
   for(auto& sipHeadersItem : m_sipHeaders)
   {
     sipHeadersJsonMap.WithString(sipHeadersItem.first, sipHeadersItem.second);
   }
   payload.WithObject("SipHeaders", std::move(sipHeadersJsonMap));

  }

  if(m_argumentsMapHasBeenSet)
  {
   JsonValue argumentsMapJsonMap;
   for(auto& argumentsMapItem : m_argumentsMap)
   {
     argumentsMapJsonMap.WithString(argumentsMapItem.first, argumentsMapItem.second);
   }
   payload.WithObject("ArgumentsMap", std::move(argumentsMapJsonMap));

  }

  return payload.View().WriteReadable();
}




