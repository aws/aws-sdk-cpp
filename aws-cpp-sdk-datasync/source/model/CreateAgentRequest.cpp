/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/CreateAgentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAgentRequest::CreateAgentRequest() : 
    m_activationKeyHasBeenSet(false),
    m_agentNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vpcEndpointIdHasBeenSet(false),
    m_subnetArnsHasBeenSet(false),
    m_securityGroupArnsHasBeenSet(false)
{
}

Aws::String CreateAgentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_activationKeyHasBeenSet)
  {
   payload.WithString("ActivationKey", m_activationKey);

  }

  if(m_agentNameHasBeenSet)
  {
   payload.WithString("AgentName", m_agentName);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_vpcEndpointIdHasBeenSet)
  {
   payload.WithString("VpcEndpointId", m_vpcEndpointId);

  }

  if(m_subnetArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetArnsJsonList(m_subnetArns.size());
   for(unsigned subnetArnsIndex = 0; subnetArnsIndex < subnetArnsJsonList.GetLength(); ++subnetArnsIndex)
   {
     subnetArnsJsonList[subnetArnsIndex].AsString(m_subnetArns[subnetArnsIndex]);
   }
   payload.WithArray("SubnetArns", std::move(subnetArnsJsonList));

  }

  if(m_securityGroupArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupArnsJsonList(m_securityGroupArns.size());
   for(unsigned securityGroupArnsIndex = 0; securityGroupArnsIndex < securityGroupArnsJsonList.GetLength(); ++securityGroupArnsIndex)
   {
     securityGroupArnsJsonList[securityGroupArnsIndex].AsString(m_securityGroupArns[securityGroupArnsIndex]);
   }
   payload.WithArray("SecurityGroupArns", std::move(securityGroupArnsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateAgentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "FmrsService.CreateAgent"));
  return headers;

}




