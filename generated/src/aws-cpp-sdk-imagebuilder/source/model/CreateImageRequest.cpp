/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/CreateImageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateImageRequest::CreateImageRequest() : 
    m_imageRecipeArnHasBeenSet(false),
    m_containerRecipeArnHasBeenSet(false),
    m_distributionConfigurationArnHasBeenSet(false),
    m_infrastructureConfigurationArnHasBeenSet(false),
    m_imageTestsConfigurationHasBeenSet(false),
    m_enhancedImageMetadataEnabled(false),
    m_enhancedImageMetadataEnabledHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_imageScanningConfigurationHasBeenSet(false),
    m_workflowsHasBeenSet(false),
    m_executionRoleHasBeenSet(false)
{
}

Aws::String CreateImageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_imageRecipeArnHasBeenSet)
  {
   payload.WithString("imageRecipeArn", m_imageRecipeArn);

  }

  if(m_containerRecipeArnHasBeenSet)
  {
   payload.WithString("containerRecipeArn", m_containerRecipeArn);

  }

  if(m_distributionConfigurationArnHasBeenSet)
  {
   payload.WithString("distributionConfigurationArn", m_distributionConfigurationArn);

  }

  if(m_infrastructureConfigurationArnHasBeenSet)
  {
   payload.WithString("infrastructureConfigurationArn", m_infrastructureConfigurationArn);

  }

  if(m_imageTestsConfigurationHasBeenSet)
  {
   payload.WithObject("imageTestsConfiguration", m_imageTestsConfiguration.Jsonize());

  }

  if(m_enhancedImageMetadataEnabledHasBeenSet)
  {
   payload.WithBool("enhancedImageMetadataEnabled", m_enhancedImageMetadataEnabled);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_imageScanningConfigurationHasBeenSet)
  {
   payload.WithObject("imageScanningConfiguration", m_imageScanningConfiguration.Jsonize());

  }

  if(m_workflowsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> workflowsJsonList(m_workflows.size());
   for(unsigned workflowsIndex = 0; workflowsIndex < workflowsJsonList.GetLength(); ++workflowsIndex)
   {
     workflowsJsonList[workflowsIndex].AsObject(m_workflows[workflowsIndex].Jsonize());
   }
   payload.WithArray("workflows", std::move(workflowsJsonList));

  }

  if(m_executionRoleHasBeenSet)
  {
   payload.WithString("executionRole", m_executionRole);

  }

  return payload.View().WriteReadable();
}




