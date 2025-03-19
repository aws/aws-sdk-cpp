/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ListJobsByConsumableResourceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

ListJobsByConsumableResourceSummary::ListJobsByConsumableResourceSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ListJobsByConsumableResourceSummary& ListJobsByConsumableResourceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobArn"))
  {
    m_jobArn = jsonValue.GetString("jobArn");
    m_jobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobQueueArn"))
  {
    m_jobQueueArn = jsonValue.GetString("jobQueueArn");
    m_jobQueueArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobName"))
  {
    m_jobName = jsonValue.GetString("jobName");
    m_jobNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobDefinitionArn"))
  {
    m_jobDefinitionArn = jsonValue.GetString("jobDefinitionArn");
    m_jobDefinitionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("shareIdentifier"))
  {
    m_shareIdentifier = jsonValue.GetString("shareIdentifier");
    m_shareIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobStatus"))
  {
    m_jobStatus = jsonValue.GetString("jobStatus");
    m_jobStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("quantity"))
  {
    m_quantity = jsonValue.GetInt64("quantity");
    m_quantityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetInt64("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetInt64("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("consumableResourceProperties"))
  {
    m_consumableResourceProperties = jsonValue.GetObject("consumableResourceProperties");
    m_consumableResourcePropertiesHasBeenSet = true;
  }
  return *this;
}

JsonValue ListJobsByConsumableResourceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_jobArnHasBeenSet)
  {
   payload.WithString("jobArn", m_jobArn);

  }

  if(m_jobQueueArnHasBeenSet)
  {
   payload.WithString("jobQueueArn", m_jobQueueArn);

  }

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("jobName", m_jobName);

  }

  if(m_jobDefinitionArnHasBeenSet)
  {
   payload.WithString("jobDefinitionArn", m_jobDefinitionArn);

  }

  if(m_shareIdentifierHasBeenSet)
  {
   payload.WithString("shareIdentifier", m_shareIdentifier);

  }

  if(m_jobStatusHasBeenSet)
  {
   payload.WithString("jobStatus", m_jobStatus);

  }

  if(m_quantityHasBeenSet)
  {
   payload.WithInt64("quantity", m_quantity);

  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithInt64("startedAt", m_startedAt);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithInt64("createdAt", m_createdAt);

  }

  if(m_consumableResourcePropertiesHasBeenSet)
  {
   payload.WithObject("consumableResourceProperties", m_consumableResourceProperties.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
