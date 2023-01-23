/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ContainerRecipe.h>
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

ContainerRecipe::ContainerRecipe() : 
    m_arnHasBeenSet(false),
    m_containerType(ContainerType::NOT_SET),
    m_containerTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_platform(Platform::NOT_SET),
    m_platformHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_componentsHasBeenSet(false),
    m_instanceConfigurationHasBeenSet(false),
    m_dockerfileTemplateDataHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_parentImageHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_workingDirectoryHasBeenSet(false),
    m_targetRepositoryHasBeenSet(false)
{
}

ContainerRecipe::ContainerRecipe(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_containerType(ContainerType::NOT_SET),
    m_containerTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_platform(Platform::NOT_SET),
    m_platformHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_componentsHasBeenSet(false),
    m_instanceConfigurationHasBeenSet(false),
    m_dockerfileTemplateDataHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_parentImageHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_workingDirectoryHasBeenSet(false),
    m_targetRepositoryHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerRecipe& ContainerRecipe::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("containerType"))
  {
    m_containerType = ContainerTypeMapper::GetContainerTypeForName(jsonValue.GetString("containerType"));

    m_containerTypeHasBeenSet = true;
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

  if(jsonValue.ValueExists("instanceConfiguration"))
  {
    m_instanceConfiguration = jsonValue.GetObject("instanceConfiguration");

    m_instanceConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dockerfileTemplateData"))
  {
    m_dockerfileTemplateData = jsonValue.GetString("dockerfileTemplateData");

    m_dockerfileTemplateDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encrypted"))
  {
    m_encrypted = jsonValue.GetBool("encrypted");

    m_encryptedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parentImage"))
  {
    m_parentImage = jsonValue.GetString("parentImage");

    m_parentImageHasBeenSet = true;
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

  if(jsonValue.ValueExists("targetRepository"))
  {
    m_targetRepository = jsonValue.GetObject("targetRepository");

    m_targetRepositoryHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerRecipe::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_containerTypeHasBeenSet)
  {
   payload.WithString("containerType", ContainerTypeMapper::GetNameForContainerType(m_containerType));
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

  if(m_instanceConfigurationHasBeenSet)
  {
   payload.WithObject("instanceConfiguration", m_instanceConfiguration.Jsonize());

  }

  if(m_dockerfileTemplateDataHasBeenSet)
  {
   payload.WithString("dockerfileTemplateData", m_dockerfileTemplateData);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  if(m_encryptedHasBeenSet)
  {
   payload.WithBool("encrypted", m_encrypted);

  }

  if(m_parentImageHasBeenSet)
  {
   payload.WithString("parentImage", m_parentImage);

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

  if(m_targetRepositoryHasBeenSet)
  {
   payload.WithObject("targetRepository", m_targetRepository.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
