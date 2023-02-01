/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ExportEBSVolumeRecommendationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ComputeOptimizer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ExportEBSVolumeRecommendationsRequest::ExportEBSVolumeRecommendationsRequest() : 
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

Aws::String ExportEBSVolumeRecommendationsRequest::SerializePayload() const
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
     fieldsToExportJsonList[fieldsToExportIndex].AsString(ExportableVolumeFieldMapper::GetNameForExportableVolumeField(m_fieldsToExport[fieldsToExportIndex]));
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

Aws::Http::HeaderValueCollection ExportEBSVolumeRecommendationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ComputeOptimizerService.ExportEBSVolumeRecommendations"));
  return headers;

}




