/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/UpdateRepositoryCreationTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateRepositoryCreationTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_prefixHasBeenSet)
  {
   payload.WithString("prefix", m_prefix);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_encryptionConfigurationHasBeenSet)
  {
   payload.WithObject("encryptionConfiguration", m_encryptionConfiguration.Jsonize());

  }

  if(m_resourceTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceTagsJsonList(m_resourceTags.size());
   for(unsigned resourceTagsIndex = 0; resourceTagsIndex < resourceTagsJsonList.GetLength(); ++resourceTagsIndex)
   {
     resourceTagsJsonList[resourceTagsIndex].AsObject(m_resourceTags[resourceTagsIndex].Jsonize());
   }
   payload.WithArray("resourceTags", std::move(resourceTagsJsonList));

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

  if(m_repositoryPolicyHasBeenSet)
  {
   payload.WithString("repositoryPolicy", m_repositoryPolicy);

  }

  if(m_lifecyclePolicyHasBeenSet)
  {
   payload.WithString("lifecyclePolicy", m_lifecyclePolicy);

  }

  if(m_appliedForHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> appliedForJsonList(m_appliedFor.size());
   for(unsigned appliedForIndex = 0; appliedForIndex < appliedForJsonList.GetLength(); ++appliedForIndex)
   {
     appliedForJsonList[appliedForIndex].AsString(RCTAppliedForMapper::GetNameForRCTAppliedFor(m_appliedFor[appliedForIndex]));
   }
   payload.WithArray("appliedFor", std::move(appliedForJsonList));

  }

  if(m_customRoleArnHasBeenSet)
  {
   payload.WithString("customRoleArn", m_customRoleArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateRepositoryCreationTemplateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerRegistry_V20150921.UpdateRepositoryCreationTemplate"));
  return headers;

}




