/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ServiceDeployment.h>
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

ServiceDeployment::ServiceDeployment() : 
    m_serviceDeploymentArnHasBeenSet(false),
    m_serviceArnHasBeenSet(false),
    m_clusterArnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_finishedAtHasBeenSet(false),
    m_stoppedAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_sourceServiceRevisionsHasBeenSet(false),
    m_targetServiceRevisionHasBeenSet(false),
    m_status(ServiceDeploymentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_deploymentConfigurationHasBeenSet(false),
    m_rollbackHasBeenSet(false),
    m_deploymentCircuitBreakerHasBeenSet(false),
    m_alarmsHasBeenSet(false)
{
}

ServiceDeployment::ServiceDeployment(JsonView jsonValue)
  : ServiceDeployment()
{
  *this = jsonValue;
}

ServiceDeployment& ServiceDeployment::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetDouble("startedAt");

    m_startedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("finishedAt"))
  {
    m_finishedAt = jsonValue.GetDouble("finishedAt");

    m_finishedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stoppedAt"))
  {
    m_stoppedAt = jsonValue.GetDouble("stoppedAt");

    m_stoppedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceServiceRevisions"))
  {
    Aws::Utils::Array<JsonView> sourceServiceRevisionsJsonList = jsonValue.GetArray("sourceServiceRevisions");
    for(unsigned sourceServiceRevisionsIndex = 0; sourceServiceRevisionsIndex < sourceServiceRevisionsJsonList.GetLength(); ++sourceServiceRevisionsIndex)
    {
      m_sourceServiceRevisions.push_back(sourceServiceRevisionsJsonList[sourceServiceRevisionsIndex].AsObject());
    }
    m_sourceServiceRevisionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetServiceRevision"))
  {
    m_targetServiceRevision = jsonValue.GetObject("targetServiceRevision");

    m_targetServiceRevisionHasBeenSet = true;
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

  if(jsonValue.ValueExists("deploymentConfiguration"))
  {
    m_deploymentConfiguration = jsonValue.GetObject("deploymentConfiguration");

    m_deploymentConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rollback"))
  {
    m_rollback = jsonValue.GetObject("rollback");

    m_rollbackHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deploymentCircuitBreaker"))
  {
    m_deploymentCircuitBreaker = jsonValue.GetObject("deploymentCircuitBreaker");

    m_deploymentCircuitBreakerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("alarms"))
  {
    m_alarms = jsonValue.GetObject("alarms");

    m_alarmsHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceDeployment::Jsonize() const
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

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithDouble("startedAt", m_startedAt.SecondsWithMSPrecision());
  }

  if(m_finishedAtHasBeenSet)
  {
   payload.WithDouble("finishedAt", m_finishedAt.SecondsWithMSPrecision());
  }

  if(m_stoppedAtHasBeenSet)
  {
   payload.WithDouble("stoppedAt", m_stoppedAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_sourceServiceRevisionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceServiceRevisionsJsonList(m_sourceServiceRevisions.size());
   for(unsigned sourceServiceRevisionsIndex = 0; sourceServiceRevisionsIndex < sourceServiceRevisionsJsonList.GetLength(); ++sourceServiceRevisionsIndex)
   {
     sourceServiceRevisionsJsonList[sourceServiceRevisionsIndex].AsObject(m_sourceServiceRevisions[sourceServiceRevisionsIndex].Jsonize());
   }
   payload.WithArray("sourceServiceRevisions", std::move(sourceServiceRevisionsJsonList));

  }

  if(m_targetServiceRevisionHasBeenSet)
  {
   payload.WithObject("targetServiceRevision", m_targetServiceRevision.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ServiceDeploymentStatusMapper::GetNameForServiceDeploymentStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  if(m_deploymentConfigurationHasBeenSet)
  {
   payload.WithObject("deploymentConfiguration", m_deploymentConfiguration.Jsonize());

  }

  if(m_rollbackHasBeenSet)
  {
   payload.WithObject("rollback", m_rollback.Jsonize());

  }

  if(m_deploymentCircuitBreakerHasBeenSet)
  {
   payload.WithObject("deploymentCircuitBreaker", m_deploymentCircuitBreaker.Jsonize());

  }

  if(m_alarmsHasBeenSet)
  {
   payload.WithObject("alarms", m_alarms.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
