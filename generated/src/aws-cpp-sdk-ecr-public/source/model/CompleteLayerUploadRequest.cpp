/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr-public/model/CompleteLayerUploadRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECRPublic::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CompleteLayerUploadRequest::CompleteLayerUploadRequest() : 
    m_registryIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_uploadIdHasBeenSet(false),
    m_layerDigestsHasBeenSet(false)
{
}

Aws::String CompleteLayerUploadRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_registryIdHasBeenSet)
  {
   payload.WithString("registryId", m_registryId);

  }

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_uploadIdHasBeenSet)
  {
   payload.WithString("uploadId", m_uploadId);

  }

  if(m_layerDigestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> layerDigestsJsonList(m_layerDigests.size());
   for(unsigned layerDigestsIndex = 0; layerDigestsIndex < layerDigestsJsonList.GetLength(); ++layerDigestsIndex)
   {
     layerDigestsJsonList[layerDigestsIndex].AsString(m_layerDigests[layerDigestsIndex]);
   }
   payload.WithArray("layerDigests", std::move(layerDigestsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CompleteLayerUploadRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SpencerFrontendService.CompleteLayerUpload"));
  return headers;

}




