/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/CreateVpcConnectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateVpcConnectorRequest::CreateVpcConnectorRequest() : 
    m_vpcConnectorNameHasBeenSet(false),
    m_subnetsHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateVpcConnectorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_vpcConnectorNameHasBeenSet)
  {
   payload.WithString("VpcConnectorName", m_vpcConnectorName);

  }

  if(m_subnetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetsJsonList(m_subnets.size());
   for(unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex)
   {
     subnetsJsonList[subnetsIndex].AsString(m_subnets[subnetsIndex]);
   }
   payload.WithArray("Subnets", std::move(subnetsJsonList));

  }

  if(m_securityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupsJsonList(m_securityGroups.size());
   for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
   {
     securityGroupsJsonList[securityGroupsIndex].AsString(m_securityGroups[securityGroupsIndex]);
   }
   payload.WithArray("SecurityGroups", std::move(securityGroupsJsonList));

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateVpcConnectorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AppRunner.CreateVpcConnector"));
  return headers;

}




