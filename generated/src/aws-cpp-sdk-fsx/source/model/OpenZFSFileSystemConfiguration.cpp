/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/OpenZFSFileSystemConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

OpenZFSFileSystemConfiguration::OpenZFSFileSystemConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

OpenZFSFileSystemConfiguration& OpenZFSFileSystemConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AutomaticBackupRetentionDays"))
  {
    m_automaticBackupRetentionDays = jsonValue.GetInteger("AutomaticBackupRetentionDays");
    m_automaticBackupRetentionDaysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CopyTagsToBackups"))
  {
    m_copyTagsToBackups = jsonValue.GetBool("CopyTagsToBackups");
    m_copyTagsToBackupsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CopyTagsToVolumes"))
  {
    m_copyTagsToVolumes = jsonValue.GetBool("CopyTagsToVolumes");
    m_copyTagsToVolumesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DailyAutomaticBackupStartTime"))
  {
    m_dailyAutomaticBackupStartTime = jsonValue.GetString("DailyAutomaticBackupStartTime");
    m_dailyAutomaticBackupStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeploymentType"))
  {
    m_deploymentType = OpenZFSDeploymentTypeMapper::GetOpenZFSDeploymentTypeForName(jsonValue.GetString("DeploymentType"));
    m_deploymentTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ThroughputCapacity"))
  {
    m_throughputCapacity = jsonValue.GetInteger("ThroughputCapacity");
    m_throughputCapacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WeeklyMaintenanceStartTime"))
  {
    m_weeklyMaintenanceStartTime = jsonValue.GetString("WeeklyMaintenanceStartTime");
    m_weeklyMaintenanceStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DiskIopsConfiguration"))
  {
    m_diskIopsConfiguration = jsonValue.GetObject("DiskIopsConfiguration");
    m_diskIopsConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RootVolumeId"))
  {
    m_rootVolumeId = jsonValue.GetString("RootVolumeId");
    m_rootVolumeIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PreferredSubnetId"))
  {
    m_preferredSubnetId = jsonValue.GetString("PreferredSubnetId");
    m_preferredSubnetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndpointIpAddressRange"))
  {
    m_endpointIpAddressRange = jsonValue.GetString("EndpointIpAddressRange");
    m_endpointIpAddressRangeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndpointIpv6AddressRange"))
  {
    m_endpointIpv6AddressRange = jsonValue.GetString("EndpointIpv6AddressRange");
    m_endpointIpv6AddressRangeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RouteTableIds"))
  {
    Aws::Utils::Array<JsonView> routeTableIdsJsonList = jsonValue.GetArray("RouteTableIds");
    for(unsigned routeTableIdsIndex = 0; routeTableIdsIndex < routeTableIdsJsonList.GetLength(); ++routeTableIdsIndex)
    {
      m_routeTableIds.push_back(routeTableIdsJsonList[routeTableIdsIndex].AsString());
    }
    m_routeTableIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndpointIpAddress"))
  {
    m_endpointIpAddress = jsonValue.GetString("EndpointIpAddress");
    m_endpointIpAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndpointIpv6Address"))
  {
    m_endpointIpv6Address = jsonValue.GetString("EndpointIpv6Address");
    m_endpointIpv6AddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReadCacheConfiguration"))
  {
    m_readCacheConfiguration = jsonValue.GetObject("ReadCacheConfiguration");
    m_readCacheConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue OpenZFSFileSystemConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_automaticBackupRetentionDaysHasBeenSet)
  {
   payload.WithInteger("AutomaticBackupRetentionDays", m_automaticBackupRetentionDays);

  }

  if(m_copyTagsToBackupsHasBeenSet)
  {
   payload.WithBool("CopyTagsToBackups", m_copyTagsToBackups);

  }

  if(m_copyTagsToVolumesHasBeenSet)
  {
   payload.WithBool("CopyTagsToVolumes", m_copyTagsToVolumes);

  }

  if(m_dailyAutomaticBackupStartTimeHasBeenSet)
  {
   payload.WithString("DailyAutomaticBackupStartTime", m_dailyAutomaticBackupStartTime);

  }

  if(m_deploymentTypeHasBeenSet)
  {
   payload.WithString("DeploymentType", OpenZFSDeploymentTypeMapper::GetNameForOpenZFSDeploymentType(m_deploymentType));
  }

  if(m_throughputCapacityHasBeenSet)
  {
   payload.WithInteger("ThroughputCapacity", m_throughputCapacity);

  }

  if(m_weeklyMaintenanceStartTimeHasBeenSet)
  {
   payload.WithString("WeeklyMaintenanceStartTime", m_weeklyMaintenanceStartTime);

  }

  if(m_diskIopsConfigurationHasBeenSet)
  {
   payload.WithObject("DiskIopsConfiguration", m_diskIopsConfiguration.Jsonize());

  }

  if(m_rootVolumeIdHasBeenSet)
  {
   payload.WithString("RootVolumeId", m_rootVolumeId);

  }

  if(m_preferredSubnetIdHasBeenSet)
  {
   payload.WithString("PreferredSubnetId", m_preferredSubnetId);

  }

  if(m_endpointIpAddressRangeHasBeenSet)
  {
   payload.WithString("EndpointIpAddressRange", m_endpointIpAddressRange);

  }

  if(m_endpointIpv6AddressRangeHasBeenSet)
  {
   payload.WithString("EndpointIpv6AddressRange", m_endpointIpv6AddressRange);

  }

  if(m_routeTableIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> routeTableIdsJsonList(m_routeTableIds.size());
   for(unsigned routeTableIdsIndex = 0; routeTableIdsIndex < routeTableIdsJsonList.GetLength(); ++routeTableIdsIndex)
   {
     routeTableIdsJsonList[routeTableIdsIndex].AsString(m_routeTableIds[routeTableIdsIndex]);
   }
   payload.WithArray("RouteTableIds", std::move(routeTableIdsJsonList));

  }

  if(m_endpointIpAddressHasBeenSet)
  {
   payload.WithString("EndpointIpAddress", m_endpointIpAddress);

  }

  if(m_endpointIpv6AddressHasBeenSet)
  {
   payload.WithString("EndpointIpv6Address", m_endpointIpv6Address);

  }

  if(m_readCacheConfigurationHasBeenSet)
  {
   payload.WithObject("ReadCacheConfiguration", m_readCacheConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
