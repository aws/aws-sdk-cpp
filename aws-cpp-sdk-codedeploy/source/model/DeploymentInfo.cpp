/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_rollbackInfoHasBeenSet(false)
{
}

DeploymentInfo::DeploymentInfo(const JsonValue& jsonValue) : 
    m_applicationNameHasBeenSet(false),
    m_deploymentGroupNameHasBeenSet(false),
    m_deploymentConfigNameHasBeenSet(false),
    m_deploymentIdHasBeenSet(false),
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
    m_rollbackInfoHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentInfo& DeploymentInfo::operator =(const JsonValue& jsonValue)
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

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws