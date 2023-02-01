/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/BatchUpdatePhoneNumberRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchUpdatePhoneNumberRequest::BatchUpdatePhoneNumberRequest() : 
    m_updatePhoneNumberRequestItemsHasBeenSet(false)
{
}

Aws::String BatchUpdatePhoneNumberRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_updatePhoneNumberRequestItemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> updatePhoneNumberRequestItemsJsonList(m_updatePhoneNumberRequestItems.size());
   for(unsigned updatePhoneNumberRequestItemsIndex = 0; updatePhoneNumberRequestItemsIndex < updatePhoneNumberRequestItemsJsonList.GetLength(); ++updatePhoneNumberRequestItemsIndex)
   {
     updatePhoneNumberRequestItemsJsonList[updatePhoneNumberRequestItemsIndex].AsObject(m_updatePhoneNumberRequestItems[updatePhoneNumberRequestItemsIndex].Jsonize());
   }
   payload.WithArray("UpdatePhoneNumberRequestItems", std::move(updatePhoneNumberRequestItemsJsonList));

  }

  return payload.View().WriteReadable();
}




