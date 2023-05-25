/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/CreateDatasetGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDatasetGroupRequest::CreateDatasetGroupRequest() : 
    m_datasetGroupNameHasBeenSet(false),
    m_domain(Domain::NOT_SET),
    m_domainHasBeenSet(false),
    m_datasetArnsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateDatasetGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_datasetGroupNameHasBeenSet)
  {
   payload.WithString("DatasetGroupName", m_datasetGroupName);

  }

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", DomainMapper::GetNameForDomain(m_domain));
  }

  if(m_datasetArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> datasetArnsJsonList(m_datasetArns.size());
   for(unsigned datasetArnsIndex = 0; datasetArnsIndex < datasetArnsJsonList.GetLength(); ++datasetArnsIndex)
   {
     datasetArnsJsonList[datasetArnsIndex].AsString(m_datasetArns[datasetArnsIndex]);
   }
   payload.WithArray("DatasetArns", std::move(datasetArnsJsonList));

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

Aws::Http::HeaderValueCollection CreateDatasetGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonForecast.CreateDatasetGroup"));
  return headers;

}




