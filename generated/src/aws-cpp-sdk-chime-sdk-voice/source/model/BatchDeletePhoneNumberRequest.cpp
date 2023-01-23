/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/BatchDeletePhoneNumberRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDeletePhoneNumberRequest::BatchDeletePhoneNumberRequest() : 
    m_phoneNumberIdsHasBeenSet(false)
{
}

Aws::String BatchDeletePhoneNumberRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_phoneNumberIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> phoneNumberIdsJsonList(m_phoneNumberIds.size());
   for(unsigned phoneNumberIdsIndex = 0; phoneNumberIdsIndex < phoneNumberIdsJsonList.GetLength(); ++phoneNumberIdsIndex)
   {
     phoneNumberIdsJsonList[phoneNumberIdsIndex].AsString(m_phoneNumberIds[phoneNumberIdsIndex]);
   }
   payload.WithArray("PhoneNumberIds", std::move(phoneNumberIdsJsonList));

  }

  return payload.View().WriteReadable();
}




