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
    m_timestampFormatHasBeenSet(false)
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDatasetImportJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonForecast.CreateDatasetImportJob"));
  return headers;

}




