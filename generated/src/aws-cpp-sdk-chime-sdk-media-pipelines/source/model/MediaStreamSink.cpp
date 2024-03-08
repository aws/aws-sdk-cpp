/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/MediaStreamSink.h>
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

MediaStreamSink::MediaStreamSink() : 
    m_sinkArnHasBeenSet(false),
    m_sinkType(MediaStreamPipelineSinkType::NOT_SET),
    m_sinkTypeHasBeenSet(false),
    m_reservedStreamCapacity(0),
    m_reservedStreamCapacityHasBeenSet(false),
    m_mediaStreamType(MediaStreamType::NOT_SET),
    m_mediaStreamTypeHasBeenSet(false)
{
}

MediaStreamSink::MediaStreamSink(JsonView jsonValue) : 
    m_sinkArnHasBeenSet(false),
    m_sinkType(MediaStreamPipelineSinkType::NOT_SET),
    m_sinkTypeHasBeenSet(false),
    m_reservedStreamCapacity(0),
    m_reservedStreamCapacityHasBeenSet(false),
    m_mediaStreamType(MediaStreamType::NOT_SET),
    m_mediaStreamTypeHasBeenSet(false)
{
  *this = jsonValue;
}

MediaStreamSink& MediaStreamSink::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SinkArn"))
  {
    m_sinkArn = jsonValue.GetString("SinkArn");

    m_sinkArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SinkType"))
  {
    m_sinkType = MediaStreamPipelineSinkTypeMapper::GetMediaStreamPipelineSinkTypeForName(jsonValue.GetString("SinkType"));

    m_sinkTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReservedStreamCapacity"))
  {
    m_reservedStreamCapacity = jsonValue.GetInteger("ReservedStreamCapacity");

    m_reservedStreamCapacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MediaStreamType"))
  {
    m_mediaStreamType = MediaStreamTypeMapper::GetMediaStreamTypeForName(jsonValue.GetString("MediaStreamType"));

    m_mediaStreamTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue MediaStreamSink::Jsonize() const
{
  JsonValue payload;

  if(m_sinkArnHasBeenSet)
  {
   payload.WithString("SinkArn", m_sinkArn);

  }

  if(m_sinkTypeHasBeenSet)
  {
   payload.WithString("SinkType", MediaStreamPipelineSinkTypeMapper::GetNameForMediaStreamPipelineSinkType(m_sinkType));
  }

  if(m_reservedStreamCapacityHasBeenSet)
  {
   payload.WithInteger("ReservedStreamCapacity", m_reservedStreamCapacity);

  }

  if(m_mediaStreamTypeHasBeenSet)
  {
   payload.WithString("MediaStreamType", MediaStreamTypeMapper::GetNameForMediaStreamType(m_mediaStreamType));
  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
