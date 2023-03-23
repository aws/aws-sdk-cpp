/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/DisconnectParticipantRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ivsrealtime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisconnectParticipantRequest::DisconnectParticipantRequest() : 
    m_participantIdHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_stageArnHasBeenSet(false)
{
}

Aws::String DisconnectParticipantRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_participantIdHasBeenSet)
  {
   payload.WithString("participantId", m_participantId);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  if(m_stageArnHasBeenSet)
  {
   payload.WithString("stageArn", m_stageArn);

  }

  return payload.View().WriteReadable();
}




