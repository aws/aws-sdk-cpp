/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/CreateVpcConnectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateVpcConnectionRequest::CreateVpcConnectionRequest() : 
    m_targetClusterArnHasBeenSet(false),
    m_authenticationHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_clientSubnetsHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateVpcConnectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_targetClusterArnHasBeenSet)
  {
   payload.WithString("targetClusterArn", m_targetClusterArn);

  }

  if(m_authenticationHasBeenSet)
  {
   payload.WithString("authentication", m_authentication);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("vpcId", m_vpcId);

  }

  if(m_clientSubnetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> clientSubnetsJsonList(m_clientSubnets.size());
   for(unsigned clientSubnetsIndex = 0; clientSubnetsIndex < clientSubnetsJsonList.GetLength(); ++clientSubnetsIndex)
   {
     clientSubnetsJsonList[clientSubnetsIndex].AsString(m_clientSubnets[clientSubnetsIndex]);
   }
   payload.WithArray("clientSubnets", std::move(clientSubnetsJsonList));

  }

  if(m_securityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupsJsonList(m_securityGroups.size());
   for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
   {
     securityGroupsJsonList[securityGroupsIndex].AsString(m_securityGroups[securityGroupsIndex]);
   }
   payload.WithArray("securityGroups", std::move(securityGroupsJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




