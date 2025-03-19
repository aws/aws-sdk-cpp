/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ServiceDeploymentCircuitBreaker.h>
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

ServiceDeploymentCircuitBreaker::ServiceDeploymentCircuitBreaker(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceDeploymentCircuitBreaker& ServiceDeploymentCircuitBreaker::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = ServiceDeploymentRollbackMonitorsStatusMapper::GetServiceDeploymentRollbackMonitorsStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failureCount"))
  {
    m_failureCount = jsonValue.GetInteger("failureCount");
    m_failureCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("threshold"))
  {
    m_threshold = jsonValue.GetInteger("threshold");
    m_thresholdHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceDeploymentCircuitBreaker::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ServiceDeploymentRollbackMonitorsStatusMapper::GetNameForServiceDeploymentRollbackMonitorsStatus(m_status));
  }

  if(m_failureCountHasBeenSet)
  {
   payload.WithInteger("failureCount", m_failureCount);

  }

  if(m_thresholdHasBeenSet)
  {
   payload.WithInteger("threshold", m_threshold);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
