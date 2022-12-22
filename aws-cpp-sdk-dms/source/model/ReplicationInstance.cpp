/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/ReplicationInstance.h>
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

ReplicationInstance::ReplicationInstance() : 
    m_replicationInstanceIdentifierHasBeenSet(false),
    m_replicationInstanceClassHasBeenSet(false),
    m_replicationInstanceStatusHasBeenSet(false),
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_instanceCreateTimeHasBeenSet(false),
    m_vpcSecurityGroupsHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_replicationSubnetGroupHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_pendingModifiedValuesHasBeenSet(false),
    m_multiAZ(false),
    m_multiAZHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_autoMinorVersionUpgrade(false),
    m_autoMinorVersionUpgradeHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_replicationInstanceArnHasBeenSet(false),
    m_replicationInstancePublicIpAddressesHasBeenSet(false),
    m_replicationInstancePrivateIpAddressesHasBeenSet(false),
    m_replicationInstanceIpv6AddressesHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_secondaryAvailabilityZoneHasBeenSet(false),
    m_freeUntilHasBeenSet(false),
    m_dnsNameServersHasBeenSet(false),
    m_networkTypeHasBeenSet(false)
{
}

ReplicationInstance::ReplicationInstance(JsonView jsonValue) : 
    m_replicationInstanceIdentifierHasBeenSet(false),
    m_replicationInstanceClassHasBeenSet(false),
    m_replicationInstanceStatusHasBeenSet(false),
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_instanceCreateTimeHasBeenSet(false),
    m_vpcSecurityGroupsHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_replicationSubnetGroupHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_pendingModifiedValuesHasBeenSet(false),
    m_multiAZ(false),
    m_multiAZHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_autoMinorVersionUpgrade(false),
    m_autoMinorVersionUpgradeHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_replicationInstanceArnHasBeenSet(false),
    m_replicationInstancePublicIpAddressesHasBeenSet(false),
    m_replicationInstancePrivateIpAddressesHasBeenSet(false),
    m_replicationInstanceIpv6AddressesHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_secondaryAvailabilityZoneHasBeenSet(false),
    m_freeUntilHasBeenSet(false),
    m_dnsNameServersHasBeenSet(false),
    m_networkTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicationInstance& ReplicationInstance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReplicationInstanceIdentifier"))
  {
    m_replicationInstanceIdentifier = jsonValue.GetString("ReplicationInstanceIdentifier");

    m_replicationInstanceIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationInstanceClass"))
  {
    m_replicationInstanceClass = jsonValue.GetString("ReplicationInstanceClass");

    m_replicationInstanceClassHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationInstanceStatus"))
  {
    m_replicationInstanceStatus = jsonValue.GetString("ReplicationInstanceStatus");

    m_replicationInstanceStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllocatedStorage"))
  {
    m_allocatedStorage = jsonValue.GetInteger("AllocatedStorage");

    m_allocatedStorageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceCreateTime"))
  {
    m_instanceCreateTime = jsonValue.GetDouble("InstanceCreateTime");

    m_instanceCreateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcSecurityGroups"))
  {
    Aws::Utils::Array<JsonView> vpcSecurityGroupsJsonList = jsonValue.GetArray("VpcSecurityGroups");
    for(unsigned vpcSecurityGroupsIndex = 0; vpcSecurityGroupsIndex < vpcSecurityGroupsJsonList.GetLength(); ++vpcSecurityGroupsIndex)
    {
      m_vpcSecurityGroups.push_back(vpcSecurityGroupsJsonList[vpcSecurityGroupsIndex].AsObject());
    }
    m_vpcSecurityGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("AvailabilityZone");

    m_availabilityZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationSubnetGroup"))
  {
    m_replicationSubnetGroup = jsonValue.GetObject("ReplicationSubnetGroup");

    m_replicationSubnetGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreferredMaintenanceWindow"))
  {
    m_preferredMaintenanceWindow = jsonValue.GetString("PreferredMaintenanceWindow");

    m_preferredMaintenanceWindowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PendingModifiedValues"))
  {
    m_pendingModifiedValues = jsonValue.GetObject("PendingModifiedValues");

    m_pendingModifiedValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MultiAZ"))
  {
    m_multiAZ = jsonValue.GetBool("MultiAZ");

    m_multiAZHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EngineVersion"))
  {
    m_engineVersion = jsonValue.GetString("EngineVersion");

    m_engineVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoMinorVersionUpgrade"))
  {
    m_autoMinorVersionUpgrade = jsonValue.GetBool("AutoMinorVersionUpgrade");

    m_autoMinorVersionUpgradeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationInstanceArn"))
  {
    m_replicationInstanceArn = jsonValue.GetString("ReplicationInstanceArn");

    m_replicationInstanceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationInstancePublicIpAddresses"))
  {
    Aws::Utils::Array<JsonView> replicationInstancePublicIpAddressesJsonList = jsonValue.GetArray("ReplicationInstancePublicIpAddresses");
    for(unsigned replicationInstancePublicIpAddressesIndex = 0; replicationInstancePublicIpAddressesIndex < replicationInstancePublicIpAddressesJsonList.GetLength(); ++replicationInstancePublicIpAddressesIndex)
    {
      m_replicationInstancePublicIpAddresses.push_back(replicationInstancePublicIpAddressesJsonList[replicationInstancePublicIpAddressesIndex].AsString());
    }
    m_replicationInstancePublicIpAddressesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationInstancePrivateIpAddresses"))
  {
    Aws::Utils::Array<JsonView> replicationInstancePrivateIpAddressesJsonList = jsonValue.GetArray("ReplicationInstancePrivateIpAddresses");
    for(unsigned replicationInstancePrivateIpAddressesIndex = 0; replicationInstancePrivateIpAddressesIndex < replicationInstancePrivateIpAddressesJsonList.GetLength(); ++replicationInstancePrivateIpAddressesIndex)
    {
      m_replicationInstancePrivateIpAddresses.push_back(replicationInstancePrivateIpAddressesJsonList[replicationInstancePrivateIpAddressesIndex].AsString());
    }
    m_replicationInstancePrivateIpAddressesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationInstanceIpv6Addresses"))
  {
    Aws::Utils::Array<JsonView> replicationInstanceIpv6AddressesJsonList = jsonValue.GetArray("ReplicationInstanceIpv6Addresses");
    for(unsigned replicationInstanceIpv6AddressesIndex = 0; replicationInstanceIpv6AddressesIndex < replicationInstanceIpv6AddressesJsonList.GetLength(); ++replicationInstanceIpv6AddressesIndex)
    {
      m_replicationInstanceIpv6Addresses.push_back(replicationInstanceIpv6AddressesJsonList[replicationInstanceIpv6AddressesIndex].AsString());
    }
    m_replicationInstanceIpv6AddressesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PubliclyAccessible"))
  {
    m_publiclyAccessible = jsonValue.GetBool("PubliclyAccessible");

    m_publiclyAccessibleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecondaryAvailabilityZone"))
  {
    m_secondaryAvailabilityZone = jsonValue.GetString("SecondaryAvailabilityZone");

    m_secondaryAvailabilityZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FreeUntil"))
  {
    m_freeUntil = jsonValue.GetDouble("FreeUntil");

    m_freeUntilHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DnsNameServers"))
  {
    m_dnsNameServers = jsonValue.GetString("DnsNameServers");

    m_dnsNameServersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkType"))
  {
    m_networkType = jsonValue.GetString("NetworkType");

    m_networkTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicationInstance::Jsonize() const
{
  JsonValue payload;

  if(m_replicationInstanceIdentifierHasBeenSet)
  {
   payload.WithString("ReplicationInstanceIdentifier", m_replicationInstanceIdentifier);

  }

  if(m_replicationInstanceClassHasBeenSet)
  {
   payload.WithString("ReplicationInstanceClass", m_replicationInstanceClass);

  }

  if(m_replicationInstanceStatusHasBeenSet)
  {
   payload.WithString("ReplicationInstanceStatus", m_replicationInstanceStatus);

  }

  if(m_allocatedStorageHasBeenSet)
  {
   payload.WithInteger("AllocatedStorage", m_allocatedStorage);

  }

  if(m_instanceCreateTimeHasBeenSet)
  {
   payload.WithDouble("InstanceCreateTime", m_instanceCreateTime.SecondsWithMSPrecision());
  }

  if(m_vpcSecurityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vpcSecurityGroupsJsonList(m_vpcSecurityGroups.size());
   for(unsigned vpcSecurityGroupsIndex = 0; vpcSecurityGroupsIndex < vpcSecurityGroupsJsonList.GetLength(); ++vpcSecurityGroupsIndex)
   {
     vpcSecurityGroupsJsonList[vpcSecurityGroupsIndex].AsObject(m_vpcSecurityGroups[vpcSecurityGroupsIndex].Jsonize());
   }
   payload.WithArray("VpcSecurityGroups", std::move(vpcSecurityGroupsJsonList));

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("AvailabilityZone", m_availabilityZone);

  }

  if(m_replicationSubnetGroupHasBeenSet)
  {
   payload.WithObject("ReplicationSubnetGroup", m_replicationSubnetGroup.Jsonize());

  }

  if(m_preferredMaintenanceWindowHasBeenSet)
  {
   payload.WithString("PreferredMaintenanceWindow", m_preferredMaintenanceWindow);

  }

  if(m_pendingModifiedValuesHasBeenSet)
  {
   payload.WithObject("PendingModifiedValues", m_pendingModifiedValues.Jsonize());

  }

  if(m_multiAZHasBeenSet)
  {
   payload.WithBool("MultiAZ", m_multiAZ);

  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("EngineVersion", m_engineVersion);

  }

  if(m_autoMinorVersionUpgradeHasBeenSet)
  {
   payload.WithBool("AutoMinorVersionUpgrade", m_autoMinorVersionUpgrade);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_replicationInstanceArnHasBeenSet)
  {
   payload.WithString("ReplicationInstanceArn", m_replicationInstanceArn);

  }

  if(m_replicationInstancePublicIpAddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> replicationInstancePublicIpAddressesJsonList(m_replicationInstancePublicIpAddresses.size());
   for(unsigned replicationInstancePublicIpAddressesIndex = 0; replicationInstancePublicIpAddressesIndex < replicationInstancePublicIpAddressesJsonList.GetLength(); ++replicationInstancePublicIpAddressesIndex)
   {
     replicationInstancePublicIpAddressesJsonList[replicationInstancePublicIpAddressesIndex].AsString(m_replicationInstancePublicIpAddresses[replicationInstancePublicIpAddressesIndex]);
   }
   payload.WithArray("ReplicationInstancePublicIpAddresses", std::move(replicationInstancePublicIpAddressesJsonList));

  }

  if(m_replicationInstancePrivateIpAddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> replicationInstancePrivateIpAddressesJsonList(m_replicationInstancePrivateIpAddresses.size());
   for(unsigned replicationInstancePrivateIpAddressesIndex = 0; replicationInstancePrivateIpAddressesIndex < replicationInstancePrivateIpAddressesJsonList.GetLength(); ++replicationInstancePrivateIpAddressesIndex)
   {
     replicationInstancePrivateIpAddressesJsonList[replicationInstancePrivateIpAddressesIndex].AsString(m_replicationInstancePrivateIpAddresses[replicationInstancePrivateIpAddressesIndex]);
   }
   payload.WithArray("ReplicationInstancePrivateIpAddresses", std::move(replicationInstancePrivateIpAddressesJsonList));

  }

  if(m_replicationInstanceIpv6AddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> replicationInstanceIpv6AddressesJsonList(m_replicationInstanceIpv6Addresses.size());
   for(unsigned replicationInstanceIpv6AddressesIndex = 0; replicationInstanceIpv6AddressesIndex < replicationInstanceIpv6AddressesJsonList.GetLength(); ++replicationInstanceIpv6AddressesIndex)
   {
     replicationInstanceIpv6AddressesJsonList[replicationInstanceIpv6AddressesIndex].AsString(m_replicationInstanceIpv6Addresses[replicationInstanceIpv6AddressesIndex]);
   }
   payload.WithArray("ReplicationInstanceIpv6Addresses", std::move(replicationInstanceIpv6AddressesJsonList));

  }

  if(m_publiclyAccessibleHasBeenSet)
  {
   payload.WithBool("PubliclyAccessible", m_publiclyAccessible);

  }

  if(m_secondaryAvailabilityZoneHasBeenSet)
  {
   payload.WithString("SecondaryAvailabilityZone", m_secondaryAvailabilityZone);

  }

  if(m_freeUntilHasBeenSet)
  {
   payload.WithDouble("FreeUntil", m_freeUntil.SecondsWithMSPrecision());
  }

  if(m_dnsNameServersHasBeenSet)
  {
   payload.WithString("DnsNameServers", m_dnsNameServers);

  }

  if(m_networkTypeHasBeenSet)
  {
   payload.WithString("NetworkType", m_networkType);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
