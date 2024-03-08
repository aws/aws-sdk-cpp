/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/BatchPutContactRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchPutContactRequest::BatchPutContactRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_instanceIdHasBeenSet(false),
    m_contactDataRequestListHasBeenSet(false)
{
}

Aws::String BatchPutContactRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_contactDataRequestListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> contactDataRequestListJsonList(m_contactDataRequestList.size());
   for(unsigned contactDataRequestListIndex = 0; contactDataRequestListIndex < contactDataRequestListJsonList.GetLength(); ++contactDataRequestListIndex)
   {
     contactDataRequestListJsonList[contactDataRequestListIndex].AsObject(m_contactDataRequestList[contactDataRequestListIndex].Jsonize());
   }
   payload.WithArray("ContactDataRequestList", std::move(contactDataRequestListJsonList));

  }

  return payload.View().WriteReadable();
}




