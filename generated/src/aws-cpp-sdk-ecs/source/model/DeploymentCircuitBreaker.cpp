/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/DeploymentCircuitBreaker.h>
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

DeploymentCircuitBreaker::DeploymentCircuitBreaker() : 
    m_enable(false),
    m_enableHasBeenSet(false),
    m_rollback(false),
    m_rollbackHasBeenSet(false)
{
}

DeploymentCircuitBreaker::DeploymentCircuitBreaker(JsonView jsonValue) : 
    m_enable(false),
    m_enableHasBeenSet(false),
    m_rollback(false),
    m_rollbackHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentCircuitBreaker& DeploymentCircuitBreaker::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enable"))
  {
    m_enable = jsonValue.GetBool("enable");

    m_enableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rollback"))
  {
    m_rollback = jsonValue.GetBool("rollback");

    m_rollbackHasBeenSet = true;
  }

  return *this;
}

JsonValue DeploymentCircuitBreaker::Jsonize() const
{
  JsonValue payload;

  if(m_enableHasBeenSet)
  {
   payload.WithBool("enable", m_enable);

  }

  if(m_rollbackHasBeenSet)
  {
   payload.WithBool("rollback", m_rollback);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
