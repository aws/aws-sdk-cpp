/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/GetSavingsPlansUtilizationDetailsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSavingsPlansUtilizationDetailsRequest::GetSavingsPlansUtilizationDetailsRequest() : 
    m_timePeriodHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_sortByHasBeenSet(false)
{
}

Aws::String GetSavingsPlansUtilizationDetailsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_timePeriodHasBeenSet)
  {
   payload.WithObject("TimePeriod", m_timePeriod.Jsonize());

  }

  if(m_filterHasBeenSet)
  {
   payload.WithObject("Filter", m_filter.Jsonize());

  }

  if(m_dataTypeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataTypeJsonList(m_dataType.size());
   for(unsigned dataTypeIndex = 0; dataTypeIndex < dataTypeJsonList.GetLength(); ++dataTypeIndex)
   {
     dataTypeJsonList[dataTypeIndex].AsString(SavingsPlansDataTypeMapper::GetNameForSavingsPlansDataType(m_dataType[dataTypeIndex]));
   }
   payload.WithArray("DataType", std::move(dataTypeJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_sortByHasBeenSet)
  {
   payload.WithObject("SortBy", m_sortBy.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetSavingsPlansUtilizationDetailsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSInsightsIndexService.GetSavingsPlansUtilizationDetails"));
  return headers;

}




