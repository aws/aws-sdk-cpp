/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/DeleteAttendeeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAttendeeRequest::DeleteAttendeeRequest() : 
    m_meetingIdHasBeenSet(false),
    m_attendeeIdHasBeenSet(false)
{
}

Aws::String DeleteAttendeeRequest::SerializePayload() const
{
  return {};
}




