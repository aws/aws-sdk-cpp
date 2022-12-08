/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/model/ConfigurationStatus.h>
#include <aws/kinesisvideo/model/ImageSelectorType.h>
#include <aws/kinesisvideo/model/ImageGenerationDestinationConfig.h>
#include <aws/kinesisvideo/model/Format.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/kinesisvideo/model/FormatConfigKey.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace KinesisVideo
{
namespace Model
{

  /**
   * <p>The structure that contains the information required for the KVS images
   * delivery. If null, the configuration will be deleted from the
   * stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/ImageGenerationConfiguration">AWS
   * API Reference</a></p>
   */
  class ImageGenerationConfiguration
  {
  public:
    AWS_KINESISVIDEO_API ImageGenerationConfiguration();
    AWS_KINESISVIDEO_API ImageGenerationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API ImageGenerationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether the <code>ContinuousImageGenerationConfigurations</code>
     * API is enabled or disabled.</p>
     */
    inline const ConfigurationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Indicates whether the <code>ContinuousImageGenerationConfigurations</code>
     * API is enabled or disabled.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Indicates whether the <code>ContinuousImageGenerationConfigurations</code>
     * API is enabled or disabled.</p>
     */
    inline void SetStatus(const ConfigurationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Indicates whether the <code>ContinuousImageGenerationConfigurations</code>
     * API is enabled or disabled.</p>
     */
    inline void SetStatus(ConfigurationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Indicates whether the <code>ContinuousImageGenerationConfigurations</code>
     * API is enabled or disabled.</p>
     */
    inline ImageGenerationConfiguration& WithStatus(const ConfigurationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Indicates whether the <code>ContinuousImageGenerationConfigurations</code>
     * API is enabled or disabled.</p>
     */
    inline ImageGenerationConfiguration& WithStatus(ConfigurationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The origin of the Server or Producer timestamps to use to generate the
     * images.</p>
     */
    inline const ImageSelectorType& GetImageSelectorType() const{ return m_imageSelectorType; }

    /**
     * <p>The origin of the Server or Producer timestamps to use to generate the
     * images.</p>
     */
    inline bool ImageSelectorTypeHasBeenSet() const { return m_imageSelectorTypeHasBeenSet; }

    /**
     * <p>The origin of the Server or Producer timestamps to use to generate the
     * images.</p>
     */
    inline void SetImageSelectorType(const ImageSelectorType& value) { m_imageSelectorTypeHasBeenSet = true; m_imageSelectorType = value; }

    /**
     * <p>The origin of the Server or Producer timestamps to use to generate the
     * images.</p>
     */
    inline void SetImageSelectorType(ImageSelectorType&& value) { m_imageSelectorTypeHasBeenSet = true; m_imageSelectorType = std::move(value); }

    /**
     * <p>The origin of the Server or Producer timestamps to use to generate the
     * images.</p>
     */
    inline ImageGenerationConfiguration& WithImageSelectorType(const ImageSelectorType& value) { SetImageSelectorType(value); return *this;}

    /**
     * <p>The origin of the Server or Producer timestamps to use to generate the
     * images.</p>
     */
    inline ImageGenerationConfiguration& WithImageSelectorType(ImageSelectorType&& value) { SetImageSelectorType(std::move(value)); return *this;}


    /**
     * <p>The structure that contains the information required to deliver images to a
     * customer.</p>
     */
    inline const ImageGenerationDestinationConfig& GetDestinationConfig() const{ return m_destinationConfig; }

    /**
     * <p>The structure that contains the information required to deliver images to a
     * customer.</p>
     */
    inline bool DestinationConfigHasBeenSet() const { return m_destinationConfigHasBeenSet; }

    /**
     * <p>The structure that contains the information required to deliver images to a
     * customer.</p>
     */
    inline void SetDestinationConfig(const ImageGenerationDestinationConfig& value) { m_destinationConfigHasBeenSet = true; m_destinationConfig = value; }

    /**
     * <p>The structure that contains the information required to deliver images to a
     * customer.</p>
     */
    inline void SetDestinationConfig(ImageGenerationDestinationConfig&& value) { m_destinationConfigHasBeenSet = true; m_destinationConfig = std::move(value); }

    /**
     * <p>The structure that contains the information required to deliver images to a
     * customer.</p>
     */
    inline ImageGenerationConfiguration& WithDestinationConfig(const ImageGenerationDestinationConfig& value) { SetDestinationConfig(value); return *this;}

    /**
     * <p>The structure that contains the information required to deliver images to a
     * customer.</p>
     */
    inline ImageGenerationConfiguration& WithDestinationConfig(ImageGenerationDestinationConfig&& value) { SetDestinationConfig(std::move(value)); return *this;}


    /**
     * <p>The time interval in milliseconds (ms) at which the images need to be
     * generated from the stream. The minimum value that can be provided is 33 ms,
     * because a camera that generates content at 30 FPS would create a frame every
     * 33.3 ms. If the timestamp range is less than the sampling interval, the Image
     * from the <code>StartTimestamp</code> will be returned if available. </p>
     */
    inline int GetSamplingInterval() const{ return m_samplingInterval; }

    /**
     * <p>The time interval in milliseconds (ms) at which the images need to be
     * generated from the stream. The minimum value that can be provided is 33 ms,
     * because a camera that generates content at 30 FPS would create a frame every
     * 33.3 ms. If the timestamp range is less than the sampling interval, the Image
     * from the <code>StartTimestamp</code> will be returned if available. </p>
     */
    inline bool SamplingIntervalHasBeenSet() const { return m_samplingIntervalHasBeenSet; }

    /**
     * <p>The time interval in milliseconds (ms) at which the images need to be
     * generated from the stream. The minimum value that can be provided is 33 ms,
     * because a camera that generates content at 30 FPS would create a frame every
     * 33.3 ms. If the timestamp range is less than the sampling interval, the Image
     * from the <code>StartTimestamp</code> will be returned if available. </p>
     */
    inline void SetSamplingInterval(int value) { m_samplingIntervalHasBeenSet = true; m_samplingInterval = value; }

    /**
     * <p>The time interval in milliseconds (ms) at which the images need to be
     * generated from the stream. The minimum value that can be provided is 33 ms,
     * because a camera that generates content at 30 FPS would create a frame every
     * 33.3 ms. If the timestamp range is less than the sampling interval, the Image
     * from the <code>StartTimestamp</code> will be returned if available. </p>
     */
    inline ImageGenerationConfiguration& WithSamplingInterval(int value) { SetSamplingInterval(value); return *this;}


    /**
     * <p>The accepted image format.</p>
     */
    inline const Format& GetFormat() const{ return m_format; }

    /**
     * <p>The accepted image format.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The accepted image format.</p>
     */
    inline void SetFormat(const Format& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The accepted image format.</p>
     */
    inline void SetFormat(Format&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The accepted image format.</p>
     */
    inline ImageGenerationConfiguration& WithFormat(const Format& value) { SetFormat(value); return *this;}

    /**
     * <p>The accepted image format.</p>
     */
    inline ImageGenerationConfiguration& WithFormat(Format&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>The list of a key-value pair structure that contains extra parameters that
     * can be applied when the image is generated. The <code>FormatConfig</code> key is
     * the <code>JPEGQuality</code>, which indicates the JPEG quality key to be used to
     * generate the image. The <code>FormatConfig</code> value accepts ints from 1 to
     * 100. If the value is 1, the image will be generated with less quality and the
     * best compression. If the value is 100, the image will be generated with the best
     * quality and less compression. If no value is provided, the default value of the
     * <code>JPEGQuality</code> key will be set to 80.</p>
     */
    inline const Aws::Map<FormatConfigKey, Aws::String>& GetFormatConfig() const{ return m_formatConfig; }

    /**
     * <p>The list of a key-value pair structure that contains extra parameters that
     * can be applied when the image is generated. The <code>FormatConfig</code> key is
     * the <code>JPEGQuality</code>, which indicates the JPEG quality key to be used to
     * generate the image. The <code>FormatConfig</code> value accepts ints from 1 to
     * 100. If the value is 1, the image will be generated with less quality and the
     * best compression. If the value is 100, the image will be generated with the best
     * quality and less compression. If no value is provided, the default value of the
     * <code>JPEGQuality</code> key will be set to 80.</p>
     */
    inline bool FormatConfigHasBeenSet() const { return m_formatConfigHasBeenSet; }

    /**
     * <p>The list of a key-value pair structure that contains extra parameters that
     * can be applied when the image is generated. The <code>FormatConfig</code> key is
     * the <code>JPEGQuality</code>, which indicates the JPEG quality key to be used to
     * generate the image. The <code>FormatConfig</code> value accepts ints from 1 to
     * 100. If the value is 1, the image will be generated with less quality and the
     * best compression. If the value is 100, the image will be generated with the best
     * quality and less compression. If no value is provided, the default value of the
     * <code>JPEGQuality</code> key will be set to 80.</p>
     */
    inline void SetFormatConfig(const Aws::Map<FormatConfigKey, Aws::String>& value) { m_formatConfigHasBeenSet = true; m_formatConfig = value; }

    /**
     * <p>The list of a key-value pair structure that contains extra parameters that
     * can be applied when the image is generated. The <code>FormatConfig</code> key is
     * the <code>JPEGQuality</code>, which indicates the JPEG quality key to be used to
     * generate the image. The <code>FormatConfig</code> value accepts ints from 1 to
     * 100. If the value is 1, the image will be generated with less quality and the
     * best compression. If the value is 100, the image will be generated with the best
     * quality and less compression. If no value is provided, the default value of the
     * <code>JPEGQuality</code> key will be set to 80.</p>
     */
    inline void SetFormatConfig(Aws::Map<FormatConfigKey, Aws::String>&& value) { m_formatConfigHasBeenSet = true; m_formatConfig = std::move(value); }

    /**
     * <p>The list of a key-value pair structure that contains extra parameters that
     * can be applied when the image is generated. The <code>FormatConfig</code> key is
     * the <code>JPEGQuality</code>, which indicates the JPEG quality key to be used to
     * generate the image. The <code>FormatConfig</code> value accepts ints from 1 to
     * 100. If the value is 1, the image will be generated with less quality and the
     * best compression. If the value is 100, the image will be generated with the best
     * quality and less compression. If no value is provided, the default value of the
     * <code>JPEGQuality</code> key will be set to 80.</p>
     */
    inline ImageGenerationConfiguration& WithFormatConfig(const Aws::Map<FormatConfigKey, Aws::String>& value) { SetFormatConfig(value); return *this;}

    /**
     * <p>The list of a key-value pair structure that contains extra parameters that
     * can be applied when the image is generated. The <code>FormatConfig</code> key is
     * the <code>JPEGQuality</code>, which indicates the JPEG quality key to be used to
     * generate the image. The <code>FormatConfig</code> value accepts ints from 1 to
     * 100. If the value is 1, the image will be generated with less quality and the
     * best compression. If the value is 100, the image will be generated with the best
     * quality and less compression. If no value is provided, the default value of the
     * <code>JPEGQuality</code> key will be set to 80.</p>
     */
    inline ImageGenerationConfiguration& WithFormatConfig(Aws::Map<FormatConfigKey, Aws::String>&& value) { SetFormatConfig(std::move(value)); return *this;}

    /**
     * <p>The list of a key-value pair structure that contains extra parameters that
     * can be applied when the image is generated. The <code>FormatConfig</code> key is
     * the <code>JPEGQuality</code>, which indicates the JPEG quality key to be used to
     * generate the image. The <code>FormatConfig</code> value accepts ints from 1 to
     * 100. If the value is 1, the image will be generated with less quality and the
     * best compression. If the value is 100, the image will be generated with the best
     * quality and less compression. If no value is provided, the default value of the
     * <code>JPEGQuality</code> key will be set to 80.</p>
     */
    inline ImageGenerationConfiguration& AddFormatConfig(const FormatConfigKey& key, const Aws::String& value) { m_formatConfigHasBeenSet = true; m_formatConfig.emplace(key, value); return *this; }

    /**
     * <p>The list of a key-value pair structure that contains extra parameters that
     * can be applied when the image is generated. The <code>FormatConfig</code> key is
     * the <code>JPEGQuality</code>, which indicates the JPEG quality key to be used to
     * generate the image. The <code>FormatConfig</code> value accepts ints from 1 to
     * 100. If the value is 1, the image will be generated with less quality and the
     * best compression. If the value is 100, the image will be generated with the best
     * quality and less compression. If no value is provided, the default value of the
     * <code>JPEGQuality</code> key will be set to 80.</p>
     */
    inline ImageGenerationConfiguration& AddFormatConfig(FormatConfigKey&& key, const Aws::String& value) { m_formatConfigHasBeenSet = true; m_formatConfig.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of a key-value pair structure that contains extra parameters that
     * can be applied when the image is generated. The <code>FormatConfig</code> key is
     * the <code>JPEGQuality</code>, which indicates the JPEG quality key to be used to
     * generate the image. The <code>FormatConfig</code> value accepts ints from 1 to
     * 100. If the value is 1, the image will be generated with less quality and the
     * best compression. If the value is 100, the image will be generated with the best
     * quality and less compression. If no value is provided, the default value of the
     * <code>JPEGQuality</code> key will be set to 80.</p>
     */
    inline ImageGenerationConfiguration& AddFormatConfig(const FormatConfigKey& key, Aws::String&& value) { m_formatConfigHasBeenSet = true; m_formatConfig.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of a key-value pair structure that contains extra parameters that
     * can be applied when the image is generated. The <code>FormatConfig</code> key is
     * the <code>JPEGQuality</code>, which indicates the JPEG quality key to be used to
     * generate the image. The <code>FormatConfig</code> value accepts ints from 1 to
     * 100. If the value is 1, the image will be generated with less quality and the
     * best compression. If the value is 100, the image will be generated with the best
     * quality and less compression. If no value is provided, the default value of the
     * <code>JPEGQuality</code> key will be set to 80.</p>
     */
    inline ImageGenerationConfiguration& AddFormatConfig(FormatConfigKey&& key, Aws::String&& value) { m_formatConfigHasBeenSet = true; m_formatConfig.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of a key-value pair structure that contains extra parameters that
     * can be applied when the image is generated. The <code>FormatConfig</code> key is
     * the <code>JPEGQuality</code>, which indicates the JPEG quality key to be used to
     * generate the image. The <code>FormatConfig</code> value accepts ints from 1 to
     * 100. If the value is 1, the image will be generated with less quality and the
     * best compression. If the value is 100, the image will be generated with the best
     * quality and less compression. If no value is provided, the default value of the
     * <code>JPEGQuality</code> key will be set to 80.</p>
     */
    inline ImageGenerationConfiguration& AddFormatConfig(FormatConfigKey&& key, const char* value) { m_formatConfigHasBeenSet = true; m_formatConfig.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of a key-value pair structure that contains extra parameters that
     * can be applied when the image is generated. The <code>FormatConfig</code> key is
     * the <code>JPEGQuality</code>, which indicates the JPEG quality key to be used to
     * generate the image. The <code>FormatConfig</code> value accepts ints from 1 to
     * 100. If the value is 1, the image will be generated with less quality and the
     * best compression. If the value is 100, the image will be generated with the best
     * quality and less compression. If no value is provided, the default value of the
     * <code>JPEGQuality</code> key will be set to 80.</p>
     */
    inline ImageGenerationConfiguration& AddFormatConfig(const FormatConfigKey& key, const char* value) { m_formatConfigHasBeenSet = true; m_formatConfig.emplace(key, value); return *this; }


    /**
     * <p>The width of the output image that is used in conjunction with the
     * <code>HeightPixels</code> parameter. When both <code>WidthPixels</code> and
     * <code>HeightPixels</code> parameters are provided, the image will be stretched
     * to fit the specified aspect ratio. If only the <code>WidthPixels</code>
     * parameter is provided, its original aspect ratio will be used to calculate the
     * <code>HeightPixels</code> ratio. If neither parameter is provided, the original
     * image size will be returned.</p>
     */
    inline int GetWidthPixels() const{ return m_widthPixels; }

    /**
     * <p>The width of the output image that is used in conjunction with the
     * <code>HeightPixels</code> parameter. When both <code>WidthPixels</code> and
     * <code>HeightPixels</code> parameters are provided, the image will be stretched
     * to fit the specified aspect ratio. If only the <code>WidthPixels</code>
     * parameter is provided, its original aspect ratio will be used to calculate the
     * <code>HeightPixels</code> ratio. If neither parameter is provided, the original
     * image size will be returned.</p>
     */
    inline bool WidthPixelsHasBeenSet() const { return m_widthPixelsHasBeenSet; }

    /**
     * <p>The width of the output image that is used in conjunction with the
     * <code>HeightPixels</code> parameter. When both <code>WidthPixels</code> and
     * <code>HeightPixels</code> parameters are provided, the image will be stretched
     * to fit the specified aspect ratio. If only the <code>WidthPixels</code>
     * parameter is provided, its original aspect ratio will be used to calculate the
     * <code>HeightPixels</code> ratio. If neither parameter is provided, the original
     * image size will be returned.</p>
     */
    inline void SetWidthPixels(int value) { m_widthPixelsHasBeenSet = true; m_widthPixels = value; }

    /**
     * <p>The width of the output image that is used in conjunction with the
     * <code>HeightPixels</code> parameter. When both <code>WidthPixels</code> and
     * <code>HeightPixels</code> parameters are provided, the image will be stretched
     * to fit the specified aspect ratio. If only the <code>WidthPixels</code>
     * parameter is provided, its original aspect ratio will be used to calculate the
     * <code>HeightPixels</code> ratio. If neither parameter is provided, the original
     * image size will be returned.</p>
     */
    inline ImageGenerationConfiguration& WithWidthPixels(int value) { SetWidthPixels(value); return *this;}


    /**
     * <p>The height of the output image that is used in conjunction with the
     * <code>WidthPixels</code> parameter. When both <code>HeightPixels</code> and
     * <code>WidthPixels</code> parameters are provided, the image will be stretched to
     * fit the specified aspect ratio. If only the <code>HeightPixels</code> parameter
     * is provided, its original aspect ratio will be used to calculate the
     * <code>WidthPixels</code> ratio. If neither parameter is provided, the original
     * image size will be returned.</p>
     */
    inline int GetHeightPixels() const{ return m_heightPixels; }

    /**
     * <p>The height of the output image that is used in conjunction with the
     * <code>WidthPixels</code> parameter. When both <code>HeightPixels</code> and
     * <code>WidthPixels</code> parameters are provided, the image will be stretched to
     * fit the specified aspect ratio. If only the <code>HeightPixels</code> parameter
     * is provided, its original aspect ratio will be used to calculate the
     * <code>WidthPixels</code> ratio. If neither parameter is provided, the original
     * image size will be returned.</p>
     */
    inline bool HeightPixelsHasBeenSet() const { return m_heightPixelsHasBeenSet; }

    /**
     * <p>The height of the output image that is used in conjunction with the
     * <code>WidthPixels</code> parameter. When both <code>HeightPixels</code> and
     * <code>WidthPixels</code> parameters are provided, the image will be stretched to
     * fit the specified aspect ratio. If only the <code>HeightPixels</code> parameter
     * is provided, its original aspect ratio will be used to calculate the
     * <code>WidthPixels</code> ratio. If neither parameter is provided, the original
     * image size will be returned.</p>
     */
    inline void SetHeightPixels(int value) { m_heightPixelsHasBeenSet = true; m_heightPixels = value; }

    /**
     * <p>The height of the output image that is used in conjunction with the
     * <code>WidthPixels</code> parameter. When both <code>HeightPixels</code> and
     * <code>WidthPixels</code> parameters are provided, the image will be stretched to
     * fit the specified aspect ratio. If only the <code>HeightPixels</code> parameter
     * is provided, its original aspect ratio will be used to calculate the
     * <code>WidthPixels</code> ratio. If neither parameter is provided, the original
     * image size will be returned.</p>
     */
    inline ImageGenerationConfiguration& WithHeightPixels(int value) { SetHeightPixels(value); return *this;}

  private:

    ConfigurationStatus m_status;
    bool m_statusHasBeenSet = false;

    ImageSelectorType m_imageSelectorType;
    bool m_imageSelectorTypeHasBeenSet = false;

    ImageGenerationDestinationConfig m_destinationConfig;
    bool m_destinationConfigHasBeenSet = false;

    int m_samplingInterval;
    bool m_samplingIntervalHasBeenSet = false;

    Format m_format;
    bool m_formatHasBeenSet = false;

    Aws::Map<FormatConfigKey, Aws::String> m_formatConfig;
    bool m_formatConfigHasBeenSet = false;

    int m_widthPixels;
    bool m_widthPixelsHasBeenSet = false;

    int m_heightPixels;
    bool m_heightPixelsHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
