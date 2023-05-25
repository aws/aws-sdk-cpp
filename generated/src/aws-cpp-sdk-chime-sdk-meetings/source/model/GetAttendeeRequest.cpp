/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-meetings/model/GetAttendeeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKMeetings::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAttendeeRequest::GetAttendeeRequest() : 
    m_meetingIdHasBeenSet(false),
    m_attendeeIdHasBeenSet(false)
{
}

Aws::String GetAttendeeRequest::SerializePayload() const
{
  return {};
}




