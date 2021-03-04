/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mwaa/model/UpdateEnvironmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MWAA::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateEnvironmentRequest::UpdateEnvironmentRequest() : 
    m_airflowConfigurationOptionsHasBeenSet(false),
    m_airflowVersionHasBeenSet(false),
    m_dagS3PathHasBeenSet(false),
    m_environmentClassHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_loggingConfigurationHasBeenSet(false),
    m_maxWorkers(0),
    m_maxWorkersHasBeenSet(false),
    m_minWorkers(0),
    m_minWorkersHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_networkConfigurationHasBeenSet(false),
    m_pluginsS3ObjectVersionHasBeenSet(false),
    m_pluginsS3PathHasBeenSet(false),
    m_requirementsS3ObjectVersionHasBeenSet(false),
    m_requirementsS3PathHasBeenSet(false),
    m_sourceBucketArnHasBeenSet(false),
    m_webserverAccessMode(WebserverAccessMode::NOT_SET),
    m_webserverAccessModeHasBeenSet(false),
    m_weeklyMaintenanceWindowStartHasBeenSet(false)
{
}

Aws::String UpdateEnvironmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_airflowConfigurationOptionsHasBeenSet)
  {
   JsonValue airflowConfigurationOptionsJsonMap;
   for(auto& airflowConfigurationOptionsItem : m_airflowConfigurationOptions)
   {
     airflowConfigurationOptionsJsonMap.WithString(airflowConfigurationOptionsItem.first, airflowConfigurationOptionsItem.second);
   }
   payload.WithObject("AirflowConfigurationOptions", std::move(airflowConfigurationOptionsJsonMap));

  }

  if(m_airflowVersionHasBeenSet)
  {
   payload.WithString("AirflowVersion", m_airflowVersion);

  }

  if(m_dagS3PathHasBeenSet)
  {
   payload.WithString("DagS3Path", m_dagS3Path);

  }

  if(m_environmentClassHasBeenSet)
  {
   payload.WithString("EnvironmentClass", m_environmentClass);

  }

  if(m_executionRoleArnHasBeenSet)
  {
   payload.WithString("ExecutionRoleArn", m_executionRoleArn);

  }

  if(m_loggingConfigurationHasBeenSet)
  {
   payload.WithObject("LoggingConfiguration", m_loggingConfiguration.Jsonize());

  }

  if(m_maxWorkersHasBeenSet)
  {
   payload.WithInteger("MaxWorkers", m_maxWorkers);

  }

  if(m_minWorkersHasBeenSet)
  {
   payload.WithInteger("MinWorkers", m_minWorkers);

  }

  if(m_networkConfigurationHasBeenSet)
  {
   payload.WithObject("NetworkConfiguration", m_networkConfiguration.Jsonize());

  }

  if(m_pluginsS3ObjectVersionHasBeenSet)
  {
   payload.WithString("PluginsS3ObjectVersion", m_pluginsS3ObjectVersion);

  }

  if(m_pluginsS3PathHasBeenSet)
  {
   payload.WithString("PluginsS3Path", m_pluginsS3Path);

  }

  if(m_requirementsS3ObjectVersionHasBeenSet)
  {
   payload.WithString("RequirementsS3ObjectVersion", m_requirementsS3ObjectVersion);

  }

  if(m_requirementsS3PathHasBeenSet)
  {
   payload.WithString("RequirementsS3Path", m_requirementsS3Path);

  }

  if(m_sourceBucketArnHasBeenSet)
  {
   payload.WithString("SourceBucketArn", m_sourceBucketArn);

  }

  if(m_webserverAccessModeHasBeenSet)
  {
   payload.WithString("WebserverAccessMode", WebserverAccessModeMapper::GetNameForWebserverAccessMode(m_webserverAccessMode));
  }

  if(m_weeklyMaintenanceWindowStartHasBeenSet)
  {
   payload.WithString("WeeklyMaintenanceWindowStart", m_weeklyMaintenanceWindowStart);

  }

  return payload.View().WriteReadable();
}




