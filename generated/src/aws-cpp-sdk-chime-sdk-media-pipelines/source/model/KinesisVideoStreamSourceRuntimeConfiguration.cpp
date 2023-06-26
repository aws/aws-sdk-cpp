/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/KinesisVideoStreamSourceRuntimeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{

KinesisVideoStreamSourceRuntimeConfiguration::KinesisVideoStreamSourceRuntimeConfiguration() : 
    m_streamsHasBeenSet(false),
    m_mediaEncoding(MediaEncoding::NOT_SET),
    m_mediaEncodingHasBeenSet(false),
    m_mediaSampleRate(0),
    m_mediaSampleRateHasBeenSet(false)
{
}

KinesisVideoStreamSourceRuntimeConfiguration::KinesisVideoStreamSourceRuntimeConfiguration(JsonView jsonValue) : 
    m_streamsHasBeenSet(false),
    m_mediaEncoding(MediaEncoding::NOT_SET),
    m_mediaEncodingHasBeenSet(false),
    m_mediaSampleRate(0),
    m_mediaSampleRateHasBeenSet(false)
{
  *this = jsonValue;
}

KinesisVideoStreamSourceRuntimeConfiguration& KinesisVideoStreamSourceRuntimeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Streams"))
  {
    Aws::Utils::Array<JsonView> streamsJsonList = jsonValue.GetArray("Streams");
    for(unsigned streamsIndex = 0; streamsIndex < streamsJsonList.GetLength(); ++streamsIndex)
    {
      m_streams.push_back(streamsJsonList[streamsIndex].AsObject());
    }
    m_streamsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MediaEncoding"))
  {
    m_mediaEncoding = MediaEncodingMapper::GetMediaEncodingForName(jsonValue.GetString("MediaEncoding"));

    m_mediaEncodingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MediaSampleRate"))
  {
    m_mediaSampleRate = jsonValue.GetInteger("MediaSampleRate");

    m_mediaSampleRateHasBeenSet = true;
  }

  return *this;
}

JsonValue KinesisVideoStreamSourceRuntimeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_streamsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> streamsJsonList(m_streams.size());
   for(unsigned streamsIndex = 0; streamsIndex < streamsJsonList.GetLength(); ++streamsIndex)
   {
     streamsJsonList[streamsIndex].AsObject(m_streams[streamsIndex].Jsonize());
   }
   payload.WithArray("Streams", std::move(streamsJsonList));

  }

  if(m_mediaEncodingHasBeenSet)
  {
   payload.WithString("MediaEncoding", MediaEncodingMapper::GetNameForMediaEncoding(m_mediaEncoding));
  }

  if(m_mediaSampleRateHasBeenSet)
  {
   payload.WithInteger("MediaSampleRate", m_mediaSampleRate);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
