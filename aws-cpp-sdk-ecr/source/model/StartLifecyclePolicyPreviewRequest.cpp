/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/StartLifecyclePolicyPreviewRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartLifecyclePolicyPreviewRequest::StartLifecyclePolicyPreviewRequest() : 
    m_registryIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_lifecyclePolicyTextHasBeenSet(false)
{
}

Aws::String StartLifecyclePolicyPreviewRequest::SerializePayload() const
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

  if(m_lifecyclePolicyTextHasBeenSet)
  {
   payload.WithString("lifecyclePolicyText", m_lifecyclePolicyText);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartLifecyclePolicyPreviewRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerRegistry_V20150921.StartLifecyclePolicyPreview"));
  return headers;

}




