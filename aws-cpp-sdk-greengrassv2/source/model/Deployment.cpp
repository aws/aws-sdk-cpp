/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/Deployment.h>
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

Deployment::Deployment() : 
    m_targetArnHasBeenSet(false),
    m_revisionIdHasBeenSet(false),
    m_deploymentIdHasBeenSet(false),
    m_deploymentNameHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_deploymentStatus(DeploymentStatus::NOT_SET),
    m_deploymentStatusHasBeenSet(false),
    m_isLatestForTarget(false),
    m_isLatestForTargetHasBeenSet(false),
    m_parentTargetArnHasBeenSet(false)
{
}

Deployment::Deployment(JsonView jsonValue) : 
    m_targetArnHasBeenSet(false),
    m_revisionIdHasBeenSet(false),
    m_deploymentIdHasBeenSet(false),
    m_deploymentNameHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_deploymentStatus(DeploymentStatus::NOT_SET),
    m_deploymentStatusHasBeenSet(false),
    m_isLatestForTarget(false),
    m_isLatestForTargetHasBeenSet(false),
    m_parentTargetArnHasBeenSet(false)
{
  *this = jsonValue;
}

Deployment& Deployment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("targetArn"))
  {
    m_targetArn = jsonValue.GetString("targetArn");

    m_targetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revisionId"))
  {
    m_revisionId = jsonValue.GetString("revisionId");

    m_revisionIdHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("creationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetDouble("creationTimestamp");

    m_creationTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deploymentStatus"))
  {
    m_deploymentStatus = DeploymentStatusMapper::GetDeploymentStatusForName(jsonValue.GetString("deploymentStatus"));

    m_deploymentStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isLatestForTarget"))
  {
    m_isLatestForTarget = jsonValue.GetBool("isLatestForTarget");

    m_isLatestForTargetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parentTargetArn"))
  {
    m_parentTargetArn = jsonValue.GetString("parentTargetArn");

    m_parentTargetArnHasBeenSet = true;
  }

  return *this;
}

JsonValue Deployment::Jsonize() const
{
  JsonValue payload;

  if(m_targetArnHasBeenSet)
  {
   payload.WithString("targetArn", m_targetArn);

  }

  if(m_revisionIdHasBeenSet)
  {
   payload.WithString("revisionId", m_revisionId);

  }

  if(m_deploymentIdHasBeenSet)
  {
   payload.WithString("deploymentId", m_deploymentId);

  }

  if(m_deploymentNameHasBeenSet)
  {
   payload.WithString("deploymentName", m_deploymentName);

  }

  if(m_creationTimestampHasBeenSet)
  {
   payload.WithDouble("creationTimestamp", m_creationTimestamp.SecondsWithMSPrecision());
  }

  if(m_deploymentStatusHasBeenSet)
  {
   payload.WithString("deploymentStatus", DeploymentStatusMapper::GetNameForDeploymentStatus(m_deploymentStatus));
  }

  if(m_isLatestForTargetHasBeenSet)
  {
   payload.WithBool("isLatestForTarget", m_isLatestForTarget);

  }

  if(m_parentTargetArnHasBeenSet)
  {
   payload.WithString("parentTargetArn", m_parentTargetArn);

  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
