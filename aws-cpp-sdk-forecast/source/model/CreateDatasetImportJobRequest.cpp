/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/CreateDatasetImportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDatasetImportJobRequest::CreateDatasetImportJobRequest() : 
    m_datasetImportJobNameHasBeenSet(false),
    m_datasetArnHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_timestampFormatHasBeenSet(false),
    m_timeZoneHasBeenSet(false),
    m_useGeolocationForTimeZone(false),
    m_useGeolocationForTimeZoneHasBeenSet(false),
    m_geolocationFormatHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_formatHasBeenSet(false)
{
}

Aws::String CreateDatasetImportJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_datasetImportJobNameHasBeenSet)
  {
   payload.WithString("DatasetImportJobName", m_datasetImportJobName);

  }

  if(m_datasetArnHasBeenSet)
  {
   payload.WithString("DatasetArn", m_datasetArn);

  }

  if(m_dataSourceHasBeenSet)
  {
   payload.WithObject("DataSource", m_dataSource.Jsonize());

  }

  if(m_timestampFormatHasBeenSet)
  {
   payload.WithString("TimestampFormat", m_timestampFormat);

  }

  if(m_timeZoneHasBeenSet)
  {
   payload.WithString("TimeZone", m_timeZone);

  }

  if(m_useGeolocationForTimeZoneHasBeenSet)
  {
   payload.WithBool("UseGeolocationForTimeZone", m_useGeolocationForTimeZone);

  }

  if(m_geolocationFormatHasBeenSet)
  {
   payload.WithString("GeolocationFormat", m_geolocationFormat);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("Format", m_format);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDatasetImportJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonForecast.CreateDatasetImportJob"));
  return headers;

}




