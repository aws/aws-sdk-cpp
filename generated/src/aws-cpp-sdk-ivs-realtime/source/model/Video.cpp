/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/Video.h>
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

Video::Video(JsonView jsonValue)
{
  *this = jsonValue;
}

Video& Video::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("width"))
  {
    m_width = jsonValue.GetInteger("width");
    m_widthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("height"))
  {
    m_height = jsonValue.GetInteger("height");
    m_heightHasBeenSet = true;
  }
  if(jsonValue.ValueExists("framerate"))
  {
    m_framerate = jsonValue.GetDouble("framerate");
    m_framerateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("bitrate"))
  {
    m_bitrate = jsonValue.GetInteger("bitrate");
    m_bitrateHasBeenSet = true;
  }
  return *this;
}

JsonValue Video::Jsonize() const
{
  JsonValue payload;

  if(m_widthHasBeenSet)
  {
   payload.WithInteger("width", m_width);

  }

  if(m_heightHasBeenSet)
  {
   payload.WithInteger("height", m_height);

  }

  if(m_framerateHasBeenSet)
  {
   payload.WithDouble("framerate", m_framerate);

  }

  if(m_bitrateHasBeenSet)
  {
   payload.WithInteger("bitrate", m_bitrate);

  }

  return payload;
}

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
