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

StageEndpoints::StageEndpoints() : 
    m_eventsHasBeenSet(false),
    m_whipHasBeenSet(false)
{
}

StageEndpoints::StageEndpoints(JsonView jsonValue) : 
    m_eventsHasBeenSet(false),
    m_whipHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
