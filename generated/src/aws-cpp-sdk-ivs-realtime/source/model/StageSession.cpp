/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/StageSession.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{

StageSession::StageSession() : 
    m_endTimeHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

StageSession::StageSession(JsonView jsonValue) : 
    m_endTimeHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
  *this = jsonValue;
}

StageSession& StageSession::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetString("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sessionId"))
  {
    m_sessionId = jsonValue.GetString("sessionId");

    m_sessionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");

    m_startTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue StageSession::Jsonize() const
{
  JsonValue payload;

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("endTime", m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("sessionId", m_sessionId);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
