/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb-elastic/model/UpdateClusterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DocDBElastic::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateClusterRequest::UpdateClusterRequest() : 
    m_adminUserPasswordHasBeenSet(false),
    m_authType(Auth::NOT_SET),
    m_authTypeHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_clusterArnHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_shardCapacity(0),
    m_shardCapacityHasBeenSet(false),
    m_shardCount(0),
    m_shardCountHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_vpcSecurityGroupIdsHasBeenSet(false)
{
}

Aws::String UpdateClusterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_adminUserPasswordHasBeenSet)
  {
   payload.WithString("adminUserPassword", m_adminUserPassword);

  }

  if(m_authTypeHasBeenSet)
  {
   payload.WithString("authType", AuthMapper::GetNameForAuth(m_authType));
  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_preferredMaintenanceWindowHasBeenSet)
  {
   payload.WithString("preferredMaintenanceWindow", m_preferredMaintenanceWindow);

  }

  if(m_shardCapacityHasBeenSet)
  {
   payload.WithInteger("shardCapacity", m_shardCapacity);

  }

  if(m_shardCountHasBeenSet)
  {
   payload.WithInteger("shardCount", m_shardCount);

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

  if(m_vpcSecurityGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vpcSecurityGroupIdsJsonList(m_vpcSecurityGroupIds.size());
   for(unsigned vpcSecurityGroupIdsIndex = 0; vpcSecurityGroupIdsIndex < vpcSecurityGroupIdsJsonList.GetLength(); ++vpcSecurityGroupIdsIndex)
   {
     vpcSecurityGroupIdsJsonList[vpcSecurityGroupIdsIndex].AsString(m_vpcSecurityGroupIds[vpcSecurityGroupIdsIndex]);
   }
   payload.WithArray("vpcSecurityGroupIds", std::move(vpcSecurityGroupIdsJsonList));

  }

  return payload.View().WriteReadable();
}




