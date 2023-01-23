/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/MediaCapturePipeline.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

MediaCapturePipeline::MediaCapturePipeline() : 
    m_mediaPipelineIdHasBeenSet(false),
    m_sourceType(MediaPipelineSourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_status(MediaPipelineStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_sinkType(MediaPipelineSinkType::NOT_SET),
    m_sinkTypeHasBeenSet(false),
    m_sinkArnHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false),
    m_chimeSdkMeetingConfigurationHasBeenSet(false)
{
}

MediaCapturePipeline::MediaCapturePipeline(JsonView jsonValue) : 
    m_mediaPipelineIdHasBeenSet(false),
    m_sourceType(MediaPipelineSourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_status(MediaPipelineStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_sinkType(MediaPipelineSinkType::NOT_SET),
    m_sinkTypeHasBeenSet(false),
    m_sinkArnHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false),
    m_chimeSdkMeetingConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

MediaCapturePipeline& MediaCapturePipeline::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MediaPipelineId"))
  {
    m_mediaPipelineId = jsonValue.GetString("MediaPipelineId");

    m_mediaPipelineIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceType"))
  {
    m_sourceType = MediaPipelineSourceTypeMapper::GetMediaPipelineSourceTypeForName(jsonValue.GetString("SourceType"));

    m_sourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceArn"))
  {
    m_sourceArn = jsonValue.GetString("SourceArn");

    m_sourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = MediaPipelineStatusMapper::GetMediaPipelineStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SinkType"))
  {
    m_sinkType = MediaPipelineSinkTypeMapper::GetMediaPipelineSinkTypeForName(jsonValue.GetString("SinkType"));

    m_sinkTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SinkArn"))
  {
    m_sinkArn = jsonValue.GetString("SinkArn");

    m_sinkArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetString("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedTimestamp"))
  {
    m_updatedTimestamp = jsonValue.GetString("UpdatedTimestamp");

    m_updatedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChimeSdkMeetingConfiguration"))
  {
    m_chimeSdkMeetingConfiguration = jsonValue.GetObject("ChimeSdkMeetingConfiguration");

    m_chimeSdkMeetingConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue MediaCapturePipeline::Jsonize() const
{
  JsonValue payload;

  if(m_mediaPipelineIdHasBeenSet)
  {
   payload.WithString("MediaPipelineId", m_mediaPipelineId);

  }

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("SourceType", MediaPipelineSourceTypeMapper::GetNameForMediaPipelineSourceType(m_sourceType));
  }

  if(m_sourceArnHasBeenSet)
  {
   payload.WithString("SourceArn", m_sourceArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", MediaPipelineStatusMapper::GetNameForMediaPipelineStatus(m_status));
  }

  if(m_sinkTypeHasBeenSet)
  {
   payload.WithString("SinkType", MediaPipelineSinkTypeMapper::GetNameForMediaPipelineSinkType(m_sinkType));
  }

  if(m_sinkArnHasBeenSet)
  {
   payload.WithString("SinkArn", m_sinkArn);

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithString("CreatedTimestamp", m_createdTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedTimestampHasBeenSet)
  {
   payload.WithString("UpdatedTimestamp", m_updatedTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_chimeSdkMeetingConfigurationHasBeenSet)
  {
   payload.WithObject("ChimeSdkMeetingConfiguration", m_chimeSdkMeetingConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
