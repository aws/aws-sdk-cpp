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

#include <aws/ce/model/GetRightsizingRecommendationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRightsizingRecommendationRequest::GetRightsizingRecommendationRequest() : 
    m_filterHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_pageSize(0),
    m_pageSizeHasBeenSet(false),
    m_nextPageTokenHasBeenSet(false)
{
}

Aws::String GetRightsizingRecommendationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_filterHasBeenSet)
  {
   payload.WithObject("Filter", m_filter.Jsonize());

  }

  if(m_serviceHasBeenSet)
  {
   payload.WithString("Service", m_service);

  }

  if(m_pageSizeHasBeenSet)
  {
   payload.WithInteger("PageSize", m_pageSize);

  }

  if(m_nextPageTokenHasBeenSet)
  {
   payload.WithString("NextPageToken", m_nextPageToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetRightsizingRecommendationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSInsightsIndexService.GetRightsizingRecommendation"));
  return headers;

}




