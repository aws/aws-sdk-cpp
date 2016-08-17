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
#include <aws/logs/model/ExportTask.h>
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

ExportTask::ExportTask() : 
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_logGroupNameHasBeenSet(false),
    m_from(0),
    m_fromHasBeenSet(false),
    m_to(0),
    m_toHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_destinationPrefixHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_executionInfoHasBeenSet(false)
{
}

ExportTask::ExportTask(const JsonValue& jsonValue) : 
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_logGroupNameHasBeenSet(false),
    m_from(0),
    m_fromHasBeenSet(false),
    m_to(0),
    m_toHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_destinationPrefixHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_executionInfoHasBeenSet(false)
{
  *this = jsonValue;
}

ExportTask& ExportTask::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("taskId"))
  {
    m_taskId = jsonValue.GetString("taskId");

    m_taskIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskName"))
  {
    m_taskName = jsonValue.GetString("taskName");

    m_taskNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logGroupName"))
  {
    m_logGroupName = jsonValue.GetString("logGroupName");

    m_logGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("from"))
  {
    m_from = jsonValue.GetInt64("from");

    m_fromHasBeenSet = true;
  }

  if(jsonValue.ValueExists("to"))
  {
    m_to = jsonValue.GetInt64("to");

    m_toHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetString("destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationPrefix"))
  {
    m_destinationPrefix = jsonValue.GetString("destinationPrefix");

    m_destinationPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetObject("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionInfo"))
  {
    m_executionInfo = jsonValue.GetObject("executionInfo");

    m_executionInfoHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportTask::Jsonize() const
{
  JsonValue payload;

  if(m_taskIdHasBeenSet)
  {
   payload.WithString("taskId", m_taskId);

  }

  if(m_taskNameHasBeenSet)
  {
   payload.WithString("taskName", m_taskName);

  }

  if(m_logGroupNameHasBeenSet)
  {
   payload.WithString("logGroupName", m_logGroupName);

  }

  if(m_fromHasBeenSet)
  {
   payload.WithInt64("from", m_from);

  }

  if(m_toHasBeenSet)
  {
   payload.WithInt64("to", m_to);

  }

  if(m_destinationHasBeenSet)
  {
   payload.WithString("destination", m_destination);

  }

  if(m_destinationPrefixHasBeenSet)
  {
   payload.WithString("destinationPrefix", m_destinationPrefix);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("status", m_status.Jsonize());

  }

  if(m_executionInfoHasBeenSet)
  {
   payload.WithObject("executionInfo", m_executionInfo.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws