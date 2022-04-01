/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-meetings/model/StartMeetingTranscriptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKMeetings::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartMeetingTranscriptionRequest::StartMeetingTranscriptionRequest() : 
    m_meetingIdHasBeenSet(false),
    m_transcriptionConfigurationHasBeenSet(false)
{
}

Aws::String StartMeetingTranscriptionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_transcriptionConfigurationHasBeenSet)
  {
   payload.WithObject("TranscriptionConfiguration", m_transcriptionConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




