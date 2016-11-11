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
#include <aws/marketplacecommerceanalytics/model/StartSupportDataExportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MarketplaceCommerceAnalytics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartSupportDataExportRequest::StartSupportDataExportRequest() : 
    m_dataSetType(SupportDataSetType::NOT_SET),
    m_dataSetTypeHasBeenSet(false),
    m_fromDateHasBeenSet(false),
    m_roleNameArnHasBeenSet(false),
    m_destinationS3BucketNameHasBeenSet(false),
    m_destinationS3PrefixHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false),
    m_customerDefinedValuesHasBeenSet(false)
{
}

Aws::String StartSupportDataExportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dataSetTypeHasBeenSet)
  {
   payload.WithString("dataSetType", SupportDataSetTypeMapper::GetNameForSupportDataSetType(m_dataSetType));
  }

  if(m_fromDateHasBeenSet)
  {
   payload.WithDouble("fromDate", m_fromDate.SecondsWithMSPrecision());
  }

  if(m_roleNameArnHasBeenSet)
  {
   payload.WithString("roleNameArn", m_roleNameArn);

  }

  if(m_destinationS3BucketNameHasBeenSet)
  {
   payload.WithString("destinationS3BucketName", m_destinationS3BucketName);

  }

  if(m_destinationS3PrefixHasBeenSet)
  {
   payload.WithString("destinationS3Prefix", m_destinationS3Prefix);

  }

  if(m_snsTopicArnHasBeenSet)
  {
   payload.WithString("snsTopicArn", m_snsTopicArn);

  }

  if(m_customerDefinedValuesHasBeenSet)
  {
   JsonValue customerDefinedValuesJsonMap;
   for(auto& customerDefinedValuesItem : m_customerDefinedValues)
   {
     customerDefinedValuesJsonMap.WithString(customerDefinedValuesItem.first, customerDefinedValuesItem.second);
   }
   payload.WithObject("customerDefinedValues", std::move(customerDefinedValuesJsonMap));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection StartSupportDataExportRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MarketplaceCommerceAnalytics20150701.StartSupportDataExport"));
  return headers;

}



