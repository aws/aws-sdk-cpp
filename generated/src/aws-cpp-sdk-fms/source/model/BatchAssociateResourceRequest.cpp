/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/BatchAssociateResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchAssociateResourceRequest::BatchAssociateResourceRequest() : 
    m_resourceSetIdentifierHasBeenSet(false),
    m_itemsHasBeenSet(false)
{
}

Aws::String BatchAssociateResourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceSetIdentifierHasBeenSet)
  {
   payload.WithString("ResourceSetIdentifier", m_resourceSetIdentifier);

  }

  if(m_itemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> itemsJsonList(m_items.size());
   for(unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex)
   {
     itemsJsonList[itemsIndex].AsString(m_items[itemsIndex]);
   }
   payload.WithArray("Items", std::move(itemsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchAssociateResourceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSFMS_20180101.BatchAssociateResource"));
  return headers;

}




