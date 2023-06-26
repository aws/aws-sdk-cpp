/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/ListEphemeridesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListEphemeridesRequest::ListEphemeridesRequest() : 
    m_endTimeHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_satelliteIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_statusListHasBeenSet(false)
{
}

Aws::String ListEphemeridesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_satelliteIdHasBeenSet)
  {
   payload.WithString("satelliteId", m_satelliteId);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_statusListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statusListJsonList(m_statusList.size());
   for(unsigned statusListIndex = 0; statusListIndex < statusListJsonList.GetLength(); ++statusListIndex)
   {
     statusListJsonList[statusListIndex].AsString(EphemerisStatusMapper::GetNameForEphemerisStatus(m_statusList[statusListIndex]));
   }
   payload.WithArray("statusList", std::move(statusListJsonList));

  }

  return payload.View().WriteReadable();
}

void ListEphemeridesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

}



