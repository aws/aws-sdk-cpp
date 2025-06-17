/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/EksCluster.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

EksCluster::EksCluster(JsonView jsonValue)
{
  *this = jsonValue;
}

EksCluster& EksCluster::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ClusterStatusMapper::GetClusterStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vpcId"))
  {
    m_vpcId = jsonValue.GetString("vpcId");
    m_vpcIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ec2InstanceUids"))
  {
    Aws::Utils::Array<JsonView> ec2InstanceUidsJsonList = jsonValue.GetArray("ec2InstanceUids");
    for(unsigned ec2InstanceUidsIndex = 0; ec2InstanceUidsIndex < ec2InstanceUidsJsonList.GetLength(); ++ec2InstanceUidsIndex)
    {
      m_ec2InstanceUids.push_back(ec2InstanceUidsJsonList[ec2InstanceUidsIndex].AsString());
    }
    m_ec2InstanceUidsHasBeenSet = true;
  }
  return *this;
}

JsonValue EksCluster::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ClusterStatusMapper::GetNameForClusterStatus(m_status));
  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("vpcId", m_vpcId);

  }

  if(m_ec2InstanceUidsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ec2InstanceUidsJsonList(m_ec2InstanceUids.size());
   for(unsigned ec2InstanceUidsIndex = 0; ec2InstanceUidsIndex < ec2InstanceUidsJsonList.GetLength(); ++ec2InstanceUidsIndex)
   {
     ec2InstanceUidsJsonList[ec2InstanceUidsIndex].AsString(m_ec2InstanceUids[ec2InstanceUidsIndex]);
   }
   payload.WithArray("ec2InstanceUids", std::move(ec2InstanceUidsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
