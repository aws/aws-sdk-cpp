/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/StreamingSession.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

StreamingSession::StreamingSession() : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_ec2InstanceTypeHasBeenSet(false),
    m_launchProfileIdHasBeenSet(false),
    m_ownedByHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_startedByHasBeenSet(false),
    m_state(StreamingSessionState::NOT_SET),
    m_stateHasBeenSet(false),
    m_statusCode(StreamingSessionStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_stopAtHasBeenSet(false),
    m_stoppedAtHasBeenSet(false),
    m_stoppedByHasBeenSet(false),
    m_streamingImageIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_terminateAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_updatedByHasBeenSet(false)
{
}

StreamingSession::StreamingSession(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_ec2InstanceTypeHasBeenSet(false),
    m_launchProfileIdHasBeenSet(false),
    m_ownedByHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_startedByHasBeenSet(false),
    m_state(StreamingSessionState::NOT_SET),
    m_stateHasBeenSet(false),
    m_statusCode(StreamingSessionStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_stopAtHasBeenSet(false),
    m_stoppedAtHasBeenSet(false),
    m_stoppedByHasBeenSet(false),
    m_streamingImageIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_terminateAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_updatedByHasBeenSet(false)
{
  *this = jsonValue;
}

StreamingSession& StreamingSession::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ec2InstanceType"))
  {
    m_ec2InstanceType = jsonValue.GetString("ec2InstanceType");

    m_ec2InstanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchProfileId"))
  {
    m_launchProfileId = jsonValue.GetString("launchProfileId");

    m_launchProfileIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ownedBy"))
  {
    m_ownedBy = jsonValue.GetString("ownedBy");

    m_ownedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sessionId"))
  {
    m_sessionId = jsonValue.GetString("sessionId");

    m_sessionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetString("startedAt");

    m_startedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startedBy"))
  {
    m_startedBy = jsonValue.GetString("startedBy");

    m_startedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = StreamingSessionStateMapper::GetStreamingSessionStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusCode"))
  {
    m_statusCode = StreamingSessionStatusCodeMapper::GetStreamingSessionStatusCodeForName(jsonValue.GetString("statusCode"));

    m_statusCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stopAt"))
  {
    m_stopAt = jsonValue.GetString("stopAt");

    m_stopAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stoppedAt"))
  {
    m_stoppedAt = jsonValue.GetString("stoppedAt");

    m_stoppedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stoppedBy"))
  {
    m_stoppedBy = jsonValue.GetString("stoppedBy");

    m_stoppedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streamingImageId"))
  {
    m_streamingImageId = jsonValue.GetString("streamingImageId");

    m_streamingImageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("terminateAt"))
  {
    m_terminateAt = jsonValue.GetString("terminateAt");

    m_terminateAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedBy"))
  {
    m_updatedBy = jsonValue.GetString("updatedBy");

    m_updatedByHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamingSession::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("createdBy", m_createdBy);

  }

  if(m_ec2InstanceTypeHasBeenSet)
  {
   payload.WithString("ec2InstanceType", m_ec2InstanceType);

  }

  if(m_launchProfileIdHasBeenSet)
  {
   payload.WithString("launchProfileId", m_launchProfileId);

  }

  if(m_ownedByHasBeenSet)
  {
   payload.WithString("ownedBy", m_ownedBy);

  }

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("sessionId", m_sessionId);

  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithString("startedAt", m_startedAt.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_startedByHasBeenSet)
  {
   payload.WithString("startedBy", m_startedBy);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", StreamingSessionStateMapper::GetNameForStreamingSessionState(m_state));
  }

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("statusCode", StreamingSessionStatusCodeMapper::GetNameForStreamingSessionStatusCode(m_statusCode));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_stopAtHasBeenSet)
  {
   payload.WithString("stopAt", m_stopAt.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_stoppedAtHasBeenSet)
  {
   payload.WithString("stoppedAt", m_stoppedAt.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_stoppedByHasBeenSet)
  {
   payload.WithString("stoppedBy", m_stoppedBy);

  }

  if(m_streamingImageIdHasBeenSet)
  {
   payload.WithString("streamingImageId", m_streamingImageId);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_terminateAtHasBeenSet)
  {
   payload.WithString("terminateAt", m_terminateAt.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_updatedByHasBeenSet)
  {
   payload.WithString("updatedBy", m_updatedBy);

  }

  return payload;
}

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
