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
#include <aws/meteringmarketplace/model/MeterUsageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MarketplaceMetering::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

MeterUsageRequest::MeterUsageRequest() : 
    m_productCodeHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_usageDimensionHasBeenSet(false),
    m_usageQuantity(0),
    m_usageQuantityHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String MeterUsageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_productCodeHasBeenSet)
  {
   payload.WithString("ProductCode", m_productCode);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_usageDimensionHasBeenSet)
  {
   payload.WithString("UsageDimension", m_usageDimension);

  }

  if(m_usageQuantityHasBeenSet)
  {
   payload.WithInteger("UsageQuantity", m_usageQuantity);

  }

  if(m_dryRunHasBeenSet)
  {
   payload.WithBool("DryRun", m_dryRun);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection MeterUsageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSMPMeteringService.MeterUsage"));
  return headers;

}



