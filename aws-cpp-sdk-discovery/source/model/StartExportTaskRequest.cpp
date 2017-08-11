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
   Array<JsonValue> exportDataFormatJsonList(m_exportDataFormat.size());
   for(unsigned exportDataFormatIndex = 0; exportDataFormatIndex < exportDataFormatJsonList.GetLength(); ++exportDataFormatIndex)
   {
     exportDataFormatJsonList[exportDataFormatIndex].AsString(ExportDataFormatMapper::GetNameForExportDataFormat(m_exportDataFormat[exportDataFormatIndex]));
   }
   payload.WithArray("exportDataFormat", std::move(exportDataFormatJsonList));

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

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection StartExportTaskRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPoseidonService_V2015_11_01.StartExportTask"));
  return headers;

}




