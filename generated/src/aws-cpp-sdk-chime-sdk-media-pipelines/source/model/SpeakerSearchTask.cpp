/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/SpeakerSearchTask.h>
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

SpeakerSearchTask::SpeakerSearchTask() : 
    m_speakerSearchTaskIdHasBeenSet(false),
    m_speakerSearchTaskStatus(MediaPipelineTaskStatus::NOT_SET),
    m_speakerSearchTaskStatusHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false)
{
}

SpeakerSearchTask::SpeakerSearchTask(JsonView jsonValue) : 
    m_speakerSearchTaskIdHasBeenSet(false),
    m_speakerSearchTaskStatus(MediaPipelineTaskStatus::NOT_SET),
    m_speakerSearchTaskStatusHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

SpeakerSearchTask& SpeakerSearchTask::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SpeakerSearchTaskId"))
  {
    m_speakerSearchTaskId = jsonValue.GetString("SpeakerSearchTaskId");

    m_speakerSearchTaskIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SpeakerSearchTaskStatus"))
  {
    m_speakerSearchTaskStatus = MediaPipelineTaskStatusMapper::GetMediaPipelineTaskStatusForName(jsonValue.GetString("SpeakerSearchTaskStatus"));

    m_speakerSearchTaskStatusHasBeenSet = true;
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

  return *this;
}

JsonValue SpeakerSearchTask::Jsonize() const
{
  JsonValue payload;

  if(m_speakerSearchTaskIdHasBeenSet)
  {
   payload.WithString("SpeakerSearchTaskId", m_speakerSearchTaskId);

  }

  if(m_speakerSearchTaskStatusHasBeenSet)
  {
   payload.WithString("SpeakerSearchTaskStatus", MediaPipelineTaskStatusMapper::GetNameForMediaPipelineTaskStatus(m_speakerSearchTaskStatus));
  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithString("CreatedTimestamp", m_createdTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedTimestampHasBeenSet)
  {
   payload.WithString("UpdatedTimestamp", m_updatedTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
