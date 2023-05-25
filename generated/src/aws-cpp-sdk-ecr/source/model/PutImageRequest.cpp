/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/PutImageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutImageRequest::PutImageRequest() : 
    m_registryIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_imageManifestHasBeenSet(false),
    m_imageManifestMediaTypeHasBeenSet(false),
    m_imageTagHasBeenSet(false),
    m_imageDigestHasBeenSet(false)
{
}

Aws::String PutImageRequest::SerializePayload() const
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

  if(m_imageManifestHasBeenSet)
  {
   payload.WithString("imageManifest", m_imageManifest);

  }

  if(m_imageManifestMediaTypeHasBeenSet)
  {
   payload.WithString("imageManifestMediaType", m_imageManifestMediaType);

  }

  if(m_imageTagHasBeenSet)
  {
   payload.WithString("imageTag", m_imageTag);

  }

  if(m_imageDigestHasBeenSet)
  {
   payload.WithString("imageDigest", m_imageDigest);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutImageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerRegistry_V20150921.PutImage"));
  return headers;

}




