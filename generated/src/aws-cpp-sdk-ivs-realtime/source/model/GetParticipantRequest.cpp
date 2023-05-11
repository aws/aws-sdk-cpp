/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/GetParticipantRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ivsrealtime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetParticipantRequest::GetParticipantRequest() : 
    m_participantIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_stageArnHasBeenSet(false)
{
}

Aws::String GetParticipantRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_participantIdHasBeenSet)
  {
   payload.WithString("participantId", m_participantId);

  }

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("sessionId", m_sessionId);

  }

  if(m_stageArnHasBeenSet)
  {
   payload.WithString("stageArn", m_stageArn);

  }

  return payload.View().WriteReadable();
}




