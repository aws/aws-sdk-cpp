/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   Array<JsonValue> corsPolicyJsonList(m_corsPolicy.size());
   for(unsigned corsPolicyIndex = 0; corsPolicyIndex < corsPolicyJsonList.GetLength(); ++corsPolicyIndex)
   {
     corsPolicyJsonList[corsPolicyIndex].AsObject(m_corsPolicy[corsPolicyIndex].Jsonize());
   }
   payload.WithArray("CorsPolicy", std::move(corsPolicyJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection PutCorsPolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MediaStore_20170901.PutCorsPolicy"));
  return headers;

}




