/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/OntapFileSystemConfiguration.h>
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

OntapFileSystemConfiguration::OntapFileSystemConfiguration() : 
    m_automaticBackupRetentionDays(0),
    m_automaticBackupRetentionDaysHasBeenSet(false),
    m_dailyAutomaticBackupStartTimeHasBeenSet(false),
    m_deploymentType(OntapDeploymentType::NOT_SET),
    m_deploymentTypeHasBeenSet(false),
    m_endpointIpAddressRangeHasBeenSet(false),
    m_endpointsHasBeenSet(false),
    m_diskIopsConfigurationHasBeenSet(false),
    m_preferredSubnetIdHasBeenSet(false),
    m_routeTableIdsHasBeenSet(false),
    m_throughputCapacity(0),
    m_throughputCapacityHasBeenSet(false),
    m_weeklyMaintenanceStartTimeHasBeenSet(false)
{
}

OntapFileSystemConfiguration::OntapFileSystemConfiguration(JsonView jsonValue) : 
    m_automaticBackupRetentionDays(0),
    m_automaticBackupRetentionDaysHasBeenSet(false),
    m_dailyAutomaticBackupStartTimeHasBeenSet(false),
    m_deploymentType(OntapDeploymentType::NOT_SET),
    m_deploymentTypeHasBeenSet(false),
    m_endpointIpAddressRangeHasBeenSet(false),
    m_endpointsHasBeenSet(false),
    m_diskIopsConfigurationHasBeenSet(false),
    m_preferredSubnetIdHasBeenSet(false),
    m_routeTableIdsHasBeenSet(false),
    m_throughputCapacity(0),
    m_throughputCapacityHasBeenSet(false),
    m_weeklyMaintenanceStartTimeHasBeenSet(false)
{
  *this = jsonValue;
}

OntapFileSystemConfiguration& OntapFileSystemConfiguration::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Endpoints"))
  {
    m_endpoints = jsonValue.GetObject("Endpoints");

    m_endpointsHasBeenSet = true;
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

  return *this;
}

JsonValue OntapFileSystemConfiguration::Jsonize() const
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

  if(m_endpointsHasBeenSet)
  {
   payload.WithObject("Endpoints", m_endpoints.Jsonize());

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

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
