/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/StageEndpoints.h>
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

StageEndpoints::StageEndpoints(JsonView jsonValue)
{
  *this = jsonValue;
}

StageEndpoints& StageEndpoints::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("events"))
  {
    m_events = jsonValue.GetString("events");
    m_eventsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("whip"))
  {
    m_whip = jsonValue.GetString("whip");
    m_whipHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rtmp"))
  {
    m_rtmp = jsonValue.GetString("rtmp");
    m_rtmpHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rtmps"))
  {
    m_rtmps = jsonValue.GetString("rtmps");
    m_rtmpsHasBeenSet = true;
  }
  return *this;
}

JsonValue StageEndpoints::Jsonize() const
{
  JsonValue payload;

  if(m_eventsHasBeenSet)
  {
   payload.WithString("events", m_events);

  }

  if(m_whipHasBeenSet)
  {
   payload.WithString("whip", m_whip);

  }

  if(m_rtmpHasBeenSet)
  {
   payload.WithString("rtmp", m_rtmp);

  }

  if(m_rtmpsHasBeenSet)
  {
   payload.WithString("rtmps", m_rtmps);

  }

  return payload;
}

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
