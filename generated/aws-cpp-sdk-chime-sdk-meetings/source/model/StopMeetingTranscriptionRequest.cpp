/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-meetings/model/StopMeetingTranscriptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKMeetings::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopMeetingTranscriptionRequest::StopMeetingTranscriptionRequest() : 
    m_meetingIdHasBeenSet(false)
{
}

Aws::String StopMeetingTranscriptionRequest::SerializePayload() const
{
  return {};
}




