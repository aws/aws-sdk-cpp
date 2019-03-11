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

#include <aws/glue/model/CreateDevEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDevEndpointRequest::CreateDevEndpointRequest() : 
    m_endpointNameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_publicKeyHasBeenSet(false),
    m_publicKeysHasBeenSet(false),
    m_numberOfNodes(0),
    m_numberOfNodesHasBeenSet(false),
    m_extraPythonLibsS3PathHasBeenSet(false),
    m_extraJarsS3PathHasBeenSet(false),
    m_securityConfigurationHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_argumentsHasBeenSet(false)
{
}

Aws::String CreateDevEndpointRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_endpointNameHasBeenSet)
  {
   payload.WithString("EndpointName", m_endpointName);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_securityGroupIdsHasBeenSet)
  {
   Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
   for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
   {
     securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
   }
   payload.WithArray("SecurityGroupIds", std::move(securityGroupIdsJsonList));

  }

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("SubnetId", m_subnetId);

  }

  if(m_publicKeyHasBeenSet)
  {
   payload.WithString("PublicKey", m_publicKey);

  }

  if(m_publicKeysHasBeenSet)
  {
   Array<JsonValue> publicKeysJsonList(m_publicKeys.size());
   for(unsigned publicKeysIndex = 0; publicKeysIndex < publicKeysJsonList.GetLength(); ++publicKeysIndex)
   {
     publicKeysJsonList[publicKeysIndex].AsString(m_publicKeys[publicKeysIndex]);
   }
   payload.WithArray("PublicKeys", std::move(publicKeysJsonList));

  }

  if(m_numberOfNodesHasBeenSet)
  {
   payload.WithInteger("NumberOfNodes", m_numberOfNodes);

  }

  if(m_extraPythonLibsS3PathHasBeenSet)
  {
   payload.WithString("ExtraPythonLibsS3Path", m_extraPythonLibsS3Path);

  }

  if(m_extraJarsS3PathHasBeenSet)
  {
   payload.WithString("ExtraJarsS3Path", m_extraJarsS3Path);

  }

  if(m_securityConfigurationHasBeenSet)
  {
   payload.WithString("SecurityConfiguration", m_securityConfiguration);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_argumentsHasBeenSet)
  {
   JsonValue argumentsJsonMap;
   for(auto& argumentsItem : m_arguments)
   {
     argumentsJsonMap.WithString(argumentsItem.first, argumentsItem.second);
   }
   payload.WithObject("Arguments", std::move(argumentsJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDevEndpointRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.CreateDevEndpoint"));
  return headers;

}




