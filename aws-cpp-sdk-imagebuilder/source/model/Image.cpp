/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/Image.h>
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

Image::Image() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_platform(Platform::NOT_SET),
    m_platformHasBeenSet(false),
    m_enhancedImageMetadataEnabled(false),
    m_enhancedImageMetadataEnabledHasBeenSet(false),
    m_osVersionHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_imageRecipeHasBeenSet(false),
    m_sourcePipelineNameHasBeenSet(false),
    m_sourcePipelineArnHasBeenSet(false),
    m_infrastructureConfigurationHasBeenSet(false),
    m_distributionConfigurationHasBeenSet(false),
    m_imageTestsConfigurationHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_outputResourcesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Image::Image(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_platform(Platform::NOT_SET),
    m_platformHasBeenSet(false),
    m_enhancedImageMetadataEnabled(false),
    m_enhancedImageMetadataEnabledHasBeenSet(false),
    m_osVersionHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_imageRecipeHasBeenSet(false),
    m_sourcePipelineNameHasBeenSet(false),
    m_sourcePipelineArnHasBeenSet(false),
    m_infrastructureConfigurationHasBeenSet(false),
    m_distributionConfigurationHasBeenSet(false),
    m_imageTestsConfigurationHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_outputResourcesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

Image& Image::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("platform"))
  {
    m_platform = PlatformMapper::GetPlatformForName(jsonValue.GetString("platform"));

    m_platformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enhancedImageMetadataEnabled"))
  {
    m_enhancedImageMetadataEnabled = jsonValue.GetBool("enhancedImageMetadataEnabled");

    m_enhancedImageMetadataEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("osVersion"))
  {
    m_osVersion = jsonValue.GetString("osVersion");

    m_osVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = jsonValue.GetObject("state");

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageRecipe"))
  {
    m_imageRecipe = jsonValue.GetObject("imageRecipe");

    m_imageRecipeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourcePipelineName"))
  {
    m_sourcePipelineName = jsonValue.GetString("sourcePipelineName");

    m_sourcePipelineNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourcePipelineArn"))
  {
    m_sourcePipelineArn = jsonValue.GetString("sourcePipelineArn");

    m_sourcePipelineArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("infrastructureConfiguration"))
  {
    m_infrastructureConfiguration = jsonValue.GetObject("infrastructureConfiguration");

    m_infrastructureConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("distributionConfiguration"))
  {
    m_distributionConfiguration = jsonValue.GetObject("distributionConfiguration");

    m_distributionConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageTestsConfiguration"))
  {
    m_imageTestsConfiguration = jsonValue.GetObject("imageTestsConfiguration");

    m_imageTestsConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dateCreated"))
  {
    m_dateCreated = jsonValue.GetString("dateCreated");

    m_dateCreatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputResources"))
  {
    m_outputResources = jsonValue.GetObject("outputResources");

    m_outputResourcesHasBeenSet = true;
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

  return *this;
}

JsonValue Image::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_platformHasBeenSet)
  {
   payload.WithString("platform", PlatformMapper::GetNameForPlatform(m_platform));
  }

  if(m_enhancedImageMetadataEnabledHasBeenSet)
  {
   payload.WithBool("enhancedImageMetadataEnabled", m_enhancedImageMetadataEnabled);

  }

  if(m_osVersionHasBeenSet)
  {
   payload.WithString("osVersion", m_osVersion);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithObject("state", m_state.Jsonize());

  }

  if(m_imageRecipeHasBeenSet)
  {
   payload.WithObject("imageRecipe", m_imageRecipe.Jsonize());

  }

  if(m_sourcePipelineNameHasBeenSet)
  {
   payload.WithString("sourcePipelineName", m_sourcePipelineName);

  }

  if(m_sourcePipelineArnHasBeenSet)
  {
   payload.WithString("sourcePipelineArn", m_sourcePipelineArn);

  }

  if(m_infrastructureConfigurationHasBeenSet)
  {
   payload.WithObject("infrastructureConfiguration", m_infrastructureConfiguration.Jsonize());

  }

  if(m_distributionConfigurationHasBeenSet)
  {
   payload.WithObject("distributionConfiguration", m_distributionConfiguration.Jsonize());

  }

  if(m_imageTestsConfigurationHasBeenSet)
  {
   payload.WithObject("imageTestsConfiguration", m_imageTestsConfiguration.Jsonize());

  }

  if(m_dateCreatedHasBeenSet)
  {
   payload.WithString("dateCreated", m_dateCreated);

  }

  if(m_outputResourcesHasBeenSet)
  {
   payload.WithObject("outputResources", m_outputResources.Jsonize());

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

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
