/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb-elastic/model/Cluster.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DocDBElastic
{
namespace Model
{

Cluster::Cluster() : 
    m_adminUserNameHasBeenSet(false),
    m_authType(Auth::NOT_SET),
    m_authTypeHasBeenSet(false),
    m_clusterArnHasBeenSet(false),
    m_clusterEndpointHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_shardCapacity(0),
    m_shardCapacityHasBeenSet(false),
    m_shardCount(0),
    m_shardCountHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_vpcSecurityGroupIdsHasBeenSet(false)
{
}

Cluster::Cluster(JsonView jsonValue) : 
    m_adminUserNameHasBeenSet(false),
    m_authType(Auth::NOT_SET),
    m_authTypeHasBeenSet(false),
    m_clusterArnHasBeenSet(false),
    m_clusterEndpointHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_shardCapacity(0),
    m_shardCapacityHasBeenSet(false),
    m_shardCount(0),
    m_shardCountHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_vpcSecurityGroupIdsHasBeenSet(false)
{
  *this = jsonValue;
}

Cluster& Cluster::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("adminUserName"))
  {
    m_adminUserName = jsonValue.GetString("adminUserName");

    m_adminUserNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authType"))
  {
    m_authType = AuthMapper::GetAuthForName(jsonValue.GetString("authType"));

    m_authTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clusterArn"))
  {
    m_clusterArn = jsonValue.GetString("clusterArn");

    m_clusterArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clusterEndpoint"))
  {
    m_clusterEndpoint = jsonValue.GetString("clusterEndpoint");

    m_clusterEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clusterName"))
  {
    m_clusterName = jsonValue.GetString("clusterName");

    m_clusterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetString("createTime");

    m_createTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("preferredMaintenanceWindow"))
  {
    m_preferredMaintenanceWindow = jsonValue.GetString("preferredMaintenanceWindow");

    m_preferredMaintenanceWindowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("shardCapacity"))
  {
    m_shardCapacity = jsonValue.GetInteger("shardCapacity");

    m_shardCapacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("shardCount"))
  {
    m_shardCount = jsonValue.GetInteger("shardCount");

    m_shardCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subnetIds"))
  {
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("subnetIds");
    for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
    {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcSecurityGroupIds"))
  {
    Aws::Utils::Array<JsonView> vpcSecurityGroupIdsJsonList = jsonValue.GetArray("vpcSecurityGroupIds");
    for(unsigned vpcSecurityGroupIdsIndex = 0; vpcSecurityGroupIdsIndex < vpcSecurityGroupIdsJsonList.GetLength(); ++vpcSecurityGroupIdsIndex)
    {
      m_vpcSecurityGroupIds.push_back(vpcSecurityGroupIdsJsonList[vpcSecurityGroupIdsIndex].AsString());
    }
    m_vpcSecurityGroupIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue Cluster::Jsonize() const
{
  JsonValue payload;

  if(m_adminUserNameHasBeenSet)
  {
   payload.WithString("adminUserName", m_adminUserName);

  }

  if(m_authTypeHasBeenSet)
  {
   payload.WithString("authType", AuthMapper::GetNameForAuth(m_authType));
  }

  if(m_clusterArnHasBeenSet)
  {
   payload.WithString("clusterArn", m_clusterArn);

  }

  if(m_clusterEndpointHasBeenSet)
  {
   payload.WithString("clusterEndpoint", m_clusterEndpoint);

  }

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("clusterName", m_clusterName);

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithString("createTime", m_createTime);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

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

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", StatusMapper::GetNameForStatus(m_status));
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

  return payload;
}

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
