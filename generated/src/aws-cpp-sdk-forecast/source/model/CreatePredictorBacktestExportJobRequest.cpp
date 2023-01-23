/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/CreatePredictorBacktestExportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePredictorBacktestExportJobRequest::CreatePredictorBacktestExportJobRequest() : 
    m_predictorBacktestExportJobNameHasBeenSet(false),
    m_predictorArnHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_formatHasBeenSet(false)
{
}

Aws::String CreatePredictorBacktestExportJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_predictorBacktestExportJobNameHasBeenSet)
  {
   payload.WithString("PredictorBacktestExportJobName", m_predictorBacktestExportJobName);

  }

  if(m_predictorArnHasBeenSet)
  {
   payload.WithString("PredictorArn", m_predictorArn);

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

Aws::Http::HeaderValueCollection CreatePredictorBacktestExportJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonForecast.CreatePredictorBacktestExportJob"));
  return headers;

}




