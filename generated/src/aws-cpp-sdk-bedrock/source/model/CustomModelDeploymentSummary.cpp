/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/CustomModelDeploymentSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

CustomModelDeploymentSummary::CustomModelDeploymentSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomModelDeploymentSummary& CustomModelDeploymentSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("customModelDeploymentArn"))
  {
    m_customModelDeploymentArn = jsonValue.GetString("customModelDeploymentArn");
    m_customModelDeploymentArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customModelDeploymentName"))
  {
    m_customModelDeploymentName = jsonValue.GetString("customModelDeploymentName");
    m_customModelDeploymentNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modelArn"))
  {
    m_modelArn = jsonValue.GetString("modelArn");
    m_modelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = CustomModelDeploymentStatusMapper::GetCustomModelDeploymentStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetString("lastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failureMessage"))
  {
    m_failureMessage = jsonValue.GetString("failureMessage");
    m_failureMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomModelDeploymentSummary::Jsonize() const
{
  JsonValue payload;

  if(m_customModelDeploymentArnHasBeenSet)
  {
   payload.WithString("customModelDeploymentArn", m_customModelDeploymentArn);

  }

  if(m_customModelDeploymentNameHasBeenSet)
  {
   payload.WithString("customModelDeploymentName", m_customModelDeploymentName);

  }

  if(m_modelArnHasBeenSet)
  {
   payload.WithString("modelArn", m_modelArn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", CustomModelDeploymentStatusMapper::GetNameForCustomModelDeploymentStatus(m_status));
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithString("lastUpdatedAt", m_lastUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_failureMessageHasBeenSet)
  {
   payload.WithString("failureMessage", m_failureMessage);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
