/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/DeleteDatasetImportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteDatasetImportJobRequest::DeleteDatasetImportJobRequest() : 
    m_datasetImportJobArnHasBeenSet(false)
{
}

Aws::String DeleteDatasetImportJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_datasetImportJobArnHasBeenSet)
  {
   payload.WithString("DatasetImportJobArn", m_datasetImportJobArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteDatasetImportJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonForecast.DeleteDatasetImportJob"));
  return headers;

}




