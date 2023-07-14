﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/CreateSipMediaApplicationCallRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSipMediaApplicationCallRequest::CreateSipMediaApplicationCallRequest() : 
    m_fromPhoneNumberHasBeenSet(false),
    m_toPhoneNumberHasBeenSet(false),
    m_sipMediaApplicationIdHasBeenSet(false),
    m_sipHeadersHasBeenSet(false)
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

  return payload.View().WriteReadable();
}




