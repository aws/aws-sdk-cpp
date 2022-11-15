/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediastore/model/PutCorsPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaStore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutCorsPolicyRequest::PutCorsPolicyRequest() : 
    m_containerNameHasBeenSet(false),
    m_corsPolicyHasBeenSet(false)
{
}

Aws::String PutCorsPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_containerNameHasBeenSet)
  {
   payload.WithString("ContainerName", m_containerName);

  }

  if(m_corsPolicyHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> corsPolicyJsonList(m_corsPolicy.size());
   for(unsigned corsPolicyIndex = 0; corsPolicyIndex < corsPolicyJsonList.GetLength(); ++corsPolicyIndex)
   {
     corsPolicyJsonList[corsPolicyIndex].AsObject(m_corsPolicy[corsPolicyIndex].Jsonize());
   }
   payload.WithArray("CorsPolicy", std::move(corsPolicyJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutCorsPolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MediaStore_20170901.PutCorsPolicy"));
  return headers;

}




