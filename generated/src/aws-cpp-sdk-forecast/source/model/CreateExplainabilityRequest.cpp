/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/CreateExplainabilityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateExplainabilityRequest::CreateExplainabilityRequest() : 
    m_explainabilityNameHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_explainabilityConfigHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_enableVisualization(false),
    m_enableVisualizationHasBeenSet(false),
    m_startDateTimeHasBeenSet(false),
    m_endDateTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateExplainabilityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_explainabilityNameHasBeenSet)
  {
   payload.WithString("ExplainabilityName", m_explainabilityName);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_explainabilityConfigHasBeenSet)
  {
   payload.WithObject("ExplainabilityConfig", m_explainabilityConfig.Jsonize());

  }

  if(m_dataSourceHasBeenSet)
  {
   payload.WithObject("DataSource", m_dataSource.Jsonize());

  }

  if(m_schemaHasBeenSet)
  {
   payload.WithObject("Schema", m_schema.Jsonize());

  }

  if(m_enableVisualizationHasBeenSet)
  {
   payload.WithBool("EnableVisualization", m_enableVisualization);

  }

  if(m_startDateTimeHasBeenSet)
  {
   payload.WithString("StartDateTime", m_startDateTime);

  }

  if(m_endDateTimeHasBeenSet)
  {
   payload.WithString("EndDateTime", m_endDateTime);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateExplainabilityRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonForecast.CreateExplainability"));
  return headers;

}




