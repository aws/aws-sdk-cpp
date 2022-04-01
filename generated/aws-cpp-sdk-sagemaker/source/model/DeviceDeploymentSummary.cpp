/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DeviceDeploymentSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

DeviceDeploymentSummary::DeviceDeploymentSummary() : 
    m_edgeDeploymentPlanArnHasBeenSet(false),
    m_edgeDeploymentPlanNameHasBeenSet(false),
    m_stageNameHasBeenSet(false),
    m_deployedStageNameHasBeenSet(false),
    m_deviceFleetNameHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_deviceArnHasBeenSet(false),
    m_deviceDeploymentStatus(DeviceDeploymentStatus::NOT_SET),
    m_deviceDeploymentStatusHasBeenSet(false),
    m_deviceDeploymentStatusMessageHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_deploymentStartTimeHasBeenSet(false)
{
}

DeviceDeploymentSummary::DeviceDeploymentSummary(JsonView jsonValue) : 
    m_edgeDeploymentPlanArnHasBeenSet(false),
    m_edgeDeploymentPlanNameHasBeenSet(false),
    m_stageNameHasBeenSet(false),
    m_deployedStageNameHasBeenSet(false),
    m_deviceFleetNameHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_deviceArnHasBeenSet(false),
    m_deviceDeploymentStatus(DeviceDeploymentStatus::NOT_SET),
    m_deviceDeploymentStatusHasBeenSet(false),
    m_deviceDeploymentStatusMessageHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_deploymentStartTimeHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceDeploymentSummary& DeviceDeploymentSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EdgeDeploymentPlanArn"))
  {
    m_edgeDeploymentPlanArn = jsonValue.GetString("EdgeDeploymentPlanArn");

    m_edgeDeploymentPlanArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EdgeDeploymentPlanName"))
  {
    m_edgeDeploymentPlanName = jsonValue.GetString("EdgeDeploymentPlanName");

    m_edgeDeploymentPlanNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StageName"))
  {
    m_stageName = jsonValue.GetString("StageName");

    m_stageNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeployedStageName"))
  {
    m_deployedStageName = jsonValue.GetString("DeployedStageName");

    m_deployedStageNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceFleetName"))
  {
    m_deviceFleetName = jsonValue.GetString("DeviceFleetName");

    m_deviceFleetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceName"))
  {
    m_deviceName = jsonValue.GetString("DeviceName");

    m_deviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceArn"))
  {
    m_deviceArn = jsonValue.GetString("DeviceArn");

    m_deviceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceDeploymentStatus"))
  {
    m_deviceDeploymentStatus = DeviceDeploymentStatusMapper::GetDeviceDeploymentStatusForName(jsonValue.GetString("DeviceDeploymentStatus"));

    m_deviceDeploymentStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceDeploymentStatusMessage"))
  {
    m_deviceDeploymentStatusMessage = jsonValue.GetString("DeviceDeploymentStatusMessage");

    m_deviceDeploymentStatusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeploymentStartTime"))
  {
    m_deploymentStartTime = jsonValue.GetDouble("DeploymentStartTime");

    m_deploymentStartTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue DeviceDeploymentSummary::Jsonize() const
{
  JsonValue payload;

  if(m_edgeDeploymentPlanArnHasBeenSet)
  {
   payload.WithString("EdgeDeploymentPlanArn", m_edgeDeploymentPlanArn);

  }

  if(m_edgeDeploymentPlanNameHasBeenSet)
  {
   payload.WithString("EdgeDeploymentPlanName", m_edgeDeploymentPlanName);

  }

  if(m_stageNameHasBeenSet)
  {
   payload.WithString("StageName", m_stageName);

  }

  if(m_deployedStageNameHasBeenSet)
  {
   payload.WithString("DeployedStageName", m_deployedStageName);

  }

  if(m_deviceFleetNameHasBeenSet)
  {
   payload.WithString("DeviceFleetName", m_deviceFleetName);

  }

  if(m_deviceNameHasBeenSet)
  {
   payload.WithString("DeviceName", m_deviceName);

  }

  if(m_deviceArnHasBeenSet)
  {
   payload.WithString("DeviceArn", m_deviceArn);

  }

  if(m_deviceDeploymentStatusHasBeenSet)
  {
   payload.WithString("DeviceDeploymentStatus", DeviceDeploymentStatusMapper::GetNameForDeviceDeploymentStatus(m_deviceDeploymentStatus));
  }

  if(m_deviceDeploymentStatusMessageHasBeenSet)
  {
   payload.WithString("DeviceDeploymentStatusMessage", m_deviceDeploymentStatusMessage);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_deploymentStartTimeHasBeenSet)
  {
   payload.WithDouble("DeploymentStartTime", m_deploymentStartTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
