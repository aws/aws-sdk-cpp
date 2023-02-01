/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/RollbackInfo.h>
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

RollbackInfo::RollbackInfo() : 
    m_rollbackDeploymentIdHasBeenSet(false),
    m_rollbackTriggeringDeploymentIdHasBeenSet(false),
    m_rollbackMessageHasBeenSet(false)
{
}

RollbackInfo::RollbackInfo(JsonView jsonValue) : 
    m_rollbackDeploymentIdHasBeenSet(false),
    m_rollbackTriggeringDeploymentIdHasBeenSet(false),
    m_rollbackMessageHasBeenSet(false)
{
  *this = jsonValue;
}

RollbackInfo& RollbackInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("rollbackDeploymentId"))
  {
    m_rollbackDeploymentId = jsonValue.GetString("rollbackDeploymentId");

    m_rollbackDeploymentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rollbackTriggeringDeploymentId"))
  {
    m_rollbackTriggeringDeploymentId = jsonValue.GetString("rollbackTriggeringDeploymentId");

    m_rollbackTriggeringDeploymentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rollbackMessage"))
  {
    m_rollbackMessage = jsonValue.GetString("rollbackMessage");

    m_rollbackMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue RollbackInfo::Jsonize() const
{
  JsonValue payload;

  if(m_rollbackDeploymentIdHasBeenSet)
  {
   payload.WithString("rollbackDeploymentId", m_rollbackDeploymentId);

  }

  if(m_rollbackTriggeringDeploymentIdHasBeenSet)
  {
   payload.WithString("rollbackTriggeringDeploymentId", m_rollbackTriggeringDeploymentId);

  }

  if(m_rollbackMessageHasBeenSet)
  {
   payload.WithString("rollbackMessage", m_rollbackMessage);

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
