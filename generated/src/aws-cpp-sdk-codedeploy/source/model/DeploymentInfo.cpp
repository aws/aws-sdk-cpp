/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/DeploymentInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

DeploymentInfo::DeploymentInfo() : 
    m_applicationNameHasBeenSet(false),
    m_deploymentGroupNameHasBeenSet(false),
    m_deploymentConfigNameHasBeenSet(false),
    m_deploymentIdHasBeenSet(false),
    m_previousRevisionHasBeenSet(false),
    m_revisionHasBeenSet(false),
    m_status(DeploymentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorInformationHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_completeTimeHasBeenSet(false),
    m_deploymentOverviewHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_creator(DeploymentCreator::NOT_SET),
    m_creatorHasBeenSet(false),
    m_ignoreApplicationStopFailures(false),
    m_ignoreApplicationStopFailuresHasBeenSet(false),
    m_autoRollbackConfigurationHasBeenSet(false),
    m_updateOutdatedInstancesOnly(false),
    m_updateOutdatedInstancesOnlyHasBeenSet(false),
    m_rollbackInfoHasBeenSet(false),
    m_deploymentStyleHasBeenSet(false),
    m_targetInstancesHasBeenSet(false),
    m_instanceTerminationWaitTimeStarted(false),
    m_instanceTerminationWaitTimeStartedHasBeenSet(false),
    m_blueGreenDeploymentConfigurationHasBeenSet(false),
    m_loadBalancerInfoHasBeenSet(false),
    m_additionalDeploymentStatusInfoHasBeenSet(false),
    m_fileExistsBehavior(FileExistsBehavior::NOT_SET),
    m_fileExistsBehaviorHasBeenSet(false),
    m_deploymentStatusMessagesHasBeenSet(false),
    m_computePlatform(ComputePlatform::NOT_SET),
    m_computePlatformHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_relatedDeploymentsHasBeenSet(false),
    m_overrideAlarmConfigurationHasBeenSet(false)
{
}

DeploymentInfo::DeploymentInfo(JsonView jsonValue) : 
    m_applicationNameHasBeenSet(false),
    m_deploymentGroupNameHasBeenSet(false),
    m_deploymentConfigNameHasBeenSet(false),
    m_deploymentIdHasBeenSet(false),
    m_previousRevisionHasBeenSet(false),
    m_revisionHasBeenSet(false),
    m_status(DeploymentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorInformationHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_completeTimeHasBeenSet(false),
    m_deploymentOverviewHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_creator(DeploymentCreator::NOT_SET),
    m_creatorHasBeenSet(false),
    m_ignoreApplicationStopFailures(false),
    m_ignoreApplicationStopFailuresHasBeenSet(false),
    m_autoRollbackConfigurationHasBeenSet(false),
    m_updateOutdatedInstancesOnly(false),
    m_updateOutdatedInstancesOnlyHasBeenSet(false),
    m_rollbackInfoHasBeenSet(false),
    m_deploymentStyleHasBeenSet(false),
    m_targetInstancesHasBeenSet(false),
    m_instanceTerminationWaitTimeStarted(false),
    m_instanceTerminationWaitTimeStartedHasBeenSet(false),
    m_blueGreenDeploymentConfigurationHasBeenSet(false),
    m_loadBalancerInfoHasBeenSet(false),
    m_additionalDeploymentStatusInfoHasBeenSet(false),
    m_fileExistsBehavior(FileExistsBehavior::NOT_SET),
    m_fileExistsBehaviorHasBeenSet(false),
    m_deploymentStatusMessagesHasBeenSet(false),
    m_computePlatform(ComputePlatform::NOT_SET),
    m_computePlatformHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_relatedDeploymentsHasBeenSet(false),
    m_overrideAlarmConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentInfo& DeploymentInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("applicationName"))
  {
    m_applicationName = jsonValue.GetString("applicationName");

    m_applicationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deploymentGroupName"))
  {
    m_deploymentGroupName = jsonValue.GetString("deploymentGroupName");

    m_deploymentGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deploymentConfigName"))
  {
    m_deploymentConfigName = jsonValue.GetString("deploymentConfigName");

    m_deploymentConfigNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deploymentId"))
  {
    m_deploymentId = jsonValue.GetString("deploymentId");

    m_deploymentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("previousRevision"))
  {
    m_previousRevision = jsonValue.GetObject("previousRevision");

    m_previousRevisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revision"))
  {
    m_revision = jsonValue.GetObject("revision");

    m_revisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = DeploymentStatusMapper::GetDeploymentStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorInformation"))
  {
    m_errorInformation = jsonValue.GetObject("errorInformation");

    m_errorInformationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetDouble("createTime");

    m_createTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("completeTime"))
  {
    m_completeTime = jsonValue.GetDouble("completeTime");

    m_completeTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deploymentOverview"))
  {
    m_deploymentOverview = jsonValue.GetObject("deploymentOverview");

    m_deploymentOverviewHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creator"))
  {
    m_creator = DeploymentCreatorMapper::GetDeploymentCreatorForName(jsonValue.GetString("creator"));

    m_creatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ignoreApplicationStopFailures"))
  {
    m_ignoreApplicationStopFailures = jsonValue.GetBool("ignoreApplicationStopFailures");

    m_ignoreApplicationStopFailuresHasBeenSet = true;
  }

  if(jsonValue.ValueExists("autoRollbackConfiguration"))
  {
    m_autoRollbackConfiguration = jsonValue.GetObject("autoRollbackConfiguration");

    m_autoRollbackConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateOutdatedInstancesOnly"))
  {
    m_updateOutdatedInstancesOnly = jsonValue.GetBool("updateOutdatedInstancesOnly");

    m_updateOutdatedInstancesOnlyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rollbackInfo"))
  {
    m_rollbackInfo = jsonValue.GetObject("rollbackInfo");

    m_rollbackInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deploymentStyle"))
  {
    m_deploymentStyle = jsonValue.GetObject("deploymentStyle");

    m_deploymentStyleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetInstances"))
  {
    m_targetInstances = jsonValue.GetObject("targetInstances");

    m_targetInstancesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceTerminationWaitTimeStarted"))
  {
    m_instanceTerminationWaitTimeStarted = jsonValue.GetBool("instanceTerminationWaitTimeStarted");

    m_instanceTerminationWaitTimeStartedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("blueGreenDeploymentConfiguration"))
  {
    m_blueGreenDeploymentConfiguration = jsonValue.GetObject("blueGreenDeploymentConfiguration");

    m_blueGreenDeploymentConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("loadBalancerInfo"))
  {
    m_loadBalancerInfo = jsonValue.GetObject("loadBalancerInfo");

    m_loadBalancerInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("additionalDeploymentStatusInfo"))
  {
    m_additionalDeploymentStatusInfo = jsonValue.GetString("additionalDeploymentStatusInfo");

    m_additionalDeploymentStatusInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fileExistsBehavior"))
  {
    m_fileExistsBehavior = FileExistsBehaviorMapper::GetFileExistsBehaviorForName(jsonValue.GetString("fileExistsBehavior"));

    m_fileExistsBehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deploymentStatusMessages"))
  {
    Aws::Utils::Array<JsonView> deploymentStatusMessagesJsonList = jsonValue.GetArray("deploymentStatusMessages");
    for(unsigned deploymentStatusMessagesIndex = 0; deploymentStatusMessagesIndex < deploymentStatusMessagesJsonList.GetLength(); ++deploymentStatusMessagesIndex)
    {
      m_deploymentStatusMessages.push_back(deploymentStatusMessagesJsonList[deploymentStatusMessagesIndex].AsString());
    }
    m_deploymentStatusMessagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("computePlatform"))
  {
    m_computePlatform = ComputePlatformMapper::GetComputePlatformForName(jsonValue.GetString("computePlatform"));

    m_computePlatformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("externalId"))
  {
    m_externalId = jsonValue.GetString("externalId");

    m_externalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relatedDeployments"))
  {
    m_relatedDeployments = jsonValue.GetObject("relatedDeployments");

    m_relatedDeploymentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("overrideAlarmConfiguration"))
  {
    m_overrideAlarmConfiguration = jsonValue.GetObject("overrideAlarmConfiguration");

    m_overrideAlarmConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue DeploymentInfo::Jsonize() const
{
  JsonValue payload;

  if(m_applicationNameHasBeenSet)
  {
   payload.WithString("applicationName", m_applicationName);

  }

  if(m_deploymentGroupNameHasBeenSet)
  {
   payload.WithString("deploymentGroupName", m_deploymentGroupName);

  }

  if(m_deploymentConfigNameHasBeenSet)
  {
   payload.WithString("deploymentConfigName", m_deploymentConfigName);

  }

  if(m_deploymentIdHasBeenSet)
  {
   payload.WithString("deploymentId", m_deploymentId);

  }

  if(m_previousRevisionHasBeenSet)
  {
   payload.WithObject("previousRevision", m_previousRevision.Jsonize());

  }

  if(m_revisionHasBeenSet)
  {
   payload.WithObject("revision", m_revision.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", DeploymentStatusMapper::GetNameForDeploymentStatus(m_status));
  }

  if(m_errorInformationHasBeenSet)
  {
   payload.WithObject("errorInformation", m_errorInformation.Jsonize());

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("createTime", m_createTime.SecondsWithMSPrecision());
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_completeTimeHasBeenSet)
  {
   payload.WithDouble("completeTime", m_completeTime.SecondsWithMSPrecision());
  }

  if(m_deploymentOverviewHasBeenSet)
  {
   payload.WithObject("deploymentOverview", m_deploymentOverview.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_creatorHasBeenSet)
  {
   payload.WithString("creator", DeploymentCreatorMapper::GetNameForDeploymentCreator(m_creator));
  }

  if(m_ignoreApplicationStopFailuresHasBeenSet)
  {
   payload.WithBool("ignoreApplicationStopFailures", m_ignoreApplicationStopFailures);

  }

  if(m_autoRollbackConfigurationHasBeenSet)
  {
   payload.WithObject("autoRollbackConfiguration", m_autoRollbackConfiguration.Jsonize());

  }

  if(m_updateOutdatedInstancesOnlyHasBeenSet)
  {
   payload.WithBool("updateOutdatedInstancesOnly", m_updateOutdatedInstancesOnly);

  }

  if(m_rollbackInfoHasBeenSet)
  {
   payload.WithObject("rollbackInfo", m_rollbackInfo.Jsonize());

  }

  if(m_deploymentStyleHasBeenSet)
  {
   payload.WithObject("deploymentStyle", m_deploymentStyle.Jsonize());

  }

  if(m_targetInstancesHasBeenSet)
  {
   payload.WithObject("targetInstances", m_targetInstances.Jsonize());

  }

  if(m_instanceTerminationWaitTimeStartedHasBeenSet)
  {
   payload.WithBool("instanceTerminationWaitTimeStarted", m_instanceTerminationWaitTimeStarted);

  }

  if(m_blueGreenDeploymentConfigurationHasBeenSet)
  {
   payload.WithObject("blueGreenDeploymentConfiguration", m_blueGreenDeploymentConfiguration.Jsonize());

  }

  if(m_loadBalancerInfoHasBeenSet)
  {
   payload.WithObject("loadBalancerInfo", m_loadBalancerInfo.Jsonize());

  }

  if(m_additionalDeploymentStatusInfoHasBeenSet)
  {
   payload.WithString("additionalDeploymentStatusInfo", m_additionalDeploymentStatusInfo);

  }

  if(m_fileExistsBehaviorHasBeenSet)
  {
   payload.WithString("fileExistsBehavior", FileExistsBehaviorMapper::GetNameForFileExistsBehavior(m_fileExistsBehavior));
  }

  if(m_deploymentStatusMessagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deploymentStatusMessagesJsonList(m_deploymentStatusMessages.size());
   for(unsigned deploymentStatusMessagesIndex = 0; deploymentStatusMessagesIndex < deploymentStatusMessagesJsonList.GetLength(); ++deploymentStatusMessagesIndex)
   {
     deploymentStatusMessagesJsonList[deploymentStatusMessagesIndex].AsString(m_deploymentStatusMessages[deploymentStatusMessagesIndex]);
   }
   payload.WithArray("deploymentStatusMessages", std::move(deploymentStatusMessagesJsonList));

  }

  if(m_computePlatformHasBeenSet)
  {
   payload.WithString("computePlatform", ComputePlatformMapper::GetNameForComputePlatform(m_computePlatform));
  }

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("externalId", m_externalId);

  }

  if(m_relatedDeploymentsHasBeenSet)
  {
   payload.WithObject("relatedDeployments", m_relatedDeployments.Jsonize());

  }

  if(m_overrideAlarmConfigurationHasBeenSet)
  {
   payload.WithObject("overrideAlarmConfiguration", m_overrideAlarmConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
