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

#include <aws/glue/model/UpdateDevEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDevEndpointRequest::UpdateDevEndpointRequest() : 
    m_endpointNameHasBeenSet(false),
    m_publicKeyHasBeenSet(false),
    m_addPublicKeysHasBeenSet(false),
    m_deletePublicKeysHasBeenSet(false),
    m_customLibrariesHasBeenSet(false),
    m_updateEtlLibraries(false),
    m_updateEtlLibrariesHasBeenSet(false),
    m_deleteArgumentsHasBeenSet(false),
    m_addArgumentsHasBeenSet(false)
{
}

Aws::String UpdateDevEndpointRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_endpointNameHasBeenSet)
  {
   payload.WithString("EndpointName", m_endpointName);

  }

  if(m_publicKeyHasBeenSet)
  {
   payload.WithString("PublicKey", m_publicKey);

  }

  if(m_addPublicKeysHasBeenSet)
  {
   Array<JsonValue> addPublicKeysJsonList(m_addPublicKeys.size());
   for(unsigned addPublicKeysIndex = 0; addPublicKeysIndex < addPublicKeysJsonList.GetLength(); ++addPublicKeysIndex)
   {
     addPublicKeysJsonList[addPublicKeysIndex].AsString(m_addPublicKeys[addPublicKeysIndex]);
   }
   payload.WithArray("AddPublicKeys", std::move(addPublicKeysJsonList));

  }

  if(m_deletePublicKeysHasBeenSet)
  {
   Array<JsonValue> deletePublicKeysJsonList(m_deletePublicKeys.size());
   for(unsigned deletePublicKeysIndex = 0; deletePublicKeysIndex < deletePublicKeysJsonList.GetLength(); ++deletePublicKeysIndex)
   {
     deletePublicKeysJsonList[deletePublicKeysIndex].AsString(m_deletePublicKeys[deletePublicKeysIndex]);
   }
   payload.WithArray("DeletePublicKeys", std::move(deletePublicKeysJsonList));

  }

  if(m_customLibrariesHasBeenSet)
  {
   payload.WithObject("CustomLibraries", m_customLibraries.Jsonize());

  }

  if(m_updateEtlLibrariesHasBeenSet)
  {
   payload.WithBool("UpdateEtlLibraries", m_updateEtlLibraries);

  }

  if(m_deleteArgumentsHasBeenSet)
  {
   Array<JsonValue> deleteArgumentsJsonList(m_deleteArguments.size());
   for(unsigned deleteArgumentsIndex = 0; deleteArgumentsIndex < deleteArgumentsJsonList.GetLength(); ++deleteArgumentsIndex)
   {
     deleteArgumentsJsonList[deleteArgumentsIndex].AsString(m_deleteArguments[deleteArgumentsIndex]);
   }
   payload.WithArray("DeleteArguments", std::move(deleteArgumentsJsonList));

  }

  if(m_addArgumentsHasBeenSet)
  {
   JsonValue addArgumentsJsonMap;
   for(auto& addArgumentsItem : m_addArguments)
   {
     addArgumentsJsonMap.WithString(addArgumentsItem.first, addArgumentsItem.second);
   }
   payload.WithObject("AddArguments", std::move(addArgumentsJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDevEndpointRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.UpdateDevEndpoint"));
  return headers;

}




