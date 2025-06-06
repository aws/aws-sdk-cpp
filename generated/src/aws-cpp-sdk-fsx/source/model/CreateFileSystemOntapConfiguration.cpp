﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/CreateFileSystemOntapConfiguration.h>
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

CreateFileSystemOntapConfiguration::CreateFileSystemOntapConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

CreateFileSystemOntapConfiguration& CreateFileSystemOntapConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AutomaticBackupRetentionDays"))
  {
    m_automaticBackupRetentionDays = jsonValue.GetInteger("AutomaticBackupRetentionDays");
    m_automaticBackupRetentionDaysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DailyAutomaticBackupStartTime"))
  {
    m_dailyAutomaticBackupStartTime = jsonValue.GetString("DailyAutomaticBackupStartTime");
    m_dailyAutomaticBackupStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeploymentType"))
  {
    m_deploymentType = OntapDeploymentTypeMapper::GetOntapDeploymentTypeForName(jsonValue.GetString("DeploymentType"));
    m_deploymentTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndpointIpAddressRange"))
  {
    m_endpointIpAddressRange = jsonValue.GetString("EndpointIpAddressRange");
    m_endpointIpAddressRangeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FsxAdminPassword"))
  {
    m_fsxAdminPassword = jsonValue.GetString("FsxAdminPassword");
    m_fsxAdminPasswordHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DiskIopsConfiguration"))
  {
    m_diskIopsConfiguration = jsonValue.GetObject("DiskIopsConfiguration");
    m_diskIopsConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PreferredSubnetId"))
  {
    m_preferredSubnetId = jsonValue.GetString("PreferredSubnetId");
    m_preferredSubnetIdHasBeenSet = true;
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
  if(jsonValue.ValueExists("HAPairs"))
  {
    m_hAPairs = jsonValue.GetInteger("HAPairs");
    m_hAPairsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ThroughputCapacityPerHAPair"))
  {
    m_throughputCapacityPerHAPair = jsonValue.GetInteger("ThroughputCapacityPerHAPair");
    m_throughputCapacityPerHAPairHasBeenSet = true;
  }
  return *this;
}

JsonValue CreateFileSystemOntapConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_automaticBackupRetentionDaysHasBeenSet)
  {
   payload.WithInteger("AutomaticBackupRetentionDays", m_automaticBackupRetentionDays);

  }

  if(m_dailyAutomaticBackupStartTimeHasBeenSet)
  {
   payload.WithString("DailyAutomaticBackupStartTime", m_dailyAutomaticBackupStartTime);

  }

  if(m_deploymentTypeHasBeenSet)
  {
   payload.WithString("DeploymentType", OntapDeploymentTypeMapper::GetNameForOntapDeploymentType(m_deploymentType));
  }

  if(m_endpointIpAddressRangeHasBeenSet)
  {
   payload.WithString("EndpointIpAddressRange", m_endpointIpAddressRange);

  }

  if(m_fsxAdminPasswordHasBeenSet)
  {
   payload.WithString("FsxAdminPassword", m_fsxAdminPassword);

  }

  if(m_diskIopsConfigurationHasBeenSet)
  {
   payload.WithObject("DiskIopsConfiguration", m_diskIopsConfiguration.Jsonize());

  }

  if(m_preferredSubnetIdHasBeenSet)
  {
   payload.WithString("PreferredSubnetId", m_preferredSubnetId);

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

  if(m_throughputCapacityHasBeenSet)
  {
   payload.WithInteger("ThroughputCapacity", m_throughputCapacity);

  }

  if(m_weeklyMaintenanceStartTimeHasBeenSet)
  {
   payload.WithString("WeeklyMaintenanceStartTime", m_weeklyMaintenanceStartTime);

  }

  if(m_hAPairsHasBeenSet)
  {
   payload.WithInteger("HAPairs", m_hAPairs);

  }

  if(m_throughputCapacityPerHAPairHasBeenSet)
  {
   payload.WithInteger("ThroughputCapacityPerHAPair", m_throughputCapacityPerHAPair);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
