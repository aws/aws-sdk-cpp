/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/AuditTaskMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

AuditTaskMetadata::AuditTaskMetadata() : 
    m_taskIdHasBeenSet(false),
    m_taskStatus(AuditTaskStatus::NOT_SET),
    m_taskStatusHasBeenSet(false),
    m_taskType(AuditTaskType::NOT_SET),
    m_taskTypeHasBeenSet(false)
{
}

AuditTaskMetadata::AuditTaskMetadata(JsonView jsonValue) : 
    m_taskIdHasBeenSet(false),
    m_taskStatus(AuditTaskStatus::NOT_SET),
    m_taskStatusHasBeenSet(false),
    m_taskType(AuditTaskType::NOT_SET),
    m_taskTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AuditTaskMetadata& AuditTaskMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("taskId"))
  {
    m_taskId = jsonValue.GetString("taskId");

    m_taskIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskStatus"))
  {
    m_taskStatus = AuditTaskStatusMapper::GetAuditTaskStatusForName(jsonValue.GetString("taskStatus"));

    m_taskStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskType"))
  {
    m_taskType = AuditTaskTypeMapper::GetAuditTaskTypeForName(jsonValue.GetString("taskType"));

    m_taskTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue AuditTaskMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_taskIdHasBeenSet)
  {
   payload.WithString("taskId", m_taskId);

  }

  if(m_taskStatusHasBeenSet)
  {
   payload.WithString("taskStatus", AuditTaskStatusMapper::GetNameForAuditTaskStatus(m_taskStatus));
  }

  if(m_taskTypeHasBeenSet)
  {
   payload.WithString("taskType", AuditTaskTypeMapper::GetNameForAuditTaskType(m_taskType));
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
