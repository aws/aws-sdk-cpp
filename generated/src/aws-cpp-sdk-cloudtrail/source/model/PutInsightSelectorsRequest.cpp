/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/PutInsightSelectorsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutInsightSelectorsRequest::PutInsightSelectorsRequest() : 
    m_trailNameHasBeenSet(false),
    m_insightSelectorsHasBeenSet(false),
    m_eventDataStoreHasBeenSet(false),
    m_insightsDestinationHasBeenSet(false)
{
}

Aws::String PutInsightSelectorsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_trailNameHasBeenSet)
  {
   payload.WithString("TrailName", m_trailName);

  }

  if(m_insightSelectorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> insightSelectorsJsonList(m_insightSelectors.size());
   for(unsigned insightSelectorsIndex = 0; insightSelectorsIndex < insightSelectorsJsonList.GetLength(); ++insightSelectorsIndex)
   {
     insightSelectorsJsonList[insightSelectorsIndex].AsObject(m_insightSelectors[insightSelectorsIndex].Jsonize());
   }
   payload.WithArray("InsightSelectors", std::move(insightSelectorsJsonList));

  }

  if(m_eventDataStoreHasBeenSet)
  {
   payload.WithString("EventDataStore", m_eventDataStore);

  }

  if(m_insightsDestinationHasBeenSet)
  {
   payload.WithString("InsightsDestination", m_insightsDestination);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutInsightSelectorsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.cloudtrail.v20131101.CloudTrail_20131101.PutInsightSelectors"));
  return headers;

}




