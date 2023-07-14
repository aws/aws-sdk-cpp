/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/DescribeImageReplicationStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeImageReplicationStatusRequest::DescribeImageReplicationStatusRequest() : 
    m_repositoryNameHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_registryIdHasBeenSet(false)
{
}

Aws::String DescribeImageReplicationStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_imageIdHasBeenSet)
  {
   payload.WithObject("imageId", m_imageId.Jsonize());

  }

  if(m_registryIdHasBeenSet)
  {
   payload.WithString("registryId", m_registryId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeImageReplicationStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerRegistry_V20150921.DescribeImageReplicationStatus"));
  return headers;

}




