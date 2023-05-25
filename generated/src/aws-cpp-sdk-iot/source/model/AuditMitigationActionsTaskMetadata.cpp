/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/AuditMitigationActionsTaskMetadata.h>
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

AuditMitigationActionsTaskMetadata::AuditMitigationActionsTaskMetadata() : 
    m_taskIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_taskStatus(AuditMitigationActionsTaskStatus::NOT_SET),
    m_taskStatusHasBeenSet(false)
{
}

AuditMitigationActionsTaskMetadata::AuditMitigationActionsTaskMetadata(JsonView jsonValue) : 
    m_taskIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_taskStatus(AuditMitigationActionsTaskStatus::NOT_SET),
    m_taskStatusHasBeenSet(false)
{
  *this = jsonValue;
}

AuditMitigationActionsTaskMetadata& AuditMitigationActionsTaskMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("taskId"))
  {
    m_taskId = jsonValue.GetString("taskId");

    m_taskIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskStatus"))
  {
    m_taskStatus = AuditMitigationActionsTaskStatusMapper::GetAuditMitigationActionsTaskStatusForName(jsonValue.GetString("taskStatus"));

    m_taskStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue AuditMitigationActionsTaskMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_taskIdHasBeenSet)
  {
   payload.WithString("taskId", m_taskId);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_taskStatusHasBeenSet)
  {
   payload.WithString("taskStatus", AuditMitigationActionsTaskStatusMapper::GetNameForAuditMitigationActionsTaskStatus(m_taskStatus));
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
