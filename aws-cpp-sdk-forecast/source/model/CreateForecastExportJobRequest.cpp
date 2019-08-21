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

#include <aws/forecast/model/CreateForecastExportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateForecastExportJobRequest::CreateForecastExportJobRequest() : 
    m_forecastExportJobNameHasBeenSet(false),
    m_forecastArnHasBeenSet(false),
    m_destinationHasBeenSet(false)
{
}

Aws::String CreateForecastExportJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_forecastExportJobNameHasBeenSet)
  {
   payload.WithString("ForecastExportJobName", m_forecastExportJobName);

  }

  if(m_forecastArnHasBeenSet)
  {
   payload.WithString("ForecastArn", m_forecastArn);

  }

  if(m_destinationHasBeenSet)
  {
   payload.WithObject("Destination", m_destination.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateForecastExportJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonForecast.CreateForecastExportJob"));
  return headers;

}




