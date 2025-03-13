/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/Positioning.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

Positioning::Positioning(JsonView jsonValue)
{
  *this = jsonValue;
}

Positioning& Positioning::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClockSync"))
  {
    m_clockSync = jsonValue.GetInteger("ClockSync");
    m_clockSyncHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Stream"))
  {
    m_stream = jsonValue.GetInteger("Stream");
    m_streamHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Gnss"))
  {
    m_gnss = jsonValue.GetInteger("Gnss");
    m_gnssHasBeenSet = true;
  }
  return *this;
}

JsonValue Positioning::Jsonize() const
{
  JsonValue payload;

  if(m_clockSyncHasBeenSet)
  {
   payload.WithInteger("ClockSync", m_clockSync);

  }

  if(m_streamHasBeenSet)
  {
   payload.WithInteger("Stream", m_stream);

  }

  if(m_gnssHasBeenSet)
  {
   payload.WithInteger("Gnss", m_gnss);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
