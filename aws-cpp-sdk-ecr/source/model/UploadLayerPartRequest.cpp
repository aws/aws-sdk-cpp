/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ecr/model/UploadLayerPartRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UploadLayerPartRequest::UploadLayerPartRequest() : 
    m_registryIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_uploadIdHasBeenSet(false),
    m_partFirstByte(0),
    m_partFirstByteHasBeenSet(false),
    m_partLastByte(0),
    m_partLastByteHasBeenSet(false),
    m_layerPartBlobHasBeenSet(false)
{
}

Aws::String UploadLayerPartRequest::SerializePayload() const
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

  if(m_partFirstByteHasBeenSet)
  {
   payload.WithInt64("partFirstByte", m_partFirstByte);

  }

  if(m_partLastByteHasBeenSet)
  {
   payload.WithInt64("partLastByte", m_partLastByte);

  }

  if(m_layerPartBlobHasBeenSet)
  {
   payload.WithString("layerPartBlob", HashingUtils::Base64Encode(m_layerPartBlob));
  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection UploadLayerPartRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerRegistry_V20150921.UploadLayerPart"));
  return headers;

}



