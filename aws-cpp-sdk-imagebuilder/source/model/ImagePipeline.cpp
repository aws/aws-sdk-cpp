/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ImagePipeline.h>
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

ImagePipeline::ImagePipeline() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_platform(Platform::NOT_SET),
    m_platformHasBeenSet(false),
    m_enhancedImageMetadataEnabled(false),
    m_enhancedImageMetadataEnabledHasBeenSet(false),
    m_imageRecipeArnHasBeenSet(false),
    m_infrastructureConfigurationArnHasBeenSet(false),
    m_distributionConfigurationArnHasBeenSet(false),
    m_imageTestsConfigurationHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_status(PipelineStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_dateUpdatedHasBeenSet(false),
    m_dateLastRunHasBeenSet(false),
    m_dateNextRunHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

ImagePipeline::ImagePipeline(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_platform(Platform::NOT_SET),
    m_platformHasBeenSet(false),
    m_enhancedImageMetadataEnabled(false),
    m_enhancedImageMetadataEnabledHasBeenSet(false),
    m_imageRecipeArnHasBeenSet(false),
    m_infrastructureConfigurationArnHasBeenSet(false),
    m_distributionConfigurationArnHasBeenSet(false),
    m_imageTestsConfigurationHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_status(PipelineStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_dateUpdatedHasBeenSet(false),
    m_dateLastRunHasBeenSet(false),
    m_dateNextRunHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

ImagePipeline& ImagePipeline::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("enhancedImageMetadataEnabled"))
  {
    m_enhancedImageMetadataEnabled = jsonValue.GetBool("enhancedImageMetadataEnabled");

    m_enhancedImageMetadataEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageRecipeArn"))
  {
    m_imageRecipeArn = jsonValue.GetString("imageRecipeArn");

    m_imageRecipeArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("infrastructureConfigurationArn"))
  {
    m_infrastructureConfigurationArn = jsonValue.GetString("infrastructureConfigurationArn");

    m_infrastructureConfigurationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("distributionConfigurationArn"))
  {
    m_distributionConfigurationArn = jsonValue.GetString("distributionConfigurationArn");

    m_distributionConfigurationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageTestsConfiguration"))
  {
    m_imageTestsConfiguration = jsonValue.GetObject("imageTestsConfiguration");

    m_imageTestsConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("schedule"))
  {
    m_schedule = jsonValue.GetObject("schedule");

    m_scheduleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = PipelineStatusMapper::GetPipelineStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dateCreated"))
  {
    m_dateCreated = jsonValue.GetString("dateCreated");

    m_dateCreatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dateUpdated"))
  {
    m_dateUpdated = jsonValue.GetString("dateUpdated");

    m_dateUpdatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dateLastRun"))
  {
    m_dateLastRun = jsonValue.GetString("dateLastRun");

    m_dateLastRunHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dateNextRun"))
  {
    m_dateNextRun = jsonValue.GetString("dateNextRun");

    m_dateNextRunHasBeenSet = true;
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

JsonValue ImagePipeline::Jsonize() const
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

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_platformHasBeenSet)
  {
   payload.WithString("platform", PlatformMapper::GetNameForPlatform(m_platform));
  }

  if(m_enhancedImageMetadataEnabledHasBeenSet)
  {
   payload.WithBool("enhancedImageMetadataEnabled", m_enhancedImageMetadataEnabled);

  }

  if(m_imageRecipeArnHasBeenSet)
  {
   payload.WithString("imageRecipeArn", m_imageRecipeArn);

  }

  if(m_infrastructureConfigurationArnHasBeenSet)
  {
   payload.WithString("infrastructureConfigurationArn", m_infrastructureConfigurationArn);

  }

  if(m_distributionConfigurationArnHasBeenSet)
  {
   payload.WithString("distributionConfigurationArn", m_distributionConfigurationArn);

  }

  if(m_imageTestsConfigurationHasBeenSet)
  {
   payload.WithObject("imageTestsConfiguration", m_imageTestsConfiguration.Jsonize());

  }

  if(m_scheduleHasBeenSet)
  {
   payload.WithObject("schedule", m_schedule.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", PipelineStatusMapper::GetNameForPipelineStatus(m_status));
  }

  if(m_dateCreatedHasBeenSet)
  {
   payload.WithString("dateCreated", m_dateCreated);

  }

  if(m_dateUpdatedHasBeenSet)
  {
   payload.WithString("dateUpdated", m_dateUpdated);

  }

  if(m_dateLastRunHasBeenSet)
  {
   payload.WithString("dateLastRun", m_dateLastRun);

  }

  if(m_dateNextRunHasBeenSet)
  {
   payload.WithString("dateNextRun", m_dateNextRun);

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
