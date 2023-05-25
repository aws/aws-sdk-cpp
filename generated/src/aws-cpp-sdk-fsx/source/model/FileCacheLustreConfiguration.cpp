/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/FileCacheLustreConfiguration.h>
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

FileCacheLustreConfiguration::FileCacheLustreConfiguration() : 
    m_perUnitStorageThroughput(0),
    m_perUnitStorageThroughputHasBeenSet(false),
    m_deploymentType(FileCacheLustreDeploymentType::NOT_SET),
    m_deploymentTypeHasBeenSet(false),
    m_mountNameHasBeenSet(false),
    m_weeklyMaintenanceStartTimeHasBeenSet(false),
    m_metadataConfigurationHasBeenSet(false),
    m_logConfigurationHasBeenSet(false)
{
}

FileCacheLustreConfiguration::FileCacheLustreConfiguration(JsonView jsonValue) : 
    m_perUnitStorageThroughput(0),
    m_perUnitStorageThroughputHasBeenSet(false),
    m_deploymentType(FileCacheLustreDeploymentType::NOT_SET),
    m_deploymentTypeHasBeenSet(false),
    m_mountNameHasBeenSet(false),
    m_weeklyMaintenanceStartTimeHasBeenSet(false),
    m_metadataConfigurationHasBeenSet(false),
    m_logConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

FileCacheLustreConfiguration& FileCacheLustreConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PerUnitStorageThroughput"))
  {
    m_perUnitStorageThroughput = jsonValue.GetInteger("PerUnitStorageThroughput");

    m_perUnitStorageThroughputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeploymentType"))
  {
    m_deploymentType = FileCacheLustreDeploymentTypeMapper::GetFileCacheLustreDeploymentTypeForName(jsonValue.GetString("DeploymentType"));

    m_deploymentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MountName"))
  {
    m_mountName = jsonValue.GetString("MountName");

    m_mountNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WeeklyMaintenanceStartTime"))
  {
    m_weeklyMaintenanceStartTime = jsonValue.GetString("WeeklyMaintenanceStartTime");

    m_weeklyMaintenanceStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetadataConfiguration"))
  {
    m_metadataConfiguration = jsonValue.GetObject("MetadataConfiguration");

    m_metadataConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogConfiguration"))
  {
    m_logConfiguration = jsonValue.GetObject("LogConfiguration");

    m_logConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue FileCacheLustreConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_perUnitStorageThroughputHasBeenSet)
  {
   payload.WithInteger("PerUnitStorageThroughput", m_perUnitStorageThroughput);

  }

  if(m_deploymentTypeHasBeenSet)
  {
   payload.WithString("DeploymentType", FileCacheLustreDeploymentTypeMapper::GetNameForFileCacheLustreDeploymentType(m_deploymentType));
  }

  if(m_mountNameHasBeenSet)
  {
   payload.WithString("MountName", m_mountName);

  }

  if(m_weeklyMaintenanceStartTimeHasBeenSet)
  {
   payload.WithString("WeeklyMaintenanceStartTime", m_weeklyMaintenanceStartTime);

  }

  if(m_metadataConfigurationHasBeenSet)
  {
   payload.WithObject("MetadataConfiguration", m_metadataConfiguration.Jsonize());

  }

  if(m_logConfigurationHasBeenSet)
  {
   payload.WithObject("LogConfiguration", m_logConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
