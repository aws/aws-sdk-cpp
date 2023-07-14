/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MultiplexSettings.h>
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

MultiplexSettings::MultiplexSettings() : 
    m_maximumVideoBufferDelayMilliseconds(0),
    m_maximumVideoBufferDelayMillisecondsHasBeenSet(false),
    m_transportStreamBitrate(0),
    m_transportStreamBitrateHasBeenSet(false),
    m_transportStreamId(0),
    m_transportStreamIdHasBeenSet(false),
    m_transportStreamReservedBitrate(0),
    m_transportStreamReservedBitrateHasBeenSet(false)
{
}

MultiplexSettings::MultiplexSettings(JsonView jsonValue) : 
    m_maximumVideoBufferDelayMilliseconds(0),
    m_maximumVideoBufferDelayMillisecondsHasBeenSet(false),
    m_transportStreamBitrate(0),
    m_transportStreamBitrateHasBeenSet(false),
    m_transportStreamId(0),
    m_transportStreamIdHasBeenSet(false),
    m_transportStreamReservedBitrate(0),
    m_transportStreamReservedBitrateHasBeenSet(false)
{
  *this = jsonValue;
}

MultiplexSettings& MultiplexSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maximumVideoBufferDelayMilliseconds"))
  {
    m_maximumVideoBufferDelayMilliseconds = jsonValue.GetInteger("maximumVideoBufferDelayMilliseconds");

    m_maximumVideoBufferDelayMillisecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transportStreamBitrate"))
  {
    m_transportStreamBitrate = jsonValue.GetInteger("transportStreamBitrate");

    m_transportStreamBitrateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transportStreamId"))
  {
    m_transportStreamId = jsonValue.GetInteger("transportStreamId");

    m_transportStreamIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transportStreamReservedBitrate"))
  {
    m_transportStreamReservedBitrate = jsonValue.GetInteger("transportStreamReservedBitrate");

    m_transportStreamReservedBitrateHasBeenSet = true;
  }

  return *this;
}

JsonValue MultiplexSettings::Jsonize() const
{
  JsonValue payload;

  if(m_maximumVideoBufferDelayMillisecondsHasBeenSet)
  {
   payload.WithInteger("maximumVideoBufferDelayMilliseconds", m_maximumVideoBufferDelayMilliseconds);

  }

  if(m_transportStreamBitrateHasBeenSet)
  {
   payload.WithInteger("transportStreamBitrate", m_transportStreamBitrate);

  }

  if(m_transportStreamIdHasBeenSet)
  {
   payload.WithInteger("transportStreamId", m_transportStreamId);

  }

  if(m_transportStreamReservedBitrateHasBeenSet)
  {
   payload.WithInteger("transportStreamReservedBitrate", m_transportStreamReservedBitrate);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
