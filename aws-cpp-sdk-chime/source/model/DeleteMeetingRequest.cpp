/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/DeleteMeetingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteMeetingRequest::DeleteMeetingRequest() : 
    m_meetingIdHasBeenSet(false)
{
}

Aws::String DeleteMeetingRequest::SerializePayload() const
{
  return {};
}




