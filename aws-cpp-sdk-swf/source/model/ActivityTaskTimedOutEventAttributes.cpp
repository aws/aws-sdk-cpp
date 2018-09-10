﻿/*
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

#include <aws/swf/model/ActivityTaskTimedOutEventAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SWF
{
namespace Model
{

ActivityTaskTimedOutEventAttributes::ActivityTaskTimedOutEventAttributes() : 
    m_timeoutType(ActivityTaskTimeoutType::NOT_SET),
    m_timeoutTypeHasBeenSet(false),
    m_scheduledEventId(0),
    m_scheduledEventIdHasBeenSet(false),
    m_startedEventId(0),
    m_startedEventIdHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
}

ActivityTaskTimedOutEventAttributes::ActivityTaskTimedOutEventAttributes(JsonView jsonValue) : 
    m_timeoutType(ActivityTaskTimeoutType::NOT_SET),
    m_timeoutTypeHasBeenSet(false),
    m_scheduledEventId(0),
    m_scheduledEventIdHasBeenSet(false),
    m_startedEventId(0),
    m_startedEventIdHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
  *this = jsonValue;
}

ActivityTaskTimedOutEventAttributes& ActivityTaskTimedOutEventAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timeoutType"))
  {
    m_timeoutType = ActivityTaskTimeoutTypeMapper::GetActivityTaskTimeoutTypeForName(jsonValue.GetString("timeoutType"));

    m_timeoutTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scheduledEventId"))
  {
    m_scheduledEventId = jsonValue.GetInt64("scheduledEventId");

    m_scheduledEventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startedEventId"))
  {
    m_startedEventId = jsonValue.GetInt64("startedEventId");

    m_startedEventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("details"))
  {
    m_details = jsonValue.GetString("details");

    m_detailsHasBeenSet = true;
  }

  return *this;
}

JsonValue ActivityTaskTimedOutEventAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_timeoutTypeHasBeenSet)
  {
   payload.WithString("timeoutType", ActivityTaskTimeoutTypeMapper::GetNameForActivityTaskTimeoutType(m_timeoutType));
  }

  if(m_scheduledEventIdHasBeenSet)
  {
   payload.WithInt64("scheduledEventId", m_scheduledEventId);

  }

  if(m_startedEventIdHasBeenSet)
  {
   payload.WithInt64("startedEventId", m_startedEventId);

  }

  if(m_detailsHasBeenSet)
  {
   payload.WithString("details", m_details);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
