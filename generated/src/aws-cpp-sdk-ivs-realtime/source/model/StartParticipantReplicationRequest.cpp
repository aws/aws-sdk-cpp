/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/StartParticipantReplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ivsrealtime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartParticipantReplicationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceStageArnHasBeenSet)
  {
   payload.WithString("sourceStageArn", m_sourceStageArn);

  }

  if(m_destinationStageArnHasBeenSet)
  {
   payload.WithString("destinationStageArn", m_destinationStageArn);

  }

  if(m_participantIdHasBeenSet)
  {
   payload.WithString("participantId", m_participantId);

  }

  if(m_reconnectWindowSecondsHasBeenSet)
  {
   payload.WithInteger("reconnectWindowSeconds", m_reconnectWindowSeconds);

  }

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
   }
   payload.WithObject("attributes", std::move(attributesJsonMap));

  }

  return payload.View().WriteReadable();
}




