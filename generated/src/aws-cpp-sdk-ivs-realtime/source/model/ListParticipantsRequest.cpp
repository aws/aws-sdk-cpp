/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/ListParticipantsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ivsrealtime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListParticipantsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_stageArnHasBeenSet)
  {
   payload.WithString("stageArn", m_stageArn);

  }

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("sessionId", m_sessionId);

  }

  if(m_filterByUserIdHasBeenSet)
  {
   payload.WithString("filterByUserId", m_filterByUserId);

  }

  if(m_filterByPublishedHasBeenSet)
  {
   payload.WithBool("filterByPublished", m_filterByPublished);

  }

  if(m_filterByStateHasBeenSet)
  {
   payload.WithString("filterByState", ParticipantStateMapper::GetNameForParticipantState(m_filterByState));
  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_filterByRecordingStateHasBeenSet)
  {
   payload.WithString("filterByRecordingState", ParticipantRecordingFilterByRecordingStateMapper::GetNameForParticipantRecordingFilterByRecordingState(m_filterByRecordingState));
  }

  return payload.View().WriteReadable();
}




