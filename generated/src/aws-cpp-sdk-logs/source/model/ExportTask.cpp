﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

ExportTask::ExportTask(JsonView jsonValue)
{
  *this = jsonValue;
}

ExportTask& ExportTask::operator =(JsonView jsonValue)
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
