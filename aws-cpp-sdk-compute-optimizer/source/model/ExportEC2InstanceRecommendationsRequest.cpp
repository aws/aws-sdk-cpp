/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ExportEC2InstanceRecommendationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ComputeOptimizer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ExportEC2InstanceRecommendationsRequest::ExportEC2InstanceRecommendationsRequest() : 
    m_accountIdsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_fieldsToExportHasBeenSet(false),
    m_s3DestinationConfigHasBeenSet(false),
    m_fileFormat(FileFormat::NOT_SET),
    m_fileFormatHasBeenSet(false),
    m_includeMemberAccounts(false),
    m_includeMemberAccountsHasBeenSet(false),
    m_recommendationPreferencesHasBeenSet(false)
{
}

Aws::String ExportEC2InstanceRecommendationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountIdsJsonList(m_accountIds.size());
   for(unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex)
   {
     accountIdsJsonList[accountIdsIndex].AsString(m_accountIds[accountIdsIndex]);
   }
   payload.WithArray("accountIds", std::move(accountIdsJsonList));

  }

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("filters", std::move(filtersJsonList));

  }

  if(m_fieldsToExportHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fieldsToExportJsonList(m_fieldsToExport.size());
   for(unsigned fieldsToExportIndex = 0; fieldsToExportIndex < fieldsToExportJsonList.GetLength(); ++fieldsToExportIndex)
   {
     fieldsToExportJsonList[fieldsToExportIndex].AsString(ExportableInstanceFieldMapper::GetNameForExportableInstanceField(m_fieldsToExport[fieldsToExportIndex]));
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

  if(m_recommendationPreferencesHasBeenSet)
  {
   payload.WithObject("recommendationPreferences", m_recommendationPreferences.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ExportEC2InstanceRecommendationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ComputeOptimizerService.ExportEC2InstanceRecommendations"));
  return headers;

}




