/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/JobLog.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

JobLog::JobLog() : 
    m_event(JobLogEvent::NOT_SET),
    m_eventHasBeenSet(false),
    m_eventDataHasBeenSet(false),
    m_logDateTimeHasBeenSet(false)
{
}

JobLog::JobLog(JsonView jsonValue) : 
    m_event(JobLogEvent::NOT_SET),
    m_eventHasBeenSet(false),
    m_eventDataHasBeenSet(false),
    m_logDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

JobLog& JobLog::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("event"))
  {
    m_event = JobLogEventMapper::GetJobLogEventForName(jsonValue.GetString("event"));

    m_eventHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventData"))
  {
    m_eventData = jsonValue.GetObject("eventData");

    m_eventDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logDateTime"))
  {
    m_logDateTime = jsonValue.GetString("logDateTime");

    m_logDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue JobLog::Jsonize() const
{
  JsonValue payload;

  if(m_eventHasBeenSet)
  {
   payload.WithString("event", JobLogEventMapper::GetNameForJobLogEvent(m_event));
  }

  if(m_eventDataHasBeenSet)
  {
   payload.WithObject("eventData", m_eventData.Jsonize());

  }

  if(m_logDateTimeHasBeenSet)
  {
   payload.WithString("logDateTime", m_logDateTime);

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
