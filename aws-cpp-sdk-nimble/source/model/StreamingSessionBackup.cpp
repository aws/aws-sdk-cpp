/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/StreamingSessionBackup.h>
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

StreamingSessionBackup::StreamingSessionBackup() : 
    m_arnHasBeenSet(false),
    m_backupIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_launchProfileIdHasBeenSet(false),
    m_ownedByHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_state(StreamingSessionState::NOT_SET),
    m_stateHasBeenSet(false),
    m_statusCode(StreamingSessionStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

StreamingSessionBackup::StreamingSessionBackup(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_backupIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_launchProfileIdHasBeenSet(false),
    m_ownedByHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_state(StreamingSessionState::NOT_SET),
    m_stateHasBeenSet(false),
    m_statusCode(StreamingSessionStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

StreamingSessionBackup& StreamingSessionBackup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("backupId"))
  {
    m_backupId = jsonValue.GetString("backupId");

    m_backupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
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

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamingSessionBackup::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_backupIdHasBeenSet)
  {
   payload.WithString("backupId", m_backupId);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
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

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
