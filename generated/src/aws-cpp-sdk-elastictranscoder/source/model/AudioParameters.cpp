/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elastictranscoder/model/AudioParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticTranscoder
{
namespace Model
{

AudioParameters::AudioParameters() : 
    m_codecHasBeenSet(false),
    m_sampleRateHasBeenSet(false),
    m_bitRateHasBeenSet(false),
    m_channelsHasBeenSet(false),
    m_audioPackingModeHasBeenSet(false),
    m_codecOptionsHasBeenSet(false)
{
}

AudioParameters::AudioParameters(JsonView jsonValue) : 
    m_codecHasBeenSet(false),
    m_sampleRateHasBeenSet(false),
    m_bitRateHasBeenSet(false),
    m_channelsHasBeenSet(false),
    m_audioPackingModeHasBeenSet(false),
    m_codecOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

AudioParameters& AudioParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Codec"))
  {
    m_codec = jsonValue.GetString("Codec");

    m_codecHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SampleRate"))
  {
    m_sampleRate = jsonValue.GetString("SampleRate");

    m_sampleRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BitRate"))
  {
    m_bitRate = jsonValue.GetString("BitRate");

    m_bitRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Channels"))
  {
    m_channels = jsonValue.GetString("Channels");

    m_channelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AudioPackingMode"))
  {
    m_audioPackingMode = jsonValue.GetString("AudioPackingMode");

    m_audioPackingModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CodecOptions"))
  {
    m_codecOptions = jsonValue.GetObject("CodecOptions");

    m_codecOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue AudioParameters::Jsonize() const
{
  JsonValue payload;

  if(m_codecHasBeenSet)
  {
   payload.WithString("Codec", m_codec);

  }

  if(m_sampleRateHasBeenSet)
  {
   payload.WithString("SampleRate", m_sampleRate);

  }

  if(m_bitRateHasBeenSet)
  {
   payload.WithString("BitRate", m_bitRate);

  }

  if(m_channelsHasBeenSet)
  {
   payload.WithString("Channels", m_channels);

  }

  if(m_audioPackingModeHasBeenSet)
  {
   payload.WithString("AudioPackingMode", m_audioPackingMode);

  }

  if(m_codecOptionsHasBeenSet)
  {
   payload.WithObject("CodecOptions", m_codecOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
