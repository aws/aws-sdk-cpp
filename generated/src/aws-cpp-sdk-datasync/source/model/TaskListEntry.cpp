/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/TaskListEntry.h>
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

TaskListEntry::TaskListEntry() : 
    m_taskArnHasBeenSet(false),
    m_status(TaskStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

TaskListEntry::TaskListEntry(JsonView jsonValue) : 
    m_taskArnHasBeenSet(false),
    m_status(TaskStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

TaskListEntry& TaskListEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TaskArn"))
  {
    m_taskArn = jsonValue.GetString("TaskArn");

    m_taskArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = TaskStatusMapper::GetTaskStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskListEntry::Jsonize() const
{
  JsonValue payload;

  if(m_taskArnHasBeenSet)
  {
   payload.WithString("TaskArn", m_taskArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", TaskStatusMapper::GetNameForTaskStatus(m_status));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
