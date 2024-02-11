/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/ImportDatasetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ImportDatasetRequest::ImportDatasetRequest() : 
    m_sourceDatasetArnHasBeenSet(false),
    m_datasetNameHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_serverSideKmsKeyIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String ImportDatasetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceDatasetArnHasBeenSet)
  {
   payload.WithString("SourceDatasetArn", m_sourceDatasetArn);

  }

  if(m_datasetNameHasBeenSet)
  {
   payload.WithString("DatasetName", m_datasetName);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_serverSideKmsKeyIdHasBeenSet)
  {
   payload.WithString("ServerSideKmsKeyId", m_serverSideKmsKeyId);

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

Aws::Http::HeaderValueCollection ImportDatasetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLookoutEquipmentFrontendService.ImportDataset"));
  return headers;

}




