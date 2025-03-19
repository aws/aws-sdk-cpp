/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/TaskExecutionListEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

TaskExecutionListEntry::TaskExecutionListEntry(JsonView jsonValue)
{
  *this = jsonValue;
}

TaskExecutionListEntry& TaskExecutionListEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TaskExecutionArn"))
  {
    m_taskExecutionArn = jsonValue.GetString("TaskExecutionArn");
    m_taskExecutionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = TaskExecutionStatusMapper::GetTaskExecutionStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TaskMode"))
  {
    m_taskMode = TaskModeMapper::GetTaskModeForName(jsonValue.GetString("TaskMode"));
    m_taskModeHasBeenSet = true;
  }
  return *this;
}

JsonValue TaskExecutionListEntry::Jsonize() const
{
  JsonValue payload;

  if(m_taskExecutionArnHasBeenSet)
  {
   payload.WithString("TaskExecutionArn", m_taskExecutionArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", TaskExecutionStatusMapper::GetNameForTaskExecutionStatus(m_status));
  }

  if(m_taskModeHasBeenSet)
  {
   payload.WithString("TaskMode", TaskModeMapper::GetNameForTaskMode(m_taskMode));
  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
