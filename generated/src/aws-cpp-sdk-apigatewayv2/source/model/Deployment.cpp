/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/Deployment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{

Deployment::Deployment() : 
    m_autoDeployed(false),
    m_autoDeployedHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_deploymentIdHasBeenSet(false),
    m_deploymentStatus(DeploymentStatus::NOT_SET),
    m_deploymentStatusHasBeenSet(false),
    m_deploymentStatusMessageHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

Deployment::Deployment(JsonView jsonValue) : 
    m_autoDeployed(false),
    m_autoDeployedHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_deploymentIdHasBeenSet(false),
    m_deploymentStatus(DeploymentStatus::NOT_SET),
    m_deploymentStatusHasBeenSet(false),
    m_deploymentStatusMessageHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

Deployment& Deployment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("autoDeployed"))
  {
    m_autoDeployed = jsonValue.GetBool("autoDeployed");

    m_autoDeployedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetString("createdDate");

    m_createdDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deploymentId"))
  {
    m_deploymentId = jsonValue.GetString("deploymentId");

    m_deploymentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deploymentStatus"))
  {
    m_deploymentStatus = DeploymentStatusMapper::GetDeploymentStatusForName(jsonValue.GetString("deploymentStatus"));

    m_deploymentStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deploymentStatusMessage"))
  {
    m_deploymentStatusMessage = jsonValue.GetString("deploymentStatusMessage");

    m_deploymentStatusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue Deployment::Jsonize() const
{
  JsonValue payload;

  if(m_autoDeployedHasBeenSet)
  {
   payload.WithBool("autoDeployed", m_autoDeployed);

  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithString("createdDate", m_createdDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_deploymentIdHasBeenSet)
  {
   payload.WithString("deploymentId", m_deploymentId);

  }

  if(m_deploymentStatusHasBeenSet)
  {
   payload.WithString("deploymentStatus", DeploymentStatusMapper::GetNameForDeploymentStatus(m_deploymentStatus));
  }

  if(m_deploymentStatusMessageHasBeenSet)
  {
   payload.WithString("deploymentStatusMessage", m_deploymentStatusMessage);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
