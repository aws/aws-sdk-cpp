/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMedia_EXPORTS.h>
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis-video-archived-media/model/ImageSelectorType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kinesis-video-archived-media/model/Format.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/kinesis-video-archived-media/model/FormatConfigKey.h>
#include <utility>

namespace Aws
{
namespace KinesisVideoArchivedMedia
{
namespace Model
{

  /**
   */
  class GetImagesRequest : public KinesisVideoArchivedMediaRequest
  {
  public:
    AWS_KINESISVIDEOARCHIVEDMEDIA_API GetImagesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetImages"; }

    AWS_KINESISVIDEOARCHIVEDMEDIA_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the stream from which to retrieve the images. You must specify
     * either the <code>StreamName</code> or the <code>StreamARN</code>.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>The name of the stream from which to retrieve the images. You must specify
     * either the <code>StreamName</code> or the <code>StreamARN</code>.</p>
     */
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }

    /**
     * <p>The name of the stream from which to retrieve the images. You must specify
     * either the <code>StreamName</code> or the <code>StreamARN</code>.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The name of the stream from which to retrieve the images. You must specify
     * either the <code>StreamName</code> or the <code>StreamARN</code>.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }

    /**
     * <p>The name of the stream from which to retrieve the images. You must specify
     * either the <code>StreamName</code> or the <code>StreamARN</code>.</p>
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * <p>The name of the stream from which to retrieve the images. You must specify
     * either the <code>StreamName</code> or the <code>StreamARN</code>.</p>
     */
    inline GetImagesRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p>The name of the stream from which to retrieve the images. You must specify
     * either the <code>StreamName</code> or the <code>StreamARN</code>.</p>
     */
    inline GetImagesRequest& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the stream from which to retrieve the images. You must specify
     * either the <code>StreamName</code> or the <code>StreamARN</code>.</p>
     */
    inline GetImagesRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the stream from which to retrieve the
     * images. You must specify either the <code>StreamName</code> or the
     * <code>StreamARN</code>.</p>
     */
    inline const Aws::String& GetStreamARN() const{ return m_streamARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream from which to retrieve the
     * images. You must specify either the <code>StreamName</code> or the
     * <code>StreamARN</code>.</p>
     */
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream from which to retrieve the
     * images. You must specify either the <code>StreamName</code> or the
     * <code>StreamARN</code>.</p>
     */
    inline void SetStreamARN(const Aws::String& value) { m_streamARNHasBeenSet = true; m_streamARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream from which to retrieve the
     * images. You must specify either the <code>StreamName</code> or the
     * <code>StreamARN</code>.</p>
     */
    inline void SetStreamARN(Aws::String&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream from which to retrieve the
     * images. You must specify either the <code>StreamName</code> or the
     * <code>StreamARN</code>.</p>
     */
    inline void SetStreamARN(const char* value) { m_streamARNHasBeenSet = true; m_streamARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream from which to retrieve the
     * images. You must specify either the <code>StreamName</code> or the
     * <code>StreamARN</code>.</p>
     */
    inline GetImagesRequest& WithStreamARN(const Aws::String& value) { SetStreamARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the stream from which to retrieve the
     * images. You must specify either the <code>StreamName</code> or the
     * <code>StreamARN</code>.</p>
     */
    inline GetImagesRequest& WithStreamARN(Aws::String&& value) { SetStreamARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the stream from which to retrieve the
     * images. You must specify either the <code>StreamName</code> or the
     * <code>StreamARN</code>.</p>
     */
    inline GetImagesRequest& WithStreamARN(const char* value) { SetStreamARN(value); return *this;}


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
    inline GetImagesRequest& WithImageSelectorType(const ImageSelectorType& value) { SetImageSelectorType(value); return *this;}

    /**
     * <p>The origin of the Server or Producer timestamps to use to generate the
     * images.</p>
     */
    inline GetImagesRequest& WithImageSelectorType(ImageSelectorType&& value) { SetImageSelectorType(std::move(value)); return *this;}


    /**
     * <p>The starting point from which the images should be generated. This
     * <code>StartTimestamp</code> must be within an inclusive range of timestamps for
     * an image to be returned.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimestamp() const{ return m_startTimestamp; }

    /**
     * <p>The starting point from which the images should be generated. This
     * <code>StartTimestamp</code> must be within an inclusive range of timestamps for
     * an image to be returned.</p>
     */
    inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }

    /**
     * <p>The starting point from which the images should be generated. This
     * <code>StartTimestamp</code> must be within an inclusive range of timestamps for
     * an image to be returned.</p>
     */
    inline void SetStartTimestamp(const Aws::Utils::DateTime& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = value; }

    /**
     * <p>The starting point from which the images should be generated. This
     * <code>StartTimestamp</code> must be within an inclusive range of timestamps for
     * an image to be returned.</p>
     */
    inline void SetStartTimestamp(Aws::Utils::DateTime&& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = std::move(value); }

    /**
     * <p>The starting point from which the images should be generated. This
     * <code>StartTimestamp</code> must be within an inclusive range of timestamps for
     * an image to be returned.</p>
     */
    inline GetImagesRequest& WithStartTimestamp(const Aws::Utils::DateTime& value) { SetStartTimestamp(value); return *this;}

    /**
     * <p>The starting point from which the images should be generated. This
     * <code>StartTimestamp</code> must be within an inclusive range of timestamps for
     * an image to be returned.</p>
     */
    inline GetImagesRequest& WithStartTimestamp(Aws::Utils::DateTime&& value) { SetStartTimestamp(std::move(value)); return *this;}


    /**
     * <p>The end timestamp for the range of images to be generated.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTimestamp() const{ return m_endTimestamp; }

    /**
     * <p>The end timestamp for the range of images to be generated.</p>
     */
    inline bool EndTimestampHasBeenSet() const { return m_endTimestampHasBeenSet; }

    /**
     * <p>The end timestamp for the range of images to be generated.</p>
     */
    inline void SetEndTimestamp(const Aws::Utils::DateTime& value) { m_endTimestampHasBeenSet = true; m_endTimestamp = value; }

    /**
     * <p>The end timestamp for the range of images to be generated.</p>
     */
    inline void SetEndTimestamp(Aws::Utils::DateTime&& value) { m_endTimestampHasBeenSet = true; m_endTimestamp = std::move(value); }

    /**
     * <p>The end timestamp for the range of images to be generated.</p>
     */
    inline GetImagesRequest& WithEndTimestamp(const Aws::Utils::DateTime& value) { SetEndTimestamp(value); return *this;}

    /**
     * <p>The end timestamp for the range of images to be generated.</p>
     */
    inline GetImagesRequest& WithEndTimestamp(Aws::Utils::DateTime&& value) { SetEndTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time interval in milliseconds (ms) at which the images need to be
     * generated from the stream. The minimum value that can be provided is 3000 ms. If
     * the timestamp range is less than the sampling interval, the Image from the
     * <code>startTimestamp</code> will be returned if available. </p>  <p>The
     * minimum value of 3000 ms is a soft limit. If needed, a lower sampling frequency
     * can be requested.</p> 
     */
    inline int GetSamplingInterval() const{ return m_samplingInterval; }

    /**
     * <p>The time interval in milliseconds (ms) at which the images need to be
     * generated from the stream. The minimum value that can be provided is 3000 ms. If
     * the timestamp range is less than the sampling interval, the Image from the
     * <code>startTimestamp</code> will be returned if available. </p>  <p>The
     * minimum value of 3000 ms is a soft limit. If needed, a lower sampling frequency
     * can be requested.</p> 
     */
    inline bool SamplingIntervalHasBeenSet() const { return m_samplingIntervalHasBeenSet; }

    /**
     * <p>The time interval in milliseconds (ms) at which the images need to be
     * generated from the stream. The minimum value that can be provided is 3000 ms. If
     * the timestamp range is less than the sampling interval, the Image from the
     * <code>startTimestamp</code> will be returned if available. </p>  <p>The
     * minimum value of 3000 ms is a soft limit. If needed, a lower sampling frequency
     * can be requested.</p> 
     */
    inline void SetSamplingInterval(int value) { m_samplingIntervalHasBeenSet = true; m_samplingInterval = value; }

    /**
     * <p>The time interval in milliseconds (ms) at which the images need to be
     * generated from the stream. The minimum value that can be provided is 3000 ms. If
     * the timestamp range is less than the sampling interval, the Image from the
     * <code>startTimestamp</code> will be returned if available. </p>  <p>The
     * minimum value of 3000 ms is a soft limit. If needed, a lower sampling frequency
     * can be requested.</p> 
     */
    inline GetImagesRequest& WithSamplingInterval(int value) { SetSamplingInterval(value); return *this;}


    /**
     * <p>The format that will be used to encode the image.</p>
     */
    inline const Format& GetFormat() const{ return m_format; }

    /**
     * <p>The format that will be used to encode the image.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The format that will be used to encode the image.</p>
     */
    inline void SetFormat(const Format& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The format that will be used to encode the image.</p>
     */
    inline void SetFormat(Format&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The format that will be used to encode the image.</p>
     */
    inline GetImagesRequest& WithFormat(const Format& value) { SetFormat(value); return *this;}

    /**
     * <p>The format that will be used to encode the image.</p>
     */
    inline GetImagesRequest& WithFormat(Format&& value) { SetFormat(std::move(value)); return *this;}


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
    inline GetImagesRequest& WithFormatConfig(const Aws::Map<FormatConfigKey, Aws::String>& value) { SetFormatConfig(value); return *this;}

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
    inline GetImagesRequest& WithFormatConfig(Aws::Map<FormatConfigKey, Aws::String>&& value) { SetFormatConfig(std::move(value)); return *this;}

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
    inline GetImagesRequest& AddFormatConfig(const FormatConfigKey& key, const Aws::String& value) { m_formatConfigHasBeenSet = true; m_formatConfig.emplace(key, value); return *this; }

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
    inline GetImagesRequest& AddFormatConfig(FormatConfigKey&& key, const Aws::String& value) { m_formatConfigHasBeenSet = true; m_formatConfig.emplace(std::move(key), value); return *this; }

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
    inline GetImagesRequest& AddFormatConfig(const FormatConfigKey& key, Aws::String&& value) { m_formatConfigHasBeenSet = true; m_formatConfig.emplace(key, std::move(value)); return *this; }

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
    inline GetImagesRequest& AddFormatConfig(FormatConfigKey&& key, Aws::String&& value) { m_formatConfigHasBeenSet = true; m_formatConfig.emplace(std::move(key), std::move(value)); return *this; }

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
    inline GetImagesRequest& AddFormatConfig(FormatConfigKey&& key, const char* value) { m_formatConfigHasBeenSet = true; m_formatConfig.emplace(std::move(key), value); return *this; }

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
    inline GetImagesRequest& AddFormatConfig(const FormatConfigKey& key, const char* value) { m_formatConfigHasBeenSet = true; m_formatConfig.emplace(key, value); return *this; }


    /**
     * <p>The width of the output image that is used in conjunction with the
     * <code>HeightPixels</code> parameter. When both <code>WidthPixels</code> and
     * <code>HeightPixels</code> parameters are provided, the image will be stretched
     * to fit the specified aspect ratio. If only the <code>WidthPixels</code>
     * parameter is provided or if only the <code>HeightPixels</code> is provided, a
     * <code>ValidationException</code> will be thrown. If neither parameter is
     * provided, the original image size from the stream will be returned.</p>
     */
    inline int GetWidthPixels() const{ return m_widthPixels; }

    /**
     * <p>The width of the output image that is used in conjunction with the
     * <code>HeightPixels</code> parameter. When both <code>WidthPixels</code> and
     * <code>HeightPixels</code> parameters are provided, the image will be stretched
     * to fit the specified aspect ratio. If only the <code>WidthPixels</code>
     * parameter is provided or if only the <code>HeightPixels</code> is provided, a
     * <code>ValidationException</code> will be thrown. If neither parameter is
     * provided, the original image size from the stream will be returned.</p>
     */
    inline bool WidthPixelsHasBeenSet() const { return m_widthPixelsHasBeenSet; }

    /**
     * <p>The width of the output image that is used in conjunction with the
     * <code>HeightPixels</code> parameter. When both <code>WidthPixels</code> and
     * <code>HeightPixels</code> parameters are provided, the image will be stretched
     * to fit the specified aspect ratio. If only the <code>WidthPixels</code>
     * parameter is provided or if only the <code>HeightPixels</code> is provided, a
     * <code>ValidationException</code> will be thrown. If neither parameter is
     * provided, the original image size from the stream will be returned.</p>
     */
    inline void SetWidthPixels(int value) { m_widthPixelsHasBeenSet = true; m_widthPixels = value; }

    /**
     * <p>The width of the output image that is used in conjunction with the
     * <code>HeightPixels</code> parameter. When both <code>WidthPixels</code> and
     * <code>HeightPixels</code> parameters are provided, the image will be stretched
     * to fit the specified aspect ratio. If only the <code>WidthPixels</code>
     * parameter is provided or if only the <code>HeightPixels</code> is provided, a
     * <code>ValidationException</code> will be thrown. If neither parameter is
     * provided, the original image size from the stream will be returned.</p>
     */
    inline GetImagesRequest& WithWidthPixels(int value) { SetWidthPixels(value); return *this;}


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
    inline GetImagesRequest& WithHeightPixels(int value) { SetHeightPixels(value); return *this;}


    /**
     * <p>The maximum number of images to be returned by the API. </p>  <p>The
     * default limit is 100 images per API response. The additional results will be
     * paginated. </p> 
     */
    inline long long GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of images to be returned by the API. </p>  <p>The
     * default limit is 100 images per API response. The additional results will be
     * paginated. </p> 
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of images to be returned by the API. </p>  <p>The
     * default limit is 100 images per API response. The additional results will be
     * paginated. </p> 
     */
    inline void SetMaxResults(long long value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of images to be returned by the API. </p>  <p>The
     * default limit is 100 images per API response. The additional results will be
     * paginated. </p> 
     */
    inline GetImagesRequest& WithMaxResults(long long value) { SetMaxResults(value); return *this;}


    /**
     * <p>A token that specifies where to start paginating the next set of Images. This
     * is the <code>GetImages:NextToken</code> from a previously truncated
     * response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that specifies where to start paginating the next set of Images. This
     * is the <code>GetImages:NextToken</code> from a previously truncated
     * response.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token that specifies where to start paginating the next set of Images. This
     * is the <code>GetImages:NextToken</code> from a previously truncated
     * response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token that specifies where to start paginating the next set of Images. This
     * is the <code>GetImages:NextToken</code> from a previously truncated
     * response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token that specifies where to start paginating the next set of Images. This
     * is the <code>GetImages:NextToken</code> from a previously truncated
     * response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token that specifies where to start paginating the next set of Images. This
     * is the <code>GetImages:NextToken</code> from a previously truncated
     * response.</p>
     */
    inline GetImagesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that specifies where to start paginating the next set of Images. This
     * is the <code>GetImages:NextToken</code> from a previously truncated
     * response.</p>
     */
    inline GetImagesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that specifies where to start paginating the next set of Images. This
     * is the <code>GetImages:NextToken</code> from a previously truncated
     * response.</p>
     */
    inline GetImagesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet = false;

    ImageSelectorType m_imageSelectorType;
    bool m_imageSelectorTypeHasBeenSet = false;

    Aws::Utils::DateTime m_startTimestamp;
    bool m_startTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_endTimestamp;
    bool m_endTimestampHasBeenSet = false;

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

    long long m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
