/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/StartExportTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationDiscoveryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartExportTaskRequest::StartExportTaskRequest() : 
    m_exportDataFormatHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

Aws::String StartExportTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_exportDataFormatHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> exportDataFormatJsonList(m_exportDataFormat.size());
   for(unsigned exportDataFormatIndex = 0; exportDataFormatIndex < exportDataFormatJsonList.GetLength(); ++exportDataFormatIndex)
   {
     exportDataFormatJsonList[exportDataFormatIndex].AsString(ExportDataFormatMapper::GetNameForExportDataFormat(m_exportDataFormat[exportDataFormatIndex]));
   }
   payload.WithArray("exportDataFormat", std::move(exportDataFormatJsonList));

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

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartExportTaskRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPoseidonService_V2015_11_01.StartExportTask"));
  return headers;

}




