/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/opsworks/model/Command.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

Command::Command() : 
    m_commandIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_deploymentIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_acknowledgedAtHasBeenSet(false),
    m_completedAtHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_exitCode(0),
    m_exitCodeHasBeenSet(false),
    m_logUrlHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

Command::Command(const JsonValue& jsonValue) : 
    m_commandIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_deploymentIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_acknowledgedAtHasBeenSet(false),
    m_completedAtHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_exitCode(0),
    m_exitCodeHasBeenSet(false),
    m_logUrlHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

Command& Command::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("CommandId"))
  {
    m_commandId = jsonValue.GetString("CommandId");

    m_commandIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeploymentId"))
  {
    m_deploymentId = jsonValue.GetString("DeploymentId");

    m_deploymentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AcknowledgedAt"))
  {
    m_acknowledgedAt = jsonValue.GetString("AcknowledgedAt");

    m_acknowledgedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompletedAt"))
  {
    m_completedAt = jsonValue.GetString("CompletedAt");

    m_completedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExitCode"))
  {
    m_exitCode = jsonValue.GetInteger("ExitCode");

    m_exitCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogUrl"))
  {
    m_logUrl = jsonValue.GetString("LogUrl");

    m_logUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue Command::Jsonize() const
{
  JsonValue payload;

  if(m_commandIdHasBeenSet)
  {
   payload.WithString("CommandId", m_commandId);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_deploymentIdHasBeenSet)
  {
   payload.WithString("DeploymentId", m_deploymentId);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("CreatedAt", m_createdAt);

  }

  if(m_acknowledgedAtHasBeenSet)
  {
   payload.WithString("AcknowledgedAt", m_acknowledgedAt);

  }

  if(m_completedAtHasBeenSet)
  {
   payload.WithString("CompletedAt", m_completedAt);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_exitCodeHasBeenSet)
  {
   payload.WithInteger("ExitCode", m_exitCode);

  }

  if(m_logUrlHasBeenSet)
  {
   payload.WithString("LogUrl", m_logUrl);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws