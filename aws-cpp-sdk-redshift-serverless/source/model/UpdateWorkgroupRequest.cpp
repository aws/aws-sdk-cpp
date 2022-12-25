/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/UpdateWorkgroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateWorkgroupRequest::UpdateWorkgroupRequest() : 
    m_baseCapacity(0),
    m_baseCapacityHasBeenSet(false),
    m_configParametersHasBeenSet(false),
    m_enhancedVpcRouting(false),
    m_enhancedVpcRoutingHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_workgroupNameHasBeenSet(false)
{
}

Aws::String UpdateWorkgroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_baseCapacityHasBeenSet)
  {
   payload.WithInteger("baseCapacity", m_baseCapacity);

  }

  if(m_configParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> configParametersJsonList(m_configParameters.size());
   for(unsigned configParametersIndex = 0; configParametersIndex < configParametersJsonList.GetLength(); ++configParametersIndex)
   {
     configParametersJsonList[configParametersIndex].AsObject(m_configParameters[configParametersIndex].Jsonize());
   }
   payload.WithArray("configParameters", std::move(configParametersJsonList));

  }

  if(m_enhancedVpcRoutingHasBeenSet)
  {
   payload.WithBool("enhancedVpcRouting", m_enhancedVpcRouting);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("port", m_port);

  }

  if(m_publiclyAccessibleHasBeenSet)
  {
   payload.WithBool("publiclyAccessible", m_publiclyAccessible);

  }

  if(m_securityGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
   for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
   {
     securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
   }
   payload.WithArray("securityGroupIds", std::move(securityGroupIdsJsonList));

  }

  if(m_subnetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
   for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
   {
     subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
   }
   payload.WithArray("subnetIds", std::move(subnetIdsJsonList));

  }

  if(m_workgroupNameHasBeenSet)
  {
   payload.WithString("workgroupName", m_workgroupName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateWorkgroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RedshiftServerless.UpdateWorkgroup"));
  return headers;

}




