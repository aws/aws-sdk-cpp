/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/CreateWhatIfForecastExportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateWhatIfForecastExportRequest::CreateWhatIfForecastExportRequest() : 
    m_whatIfForecastExportNameHasBeenSet(false),
    m_whatIfForecastArnsHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_formatHasBeenSet(false)
{
}

Aws::String CreateWhatIfForecastExportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_whatIfForecastExportNameHasBeenSet)
  {
   payload.WithString("WhatIfForecastExportName", m_whatIfForecastExportName);

  }

  if(m_whatIfForecastArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> whatIfForecastArnsJsonList(m_whatIfForecastArns.size());
   for(unsigned whatIfForecastArnsIndex = 0; whatIfForecastArnsIndex < whatIfForecastArnsJsonList.GetLength(); ++whatIfForecastArnsIndex)
   {
     whatIfForecastArnsJsonList[whatIfForecastArnsIndex].AsString(m_whatIfForecastArns[whatIfForecastArnsIndex]);
   }
   payload.WithArray("WhatIfForecastArns", std::move(whatIfForecastArnsJsonList));

  }

  if(m_destinationHasBeenSet)
  {
   payload.WithObject("Destination", m_destination.Jsonize());

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

Aws::Http::HeaderValueCollection CreateWhatIfForecastExportRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonForecast.CreateWhatIfForecastExport"));
  return headers;

}




