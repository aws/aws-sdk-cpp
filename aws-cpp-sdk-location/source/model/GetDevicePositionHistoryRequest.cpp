/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/GetDevicePositionHistoryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDevicePositionHistoryRequest::GetDevicePositionHistoryRequest() : 
    m_deviceIdHasBeenSet(false),
    m_endTimeExclusiveHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_startTimeInclusiveHasBeenSet(false),
    m_trackerNameHasBeenSet(false)
{
}

Aws::String GetDevicePositionHistoryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_endTimeExclusiveHasBeenSet)
  {
   payload.WithString("EndTimeExclusive", m_endTimeExclusive.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_startTimeInclusiveHasBeenSet)
  {
   payload.WithString("StartTimeInclusive", m_startTimeInclusive.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload.View().WriteReadable();
}




