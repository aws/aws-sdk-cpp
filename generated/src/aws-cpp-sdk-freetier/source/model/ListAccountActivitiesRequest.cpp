/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/freetier/model/ListAccountActivitiesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FreeTier::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListAccountActivitiesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_filterActivityStatusesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filterActivityStatusesJsonList(m_filterActivityStatuses.size());
   for(unsigned filterActivityStatusesIndex = 0; filterActivityStatusesIndex < filterActivityStatusesJsonList.GetLength(); ++filterActivityStatusesIndex)
   {
     filterActivityStatusesJsonList[filterActivityStatusesIndex].AsString(ActivityStatusMapper::GetNameForActivityStatus(m_filterActivityStatuses[filterActivityStatusesIndex]));
   }
   payload.WithArray("filterActivityStatuses", std::move(filterActivityStatusesJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("languageCode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListAccountActivitiesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSFreeTierService.ListAccountActivities"));
  return headers;

}




