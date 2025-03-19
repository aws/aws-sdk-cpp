/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/GetApproximateUsageRecordsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetApproximateUsageRecordsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_granularityHasBeenSet)
  {
   payload.WithString("Granularity", GranularityMapper::GetNameForGranularity(m_granularity));
  }

  if(m_servicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> servicesJsonList(m_services.size());
   for(unsigned servicesIndex = 0; servicesIndex < servicesJsonList.GetLength(); ++servicesIndex)
   {
     servicesJsonList[servicesIndex].AsString(m_services[servicesIndex]);
   }
   payload.WithArray("Services", std::move(servicesJsonList));

  }

  if(m_approximationDimensionHasBeenSet)
  {
   payload.WithString("ApproximationDimension", ApproximationDimensionMapper::GetNameForApproximationDimension(m_approximationDimension));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetApproximateUsageRecordsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSInsightsIndexService.GetApproximateUsageRecords"));
  return headers;

}




