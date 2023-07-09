/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/ComputeConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

ComputeConfig::ComputeConfig() : 
    m_availabilityZoneHasBeenSet(false),
    m_dnsNameServersHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_maxCapacityUnits(0),
    m_maxCapacityUnitsHasBeenSet(false),
    m_minCapacityUnits(0),
    m_minCapacityUnitsHasBeenSet(false),
    m_multiAZ(false),
    m_multiAZHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_replicationSubnetGroupIdHasBeenSet(false),
    m_vpcSecurityGroupIdsHasBeenSet(false)
{
}

ComputeConfig::ComputeConfig(JsonView jsonValue) : 
    m_availabilityZoneHasBeenSet(false),
    m_dnsNameServersHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_maxCapacityUnits(0),
    m_maxCapacityUnitsHasBeenSet(false),
    m_minCapacityUnits(0),
    m_minCapacityUnitsHasBeenSet(false),
    m_multiAZ(false),
    m_multiAZHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_replicationSubnetGroupIdHasBeenSet(false),
    m_vpcSecurityGroupIdsHasBeenSet(false)
{
  *this = jsonValue;
}

ComputeConfig& ComputeConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AvailabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("AvailabilityZone");

    m_availabilityZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DnsNameServers"))
  {
    m_dnsNameServers = jsonValue.GetString("DnsNameServers");

    m_dnsNameServersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxCapacityUnits"))
  {
    m_maxCapacityUnits = jsonValue.GetInteger("MaxCapacityUnits");

    m_maxCapacityUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinCapacityUnits"))
  {
    m_minCapacityUnits = jsonValue.GetInteger("MinCapacityUnits");

    m_minCapacityUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MultiAZ"))
  {
    m_multiAZ = jsonValue.GetBool("MultiAZ");

    m_multiAZHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreferredMaintenanceWindow"))
  {
    m_preferredMaintenanceWindow = jsonValue.GetString("PreferredMaintenanceWindow");

    m_preferredMaintenanceWindowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationSubnetGroupId"))
  {
    m_replicationSubnetGroupId = jsonValue.GetString("ReplicationSubnetGroupId");

    m_replicationSubnetGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcSecurityGroupIds"))
  {
    Aws::Utils::Array<JsonView> vpcSecurityGroupIdsJsonList = jsonValue.GetArray("VpcSecurityGroupIds");
    for(unsigned vpcSecurityGroupIdsIndex = 0; vpcSecurityGroupIdsIndex < vpcSecurityGroupIdsJsonList.GetLength(); ++vpcSecurityGroupIdsIndex)
    {
      m_vpcSecurityGroupIds.push_back(vpcSecurityGroupIdsJsonList[vpcSecurityGroupIdsIndex].AsString());
    }
    m_vpcSecurityGroupIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue ComputeConfig::Jsonize() const
{
  JsonValue payload;

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("AvailabilityZone", m_availabilityZone);

  }

  if(m_dnsNameServersHasBeenSet)
  {
   payload.WithString("DnsNameServers", m_dnsNameServers);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_maxCapacityUnitsHasBeenSet)
  {
   payload.WithInteger("MaxCapacityUnits", m_maxCapacityUnits);

  }

  if(m_minCapacityUnitsHasBeenSet)
  {
   payload.WithInteger("MinCapacityUnits", m_minCapacityUnits);

  }

  if(m_multiAZHasBeenSet)
  {
   payload.WithBool("MultiAZ", m_multiAZ);

  }

  if(m_preferredMaintenanceWindowHasBeenSet)
  {
   payload.WithString("PreferredMaintenanceWindow", m_preferredMaintenanceWindow);

  }

  if(m_replicationSubnetGroupIdHasBeenSet)
  {
   payload.WithString("ReplicationSubnetGroupId", m_replicationSubnetGroupId);

  }

  if(m_vpcSecurityGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vpcSecurityGroupIdsJsonList(m_vpcSecurityGroupIds.size());
   for(unsigned vpcSecurityGroupIdsIndex = 0; vpcSecurityGroupIdsIndex < vpcSecurityGroupIdsJsonList.GetLength(); ++vpcSecurityGroupIdsIndex)
   {
     vpcSecurityGroupIdsJsonList[vpcSecurityGroupIdsIndex].AsString(m_vpcSecurityGroupIds[vpcSecurityGroupIdsIndex]);
   }
   payload.WithArray("VpcSecurityGroupIds", std::move(vpcSecurityGroupIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
