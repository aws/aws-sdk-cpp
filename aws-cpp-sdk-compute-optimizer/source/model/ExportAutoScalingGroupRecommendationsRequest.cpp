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

#include <aws/compute-optimizer/model/ExportAutoScalingGroupRecommendationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ComputeOptimizer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ExportAutoScalingGroupRecommendationsRequest::ExportAutoScalingGroupRecommendationsRequest() : 
    m_accountIdsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_fieldsToExportHasBeenSet(false),
    m_s3DestinationConfigHasBeenSet(false),
    m_fileFormat(FileFormat::NOT_SET),
    m_fileFormatHasBeenSet(false),
    m_includeMemberAccounts(false),
    m_includeMemberAccountsHasBeenSet(false)
{
}

Aws::String ExportAutoScalingGroupRecommendationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountIdsHasBeenSet)
  {
   Array<JsonValue> accountIdsJsonList(m_accountIds.size());
   for(unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex)
   {
     accountIdsJsonList[accountIdsIndex].AsString(m_accountIds[accountIdsIndex]);
   }
   payload.WithArray("accountIds", std::move(accountIdsJsonList));

  }

  if(m_filtersHasBeenSet)
  {
   Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("filters", std::move(filtersJsonList));

  }

  if(m_fieldsToExportHasBeenSet)
  {
   Array<JsonValue> fieldsToExportJsonList(m_fieldsToExport.size());
   for(unsigned fieldsToExportIndex = 0; fieldsToExportIndex < fieldsToExportJsonList.GetLength(); ++fieldsToExportIndex)
   {
     fieldsToExportJsonList[fieldsToExportIndex].AsString(ExportableAutoScalingGroupFieldMapper::GetNameForExportableAutoScalingGroupField(m_fieldsToExport[fieldsToExportIndex]));
   }
   payload.WithArray("fieldsToExport", std::move(fieldsToExportJsonList));

  }

  if(m_s3DestinationConfigHasBeenSet)
  {
   payload.WithObject("s3DestinationConfig", m_s3DestinationConfig.Jsonize());

  }

  if(m_fileFormatHasBeenSet)
  {
   payload.WithString("fileFormat", FileFormatMapper::GetNameForFileFormat(m_fileFormat));
  }

  if(m_includeMemberAccountsHasBeenSet)
  {
   payload.WithBool("includeMemberAccounts", m_includeMemberAccounts);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ExportAutoScalingGroupRecommendationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ComputeOptimizerService.ExportAutoScalingGroupRecommendations"));
  return headers;

}




