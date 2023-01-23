/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/CreateImageRecipeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateImageRecipeRequest::CreateImageRecipeRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_semanticVersionHasBeenSet(false),
    m_componentsHasBeenSet(false),
    m_parentImageHasBeenSet(false),
    m_blockDeviceMappingsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_workingDirectoryHasBeenSet(false),
    m_additionalInstanceConfigurationHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String CreateImageRecipeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_semanticVersionHasBeenSet)
  {
   payload.WithString("semanticVersion", m_semanticVersion);

  }

  if(m_componentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> componentsJsonList(m_components.size());
   for(unsigned componentsIndex = 0; componentsIndex < componentsJsonList.GetLength(); ++componentsIndex)
   {
     componentsJsonList[componentsIndex].AsObject(m_components[componentsIndex].Jsonize());
   }
   payload.WithArray("components", std::move(componentsJsonList));

  }

  if(m_parentImageHasBeenSet)
  {
   payload.WithString("parentImage", m_parentImage);

  }

  if(m_blockDeviceMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> blockDeviceMappingsJsonList(m_blockDeviceMappings.size());
   for(unsigned blockDeviceMappingsIndex = 0; blockDeviceMappingsIndex < blockDeviceMappingsJsonList.GetLength(); ++blockDeviceMappingsIndex)
   {
     blockDeviceMappingsJsonList[blockDeviceMappingsIndex].AsObject(m_blockDeviceMappings[blockDeviceMappingsIndex].Jsonize());
   }
   payload.WithArray("blockDeviceMappings", std::move(blockDeviceMappingsJsonList));

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

  if(m_workingDirectoryHasBeenSet)
  {
   payload.WithString("workingDirectory", m_workingDirectory);

  }

  if(m_additionalInstanceConfigurationHasBeenSet)
  {
   payload.WithObject("additionalInstanceConfiguration", m_additionalInstanceConfiguration.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




