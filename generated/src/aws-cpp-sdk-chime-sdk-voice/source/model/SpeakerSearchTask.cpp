/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/SpeakerSearchTask.h>
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

SpeakerSearchTask::SpeakerSearchTask() : 
    m_speakerSearchTaskIdHasBeenSet(false),
    m_speakerSearchTaskStatusHasBeenSet(false),
    m_callDetailsHasBeenSet(false),
    m_speakerSearchDetailsHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false),
    m_startedTimestampHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
}

SpeakerSearchTask::SpeakerSearchTask(JsonView jsonValue) : 
    m_speakerSearchTaskIdHasBeenSet(false),
    m_speakerSearchTaskStatusHasBeenSet(false),
    m_callDetailsHasBeenSet(false),
    m_speakerSearchDetailsHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false),
    m_startedTimestampHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
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
    m_speakerSearchTaskStatus = jsonValue.GetString("SpeakerSearchTaskStatus");

    m_speakerSearchTaskStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CallDetails"))
  {
    m_callDetails = jsonValue.GetObject("CallDetails");

    m_callDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SpeakerSearchDetails"))
  {
    m_speakerSearchDetails = jsonValue.GetObject("SpeakerSearchDetails");

    m_speakerSearchDetailsHasBeenSet = true;
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

JsonValue SpeakerSearchTask::Jsonize() const
{
  JsonValue payload;

  if(m_speakerSearchTaskIdHasBeenSet)
  {
   payload.WithString("SpeakerSearchTaskId", m_speakerSearchTaskId);

  }

  if(m_speakerSearchTaskStatusHasBeenSet)
  {
   payload.WithString("SpeakerSearchTaskStatus", m_speakerSearchTaskStatus);

  }

  if(m_callDetailsHasBeenSet)
  {
   payload.WithObject("CallDetails", m_callDetails.Jsonize());

  }

  if(m_speakerSearchDetailsHasBeenSet)
  {
   payload.WithObject("SpeakerSearchDetails", m_speakerSearchDetails.Jsonize());

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
