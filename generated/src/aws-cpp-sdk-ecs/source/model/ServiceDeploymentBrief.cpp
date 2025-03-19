/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ServiceDeploymentBrief.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

ServiceDeploymentBrief::ServiceDeploymentBrief(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceDeploymentBrief& ServiceDeploymentBrief::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("serviceDeploymentArn"))
  {
    m_serviceDeploymentArn = jsonValue.GetString("serviceDeploymentArn");
    m_serviceDeploymentArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceArn"))
  {
    m_serviceArn = jsonValue.GetString("serviceArn");
    m_serviceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clusterArn"))
  {
    m_clusterArn = jsonValue.GetString("clusterArn");
    m_clusterArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetDouble("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("finishedAt"))
  {
    m_finishedAt = jsonValue.GetDouble("finishedAt");
    m_finishedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetServiceRevisionArn"))
  {
    m_targetServiceRevisionArn = jsonValue.GetString("targetServiceRevisionArn");
    m_targetServiceRevisionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ServiceDeploymentStatusMapper::GetServiceDeploymentStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceDeploymentBrief::Jsonize() const
{
  JsonValue payload;

  if(m_serviceDeploymentArnHasBeenSet)
  {
   payload.WithString("serviceDeploymentArn", m_serviceDeploymentArn);

  }

  if(m_serviceArnHasBeenSet)
  {
   payload.WithString("serviceArn", m_serviceArn);

  }

  if(m_clusterArnHasBeenSet)
  {
   payload.WithString("clusterArn", m_clusterArn);

  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithDouble("startedAt", m_startedAt.SecondsWithMSPrecision());
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_finishedAtHasBeenSet)
  {
   payload.WithDouble("finishedAt", m_finishedAt.SecondsWithMSPrecision());
  }

  if(m_targetServiceRevisionArnHasBeenSet)
  {
   payload.WithString("targetServiceRevisionArn", m_targetServiceRevisionArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ServiceDeploymentStatusMapper::GetNameForServiceDeploymentStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
