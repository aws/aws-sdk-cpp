/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/AbsoluteTimeRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

AbsoluteTimeRange::AbsoluteTimeRange() : 
    m_startTime(0),
    m_startTimeHasBeenSet(false),
    m_endTime(0),
    m_endTimeHasBeenSet(false),
    m_first(0),
    m_firstHasBeenSet(false),
    m_last(0),
    m_lastHasBeenSet(false)
{
}

AbsoluteTimeRange::AbsoluteTimeRange(JsonView jsonValue) : 
    m_startTime(0),
    m_startTimeHasBeenSet(false),
    m_endTime(0),
    m_endTimeHasBeenSet(false),
    m_first(0),
    m_firstHasBeenSet(false),
    m_last(0),
    m_lastHasBeenSet(false)
{
  *this = jsonValue;
}

AbsoluteTimeRange& AbsoluteTimeRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetInt64("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetInt64("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("First"))
  {
    m_first = jsonValue.GetInt64("First");

    m_firstHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Last"))
  {
    m_last = jsonValue.GetInt64("Last");

    m_lastHasBeenSet = true;
  }

  return *this;
}

JsonValue AbsoluteTimeRange::Jsonize() const
{
  JsonValue payload;

  if(m_startTimeHasBeenSet)
  {
   payload.WithInt64("StartTime", m_startTime);

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithInt64("EndTime", m_endTime);

  }

  if(m_firstHasBeenSet)
  {
   payload.WithInt64("First", m_first);

  }

  if(m_lastHasBeenSet)
  {
   payload.WithInt64("Last", m_last);

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
