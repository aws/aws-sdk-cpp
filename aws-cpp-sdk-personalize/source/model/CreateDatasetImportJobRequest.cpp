/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/CreateDatasetImportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDatasetImportJobRequest::CreateDatasetImportJobRequest() : 
    m_jobNameHasBeenSet(false),
    m_datasetArnHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_importMode(ImportMode::NOT_SET),
    m_importModeHasBeenSet(false),
    m_publishAttributionMetricsToS3(false),
    m_publishAttributionMetricsToS3HasBeenSet(false)
{
}

Aws::String CreateDatasetImportJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("jobName", m_jobName);

  }

  if(m_datasetArnHasBeenSet)
  {
   payload.WithString("datasetArn", m_datasetArn);

  }

  if(m_dataSourceHasBeenSet)
  {
   payload.WithObject("dataSource", m_dataSource.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

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

  if(m_importModeHasBeenSet)
  {
   payload.WithString("importMode", ImportModeMapper::GetNameForImportMode(m_importMode));
  }

  if(m_publishAttributionMetricsToS3HasBeenSet)
  {
   payload.WithBool("publishAttributionMetricsToS3", m_publishAttributionMetricsToS3);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDatasetImportJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonPersonalize.CreateDatasetImportJob"));
  return headers;

}




