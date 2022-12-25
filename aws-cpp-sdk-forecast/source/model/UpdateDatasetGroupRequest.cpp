/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/UpdateDatasetGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDatasetGroupRequest::UpdateDatasetGroupRequest() : 
    m_datasetGroupArnHasBeenSet(false),
    m_datasetArnsHasBeenSet(false)
{
}

Aws::String UpdateDatasetGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_datasetGroupArnHasBeenSet)
  {
   payload.WithString("DatasetGroupArn", m_datasetGroupArn);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDatasetGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonForecast.UpdateDatasetGroup"));
  return headers;

}




