/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ce/model/GetTagsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetTagsRequest::GetTagsRequest() : 
    m_searchStringHasBeenSet(false),
    m_timePeriodHasBeenSet(false),
    m_tagKeyHasBeenSet(false),
    m_nextPageTokenHasBeenSet(false)
{
}

Aws::String GetTagsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_searchStringHasBeenSet)
  {
   payload.WithString("SearchString", m_searchString);

  }

  if(m_timePeriodHasBeenSet)
  {
   payload.WithObject("TimePeriod", m_timePeriod.Jsonize());

  }

  if(m_tagKeyHasBeenSet)
  {
   payload.WithString("TagKey", m_tagKey);

  }

  if(m_nextPageTokenHasBeenSet)
  {
   payload.WithString("NextPageToken", m_nextPageToken);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection GetTagsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSInsightsIndexService.GetTags"));
  return headers;

}




