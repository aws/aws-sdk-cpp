/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecastquery/model/QueryForecastRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ForecastQueryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

QueryForecastRequest::QueryForecastRequest() : 
    m_forecastArnHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String QueryForecastRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_forecastArnHasBeenSet)
  {
   payload.WithString("ForecastArn", m_forecastArn);

  }

  if(m_startDateHasBeenSet)
  {
   payload.WithString("StartDate", m_startDate);

  }

  if(m_endDateHasBeenSet)
  {
   payload.WithString("EndDate", m_endDate);

  }

  if(m_filtersHasBeenSet)
  {
   JsonValue filtersJsonMap;
   for(auto& filtersItem : m_filters)
   {
     filtersJsonMap.WithString(filtersItem.first, filtersItem.second);
   }
   payload.WithObject("Filters", std::move(filtersJsonMap));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection QueryForecastRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonForecastRuntime.QueryForecast"));
  return headers;

}




