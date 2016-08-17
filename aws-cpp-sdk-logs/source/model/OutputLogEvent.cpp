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
#include <aws/logs/model/OutputLogEvent.h>
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

OutputLogEvent::OutputLogEvent() : 
    m_timestamp(0),
    m_timestampHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_ingestionTime(0),
    m_ingestionTimeHasBeenSet(false)
{
}

OutputLogEvent::OutputLogEvent(const JsonValue& jsonValue) : 
    m_timestamp(0),
    m_timestampHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_ingestionTime(0),
    m_ingestionTimeHasBeenSet(false)
{
  *this = jsonValue;
}

OutputLogEvent& OutputLogEvent::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("timestamp"))
  {
    m_timestamp = jsonValue.GetInt64("timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ingestionTime"))
  {
    m_ingestionTime = jsonValue.GetInt64("ingestionTime");

    m_ingestionTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputLogEvent::Jsonize() const
{
  JsonValue payload;

  if(m_timestampHasBeenSet)
  {
   payload.WithInt64("timestamp", m_timestamp);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_ingestionTimeHasBeenSet)
  {
   payload.WithInt64("ingestionTime", m_ingestionTime);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws