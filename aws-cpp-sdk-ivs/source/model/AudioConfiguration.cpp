/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/AudioConfiguration.h>
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

AudioConfiguration::AudioConfiguration() : 
    m_channels(0),
    m_channelsHasBeenSet(false),
    m_codecHasBeenSet(false),
    m_sampleRate(0),
    m_sampleRateHasBeenSet(false),
    m_targetBitrate(0),
    m_targetBitrateHasBeenSet(false)
{
}

AudioConfiguration::AudioConfiguration(JsonView jsonValue) : 
    m_channels(0),
    m_channelsHasBeenSet(false),
    m_codecHasBeenSet(false),
    m_sampleRate(0),
    m_sampleRateHasBeenSet(false),
    m_targetBitrate(0),
    m_targetBitrateHasBeenSet(false)
{
  *this = jsonValue;
}

AudioConfiguration& AudioConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("channels"))
  {
    m_channels = jsonValue.GetInt64("channels");

    m_channelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("codec"))
  {
    m_codec = jsonValue.GetString("codec");

    m_codecHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sampleRate"))
  {
    m_sampleRate = jsonValue.GetInt64("sampleRate");

    m_sampleRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetBitrate"))
  {
    m_targetBitrate = jsonValue.GetInt64("targetBitrate");

    m_targetBitrateHasBeenSet = true;
  }

  return *this;
}

JsonValue AudioConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_channelsHasBeenSet)
  {
   payload.WithInt64("channels", m_channels);

  }

  if(m_codecHasBeenSet)
  {
   payload.WithString("codec", m_codec);

  }

  if(m_sampleRateHasBeenSet)
  {
   payload.WithInt64("sampleRate", m_sampleRate);

  }

  if(m_targetBitrateHasBeenSet)
  {
   payload.WithInt64("targetBitrate", m_targetBitrate);

  }

  return payload;
}

} // namespace Model
} // namespace IVS
} // namespace Aws
