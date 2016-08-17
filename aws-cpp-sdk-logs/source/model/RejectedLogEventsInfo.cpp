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
#include <aws/logs/model/RejectedLogEventsInfo.h>
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

RejectedLogEventsInfo::RejectedLogEventsInfo() : 
    m_tooNewLogEventStartIndex(0),
    m_tooNewLogEventStartIndexHasBeenSet(false),
    m_tooOldLogEventEndIndex(0),
    m_tooOldLogEventEndIndexHasBeenSet(false),
    m_expiredLogEventEndIndex(0),
    m_expiredLogEventEndIndexHasBeenSet(false)
{
}

RejectedLogEventsInfo::RejectedLogEventsInfo(const JsonValue& jsonValue) : 
    m_tooNewLogEventStartIndex(0),
    m_tooNewLogEventStartIndexHasBeenSet(false),
    m_tooOldLogEventEndIndex(0),
    m_tooOldLogEventEndIndexHasBeenSet(false),
    m_expiredLogEventEndIndex(0),
    m_expiredLogEventEndIndexHasBeenSet(false)
{
  *this = jsonValue;
}

RejectedLogEventsInfo& RejectedLogEventsInfo::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("tooNewLogEventStartIndex"))
  {
    m_tooNewLogEventStartIndex = jsonValue.GetInteger("tooNewLogEventStartIndex");

    m_tooNewLogEventStartIndexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tooOldLogEventEndIndex"))
  {
    m_tooOldLogEventEndIndex = jsonValue.GetInteger("tooOldLogEventEndIndex");

    m_tooOldLogEventEndIndexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expiredLogEventEndIndex"))
  {
    m_expiredLogEventEndIndex = jsonValue.GetInteger("expiredLogEventEndIndex");

    m_expiredLogEventEndIndexHasBeenSet = true;
  }

  return *this;
}

JsonValue RejectedLogEventsInfo::Jsonize() const
{
  JsonValue payload;

  if(m_tooNewLogEventStartIndexHasBeenSet)
  {
   payload.WithInteger("tooNewLogEventStartIndex", m_tooNewLogEventStartIndex);

  }

  if(m_tooOldLogEventEndIndexHasBeenSet)
  {
   payload.WithInteger("tooOldLogEventEndIndex", m_tooOldLogEventEndIndex);

  }

  if(m_expiredLogEventEndIndexHasBeenSet)
  {
   payload.WithInteger("expiredLogEventEndIndex", m_expiredLogEventEndIndex);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws