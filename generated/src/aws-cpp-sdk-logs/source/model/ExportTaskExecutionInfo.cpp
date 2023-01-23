/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/ExportTaskExecutionInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

ExportTaskExecutionInfo::ExportTaskExecutionInfo() : 
    m_creationTime(0),
    m_creationTimeHasBeenSet(false),
    m_completionTime(0),
    m_completionTimeHasBeenSet(false)
{
}

ExportTaskExecutionInfo::ExportTaskExecutionInfo(JsonView jsonValue) : 
    m_creationTime(0),
    m_creationTimeHasBeenSet(false),
    m_completionTime(0),
    m_completionTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ExportTaskExecutionInfo& ExportTaskExecutionInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetInt64("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("completionTime"))
  {
    m_completionTime = jsonValue.GetInt64("completionTime");

    m_completionTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportTaskExecutionInfo::Jsonize() const
{
  JsonValue payload;

  if(m_creationTimeHasBeenSet)
  {
   payload.WithInt64("creationTime", m_creationTime);

  }

  if(m_completionTimeHasBeenSet)
  {
   payload.WithInt64("completionTime", m_completionTime);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
