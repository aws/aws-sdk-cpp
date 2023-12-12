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
    m_type(ImageType::NOT_SET),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_platform(Platform::NOT_SET),
    m_platformHasBeenSet(false),
    m_enhancedImageMetadataEnabled(false),
    m_enhancedImageMetadataEnabledHasBeenSet(false),
    m_osVersionHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_imageRecipeHasBeenSet(false),
    m_containerRecipeHasBeenSet(false),
    m_sourcePipelineNameHasBeenSet(false),
    m_sourcePipelineArnHasBeenSet(false),
    m_infrastructureConfigurationHasBeenSet(false),
    m_distributionConfigurationHasBeenSet(false),
    m_imageTestsConfigurationHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_outputResourcesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_buildType(BuildType::NOT_SET),
    m_buildTypeHasBeenSet(false),
    m_imageSource(ImageSource::NOT_SET),
    m_imageSourceHasBeenSet(false),
    m_scanStateHasBeenSet(false),
    m_imageScanningConfigurationHasBeenSet(false),
    m_deprecationTimeHasBeenSet(false),
    m_lifecycleExecutionIdHasBeenSet(false),
    m_executionRoleHasBeenSet(false),
    m_workflowsHasBeenSet(false)
{
}

Image::Image(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_type(ImageType::NOT_SET),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_platform(Platform::NOT_SET),
    m_platformHasBeenSet(false),
    m_enhancedImageMetadataEnabled(false),
    m_enhancedImageMetadataEnabledHasBeenSet(false),
    m_osVersionHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_imageRecipeHasBeenSet(false),
    m_containerRecipeHasBeenSet(false),
    m_sourcePipelineNameHasBeenSet(false),
    m_sourcePipelineArnHasBeenSet(false),
    m_infrastructureConfigurationHasBeenSet(false),
    m_distributionConfigurationHasBeenSet(false),
    m_imageTestsConfigurationHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_outputResourcesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_buildType(BuildType::NOT_SET),
    m_buildTypeHasBeenSet(false),
    m_imageSource(ImageSource::NOT_SET),
    m_imageSourceHasBeenSet(false),
    m_scanStateHasBeenSet(false),
    m_imageScanningConfigurationHasBeenSet(false),
    m_deprecationTimeHasBeenSet(false),
    m_lifecycleExecutionIdHasBeenSet(false),
    m_executionRoleHasBeenSet(false),
    m_workflowsHasBeenSet(false)
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

  if(jsonValue.ValueExists("containerRecipe"))
  {
    m_containerRecipe = jsonValue.GetObject("containerRecipe");

    m_containerRecipeHasBeenSet = true;
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

  if(jsonValue.ValueExists("buildType"))
  {
    m_buildType = BuildTypeMapper::GetBuildTypeForName(jsonValue.GetString("buildType"));

    m_buildTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageSource"))
  {
    m_imageSource = ImageSourceMapper::GetImageSourceForName(jsonValue.GetString("imageSource"));

    m_imageSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanState"))
  {
    m_scanState = jsonValue.GetObject("scanState");

    m_scanStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageScanningConfiguration"))
  {
    m_imageScanningConfiguration = jsonValue.GetObject("imageScanningConfiguration");

    m_imageScanningConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deprecationTime"))
  {
    m_deprecationTime = jsonValue.GetDouble("deprecationTime");

    m_deprecationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lifecycleExecutionId"))
  {
    m_lifecycleExecutionId = jsonValue.GetString("lifecycleExecutionId");

    m_lifecycleExecutionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionRole"))
  {
    m_executionRole = jsonValue.GetString("executionRole");

    m_executionRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workflows"))
  {
    Aws::Utils::Array<JsonView> workflowsJsonList = jsonValue.GetArray("workflows");
    for(unsigned workflowsIndex = 0; workflowsIndex < workflowsJsonList.GetLength(); ++workflowsIndex)
    {
      m_workflows.push_back(workflowsJsonList[workflowsIndex].AsObject());
    }
    m_workflowsHasBeenSet = true;
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

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ImageTypeMapper::GetNameForImageType(m_type));
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

  if(m_containerRecipeHasBeenSet)
  {
   payload.WithObject("containerRecipe", m_containerRecipe.Jsonize());

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

  if(m_buildTypeHasBeenSet)
  {
   payload.WithString("buildType", BuildTypeMapper::GetNameForBuildType(m_buildType));
  }

  if(m_imageSourceHasBeenSet)
  {
   payload.WithString("imageSource", ImageSourceMapper::GetNameForImageSource(m_imageSource));
  }

  if(m_scanStateHasBeenSet)
  {
   payload.WithObject("scanState", m_scanState.Jsonize());

  }

  if(m_imageScanningConfigurationHasBeenSet)
  {
   payload.WithObject("imageScanningConfiguration", m_imageScanningConfiguration.Jsonize());

  }

  if(m_deprecationTimeHasBeenSet)
  {
   payload.WithDouble("deprecationTime", m_deprecationTime.SecondsWithMSPrecision());
  }

  if(m_lifecycleExecutionIdHasBeenSet)
  {
   payload.WithString("lifecycleExecutionId", m_lifecycleExecutionId);

  }

  if(m_executionRoleHasBeenSet)
  {
   payload.WithString("executionRole", m_executionRole);

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

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
