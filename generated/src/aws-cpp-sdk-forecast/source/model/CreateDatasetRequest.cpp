/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/CreateDatasetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDatasetRequest::CreateDatasetRequest() : 
    m_datasetNameHasBeenSet(false),
    m_domain(Domain::NOT_SET),
    m_domainHasBeenSet(false),
    m_datasetType(DatasetType::NOT_SET),
    m_datasetTypeHasBeenSet(false),
    m_dataFrequencyHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_encryptionConfigHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateDatasetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_datasetNameHasBeenSet)
  {
   payload.WithString("DatasetName", m_datasetName);

  }

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", DomainMapper::GetNameForDomain(m_domain));
  }

  if(m_datasetTypeHasBeenSet)
  {
   payload.WithString("DatasetType", DatasetTypeMapper::GetNameForDatasetType(m_datasetType));
  }

  if(m_dataFrequencyHasBeenSet)
  {
   payload.WithString("DataFrequency", m_dataFrequency);

  }

  if(m_schemaHasBeenSet)
  {
   payload.WithObject("Schema", m_schema.Jsonize());

  }

  if(m_encryptionConfigHasBeenSet)
  {
   payload.WithObject("EncryptionConfig", m_encryptionConfig.Jsonize());

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

Aws::Http::HeaderValueCollection CreateDatasetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonForecast.CreateDataset"));
  return headers;

}




