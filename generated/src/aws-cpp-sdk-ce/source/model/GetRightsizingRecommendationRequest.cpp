/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/GetRightsizingRecommendationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRightsizingRecommendationRequest::GetRightsizingRecommendationRequest() : 
    m_filterHasBeenSet(false),
    m_configurationHasBeenSet(false),
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

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("Configuration", m_configuration.Jsonize());

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




