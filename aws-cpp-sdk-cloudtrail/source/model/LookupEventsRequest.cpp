/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/LookupEventsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

LookupEventsRequest::LookupEventsRequest() : 
    m_lookupAttributesHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_eventCategory(EventCategory::NOT_SET),
    m_eventCategoryHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String LookupEventsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_lookupAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lookupAttributesJsonList(m_lookupAttributes.size());
   for(unsigned lookupAttributesIndex = 0; lookupAttributesIndex < lookupAttributesJsonList.GetLength(); ++lookupAttributesIndex)
   {
     lookupAttributesJsonList[lookupAttributesIndex].AsObject(m_lookupAttributes[lookupAttributesIndex].Jsonize());
   }
   payload.WithArray("LookupAttributes", std::move(lookupAttributesJsonList));

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_eventCategoryHasBeenSet)
  {
   payload.WithString("EventCategory", EventCategoryMapper::GetNameForEventCategory(m_eventCategory));
  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection LookupEventsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.cloudtrail.v20131101.CloudTrail_20131101.LookupEvents"));
  return headers;

}




