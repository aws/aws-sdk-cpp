/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ImageRecipe.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

ImageRecipe::ImageRecipe() : 
    m_arnHasBeenSet(false),
    m_type(ImageType::NOT_SET),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_platform(Platform::NOT_SET),
    m_platformHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_componentsHasBeenSet(false),
    m_parentImageHasBeenSet(false),
    m_blockDeviceMappingsHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_workingDirectoryHasBeenSet(false),
    m_additionalInstanceConfigurationHasBeenSet(false)
{
}

ImageRecipe::ImageRecipe(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_type(ImageType::NOT_SET),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_platform(Platform::NOT_SET),
    m_platformHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_componentsHasBeenSet(false),
    m_parentImageHasBeenSet(false),
    m_blockDeviceMappingsHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_workingDirectoryHasBeenSet(false),
    m_additionalInstanceConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ImageRecipe& ImageRecipe::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = ImageTypeMapper::GetImageTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("platform"))
  {
    m_platform = PlatformMapper::GetPlatformForName(jsonValue.GetString("platform"));

    m_platformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("owner"))
  {
    m_owner = jsonValue.GetString("owner");

    m_ownerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("components"))
  {
    Aws::Utils::Array<JsonView> componentsJsonList = jsonValue.GetArray("components");
    for(unsigned componentsIndex = 0; componentsIndex < componentsJsonList.GetLength(); ++componentsIndex)
    {
      m_components.push_back(componentsJsonList[componentsIndex].AsObject());
    }
    m_componentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parentImage"))
  {
    m_parentImage = jsonValue.GetString("parentImage");

    m_parentImageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("blockDeviceMappings"))
  {
    Aws::Utils::Array<JsonView> blockDeviceMappingsJsonList = jsonValue.GetArray("blockDeviceMappings");
    for(unsigned blockDeviceMappingsIndex = 0; blockDeviceMappingsIndex < blockDeviceMappingsJsonList.GetLength(); ++blockDeviceMappingsIndex)
    {
      m_blockDeviceMappings.push_back(blockDeviceMappingsJsonList[blockDeviceMappingsIndex].AsObject());
    }
    m_blockDeviceMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dateCreated"))
  {
    m_dateCreated = jsonValue.GetString("dateCreated");

    m_dateCreatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workingDirectory"))
  {
    m_workingDirectory = jsonValue.GetString("workingDirectory");

    m_workingDirectoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("additionalInstanceConfiguration"))
  {
    m_additionalInstanceConfiguration = jsonValue.GetObject("additionalInstanceConfiguration");

    m_additionalInstanceConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ImageRecipe::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ImageTypeMapper::GetNameForImageType(m_type));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_platformHasBeenSet)
  {
   payload.WithString("platform", PlatformMapper::GetNameForPlatform(m_platform));
  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("owner", m_owner);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

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

  if(m_dateCreatedHasBeenSet)
  {
   payload.WithString("dateCreated", m_dateCreated);

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

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
