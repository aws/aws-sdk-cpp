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

#include <aws/medialive/model/Scte35SpliceInsertScheduleActionSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

Scte35SpliceInsertScheduleActionSettings::Scte35SpliceInsertScheduleActionSettings() : 
    m_duration(0),
    m_durationHasBeenSet(false),
    m_spliceEventId(0),
    m_spliceEventIdHasBeenSet(false)
{
}

Scte35SpliceInsertScheduleActionSettings::Scte35SpliceInsertScheduleActionSettings(JsonView jsonValue) : 
    m_duration(0),
    m_durationHasBeenSet(false),
    m_spliceEventId(0),
    m_spliceEventIdHasBeenSet(false)
{
  *this = jsonValue;
}

Scte35SpliceInsertScheduleActionSettings& Scte35SpliceInsertScheduleActionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("duration"))
  {
    m_duration = jsonValue.GetInt64("duration");

    m_durationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("spliceEventId"))
  {
    m_spliceEventId = jsonValue.GetInt64("spliceEventId");

    m_spliceEventIdHasBeenSet = true;
  }

  return *this;
}

JsonValue Scte35SpliceInsertScheduleActionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_durationHasBeenSet)
  {
   payload.WithInt64("duration", m_duration);

  }

  if(m_spliceEventIdHasBeenSet)
  {
   payload.WithInt64("spliceEventId", m_spliceEventId);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
