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

TaskExecutionListEntry::TaskExecutionListEntry() : 
    m_taskExecutionArnHasBeenSet(false),
    m_status(TaskExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

TaskExecutionListEntry::TaskExecutionListEntry(JsonView jsonValue) : 
    m_taskExecutionArnHasBeenSet(false),
    m_status(TaskExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
