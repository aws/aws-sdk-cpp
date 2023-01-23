/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/EffectiveDeployment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{

EffectiveDeployment::EffectiveDeployment() : 
    m_deploymentIdHasBeenSet(false),
    m_deploymentNameHasBeenSet(false),
    m_iotJobIdHasBeenSet(false),
    m_iotJobArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_targetArnHasBeenSet(false),
    m_coreDeviceExecutionStatus(EffectiveDeploymentExecutionStatus::NOT_SET),
    m_coreDeviceExecutionStatusHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_modifiedTimestampHasBeenSet(false),
    m_statusDetailsHasBeenSet(false)
{
}

EffectiveDeployment::EffectiveDeployment(JsonView jsonValue) : 
    m_deploymentIdHasBeenSet(false),
    m_deploymentNameHasBeenSet(false),
    m_iotJobIdHasBeenSet(false),
    m_iotJobArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_targetArnHasBeenSet(false),
    m_coreDeviceExecutionStatus(EffectiveDeploymentExecutionStatus::NOT_SET),
    m_coreDeviceExecutionStatusHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_modifiedTimestampHasBeenSet(false),
    m_statusDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

EffectiveDeployment& EffectiveDeployment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("deploymentId"))
  {
    m_deploymentId = jsonValue.GetString("deploymentId");

    m_deploymentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deploymentName"))
  {
    m_deploymentName = jsonValue.GetString("deploymentName");

    m_deploymentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iotJobId"))
  {
    m_iotJobId = jsonValue.GetString("iotJobId");

    m_iotJobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iotJobArn"))
  {
    m_iotJobArn = jsonValue.GetString("iotJobArn");

    m_iotJobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetArn"))
  {
    m_targetArn = jsonValue.GetString("targetArn");

    m_targetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("coreDeviceExecutionStatus"))
  {
    m_coreDeviceExecutionStatus = EffectiveDeploymentExecutionStatusMapper::GetEffectiveDeploymentExecutionStatusForName(jsonValue.GetString("coreDeviceExecutionStatus"));

    m_coreDeviceExecutionStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = jsonValue.GetString("reason");

    m_reasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetDouble("creationTimestamp");

    m_creationTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modifiedTimestamp"))
  {
    m_modifiedTimestamp = jsonValue.GetDouble("modifiedTimestamp");

    m_modifiedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusDetails"))
  {
    m_statusDetails = jsonValue.GetObject("statusDetails");

    m_statusDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue EffectiveDeployment::Jsonize() const
{
  JsonValue payload;

  if(m_deploymentIdHasBeenSet)
  {
   payload.WithString("deploymentId", m_deploymentId);

  }

  if(m_deploymentNameHasBeenSet)
  {
   payload.WithString("deploymentName", m_deploymentName);

  }

  if(m_iotJobIdHasBeenSet)
  {
   payload.WithString("iotJobId", m_iotJobId);

  }

  if(m_iotJobArnHasBeenSet)
  {
   payload.WithString("iotJobArn", m_iotJobArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_targetArnHasBeenSet)
  {
   payload.WithString("targetArn", m_targetArn);

  }

  if(m_coreDeviceExecutionStatusHasBeenSet)
  {
   payload.WithString("coreDeviceExecutionStatus", EffectiveDeploymentExecutionStatusMapper::GetNameForEffectiveDeploymentExecutionStatus(m_coreDeviceExecutionStatus));
  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  if(m_creationTimestampHasBeenSet)
  {
   payload.WithDouble("creationTimestamp", m_creationTimestamp.SecondsWithMSPrecision());
  }

  if(m_modifiedTimestampHasBeenSet)
  {
   payload.WithDouble("modifiedTimestamp", m_modifiedTimestamp.SecondsWithMSPrecision());
  }

  if(m_statusDetailsHasBeenSet)
  {
   payload.WithObject("statusDetails", m_statusDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
