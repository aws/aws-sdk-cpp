/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

AudioParameters::AudioParameters(const JsonValue& jsonValue) : 
    m_codecHasBeenSet(false),
    m_sampleRateHasBeenSet(false),
    m_bitRateHasBeenSet(false),
    m_channelsHasBeenSet(false),
    m_audioPackingModeHasBeenSet(false),
    m_codecOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

AudioParameters& AudioParameters::operator =(const JsonValue& jsonValue)
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