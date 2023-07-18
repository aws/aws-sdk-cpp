/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/CreateDatasetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDatasetRequest::CreateDatasetRequest() : 
    m_datasetSourceHasBeenSet(false),
    m_datasetType(DatasetType::NOT_SET),
    m_datasetTypeHasBeenSet(false),
    m_projectArnHasBeenSet(false)
{
}

Aws::String CreateDatasetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_datasetSourceHasBeenSet)
  {
   payload.WithObject("DatasetSource", m_datasetSource.Jsonize());

  }

  if(m_datasetTypeHasBeenSet)
  {
   payload.WithString("DatasetType", DatasetTypeMapper::GetNameForDatasetType(m_datasetType));
  }

  if(m_projectArnHasBeenSet)
  {
   payload.WithString("ProjectArn", m_projectArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDatasetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.CreateDataset"));
  return headers;

}




