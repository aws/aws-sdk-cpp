/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/meteringmarketplace/model/BatchMeterUsageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MarketplaceMetering::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchMeterUsageRequest::BatchMeterUsageRequest() : 
    m_usageRecordsHasBeenSet(false),
    m_productCodeHasBeenSet(false)
{
}

Aws::String BatchMeterUsageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_usageRecordsHasBeenSet)
  {
   Array<JsonValue> usageRecordsJsonList(m_usageRecords.size());
   for(unsigned usageRecordsIndex = 0; usageRecordsIndex < usageRecordsJsonList.GetLength(); ++usageRecordsIndex)
   {
     usageRecordsJsonList[usageRecordsIndex].AsObject(m_usageRecords[usageRecordsIndex].Jsonize());
   }
   payload.WithArray("UsageRecords", std::move(usageRecordsJsonList));

  }

  if(m_productCodeHasBeenSet)
  {
   payload.WithString("ProductCode", m_productCode);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection BatchMeterUsageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSMPMeteringService.BatchMeterUsage"));
  return headers;

}




