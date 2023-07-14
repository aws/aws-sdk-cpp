/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/OpusSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

OpusSettings::OpusSettings() : 
    m_bitrate(0),
    m_bitrateHasBeenSet(false),
    m_channels(0),
    m_channelsHasBeenSet(false),
    m_sampleRate(0),
    m_sampleRateHasBeenSet(false)
{
}

OpusSettings::OpusSettings(JsonView jsonValue) : 
    m_bitrate(0),
    m_bitrateHasBeenSet(false),
    m_channels(0),
    m_channelsHasBeenSet(false),
    m_sampleRate(0),
    m_sampleRateHasBeenSet(false)
{
  *this = jsonValue;
}

OpusSettings& OpusSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bitrate"))
  {
    m_bitrate = jsonValue.GetInteger("bitrate");

    m_bitrateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("channels"))
  {
    m_channels = jsonValue.GetInteger("channels");

    m_channelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sampleRate"))
  {
    m_sampleRate = jsonValue.GetInteger("sampleRate");

    m_sampleRateHasBeenSet = true;
  }

  return *this;
}

JsonValue OpusSettings::Jsonize() const
{
  JsonValue payload;

  if(m_bitrateHasBeenSet)
  {
   payload.WithInteger("bitrate", m_bitrate);

  }

  if(m_channelsHasBeenSet)
  {
   payload.WithInteger("channels", m_channels);

  }

  if(m_sampleRateHasBeenSet)
  {
   payload.WithInteger("sampleRate", m_sampleRate);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
