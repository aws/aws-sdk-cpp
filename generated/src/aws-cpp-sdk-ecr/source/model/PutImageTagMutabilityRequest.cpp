/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/PutImageTagMutabilityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutImageTagMutabilityRequest::SerializePayload() const
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

  if(m_imageTagMutabilityHasBeenSet)
  {
   payload.WithString("imageTagMutability", ImageTagMutabilityMapper::GetNameForImageTagMutability(m_imageTagMutability));
  }

  if(m_imageTagMutabilityExclusionFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> imageTagMutabilityExclusionFiltersJsonList(m_imageTagMutabilityExclusionFilters.size());
   for(unsigned imageTagMutabilityExclusionFiltersIndex = 0; imageTagMutabilityExclusionFiltersIndex < imageTagMutabilityExclusionFiltersJsonList.GetLength(); ++imageTagMutabilityExclusionFiltersIndex)
   {
     imageTagMutabilityExclusionFiltersJsonList[imageTagMutabilityExclusionFiltersIndex].AsObject(m_imageTagMutabilityExclusionFilters[imageTagMutabilityExclusionFiltersIndex].Jsonize());
   }
   payload.WithArray("imageTagMutabilityExclusionFilters", std::move(imageTagMutabilityExclusionFiltersJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutImageTagMutabilityRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerRegistry_V20150921.PutImageTagMutability"));
  return headers;

}




