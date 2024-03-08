/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/Deployment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

Deployment::Deployment() : 
    m_deploymentIdHasBeenSet(false),
    m_deploymentStatus(DeploymentStatus::NOT_SET),
    m_deploymentStatusHasBeenSet(false),
    m_deploymentType(DeploymentType::NOT_SET),
    m_deploymentTypeHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_isDeploymentComplete(false),
    m_isDeploymentCompleteHasBeenSet(false),
    m_messagesHasBeenSet(false)
{
}

Deployment::Deployment(JsonView jsonValue) : 
    m_deploymentIdHasBeenSet(false),
    m_deploymentStatus(DeploymentStatus::NOT_SET),
    m_deploymentStatusHasBeenSet(false),
    m_deploymentType(DeploymentType::NOT_SET),
    m_deploymentTypeHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_isDeploymentComplete(false),
    m_isDeploymentCompleteHasBeenSet(false),
    m_messagesHasBeenSet(false)
{
  *this = jsonValue;
}

Deployment& Deployment::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("deploymentType"))
  {
    m_deploymentType = DeploymentTypeMapper::GetDeploymentTypeForName(jsonValue.GetString("deploymentType"));

    m_deploymentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetObject("failureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isDeploymentComplete"))
  {
    m_isDeploymentComplete = jsonValue.GetBool("isDeploymentComplete");

    m_isDeploymentCompleteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("messages"))
  {
    Aws::Utils::Array<JsonView> messagesJsonList = jsonValue.GetArray("messages");
    for(unsigned messagesIndex = 0; messagesIndex < messagesJsonList.GetLength(); ++messagesIndex)
    {
      m_messages.push_back(messagesJsonList[messagesIndex].AsString());
    }
    m_messagesHasBeenSet = true;
  }

  return *this;
}

JsonValue Deployment::Jsonize() const
{
  JsonValue payload;

  if(m_deploymentIdHasBeenSet)
  {
   payload.WithString("deploymentId", m_deploymentId);

  }

  if(m_deploymentStatusHasBeenSet)
  {
   payload.WithString("deploymentStatus", DeploymentStatusMapper::GetNameForDeploymentStatus(m_deploymentStatus));
  }

  if(m_deploymentTypeHasBeenSet)
  {
   payload.WithString("deploymentType", DeploymentTypeMapper::GetNameForDeploymentType(m_deploymentType));
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithObject("failureReason", m_failureReason.Jsonize());

  }

  if(m_isDeploymentCompleteHasBeenSet)
  {
   payload.WithBool("isDeploymentComplete", m_isDeploymentComplete);

  }

  if(m_messagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> messagesJsonList(m_messages.size());
   for(unsigned messagesIndex = 0; messagesIndex < messagesJsonList.GetLength(); ++messagesIndex)
   {
     messagesJsonList[messagesIndex].AsString(m_messages[messagesIndex]);
   }
   payload.WithArray("messages", std::move(messagesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
