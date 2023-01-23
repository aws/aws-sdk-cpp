/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb-elastic/model/ClusterSnapshot.h>
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

ClusterSnapshot::ClusterSnapshot() : 
    m_adminUserNameHasBeenSet(false),
    m_clusterArnHasBeenSet(false),
    m_clusterCreationTimeHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_snapshotArnHasBeenSet(false),
    m_snapshotCreationTimeHasBeenSet(false),
    m_snapshotNameHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_vpcSecurityGroupIdsHasBeenSet(false)
{
}

ClusterSnapshot::ClusterSnapshot(JsonView jsonValue) : 
    m_adminUserNameHasBeenSet(false),
    m_clusterArnHasBeenSet(false),
    m_clusterCreationTimeHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_snapshotArnHasBeenSet(false),
    m_snapshotCreationTimeHasBeenSet(false),
    m_snapshotNameHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_vpcSecurityGroupIdsHasBeenSet(false)
{
  *this = jsonValue;
}

ClusterSnapshot& ClusterSnapshot::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("adminUserName"))
  {
    m_adminUserName = jsonValue.GetString("adminUserName");

    m_adminUserNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clusterArn"))
  {
    m_clusterArn = jsonValue.GetString("clusterArn");

    m_clusterArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clusterCreationTime"))
  {
    m_clusterCreationTime = jsonValue.GetString("clusterCreationTime");

    m_clusterCreationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snapshotArn"))
  {
    m_snapshotArn = jsonValue.GetString("snapshotArn");

    m_snapshotArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snapshotCreationTime"))
  {
    m_snapshotCreationTime = jsonValue.GetString("snapshotCreationTime");

    m_snapshotCreationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snapshotName"))
  {
    m_snapshotName = jsonValue.GetString("snapshotName");

    m_snapshotNameHasBeenSet = true;
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

JsonValue ClusterSnapshot::Jsonize() const
{
  JsonValue payload;

  if(m_adminUserNameHasBeenSet)
  {
   payload.WithString("adminUserName", m_adminUserName);

  }

  if(m_clusterArnHasBeenSet)
  {
   payload.WithString("clusterArn", m_clusterArn);

  }

  if(m_clusterCreationTimeHasBeenSet)
  {
   payload.WithString("clusterCreationTime", m_clusterCreationTime);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  if(m_snapshotArnHasBeenSet)
  {
   payload.WithString("snapshotArn", m_snapshotArn);

  }

  if(m_snapshotCreationTimeHasBeenSet)
  {
   payload.WithString("snapshotCreationTime", m_snapshotCreationTime);

  }

  if(m_snapshotNameHasBeenSet)
  {
   payload.WithString("snapshotName", m_snapshotName);

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
