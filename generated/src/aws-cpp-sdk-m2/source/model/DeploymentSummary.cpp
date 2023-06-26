/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/DeploymentSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

DeploymentSummary::DeploymentSummary() : 
    m_applicationIdHasBeenSet(false),
    m_applicationVersion(0),
    m_applicationVersionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_deploymentIdHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_status(DeploymentLifecycle::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false)
{
}

DeploymentSummary::DeploymentSummary(JsonView jsonValue) : 
    m_applicationIdHasBeenSet(false),
    m_applicationVersion(0),
    m_applicationVersionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_deploymentIdHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_status(DeploymentLifecycle::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentSummary& DeploymentSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");

    m_applicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("applicationVersion"))
  {
    m_applicationVersion = jsonValue.GetInteger("applicationVersion");

    m_applicationVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deploymentId"))
  {
    m_deploymentId = jsonValue.GetString("deploymentId");

    m_deploymentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environmentId"))
  {
    m_environmentId = jsonValue.GetString("environmentId");

    m_environmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = DeploymentLifecycleMapper::GetDeploymentLifecycleForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");

    m_statusReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue DeploymentSummary::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("applicationId", m_applicationId);

  }

  if(m_applicationVersionHasBeenSet)
  {
   payload.WithInteger("applicationVersion", m_applicationVersion);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_deploymentIdHasBeenSet)
  {
   payload.WithString("deploymentId", m_deploymentId);

  }

  if(m_environmentIdHasBeenSet)
  {
   payload.WithString("environmentId", m_environmentId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", DeploymentLifecycleMapper::GetNameForDeploymentLifecycle(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  return payload;
}

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
