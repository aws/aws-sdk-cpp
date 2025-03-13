/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/CreateStateTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateStateTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_signalCatalogArnHasBeenSet)
  {
   payload.WithString("signalCatalogArn", m_signalCatalogArn);

  }

  if(m_stateTemplatePropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stateTemplatePropertiesJsonList(m_stateTemplateProperties.size());
   for(unsigned stateTemplatePropertiesIndex = 0; stateTemplatePropertiesIndex < stateTemplatePropertiesJsonList.GetLength(); ++stateTemplatePropertiesIndex)
   {
     stateTemplatePropertiesJsonList[stateTemplatePropertiesIndex].AsString(m_stateTemplateProperties[stateTemplatePropertiesIndex]);
   }
   payload.WithArray("stateTemplateProperties", std::move(stateTemplatePropertiesJsonList));

  }

  if(m_dataExtraDimensionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataExtraDimensionsJsonList(m_dataExtraDimensions.size());
   for(unsigned dataExtraDimensionsIndex = 0; dataExtraDimensionsIndex < dataExtraDimensionsJsonList.GetLength(); ++dataExtraDimensionsIndex)
   {
     dataExtraDimensionsJsonList[dataExtraDimensionsIndex].AsString(m_dataExtraDimensions[dataExtraDimensionsIndex]);
   }
   payload.WithArray("dataExtraDimensions", std::move(dataExtraDimensionsJsonList));

  }

  if(m_metadataExtraDimensionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metadataExtraDimensionsJsonList(m_metadataExtraDimensions.size());
   for(unsigned metadataExtraDimensionsIndex = 0; metadataExtraDimensionsIndex < metadataExtraDimensionsJsonList.GetLength(); ++metadataExtraDimensionsIndex)
   {
     metadataExtraDimensionsJsonList[metadataExtraDimensionsIndex].AsString(m_metadataExtraDimensions[metadataExtraDimensionsIndex]);
   }
   payload.WithArray("metadataExtraDimensions", std::move(metadataExtraDimensionsJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateStateTemplateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IoTAutobahnControlPlane.CreateStateTemplate"));
  return headers;

}




