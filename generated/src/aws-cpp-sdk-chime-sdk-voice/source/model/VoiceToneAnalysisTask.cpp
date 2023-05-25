/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/VoiceToneAnalysisTask.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

VoiceToneAnalysisTask::VoiceToneAnalysisTask() : 
    m_voiceToneAnalysisTaskIdHasBeenSet(false),
    m_voiceToneAnalysisTaskStatusHasBeenSet(false),
    m_callDetailsHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false),
    m_startedTimestampHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
}

VoiceToneAnalysisTask::VoiceToneAnalysisTask(JsonView jsonValue) : 
    m_voiceToneAnalysisTaskIdHasBeenSet(false),
    m_voiceToneAnalysisTaskStatusHasBeenSet(false),
    m_callDetailsHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false),
    m_startedTimestampHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
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
    m_voiceToneAnalysisTaskStatus = jsonValue.GetString("VoiceToneAnalysisTaskStatus");

    m_voiceToneAnalysisTaskStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CallDetails"))
  {
    m_callDetails = jsonValue.GetObject("CallDetails");

    m_callDetailsHasBeenSet = true;
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

  if(jsonValue.ValueExists("StartedTimestamp"))
  {
    m_startedTimestamp = jsonValue.GetString("StartedTimestamp");

    m_startedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
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
   payload.WithString("VoiceToneAnalysisTaskStatus", m_voiceToneAnalysisTaskStatus);

  }

  if(m_callDetailsHasBeenSet)
  {
   payload.WithObject("CallDetails", m_callDetails.Jsonize());

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithString("CreatedTimestamp", m_createdTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedTimestampHasBeenSet)
  {
   payload.WithString("UpdatedTimestamp", m_updatedTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_startedTimestampHasBeenSet)
  {
   payload.WithString("StartedTimestamp", m_startedTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
