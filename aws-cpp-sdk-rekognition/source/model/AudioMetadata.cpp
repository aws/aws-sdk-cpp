/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/rekognition/model/AudioMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

AudioMetadata::AudioMetadata() : 
    m_codecHasBeenSet(false),
    m_durationMillis(0),
    m_durationMillisHasBeenSet(false),
    m_sampleRate(0),
    m_sampleRateHasBeenSet(false),
    m_numberOfChannels(0),
    m_numberOfChannelsHasBeenSet(false)
{
}

AudioMetadata::AudioMetadata(JsonView jsonValue) : 
    m_codecHasBeenSet(false),
    m_durationMillis(0),
    m_durationMillisHasBeenSet(false),
    m_sampleRate(0),
    m_sampleRateHasBeenSet(false),
    m_numberOfChannels(0),
    m_numberOfChannelsHasBeenSet(false)
{
  *this = jsonValue;
}

AudioMetadata& AudioMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Codec"))
  {
    m_codec = jsonValue.GetString("Codec");

    m_codecHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DurationMillis"))
  {
    m_durationMillis = jsonValue.GetInt64("DurationMillis");

    m_durationMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SampleRate"))
  {
    m_sampleRate = jsonValue.GetInt64("SampleRate");

    m_sampleRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfChannels"))
  {
    m_numberOfChannels = jsonValue.GetInt64("NumberOfChannels");

    m_numberOfChannelsHasBeenSet = true;
  }

  return *this;
}

JsonValue AudioMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_codecHasBeenSet)
  {
   payload.WithString("Codec", m_codec);

  }

  if(m_durationMillisHasBeenSet)
  {
   payload.WithInt64("DurationMillis", m_durationMillis);

  }

  if(m_sampleRateHasBeenSet)
  {
   payload.WithInt64("SampleRate", m_sampleRate);

  }

  if(m_numberOfChannelsHasBeenSet)
  {
   payload.WithInt64("NumberOfChannels", m_numberOfChannels);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
