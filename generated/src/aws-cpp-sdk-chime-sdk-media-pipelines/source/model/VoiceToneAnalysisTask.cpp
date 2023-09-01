/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/VoiceToneAnalysisTask.h>
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

VoiceToneAnalysisTask::VoiceToneAnalysisTask() : 
    m_voiceToneAnalysisTaskIdHasBeenSet(false),
    m_voiceToneAnalysisTaskStatus(MediaPipelineTaskStatus::NOT_SET),
    m_voiceToneAnalysisTaskStatusHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false)
{
}

VoiceToneAnalysisTask::VoiceToneAnalysisTask(JsonView jsonValue) : 
    m_voiceToneAnalysisTaskIdHasBeenSet(false),
    m_voiceToneAnalysisTaskStatus(MediaPipelineTaskStatus::NOT_SET),
    m_voiceToneAnalysisTaskStatusHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

VoiceToneAnalysisTask& VoiceToneAnalysisTask::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VoiceToneAnalysisTaskId"))
  {
    m_voiceToneAnalysisTaskId = jsonValue.GetString("VoiceToneAnalysisTaskId");

    m_voiceToneAnalysisTaskIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VoiceToneAnalysisTaskStatus"))
  {
    m_voiceToneAnalysisTaskStatus = MediaPipelineTaskStatusMapper::GetMediaPipelineTaskStatusForName(jsonValue.GetString("VoiceToneAnalysisTaskStatus"));

    m_voiceToneAnalysisTaskStatusHasBeenSet = true;
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

JsonValue VoiceToneAnalysisTask::Jsonize() const
{
  JsonValue payload;

  if(m_voiceToneAnalysisTaskIdHasBeenSet)
  {
   payload.WithString("VoiceToneAnalysisTaskId", m_voiceToneAnalysisTaskId);

  }

  if(m_voiceToneAnalysisTaskStatusHasBeenSet)
  {
   payload.WithString("VoiceToneAnalysisTaskStatus", MediaPipelineTaskStatusMapper::GetNameForMediaPipelineTaskStatus(m_voiceToneAnalysisTaskStatus));
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
