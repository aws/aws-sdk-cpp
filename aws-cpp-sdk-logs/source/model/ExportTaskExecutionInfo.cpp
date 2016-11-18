/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

ExportTaskExecutionInfo::ExportTaskExecutionInfo(const JsonValue& jsonValue) : 
    m_creationTime(0),
    m_creationTimeHasBeenSet(false),
    m_completionTime(0),
    m_completionTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ExportTaskExecutionInfo& ExportTaskExecutionInfo::operator =(const JsonValue& jsonValue)
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