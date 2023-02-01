/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/ImageGenerationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

ImageGenerationConfiguration::ImageGenerationConfiguration() : 
    m_status(ConfigurationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_imageSelectorType(ImageSelectorType::NOT_SET),
    m_imageSelectorTypeHasBeenSet(false),
    m_destinationConfigHasBeenSet(false),
    m_samplingInterval(0),
    m_samplingIntervalHasBeenSet(false),
    m_format(Format::NOT_SET),
    m_formatHasBeenSet(false),
    m_formatConfigHasBeenSet(false),
    m_widthPixels(0),
    m_widthPixelsHasBeenSet(false),
    m_heightPixels(0),
    m_heightPixelsHasBeenSet(false)
{
}

ImageGenerationConfiguration::ImageGenerationConfiguration(JsonView jsonValue) : 
    m_status(ConfigurationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_imageSelectorType(ImageSelectorType::NOT_SET),
    m_imageSelectorTypeHasBeenSet(false),
    m_destinationConfigHasBeenSet(false),
    m_samplingInterval(0),
    m_samplingIntervalHasBeenSet(false),
    m_format(Format::NOT_SET),
    m_formatHasBeenSet(false),
    m_formatConfigHasBeenSet(false),
    m_widthPixels(0),
    m_widthPixelsHasBeenSet(false),
    m_heightPixels(0),
    m_heightPixelsHasBeenSet(false)
{
  *this = jsonValue;
}

ImageGenerationConfiguration& ImageGenerationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ConfigurationStatusMapper::GetConfigurationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageSelectorType"))
  {
    m_imageSelectorType = ImageSelectorTypeMapper::GetImageSelectorTypeForName(jsonValue.GetString("ImageSelectorType"));

    m_imageSelectorTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationConfig"))
  {
    m_destinationConfig = jsonValue.GetObject("DestinationConfig");

    m_destinationConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SamplingInterval"))
  {
    m_samplingInterval = jsonValue.GetInteger("SamplingInterval");

    m_samplingIntervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Format"))
  {
    m_format = FormatMapper::GetFormatForName(jsonValue.GetString("Format"));

    m_formatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FormatConfig"))
  {
    Aws::Map<Aws::String, JsonView> formatConfigJsonMap = jsonValue.GetObject("FormatConfig").GetAllObjects();
    for(auto& formatConfigItem : formatConfigJsonMap)
    {
      m_formatConfig[FormatConfigKeyMapper::GetFormatConfigKeyForName(formatConfigItem.first)] = formatConfigItem.second.AsString();
    }
    m_formatConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WidthPixels"))
  {
    m_widthPixels = jsonValue.GetInteger("WidthPixels");

    m_widthPixelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HeightPixels"))
  {
    m_heightPixels = jsonValue.GetInteger("HeightPixels");

    m_heightPixelsHasBeenSet = true;
  }

  return *this;
}

JsonValue ImageGenerationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ConfigurationStatusMapper::GetNameForConfigurationStatus(m_status));
  }

  if(m_imageSelectorTypeHasBeenSet)
  {
   payload.WithString("ImageSelectorType", ImageSelectorTypeMapper::GetNameForImageSelectorType(m_imageSelectorType));
  }

  if(m_destinationConfigHasBeenSet)
  {
   payload.WithObject("DestinationConfig", m_destinationConfig.Jsonize());

  }

  if(m_samplingIntervalHasBeenSet)
  {
   payload.WithInteger("SamplingInterval", m_samplingInterval);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("Format", FormatMapper::GetNameForFormat(m_format));
  }

  if(m_formatConfigHasBeenSet)
  {
   JsonValue formatConfigJsonMap;
   for(auto& formatConfigItem : m_formatConfig)
   {
     formatConfigJsonMap.WithString(FormatConfigKeyMapper::GetNameForFormatConfigKey(formatConfigItem.first), formatConfigItem.second);
   }
   payload.WithObject("FormatConfig", std::move(formatConfigJsonMap));

  }

  if(m_widthPixelsHasBeenSet)
  {
   payload.WithInteger("WidthPixels", m_widthPixels);

  }

  if(m_heightPixelsHasBeenSet)
  {
   payload.WithInteger("HeightPixels", m_heightPixels);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
