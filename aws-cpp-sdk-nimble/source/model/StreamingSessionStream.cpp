/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/StreamingSessionStream.h>
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

StreamingSessionStream::StreamingSessionStream() : 
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_expiresAtHasBeenSet(false),
    m_ownedByHasBeenSet(false),
    m_state(StreamingSessionStreamState::NOT_SET),
    m_stateHasBeenSet(false),
    m_statusCode(StreamingSessionStreamStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_streamIdHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

StreamingSessionStream::StreamingSessionStream(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_expiresAtHasBeenSet(false),
    m_ownedByHasBeenSet(false),
    m_state(StreamingSessionStreamState::NOT_SET),
    m_stateHasBeenSet(false),
    m_statusCode(StreamingSessionStreamStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_streamIdHasBeenSet(false),
    m_urlHasBeenSet(false)
{
  *this = jsonValue;
}

StreamingSessionStream& StreamingSessionStream::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("expiresAt"))
  {
    m_expiresAt = jsonValue.GetString("expiresAt");

    m_expiresAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ownedBy"))
  {
    m_ownedBy = jsonValue.GetString("ownedBy");

    m_ownedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = StreamingSessionStreamStateMapper::GetStreamingSessionStreamStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusCode"))
  {
    m_statusCode = StreamingSessionStreamStatusCodeMapper::GetStreamingSessionStreamStatusCodeForName(jsonValue.GetString("statusCode"));

    m_statusCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streamId"))
  {
    m_streamId = jsonValue.GetString("streamId");

    m_streamIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");

    m_urlHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamingSessionStream::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("createdBy", m_createdBy);

  }

  if(m_expiresAtHasBeenSet)
  {
   payload.WithString("expiresAt", m_expiresAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_ownedByHasBeenSet)
  {
   payload.WithString("ownedBy", m_ownedBy);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", StreamingSessionStreamStateMapper::GetNameForStreamingSessionStreamState(m_state));
  }

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("statusCode", StreamingSessionStreamStatusCodeMapper::GetNameForStreamingSessionStreamStatusCode(m_statusCode));
  }

  if(m_streamIdHasBeenSet)
  {
   payload.WithString("streamId", m_streamId);

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  return payload;
}

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
