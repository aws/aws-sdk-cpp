/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/BatchDisassociateUserStackRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDisassociateUserStackRequest::BatchDisassociateUserStackRequest() : 
    m_userStackAssociationsHasBeenSet(false)
{
}

Aws::String BatchDisassociateUserStackRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_userStackAssociationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userStackAssociationsJsonList(m_userStackAssociations.size());
   for(unsigned userStackAssociationsIndex = 0; userStackAssociationsIndex < userStackAssociationsJsonList.GetLength(); ++userStackAssociationsIndex)
   {
     userStackAssociationsJsonList[userStackAssociationsIndex].AsObject(m_userStackAssociations[userStackAssociationsIndex].Jsonize());
   }
   payload.WithArray("UserStackAssociations", std::move(userStackAssociationsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchDisassociateUserStackRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.BatchDisassociateUserStack"));
  return headers;

}




