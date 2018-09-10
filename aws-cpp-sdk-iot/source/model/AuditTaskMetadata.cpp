/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
