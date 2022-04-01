/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/ListAttendeeTagsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListAttendeeTagsRequest::ListAttendeeTagsRequest() : 
    m_meetingIdHasBeenSet(false),
    m_attendeeIdHasBeenSet(false)
{
}

Aws::String ListAttendeeTagsRequest::SerializePayload() const
{
  return {};
}




