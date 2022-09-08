/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/StreamSessionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IVS
{
namespace Model
{

StreamSessionSummary::StreamSessionSummary() : 
    m_endTimeHasBeenSet(false),
    m_hasErrorEvent(false),
    m_hasErrorEventHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_streamIdHasBeenSet(false)
{
}

StreamSessionSummary::StreamSessionSummary(JsonView jsonValue) : 
    m_endTimeHasBeenSet(false),
    m_hasErrorEvent(false),
    m_hasErrorEventHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_streamIdHasBeenSet(false)
{
  *this = jsonValue;
}

StreamSessionSummary& StreamSessionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetString("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hasErrorEvent"))
  {
    m_hasErrorEvent = jsonValue.GetBool("hasErrorEvent");

    m_hasErrorEventHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streamId"))
  {
    m_streamId = jsonValue.GetString("streamId");

    m_streamIdHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamSessionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("endTime", m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_hasErrorEventHasBeenSet)
  {
   payload.WithBool("hasErrorEvent", m_hasErrorEvent);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_streamIdHasBeenSet)
  {
   payload.WithString("streamId", m_streamId);

  }

  return payload;
}

} // namespace Model
} // namespace IVS
} // namespace Aws
